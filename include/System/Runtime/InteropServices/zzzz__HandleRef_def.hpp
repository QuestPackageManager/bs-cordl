#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandleRef)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct HandleRef;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::HandleRef);
// Dependencies System.IntPtr
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.HandleRef
struct CORDL_TYPE HandleRef {
public:
  // Declarations
  __declspec(property(get = get_Handle)) ::System::IntPtr Handle;

  /// @brief Method .ctor, addr 0x3d13dec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* wrapper, ::System::IntPtr handle);

  /// @brief Method get_Handle, addr 0x3d13df4, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Handle();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HandleRef();

  // Ctor Parameters [CppParam { name: "_wrapper", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr HandleRef(::System::Object* _wrapper, ::System::IntPtr _handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3303 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _wrapper, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _wrapper;

  /// @brief Field _handle, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr _handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::HandleRef, _wrapper) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::HandleRef, _handle) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::HandleRef, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::HandleRef, "System.Runtime.InteropServices", "HandleRef");
