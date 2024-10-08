#pragma once
// IWYU pragma private; include "GlobalNamespace/InteropErrorExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InteropErrorExtensions)
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
}
namespace GlobalNamespace {
struct __Interop__Error;
}
// Forward declare root types
namespace GlobalNamespace {
class InteropErrorExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InteropErrorExtensions);
// Type: ::InteropErrorExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InteropErrorExtensions*
class CORDL_TYPE InteropErrorExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Info, addr 0x3bdf140, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Interop__ErrorInfo Info(::GlobalNamespace::__Interop__Error error);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteropErrorExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteropErrorExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteropErrorExtensions(InteropErrorExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteropErrorExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteropErrorExtensions(InteropErrorExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InteropErrorExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InteropErrorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteropErrorExtensions*, "", "InteropErrorExtensions");
