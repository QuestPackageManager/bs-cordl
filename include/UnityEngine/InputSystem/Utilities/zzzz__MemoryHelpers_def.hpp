#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\MemoryHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryHelpers)
namespace UnityEngine::InputSystem::Utilities {
struct MemoryHelpers_BitRegion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class MemoryHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
struct MemoryHelpers_BitRegion;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers*);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::MemoryHelpers*, "UnityEngine.InputSystem.Utilities", "MemoryHelpers");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion, "UnityEngine.InputSystem.Utilities", "MemoryHelpers/BitRegion");
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers/BitRegion
struct CORDL_TYPE MemoryHelpers_BitRegion {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Method Overlap, addr 0x650501c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion Overlap(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion other);

  /// @brief Method .ctor, addr 0x6505008, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method .ctor, addr 0x6505010, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t byteOffset, uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method get_isEmpty, addr 0x6504ff8, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryHelpers_BitRegion();

  // Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr MemoryHelpers_BitRegion(uint32_t bitOffset, uint32_t sizeInBits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field bitOffset, offset: 0x0, size: 0x4, def value: None
  uint32_t bitOffset;

  /// @brief Field sizeInBits, offset: 0x4, size: 0x4, def value: None
  uint32_t sizeInBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion, bitOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion, sizeInBits) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion) == 0x8, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers
class CORDL_TYPE MemoryHelpers : public ::System::Object {
public:
  // Declarations
  using BitRegion = ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion;

  /// @brief Method AlignNatural, addr 0x6504f74, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t AlignNatural(uint32_t offset, uint32_t sizeInBytes);

  /// @brief Method Compare, addr 0x650471c, size 0x44, virtual false, abstract: false, final false
  static inline bool Compare(void* ptr1, void* ptr2, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion region);

  /// @brief Method ComputeFollowingByteOffset, addr 0x6504908, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t ComputeFollowingByteOffset(uint32_t byteOffset, uint32_t sizeInBits);

  /// @brief Method MemCmpBitRegion, addr 0x650477c, size 0x18c, virtual false, abstract: false, final false
  static inline bool MemCmpBitRegion(void* ptr1, void* ptr2, uint32_t bitOffset, uint32_t bitCount, void* mask);

  /// @brief Method MemCpyBitRegion, addr 0x6504948, size 0x11c, virtual false, abstract: false, final false
  static inline void MemCpyBitRegion(void* destination, void* source, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method MemCpyMasked, addr 0x6504ab4, size 0x84, virtual false, abstract: false, final false
  static inline void MemCpyMasked(void* destination, void* source, int32_t numBytes, void* mask);

  /// @brief Method MemSet, addr 0x6504a64, size 0x50, virtual false, abstract: false, final false
  static inline void MemSet(void* destination, int32_t numBytes, uint8_t value);

  /// @brief Method ReadExcessKMultipleBitsAsInt, addr 0x6504cdc, size 0x24, virtual false, abstract: false, final false
  static inline int32_t ReadExcessKMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsNormalizedUInt, addr 0x6504d14, size 0x48, virtual false, abstract: false, final false
  static inline float_t ReadMultipleBitsAsNormalizedUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsUInt, addr 0x64fd38c, size 0x164, virtual false, abstract: false, final false
  static inline uint32_t ReadMultipleBitsAsUInt(void* ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadSingleBit, addr 0x6504760, size 0x1c, virtual false, abstract: false, final false
  static inline bool ReadSingleBit(void* ptr, uint32_t bitOffset);

  /// @brief Method ReadTwosComplementMultipleBitsAsInt, addr 0x64fb2b0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ReadTwosComplementMultipleBitsAsInt(void* ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method SetBitsInBuffer, addr 0x6504dac, size 0x1c8, virtual false, abstract: false, final false
  static inline void SetBitsInBuffer(void* buffer, int32_t byteOffset, int32_t bitOffset, int32_t sizeInBits, bool value);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Swap(::by_ref<TValue> a, ::by_ref<TValue> b);

  /// @brief Method WriteIntAsExcessKMultipleBits, addr 0x6504d00, size 0x14, virtual false, abstract: false, final false
  static inline void WriteIntAsExcessKMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteIntAsTwosComplementMultipleBits, addr 0x64fb3f4, size 0x4, virtual false, abstract: false, final false
  static inline void WriteIntAsTwosComplementMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteNormalizedUIntAsMultipleBits, addr 0x6504d5c, size 0x50, virtual false, abstract: false, final false
  static inline void WriteNormalizedUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, float_t value);

  /// @brief Method WriteSingleBit, addr 0x6504918, size 0x30, virtual false, abstract: false, final false
  static inline void WriteSingleBit(void* ptr, uint32_t bitOffset, bool value);

  /// @brief Method WriteUIntAsMultipleBits, addr 0x6504b38, size 0x1a4, virtual false, abstract: false, final false
  static inline void WriteUIntAsMultipleBits(void* ptr, uint32_t bitOffset, uint32_t bitCount, uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryHelpers(MemoryHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryHelpers(MemoryHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::MemoryHelpers) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
