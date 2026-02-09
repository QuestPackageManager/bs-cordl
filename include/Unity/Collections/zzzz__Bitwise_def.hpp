#pragma once
// IWYU pragma private; include "Unity/Collections/Bitwise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bitwise)
// Forward declare root types
namespace Unity::Collections {
struct Bitwise;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Bitwise);
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Bitwise
#pragma pack(push, 0)
struct CORDL_TYPE Bitwise {
public:
// Declarations
/// @brief Method AlignDown, addr 0x62f4b20, size 0xc, virtual false, abstract: false, final false
static inline int32_t AlignDown(int32_t  value, int32_t  alignPow2) ;

/// @brief Method AlignUp, addr 0x62f4b2c, size 0x14, virtual false, abstract: false, final false
static inline int32_t AlignUp(int32_t  value, int32_t  alignPow2) ;

/// @brief Method CountBits, addr 0x62f57d0, size 0xc8, virtual false, abstract: false, final false
static inline int32_t CountBits(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method ExtractBits, addr 0x62f4b48, size 0xc, virtual false, abstract: false, final false
static inline uint32_t ExtractBits(uint32_t  input, int32_t  pos, uint32_t  mask) ;

/// @brief Method ExtractBits, addr 0x62f4b88, size 0xc, virtual false, abstract: false, final false
static inline uint64_t ExtractBits(uint64_t  input, int32_t  pos, uint64_t  mask) ;

/// @brief Method Find, addr 0x62f564c, size 0x8, virtual false, abstract: false, final false
static inline int32_t Find(uint64_t*  ptr, int32_t  pos, int32_t  count, int32_t  numBits) ;

/// @brief Method FindByte, addr 0x62f5150, size 0x184, virtual false, abstract: false, final false
static inline int32_t FindByte(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUint, addr 0x62f4e80, size 0x138, virtual false, abstract: false, final false
static inline int32_t FindUint(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUlong, addr 0x62f4cd8, size 0x1a8, virtual false, abstract: false, final false
static inline int32_t FindUlong(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUpto14bits, addr 0x62f52d4, size 0x14c, virtual false, abstract: false, final false
static inline int32_t FindUpto14bits(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUpto6bits, addr 0x62f5420, size 0x114, virtual false, abstract: false, final false
static inline int32_t FindUpto6bits(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindUshort, addr 0x62f4fb8, size 0x198, virtual false, abstract: false, final false
static inline int32_t FindUshort(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FindWithBeginEnd, addr 0x62f5534, size 0x118, virtual false, abstract: false, final false
static inline int32_t FindWithBeginEnd(uint64_t*  ptr, int32_t  beginBit, int32_t  endBit, int32_t  numBits) ;

/// @brief Method FromBool, addr 0x62f4b40, size 0x8, virtual false, abstract: false, final false
static inline int32_t FromBool(bool  value) ;

/// @brief Method GetBits, addr 0x62f58ac, size 0x70, virtual false, abstract: false, final false
static inline uint64_t GetBits(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method IsSet, addr 0x62f5898, size 0x14, virtual false, abstract: false, final false
static inline bool IsSet(uint64_t*  ptr, int32_t  pos) ;

/// @brief Method ReplaceBits, addr 0x62f4b54, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ReplaceBits(uint32_t  input, int32_t  pos, uint32_t  mask, uint32_t  value) ;

/// @brief Method ReplaceBits, addr 0x62f4b94, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ReplaceBits(uint64_t  input, int32_t  pos, uint64_t  mask, uint64_t  value) ;

/// @brief Method SetBits, addr 0x62f4b6c, size 0x1c, virtual false, abstract: false, final false
static inline uint32_t SetBits(uint32_t  input, int32_t  pos, uint32_t  mask, bool  value) ;

/// @brief Method SetBits, addr 0x62f4bac, size 0x1c, virtual false, abstract: false, final false
static inline uint64_t SetBits(uint64_t  input, int32_t  pos, uint64_t  mask, bool  value) ;

/// @brief Method TestAll, addr 0x62f574c, size 0x84, virtual false, abstract: false, final false
static inline bool TestAll(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method TestAny, addr 0x62f56d0, size 0x7c, virtual false, abstract: false, final false
static inline bool TestAny(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method TestNone, addr 0x62f5654, size 0x7c, virtual false, abstract: false, final false
static inline bool TestNone(uint64_t*  ptr, int32_t  length, int32_t  pos, int32_t  numBits) ;

/// @brief Method lzcnt, addr 0x62f4c50, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint16_t  value) ;

/// @brief Method lzcnt, addr 0x62f4bc8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t lzcnt(uint8_t  value) ;

/// @brief Method tzcnt, addr 0x62f4c8c, size 0x4c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint16_t  value) ;

/// @brief Method tzcnt, addr 0x62f4c04, size 0x4c, virtual false, abstract: false, final false
static inline int32_t tzcnt(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Bitwise() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Bitwise, 0x1>, "Size mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Bitwise, "Unity.Collections", "Bitwise");
