# COTS / Third-Party Software Register

| Field | Value |
|---|---|
| Document ID | COTS-REG-001 |
| Maintained by | <your name> |
| Last updated | <YYYY-MM-DD> |

## Purpose
This register identifies every externally developed software component used
in this product. Each component is pinned to an exact version and verified by
checksum so that builds are reproducible and license obligations are known.

## Registered Components

| ID | Component | Version | License | Source | Location in repo | Used by |
|---|---|---|---|---|---|---|
| COTS-001 | cJSON | 1.7.18 | MIT | https://github.com/DaveGamble/cJSON/releases/tag/v1.7.18 | third_party/cJSON/ | app |

## Integrity Checksums (SHA-256)

| ID | File | SHA-256 |
|---|---|---|
| COTS-001 | cJSON-1.7.18.tar.gz (upstream source archive) | 3aa806844a03442c00769b83e99970be70fbef03735ff898f4811dd03b9f5ee5 cJSON-1.7.18.tar.gz |
| COTS-001 | third_party/cJSON/cJSON.c | 75c51de8fa40ac9d7a99319c6330719bd692eb81c0a869265f3d4c682533f9b9 third_party/cJSON/cJSON.c |
| COTS-001 | third_party/cJSON/cJSON.h | 0578cc29132912edbc88f83207a8fc76e5db3db0605497e909a9384ef3cc474b third_party/cJSON/cJSON.h |

## Change Procedure
1. Raise a change request identifying the component and target version.
2. Review license compatibility and known vulnerabilities.
3. Update the files in third_party/ and this register in the same commit.
4. Record the new checksums and re-run the full build and test suite.