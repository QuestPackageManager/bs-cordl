#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafePtrListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafePtrListExtensions)
namespace System {
struct IntPtr;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafePtrList_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafePtrListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions);
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafePtrListExtensions
class CORDL_TYPE UnsafePtrListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ListData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>> ListData(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>> from);

  /// @brief Method ListDataRO, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr> ListDataRO(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> from);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafePtrListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafePtrListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafePtrListExtensions(UnsafePtrListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafePtrListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafePtrListExtensions(UnsafePtrListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafePtrListExtensions");
