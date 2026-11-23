```main:``` always releasable, **protected** (PRs only, required status check, at least one review) develop: integration branch
```develop:``` integration branch
```feature/<TICKET>-desc:``` work branches
```release/x.y:``` release stabilization
Tags: ```vMAJOR.MINOR.PATCH``` (semantic versioning), annotated tags only (git tag -a)
Commit format: ```[CM-12] Short description```, so every change traces to a ticket (this sets up Project 2)
Baselines: each release tag is a baseline. Define types in your plan, e.g., Development Baseline (```develop``` snapshots, tagged ```DB-###```) and Product Baseline (release tags).