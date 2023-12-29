#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Module)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Module;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_Module);
// Type: System.Runtime.InteropServices::_Module
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3341))
// CS Name: ::System.Runtime.InteropServices::_Module*
class CORDL_TYPE _Module {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_Module", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _Module(_Module&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_Module", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _Module(_Module const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_Module);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Module*, "System.Runtime.InteropServices", "_Module");
