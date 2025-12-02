#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtilityExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtilityExtensions)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtilityExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions
class CORDL_TYPE UnsafeUtilityExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* AddressOf(::ByRef<T> value);

  /// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ByRef<T> AsRef(::ByRef<T> value);

  /// @brief Method CheckIndexRange, addr 0x62b1b84, size 0xcc, virtual false, abstract: false, final false
  static inline void CheckIndexRange(int32_t index, int32_t capacity);

  /// @brief Method CheckMemSwapOverlap, addr 0x62b1b1c, size 0x68, virtual false, abstract: false, final false
  static inline void CheckMemSwapOverlap(uint8_t* dst, uint8_t* src, int64_t size);

  /// @brief Method MemSwap, addr 0x62b1a04, size 0x118, virtual false, abstract: false, final false
  static inline void MemSwap(void* ptr, void* otherPtr, int64_t size);

  /// @brief Method ReadArrayElementBoundsChecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReadArrayElementBoundsChecked(void* source, int32_t index, int32_t capacity);

  /// @brief Method WriteArrayElementBoundsChecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void WriteArrayElementBoundsChecked(void* destination, int32_t index, T value, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeUtilityExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtilityExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeUtilityExtensions(UnsafeUtilityExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeUtilityExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeUtilityExtensions(UnsafeUtilityExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15784 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeUtilityExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtilityExtensions");
