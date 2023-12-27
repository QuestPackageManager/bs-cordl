#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDynamicProperty)
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IDynamicProperty);
// Type: System.Runtime.Remoting.Contexts::IDynamicProperty
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3113))
// CS Name: ::System.Runtime.Remoting.Contexts::IDynamicProperty*
class CORDL_TYPE IDynamicProperty {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDynamicProperty(IDynamicProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamicProperty(IDynamicProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicProperty*, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
