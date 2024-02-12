#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCall)
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodCall;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MethodCall);
// Type: System.Runtime.Remoting.Messaging::MethodCall
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3174))
// CS Name: ::System.Runtime.Remoting.Messaging::MethodCall*
class CORDL_TYPE MethodCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field _uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri))::StringW _uri;

  /// @brief Field _typeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName))::StringW _typeName;

  /// @brief Field _methodName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__methodName, put = __cordl_internal_set__methodName))::StringW _methodName;

  /// @brief Field _args, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__args, put = __cordl_internal_set__args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief Field _methodSignature, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__methodSignature, put = __cordl_internal_set__methodSignature))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _methodSignature;

  /// @brief Field _methodBase, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__methodBase, put = __cordl_internal_set__methodBase))::System::Reflection::MethodBase* _methodBase;

  /// @brief Field _callContext, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__callContext, put = __cordl_internal_set__callContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext;

  /// @brief Field _targetIdentity, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__targetIdentity, put = __cordl_internal_set__targetIdentity))::System::Runtime::Remoting::Identity* _targetIdentity;

  /// @brief Field _genericArguments, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__genericArguments, put = __cordl_internal_set__genericArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _genericArguments;

  /// @brief Field ExternalProperties, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_ExternalProperties, put = __cordl_internal_set_ExternalProperties))::System::Collections::IDictionary* ExternalProperties;

  /// @brief Field InternalProperties, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_InternalProperties, put = __cordl_internal_set_InternalProperties))::System::Collections::IDictionary* InternalProperties;

  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase))::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName))::StringW MethodName;

  __declspec(property(get = get_MethodSignature))::System::Object* MethodSignature;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_Uri, put = set_Uri))::StringW Uri;

  __declspec(property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri,
                      put = System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri))::StringW System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

  __declspec(
      property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity,
               put = System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

  __declspec(property(get = get_GenericArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericArguments;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr void __cordl_internal_set__uri(::StringW value);

  constexpr ::StringW& __cordl_internal_get__typeName();

  constexpr ::StringW const& __cordl_internal_get__typeName() const;

  constexpr void __cordl_internal_set__typeName(::StringW value);

  constexpr ::StringW& __cordl_internal_get__methodName();

  constexpr ::StringW const& __cordl_internal_get__methodName() const;

  constexpr void __cordl_internal_set__methodName(::StringW value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__args();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__args() const;

  constexpr void __cordl_internal_set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__methodSignature();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__methodSignature() const;

  constexpr void __cordl_internal_set__methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get__methodBase();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __cordl_internal_get__methodBase() const;

  constexpr void __cordl_internal_set__methodBase(::System::Reflection::MethodBase* value);

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__callContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __cordl_internal_get__callContext() const;

  constexpr void __cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr ::System::Runtime::Remoting::Identity*& __cordl_internal_get__targetIdentity();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& __cordl_internal_get__targetIdentity() const;

  constexpr void __cordl_internal_set__targetIdentity(::System::Runtime::Remoting::Identity* value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__genericArguments();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__genericArguments() const;

  constexpr void __cordl_internal_set__genericArguments(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_ExternalProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_ExternalProperties() const;

  constexpr void __cordl_internal_set_ExternalProperties(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_InternalProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_InternalProperties() const;

  constexpr void __cordl_internal_set_InternalProperties(::System::Collections::IDictionary* value);

  static inline ::System::Runtime::Remoting::Messaging::MethodCall* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x24cd10c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::Messaging::MethodCall* New_ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg);

  /// @brief Method .ctor, addr 0x24cf83c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg);

  static inline ::System::Runtime::Remoting::Messaging::MethodCall* New_ctor();

  /// @brief Method .ctor, addr 0x24cd100, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CopyFrom, addr 0x24bc240, size 0x35c, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage* call);

  /// @brief Method InitMethodProperty, addr 0x24cd6f4, size 0x41c, virtual true, abstract: false, final false
  inline void InitMethodProperty(::StringW key, ::System::Object* value);

  /// @brief Method GetObjectData, addr 0x24cdca8, size 0x490, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_ArgCount, addr 0x24cf950, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args, addr 0x24cf96c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_LogicalCallContext, addr 0x24cf974, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_MethodBase, addr 0x24cf9e0, size 0x30, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName, addr 0x24d0024, size 0x34, virtual true, abstract: false, final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature, addr 0x24d0058, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_Properties, addr 0x24ce168, size 0x30, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method InitDictionary, addr 0x24d0184, size 0x84, virtual true, abstract: false, final false
  inline void InitDictionary();

  /// @brief Method get_TypeName, addr 0x24d0284, size 0x48, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri, addr 0x24d02cc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Uri();

  /// @brief Method set_Uri, addr 0x24d02d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Uri(::StringW value);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri, addr 0x24d02dc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri, addr 0x24d02e4, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value);

  /// @brief Method GetArg, addr 0x24d02ec, size 0x30, virtual true, abstract: false, final true
  inline ::System::Object* GetArg(int32_t argNum);

  /// @brief Method Init, addr 0x24d031c, size 0x4, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method ResolveMethod, addr 0x24cfa10, size 0x614, virtual false, abstract: false, final false
  inline void ResolveMethod();

  /// @brief Method CastTo, addr 0x24d0320, size 0x190, virtual false, abstract: false, final false
  inline ::System::Type* CastTo(::StringW clientType, ::System::Type* serverType);

  /// @brief Method GetTypeNameFromAssemblyQualifiedName, addr 0x24d04ec, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetTypeNameFromAssemblyQualifiedName(::StringW aqname);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity, addr 0x24d0594, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity, addr 0x24d059c, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  /// @brief Method get_GenericArguments, addr 0x24d04b0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericArguments();

  // Ctor Parameters [CppParam { name: "", ty: "MethodCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodCall(MethodCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodCall(MethodCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodCall();

public:
  /// @brief Field _uri, offset: 0x10, size: 0x8, def value: None
  ::StringW ____uri;

  /// @brief Field _typeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____typeName;

  /// @brief Field _methodName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____methodName;

  /// @brief Field _args, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____args;

  /// @brief Field _methodSignature, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____methodSignature;

  /// @brief Field _methodBase, offset: 0x38, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ____methodBase;

  /// @brief Field _callContext, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ____callContext;

  /// @brief Field _targetIdentity, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Remoting::Identity* ____targetIdentity;

  /// @brief Field _genericArguments, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____genericArguments;

  /// @brief Field ExternalProperties, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___ExternalProperties;

  /// @brief Field InternalProperties, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___InternalProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MethodCall, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____typeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____methodName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____args) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____methodSignature) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____methodBase) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____callContext) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____targetIdentity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ____genericArguments) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ___ExternalProperties) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodCall, ___InternalProperties) == 0x60, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodCall*, "System.Runtime.Remoting.Messaging", "MethodCall");
