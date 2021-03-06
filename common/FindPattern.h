//
// FindPattern.h
//

#include <cstdint>

#pragma once

// Find an address that matches the given pattern/mask, starting at the given dwAddress.
uintptr_t FindPattern(uintptr_t dwAddress, uint32_t dwLen, const uint8_t* bMask, const char* szMask);

uint32_t GetDWordAt(uintptr_t address, uint32_t numBytes);

uintptr_t GetFunctionAddressAt(uintptr_t address, uint32_t addressOffset, uint32_t numBytes);
