#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MemoryHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion);
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers/BitRegion
struct CORDL_TYPE MemoryHelpers_BitRegion {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Method Overlap, addr 0x456c394, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion Overlap(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion other);

  /// @brief Method .ctor, addr 0x456c380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method .ctor, addr 0x456c388, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t byteOffset, uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method get_isEmpty, addr 0x456c370, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryHelpers_BitRegion();

  // Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr MemoryHelpers_BitRegion(uint32_t bitOffset, uint32_t sizeInBits) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7087 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers
class CORDL_TYPE MemoryHelpers : public ::System::Object {
public:
  // Declarations
  using BitRegion = ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion;

  /// @brief Method AlignNatural, addr 0x456c2ec, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t AlignNatural(uint32_t offset, uint32_t sizeInBytes);

  /// @brief Method Compare, addr 0x456bab4, size 0x44, virtual false, abstract: false, final false
  static inline bool Compare(::cordl_internals::Ptr<void> ptr1, ::cordl_internals::Ptr<void> ptr2, ::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion region);

  /// @brief Method ComputeFollowingByteOffset, addr 0x456bc5c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t ComputeFollowingByteOffset(uint32_t byteOffset, uint32_t sizeInBits);

  /// @brief Method MemCmpBitRegion, addr 0x456bb14, size 0x148, virtual false, abstract: false, final false
  static inline bool MemCmpBitRegion(::cordl_internals::Ptr<void> ptr1, ::cordl_internals::Ptr<void> ptr2, uint32_t bitOffset, uint32_t bitCount, ::cordl_internals::Ptr<void> mask);

  /// @brief Method MemCpyBitRegion, addr 0x456bc9c, size 0xf0, virtual false, abstract: false, final false
  static inline void MemCpyBitRegion(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method MemCpyMasked, addr 0x456be28, size 0x84, virtual false, abstract: false, final false
  static inline void MemCpyMasked(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, int32_t numBytes, ::cordl_internals::Ptr<void> mask);

  /// @brief Method MemSet, addr 0x456bd8c, size 0x9c, virtual false, abstract: false, final false
  static inline void MemSet(::cordl_internals::Ptr<void> destination, int32_t numBytes, uint8_t value);

  /// @brief Method ReadExcessKMultipleBitsAsInt, addr 0x456c058, size 0x24, virtual false, abstract: false, final false
  static inline int32_t ReadExcessKMultipleBitsAsInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsNormalizedUInt, addr 0x456c090, size 0x48, virtual false, abstract: false, final false
  static inline float_t ReadMultipleBitsAsNormalizedUInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsUInt, addr 0x4564634, size 0x164, virtual false, abstract: false, final false
  static inline uint32_t ReadMultipleBitsAsUInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadSingleBit, addr 0x456baf8, size 0x1c, virtual false, abstract: false, final false
  static inline bool ReadSingleBit(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset);

  /// @brief Method ReadTwosComplementMultipleBitsAsInt, addr 0x45626a0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ReadTwosComplementMultipleBitsAsInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method SetBitsInBuffer, addr 0x456c128, size 0x1c4, virtual false, abstract: false, final false
  static inline void SetBitsInBuffer(::cordl_internals::Ptr<void> buffer, int32_t byteOffset, int32_t bitOffset, int32_t sizeInBits, bool value);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Swap(::ByRef<TValue> a, ::ByRef<TValue> b);

  /// @brief Method WriteIntAsExcessKMultipleBits, addr 0x456c07c, size 0x14, virtual false, abstract: false, final false
  static inline void WriteIntAsExcessKMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteIntAsTwosComplementMultipleBits, addr 0x45627d4, size 0x4, virtual false, abstract: false, final false
  static inline void WriteIntAsTwosComplementMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteNormalizedUIntAsMultipleBits, addr 0x456c0d8, size 0x50, virtual false, abstract: false, final false
  static inline void WriteNormalizedUIntAsMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, float_t value);

  /// @brief Method WriteSingleBit, addr 0x456bc6c, size 0x30, virtual false, abstract: false, final false
  static inline void WriteSingleBit(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, bool value);

  /// @brief Method WriteUIntAsMultipleBits, addr 0x456beac, size 0x1ac, virtual false, abstract: false, final false
  static inline void WriteUIntAsMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, uint32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7088 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::MemoryHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::MemoryHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::MemoryHelpers*, "UnityEngine.InputSystem.Utilities", "MemoryHelpers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::MemoryHelpers_BitRegion, "UnityEngine.InputSystem.Utilities", "MemoryHelpers/BitRegion");
