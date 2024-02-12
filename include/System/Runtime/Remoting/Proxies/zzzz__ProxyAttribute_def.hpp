#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ProxyAttribute)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class ProxyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::ProxyAttribute);
// Type: System.Runtime.Remoting.Proxies::ProxyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3086))
// CS Name: ::System.Runtime.Remoting.Proxies::ProxyAttribute*
class CORDL_TYPE ProxyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
  constexpr operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
  constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute* i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept;

  /// @brief Method CreateInstance, addr 0x24b840c, size 0x104, virtual true, abstract: false, final false
  inline ::System::MarshalByRefObject* CreateInstance(::System::Type* serverType);

  /// @brief Method CreateProxy, addr 0x24b8558, size 0x70, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType, ::System::Object* serverObject,
                                                                      ::System::Runtime::Remoting::Contexts::Context* serverContext);

  /// @brief Method GetPropertiesForNewContext, addr 0x24b85c8, size 0x4, virtual true, abstract: false, final true
  inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method IsContextOK, addr 0x24b85cc, size 0x8, virtual true, abstract: false, final true
  inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  // Ctor Parameters [CppParam { name: "", ty: "ProxyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyAttribute(ProxyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyAttribute(ProxyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::ProxyAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::ProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::ProxyAttribute*, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
