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
  /// @brief Method AlignDown, addr 0x628c8d4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t AlignDown(int32_t value, int32_t alignPow2);

  /// @brief Method AlignUp, addr 0x628c8e0, size 0x14, virtual false, abstract: false, final false
  static inline int32_t AlignUp(int32_t value, int32_t alignPow2);

  /// @brief Method CountBits, addr 0x628d584, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t CountBits(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits);

  /// @brief Method ExtractBits, addr 0x628c8fc, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t ExtractBits(uint32_t input, int32_t pos, uint32_t mask);

  /// @brief Method ExtractBits, addr 0x628c93c, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t ExtractBits(uint64_t input, int32_t pos, uint64_t mask);

  /// @brief Method Find, addr 0x628d400, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Find(uint64_t* ptr, int32_t pos, int32_t count, int32_t numBits);

  /// @brief Method FindByte, addr 0x628cf04, size 0x184, virtual false, abstract: false, final false
  static inline int32_t FindByte(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindUint, addr 0x628cc34, size 0x138, virtual false, abstract: false, final false
  static inline int32_t FindUint(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindUlong, addr 0x628ca8c, size 0x1a8, virtual false, abstract: false, final false
  static inline int32_t FindUlong(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindUpto14bits, addr 0x628d088, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t FindUpto14bits(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindUpto6bits, addr 0x628d1d4, size 0x114, virtual false, abstract: false, final false
  static inline int32_t FindUpto6bits(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindUshort, addr 0x628cd6c, size 0x198, virtual false, abstract: false, final false
  static inline int32_t FindUshort(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FindWithBeginEnd, addr 0x628d2e8, size 0x118, virtual false, abstract: false, final false
  static inline int32_t FindWithBeginEnd(uint64_t* ptr, int32_t beginBit, int32_t endBit, int32_t numBits);

  /// @brief Method FromBool, addr 0x628c8f4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t FromBool(bool value);

  /// @brief Method GetBits, addr 0x628d660, size 0x70, virtual false, abstract: false, final false
  static inline uint64_t GetBits(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x628d64c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsSet(uint64_t* ptr, int32_t pos);

  /// @brief Method ReplaceBits, addr 0x628c908, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ReplaceBits(uint32_t input, int32_t pos, uint32_t mask, uint32_t value);

  /// @brief Method ReplaceBits, addr 0x628c948, size 0x18, virtual false, abstract: false, final false
  static inline uint64_t ReplaceBits(uint64_t input, int32_t pos, uint64_t mask, uint64_t value);

  /// @brief Method SetBits, addr 0x628c920, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t SetBits(uint32_t input, int32_t pos, uint32_t mask, bool value);

  /// @brief Method SetBits, addr 0x628c960, size 0x1c, virtual false, abstract: false, final false
  static inline uint64_t SetBits(uint64_t input, int32_t pos, uint64_t mask, bool value);

  /// @brief Method TestAll, addr 0x628d500, size 0x84, virtual false, abstract: false, final false
  static inline bool TestAll(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x628d484, size 0x7c, virtual false, abstract: false, final false
  static inline bool TestAny(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x628d408, size 0x7c, virtual false, abstract: false, final false
  static inline bool TestNone(uint64_t* ptr, int32_t length, int32_t pos, int32_t numBits);

  /// @brief Method lzcnt, addr 0x628ca04, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint16_t value);

  /// @brief Method lzcnt, addr 0x628c97c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t lzcnt(uint8_t value);

  /// @brief Method tzcnt, addr 0x628ca40, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint16_t value);

  /// @brief Method tzcnt, addr 0x628c9b8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t tzcnt(uint8_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bitwise();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15506 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Bitwise, 0x1>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Bitwise, "Unity.Collections", "Bitwise");
