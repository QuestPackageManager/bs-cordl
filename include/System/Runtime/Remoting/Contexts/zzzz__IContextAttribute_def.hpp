#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContextAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContextAttribute)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContextAttribute);
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IContextAttribute
class CORDL_TYPE IContextAttribute {
public:
  // Declarations
  /// @brief Method GetPropertiesForNewContext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method IsContextOK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "IContextAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContextAttribute(IContextAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3121 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContextAttribute*, "System.Runtime.Remoting.Contexts", "IContextAttribute");
