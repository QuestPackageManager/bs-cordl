#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IActivator)
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::IActivator);
// Type: System.Runtime.Remoting.Activation::IActivator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3133))
// CS Name: ::System.Runtime.Remoting.Activation::IActivator*
class CORDL_TYPE IActivator {
public:
  // Declarations
  __declspec(property(get = get_NextActivator))::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Method get_NextActivator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "IActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IActivator(IActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IActivator(IActivator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IActivator*, "System.Runtime.Remoting.Activation", "IActivator");
