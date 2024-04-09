#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryHelpers)
namespace UnityEngine::InputSystem::Utilities {
struct __MemoryHelpers__BitRegion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class MemoryHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
struct __MemoryHelpers__BitRegion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::MemoryHelpers);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion);
// Type: ::BitRegion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: ::MemoryHelpers::BitRegion
struct CORDL_TYPE __MemoryHelpers__BitRegion {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Method Overlap, addr 0x3041650, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion Overlap(::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion other);

  /// @brief Method .ctor, addr 0x304163c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method .ctor, addr 0x3041644, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t byteOffset, uint32_t bitOffset, uint32_t sizeInBits);

  /// @brief Method get_isEmpty, addr 0x304162c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MemoryHelpers__BitRegion();

  // Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __MemoryHelpers__BitRegion(uint32_t bitOffset, uint32_t sizeInBits) noexcept;

  /// @brief Field bitOffset, offset: 0x0, size: 0x4, def value: None
  uint32_t bitOffset;

  /// @brief Field sizeInBits, offset: 0x4, size: 0x4, def value: None
  uint32_t sizeInBits;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, bitOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, sizeInBits) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::MemoryHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::MemoryHelpers*
class CORDL_TYPE MemoryHelpers : public ::System::Object {
public:
  // Declarations
  using BitRegion = ::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion;

  /// @brief Method AlignNatural, addr 0x30415a8, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t AlignNatural(uint32_t offset, uint32_t sizeInBytes);

  /// @brief Method Compare, addr 0x3040d80, size 0x44, virtual false, abstract: false, final false
  static inline bool Compare(::cordl_internals::Ptr<void> ptr1, ::cordl_internals::Ptr<void> ptr2, ::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion region);

  /// @brief Method ComputeFollowingByteOffset, addr 0x3040f34, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t ComputeFollowingByteOffset(uint32_t byteOffset, uint32_t sizeInBits);

  /// @brief Method MemCmpBitRegion, addr 0x3040de8, size 0x14c, virtual false, abstract: false, final false
  static inline bool MemCmpBitRegion(::cordl_internals::Ptr<void> ptr1, ::cordl_internals::Ptr<void> ptr2, uint32_t bitOffset, uint32_t bitCount, ::cordl_internals::Ptr<void> mask);

  /// @brief Method MemCpyBitRegion, addr 0x3040f74, size 0xec, virtual false, abstract: false, final false
  static inline void MemCpyBitRegion(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method MemCpyMasked, addr 0x30410c4, size 0x8c, virtual false, abstract: false, final false
  static inline void MemCpyMasked(::cordl_internals::Ptr<void> destination, ::cordl_internals::Ptr<void> source, int32_t numBytes, ::cordl_internals::Ptr<void> mask);

  /// @brief Method MemSet, addr 0x3041060, size 0x64, virtual false, abstract: false, final false
  static inline void MemSet(::cordl_internals::Ptr<void> destination, int32_t numBytes, uint8_t value);

  /// @brief Method ReadExcessKMultipleBitsAsInt, addr 0x3041308, size 0x24, virtual false, abstract: false, final false
  static inline int32_t ReadExcessKMultipleBitsAsInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsNormalizedUInt, addr 0x3041340, size 0x4c, virtual false, abstract: false, final false
  static inline float_t ReadMultipleBitsAsNormalizedUInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadMultipleBitsAsUInt, addr 0x30396bc, size 0x194, virtual false, abstract: false, final false
  static inline uint32_t ReadMultipleBitsAsUInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method ReadSingleBit, addr 0x3040dc4, size 0x24, virtual false, abstract: false, final false
  static inline bool ReadSingleBit(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset);

  /// @brief Method ReadTwosComplementMultipleBitsAsInt, addr 0x3037ff8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ReadTwosComplementMultipleBitsAsInt(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount);

  /// @brief Method SetBitsInBuffer, addr 0x30413dc, size 0x1cc, virtual false, abstract: false, final false
  static inline void SetBitsInBuffer(::cordl_internals::Ptr<void> buffer, int32_t byteOffset, int32_t bitOffset, int32_t sizeInBits, bool value);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void Swap(ByRef<TValue> a, ByRef<TValue> b);

  /// @brief Method WriteIntAsExcessKMultipleBits, addr 0x304132c, size 0x14, virtual false, abstract: false, final false
  static inline void WriteIntAsExcessKMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteIntAsTwosComplementMultipleBits, addr 0x30380e4, size 0x4, virtual false, abstract: false, final false
  static inline void WriteIntAsTwosComplementMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, int32_t value);

  /// @brief Method WriteNormalizedUIntAsMultipleBits, addr 0x304138c, size 0x50, virtual false, abstract: false, final false
  static inline void WriteNormalizedUIntAsMultipleBits(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, uint32_t bitCount, float_t value);

  /// @brief Method WriteSingleBit, addr 0x3040f44, size 0x30, virtual false, abstract: false, final false
  static inline void WriteSingleBit(::cordl_internals::Ptr<void> ptr, uint32_t bitOffset, bool value);

  /// @brief Method WriteUIntAsMultipleBits, addr 0x3041150, size 0x1b8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::MemoryHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::MemoryHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::MemoryHelpers*, "UnityEngine.InputSystem.Utilities", "MemoryHelpers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__MemoryHelpers__BitRegion, "UnityEngine.InputSystem.Utilities", "MemoryHelpers/BitRegion");
