#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IActivator)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::IActivator);
// Dependencies
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.IActivator
class CORDL_TYPE IActivator {
public:
  // Declarations
  __declspec(property(get = get_NextActivator)) ::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Method Activate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method get_NextActivator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  // Ctor Parameters [CppParam { name: "", ty: "IActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IActivator(IActivator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3149 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IActivator*, "System.Runtime.Remoting.Activation", "IActivator");
