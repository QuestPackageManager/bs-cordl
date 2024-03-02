#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(FirstChanceExceptionEventArgs)
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs);
// Type: System.Runtime.ExceptionServices::FirstChanceExceptionEventArgs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::ExceptionServices {
// Is value type: false
// CS Name: ::System.Runtime.ExceptionServices::FirstChanceExceptionEventArgs*
class CORDL_TYPE FirstChanceExceptionEventArgs : public ::System::EventArgs {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FirstChanceExceptionEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs, 0x10>, "Size mismatch!");

} // namespace System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*, "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
