#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Activator)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Activator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_Activator);
// Type: System.Runtime.InteropServices::_Activator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3342))
// CS Name: ::System.Runtime.InteropServices::_Activator*
class CORDL_TYPE _Activator {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_Activator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _Activator(_Activator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_Activator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _Activator(_Activator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_Activator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Activator*, "System.Runtime.InteropServices", "_Activator");
