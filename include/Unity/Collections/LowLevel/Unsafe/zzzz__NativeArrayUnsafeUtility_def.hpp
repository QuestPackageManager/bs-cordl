#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeArrayUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayUnsafeUtility)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeArrayUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility);
// Type: Unity.Collections.LowLevel.Unsafe::NativeArrayUnsafeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeArrayUnsafeUtility*
class CORDL_TYPE NativeArrayUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertExistingDataToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(::cordl_internals::Ptr<void> dataPointer, int32_t length, ::Unity::Collections::Allocator allocator);

  /// @brief Method GetUnsafeBufferPointerWithoutChecks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> GetUnsafeBufferPointerWithoutChecks(::Unity::Collections::NativeArray_1<T> nativeArray);

  /// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> GetUnsafePtr(::Unity::Collections::NativeArray_1<T> nativeArray);

  /// @brief Method GetUnsafeReadOnlyPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> GetUnsafeReadOnlyPtr(::Unity::Collections::NativeArray_1<T> nativeArray);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeArrayUnsafeUtility(NativeArrayUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeArrayUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeArrayUnsafeUtility(NativeArrayUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility");
