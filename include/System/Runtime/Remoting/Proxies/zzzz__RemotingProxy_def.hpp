#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/RemotingProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemotingProxy)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::RemotingProxy);
// Dependencies System.Runtime.Remoting.IRemotingTypeInfo, System.Runtime.Remoting.Proxies.RealProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// CS Name: System.Runtime.Remoting.Proxies.RemotingProxy
class CORDL_TYPE RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy {
public:
  // Declarations
  __declspec(property(get = get_TypeName)) ::StringW TypeName;

  /// @brief Field _cache_GetHashCodeMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cache_GetHashCodeMethod, put = setStaticF__cache_GetHashCodeMethod)) ::System::Reflection::MethodInfo* _cache_GetHashCodeMethod;

  /// @brief Field _cache_GetTypeMethod, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cache_GetTypeMethod, put = setStaticF__cache_GetTypeMethod)) ::System::Reflection::MethodInfo* _cache_GetTypeMethod;

  /// @brief Field _ctorCall, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__ctorCall, put = __cordl_internal_set__ctorCall)) ::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall;

  /// @brief Field _hasEnvoySink, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__hasEnvoySink, put = __cordl_internal_set__hasEnvoySink)) bool _hasEnvoySink;

  /// @brief Field _sink, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__sink, put = __cordl_internal_set__sink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _sink;

  /// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
  constexpr operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept;

  /// @brief Method ActivateRemoteObject, addr 0x3cd8f08, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* request);

  /// @brief Method AttachIdentity, addr 0x3cdac04, size 0x228, virtual false, abstract: false, final false
  inline void AttachIdentity(::System::Runtime::Remoting::Identity* identity);

  /// @brief Method CanCastTo, addr 0x3cdb4f8, size 0x21c, virtual true, abstract: false, final true
  inline bool CanCastTo(::System::Type* fromType, ::System::Object* o);

  /// @brief Method Finalize, addr 0x3cdb714, size 0x118, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Invoke, addr 0x3cda378, size 0x5d0, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* request);

  static inline ::System::Runtime::Remoting::Proxies::RemotingProxy* New_ctor(::System::Type* type, ::StringW activationUrl,
                                                                              ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  static inline ::System::Runtime::Remoting::Proxies::RemotingProxy* New_ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity);

  constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall* const& __cordl_internal_get__ctorCall() const;

  constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall*& __cordl_internal_get__ctorCall();

  constexpr bool const& __cordl_internal_get__hasEnvoySink() const;

  constexpr bool& __cordl_internal_get__hasEnvoySink();

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& __cordl_internal_get__sink() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__sink();

  constexpr void __cordl_internal_set__ctorCall(::System::Runtime::Remoting::Messaging::ConstructionCall* value);

  constexpr void __cordl_internal_set__hasEnvoySink(bool value);

  constexpr void __cordl_internal_set__sink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3cd2514, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW activationUrl, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method .ctor, addr 0x3cd2f8c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Remoting::ClientIdentity* identity);

  static inline ::System::Reflection::MethodInfo* getStaticF__cache_GetHashCodeMethod();

  static inline ::System::Reflection::MethodInfo* getStaticF__cache_GetTypeMethod();

  /// @brief Method get_TypeName, addr 0x3cdb3c0, size 0x138, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Convert to "::System::Runtime::Remoting::IRemotingTypeInfo"
  constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* i___System__Runtime__Remoting__IRemotingTypeInfo() noexcept;

  static inline void setStaticF__cache_GetHashCodeMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF__cache_GetTypeMethod(::System::Reflection::MethodInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingProxy(RemotingProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingProxy(RemotingProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3088 };

  /// @brief Field _sink, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____sink;

  /// @brief Field _hasEnvoySink, offset: 0x58, size: 0x1, def value: None
  bool ____hasEnvoySink;

  /// @brief Field _ctorCall, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::ConstructionCall* ____ctorCall;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Proxies::RemotingProxy, ____sink) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RemotingProxy, ____hasEnvoySink) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::RemotingProxy, ____ctorCall) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::RemotingProxy, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RemotingProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RemotingProxy*, "System.Runtime.Remoting.Proxies", "RemotingProxy");
