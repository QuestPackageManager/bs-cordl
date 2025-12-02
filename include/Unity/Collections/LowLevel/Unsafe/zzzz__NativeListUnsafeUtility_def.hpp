#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeListUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeListUnsafeUtility)
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeListUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility
class CORDL_TYPE NativeListUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetInternalListDataPtrUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* GetInternalListDataPtrUnchecked(::ByRef<::Unity::Collections::NativeList_1<T>> list);

  /// @brief Method GetUnsafePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* GetUnsafePtr(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method GetUnsafeReadOnlyPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T* GetUnsafeReadOnlyPtr(::Unity::Collections::NativeList_1<T> list);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeListUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeListUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeListUnsafeUtility(NativeListUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeListUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeListUnsafeUtility(NativeListUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeListUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeListUnsafeUtility");
