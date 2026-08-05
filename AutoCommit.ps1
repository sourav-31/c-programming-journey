# AutoCommit.ps1

$changes = git status --porcelain

if (-not $changes) {
    Write-Host "No changes found."
    exit
}

foreach ($line in $changes) {

    $status = $line.Substring(0,2).Trim()
    $file = $line.Substring(3).Trim('"')

    # Only process .c files
    if (-not $file.EndsWith(".c")) {
        continue
    }

    Write-Host "Committing $file"

    git add -- "$file"

    $name = [System.IO.Path]::GetFileNameWithoutExtension($file)

    if ($LASTEXITCODE -eq 0) {
        if ($status -eq "??") {
            git commit -m "Add $name"
        }
        else {
            git commit -m "Update $name"
        }
    }
}

Write-Host "Pushing..."
git push origin main

Write-Host "Done!"