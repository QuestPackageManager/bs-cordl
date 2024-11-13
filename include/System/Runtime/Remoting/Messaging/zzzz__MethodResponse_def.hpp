#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MethodResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodResponse)
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
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
class IMethodReturnMessage;
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodResponse;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MethodResponse);
// Type: System.Runtime.Remoting.Messaging::MethodResponse
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::MethodResponse*
class CORDL_TYPE MethodResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_Exception)) ::System::Exception* Exception;

  /// @brief Field ExternalProperties, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_ExternalProperties, put = __cordl_internal_set_ExternalProperties)) ::System::Collections::IDictionary* ExternalProperties;

  /// @brief Field InternalProperties, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_InternalProperties, put = __cordl_internal_set_InternalProperties)) ::System::Collections::IDictionary* InternalProperties;

  __declspec(property(get = get_LogicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase)) ::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName)) ::StringW MethodName;

  __declspec(property(get = get_MethodSignature)) ::System::Object* MethodSignature;

  __declspec(property(get = get_OutArgs)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> OutArgs;

  __declspec(property(get = get_Properties)) ::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_ReturnValue)) ::System::Object* ReturnValue;

  __declspec(property(
      get = System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity,
      put = System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)) ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

  __declspec(property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri,
                      put = System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)) ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

  __declspec(property(get = get_TypeName)) ::StringW TypeName;

  __declspec(property(get = get_Uri, put = set_Uri)) ::StringW Uri;

  /// @brief Field _args, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__args, put = __cordl_internal_set__args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief Field _callContext, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__callContext, put = __cordl_internal_set__callContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext;

  /// @brief Field _callMsg, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__callMsg, put = __cordl_internal_set__callMsg)) ::System::Runtime::Remoting::Messaging::IMethodCallMessage* _callMsg;

  /// @brief Field _exception, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception)) ::System::Exception* _exception;

  /// @brief Field _inArgInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__inArgInfo, put = __cordl_internal_set__inArgInfo)) ::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo;

  /// @brief Field _methodBase, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__methodBase, put = __cordl_internal_set__methodBase)) ::System::Reflection::MethodBase* _methodBase;

  /// @brief Field _methodName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__methodName, put = __cordl_internal_set__methodName)) ::StringW _methodName;

  /// @brief Field _methodSignature, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__methodSignature, put = __cordl_internal_set__methodSignature)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _methodSignature;

  /// @brief Field _outArgs, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__outArgs, put = __cordl_internal_set__outArgs)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _outArgs;

  /// @brief Field _returnValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValue, put = __cordl_internal_set__returnValue)) ::System::Object* _returnValue;

  /// @brief Field _targetIdentity, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__targetIdentity, put = __cordl_internal_set__targetIdentity)) ::System::Runtime::Remoting::Identity* _targetIdentity;

  /// @brief Field _typeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName)) ::StringW _typeName;

  /// @brief Field _uri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri)) ::StringW _uri;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetArg, addr 0x3c8f048, size 0x34, virtual true, abstract: false, final true
  inline ::System::Object* GetArg(int32_t argNum);

  /// @brief Method GetObjectData, addr 0x3c8f07c, size 0x488, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitMethodProperty, addr 0x3c8e440, size 0x4bc, virtual false, abstract: false, final false
  inline void InitMethodProperty(::StringW key, ::System::Object* value);

  static inline ::System::Runtime::Remoting::Messaging::MethodResponse* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  static inline ::System::Runtime::Remoting::Messaging::MethodResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::Messaging::MethodResponse* New_ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg,
                                                                                 ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg);

  static inline ::System::Runtime::Remoting::Messaging::MethodResponse* New_ctor(::System::Object* returnValue, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> outArgs,
                                                                                 ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                                 ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity, addr 0x3c8f5bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri, addr 0x3c8f03c, size 0x4, virtual true, abstract: false, final true
  inline ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity, addr 0x3c8f5c4, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri, addr 0x3c8f040, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value);

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_ExternalProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_ExternalProperties() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_InternalProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_InternalProperties() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__args() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__args();

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__callContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __cordl_internal_get__callContext() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage*& __cordl_internal_get__callMsg();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMethodCallMessage*> const& __cordl_internal_get__callMsg() const;

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __cordl_internal_get__exception() const;

  constexpr ::System::Runtime::Remoting::Messaging::ArgInfo*& __cordl_internal_get__inArgInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::ArgInfo*> const& __cordl_internal_get__inArgInfo() const;

  constexpr ::System::Reflection::MethodBase*& __cordl_internal_get__methodBase();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __cordl_internal_get__methodBase() const;

  constexpr ::StringW const& __cordl_internal_get__methodName() const;

  constexpr ::StringW& __cordl_internal_get__methodName();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__methodSignature() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__methodSignature();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__outArgs() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__outArgs();

  constexpr ::System::Object*& __cordl_internal_get__returnValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__returnValue() const;

  constexpr ::System::Runtime::Remoting::Identity*& __cordl_internal_get__targetIdentity();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& __cordl_internal_get__targetIdentity() const;

  constexpr ::StringW const& __cordl_internal_get__typeName() const;

  constexpr ::StringW& __cordl_internal_get__typeName();

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr void __cordl_internal_set_ExternalProperties(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_InternalProperties(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__callContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr void __cordl_internal_set__callMsg(::System::Runtime::Remoting::Messaging::IMethodCallMessage* value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  constexpr void __cordl_internal_set__inArgInfo(::System::Runtime::Remoting::Messaging::ArgInfo* value);

  constexpr void __cordl_internal_set__methodBase(::System::Reflection::MethodBase* value);

  constexpr void __cordl_internal_set__methodName(::StringW value);

  constexpr void __cordl_internal_set__methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__outArgs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__returnValue(::System::Object* value);

  constexpr void __cordl_internal_set__targetIdentity(::System::Runtime::Remoting::Identity* value);

  constexpr void __cordl_internal_set__typeName(::StringW value);

  constexpr void __cordl_internal_set__uri(::StringW value);

  /// @brief Method .ctor, addr 0x3c8de24, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method .ctor, addr 0x3c8e260, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3c8e008, size 0x258, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg);

  /// @brief Method .ctor, addr 0x3c8df34, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* returnValue, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> outArgs, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                    ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method get_ArgCount, addr 0x3c8e930, size 0x18, virtual true, abstract: false, final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args, addr 0x3c8e948, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_Exception, addr 0x3c8e950, size 0x8, virtual true, abstract: false, final true
  inline ::System::Exception* get_Exception();

  /// @brief Method get_LogicalCallContext, addr 0x3c8e958, size 0x64, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_MethodBase, addr 0x3c8e9bc, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName, addr 0x3c8eac8, size 0xb8, virtual true, abstract: false, final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature, addr 0x3c8ec38, size 0x114, virtual true, abstract: false, final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_OutArgs, addr 0x3c8ed4c, size 0xac, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_OutArgs();

  /// @brief Method get_Properties, addr 0x3c8edf8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_ReturnValue, addr 0x3c8ef74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_ReturnValue();

  /// @brief Method get_TypeName, addr 0x3c8eb80, size 0xb8, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri, addr 0x3c8ef7c, size 0xb8, virtual true, abstract: false, final true
  inline ::StringW get_Uri();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_Uri, addr 0x3c8f034, size 0x8, virtual false, abstract: false, final false
  inline void set_Uri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodResponse(MethodResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodResponse(MethodResponse const&) = delete;

  /// @brief Field _methodName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____methodName;

  /// @brief Field _uri, offset: 0x18, size: 0x8, def value: None
  ::StringW ____uri;

  /// @brief Field _typeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____typeName;

  /// @brief Field _methodBase, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ____methodBase;

  /// @brief Field _returnValue, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____returnValue;

  /// @brief Field _exception, offset: 0x38, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field _methodSignature, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____methodSignature;

  /// @brief Field _inArgInfo, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::ArgInfo* ____inArgInfo;

  /// @brief Field _args, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____args;

  /// @brief Field _outArgs, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____outArgs;

  /// @brief Field _callMsg, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMethodCallMessage* ____callMsg;

  /// @brief Field _callContext, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ____callContext;

  /// @brief Field _targetIdentity, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Remoting::Identity* ____targetIdentity;

  /// @brief Field ExternalProperties, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___ExternalProperties;

  /// @brief Field InternalProperties, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___InternalProperties;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MethodResponse, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____methodName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____uri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____typeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____methodBase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____returnValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____exception) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____methodSignature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____inArgInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____args) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____outArgs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____callMsg) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____callContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ____targetIdentity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ___ExternalProperties) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MethodResponse, ___InternalProperties) == 0x80, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodResponse*, "System.Runtime.Remoting.Messaging", "MethodResponse");
