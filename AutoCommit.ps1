# ================================
# AutoCommit.ps1
# Commits each .c file separately
# ================================

Write-Host "Searching for C files..." -ForegroundColor Cyan

# Get all new or modified .c files
$files = git ls-files --others --modified --exclude-standard "*.c"

if (!$files) {
    Write-Host "No new or modified .c files found." -ForegroundColor Yellow
    exit
}

$count = ($files | Measure-Object).Count
Write-Host "Found $count file(s)." -ForegroundColor Green

$i = 1

foreach ($file in $files) {

    Write-Host ""
    Write-Host "[$i/$count] Processing: $file" -ForegroundColor Cyan

    # Stage only this file
    git add -- "$file"

    # Get filename without extension
    $name = [System.IO.Path]::GetFileNameWithoutExtension($file)

    # Check if file is already tracked
    git ls-files --error-unmatch "$file" *> $null

    if ($LASTEXITCODE -eq 0) {
        git commit -m "Update $name"
    }
    else {
        git commit -m "Add $name"
    }

    $i++
}

Write-Host ""
Write-Host "Pushing commits..." -ForegroundColor Cyan

git push origin main

Write-Host ""
Write-Host "Completed successfully!" -ForegroundColor Green