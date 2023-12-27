#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContextAttribute)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContextAttribute);
// Type: System.Runtime.Remoting.Contexts::IContextAttribute
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3105))
// CS Name: ::System.Runtime.Remoting.Contexts::IContextAttribute*
class CORDL_TYPE IContextAttribute {
public:
  // Declarations
  /// @brief Method GetPropertiesForNewContext addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method IsContextOK addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "IContextAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContextAttribute(IContextAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContextAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContextAttribute(IContextAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContextAttribute*, "System.Runtime.Remoting.Contexts", "IContextAttribute");
