#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeSliceUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSliceUnsafeUtility)
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSliceUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
class CORDL_TYPE NativeSliceUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertExistingDataToNativeSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> ConvertExistingDataToNativeSlice(::cordl_internals::Ptr<void> dataPointer, int32_t stride, int32_t length);

  /// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> GetUnsafePtr(::Unity::Collections::NativeSlice_1<T> nativeSlice);

  /// @brief Method GetUnsafeReadOnlyPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::cordl_internals::Ptr<void> GetUnsafeReadOnlyPtr(::Unity::Collections::NativeSlice_1<T> nativeSlice);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSliceUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSliceUnsafeUtility(NativeSliceUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSliceUnsafeUtility(NativeSliceUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeSliceUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeSliceUnsafeUtility");
