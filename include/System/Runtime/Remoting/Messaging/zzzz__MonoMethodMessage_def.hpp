#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MonoMethodMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoMethodMessage)
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class AsyncResult;
}
namespace System::Runtime::Remoting::Messaging {
struct CallType;
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
namespace System::Runtime::Remoting::Messaging {
class MCMDictionary;
}
namespace System::Runtime::Remoting {
class Identity;
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
class MonoMethodMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MonoMethodMessage);
// Dependencies System.Object, System.Runtime.Remoting.Messaging.CallType
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.MonoMethodMessage
class CORDL_TYPE MonoMethodMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_AsyncResult)) ::System::Runtime::Remoting::Messaging::AsyncResult* AsyncResult;

  __declspec(property(get = get_CallType)) ::System::Runtime::Remoting::Messaging::CallType CallType;

  __declspec(property(get = get_Exception)) ::System::Exception* Exception;

  __declspec(property(get = get_LogicalCallContext, put = set_LogicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase)) ::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName)) ::StringW MethodName;

  __declspec(property(get = get_MethodSignature)) ::System::Object* MethodSignature;

  __declspec(property(get = get_OutArgCount)) int32_t OutArgCount;

  __declspec(property(get = get_OutArgs)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> OutArgs;

  __declspec(property(get = get_Properties)) ::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_ReturnValue)) ::System::Object* ReturnValue;

  __declspec(property(
      get = System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity,
      put = System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)) ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

  __declspec(property(get = get_TypeName)) ::StringW TypeName;

  __declspec(property(get = get_Uri, put = set_Uri)) ::StringW Uri;

  /// @brief Field arg_types, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_arg_types, put = __cordl_internal_set_arg_types)) ::ArrayW<uint8_t, ::Array<uint8_t>*> arg_types;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field asyncResult, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncResult, put = __cordl_internal_set_asyncResult)) ::System::Runtime::Remoting::Messaging::AsyncResult* asyncResult;

  /// @brief Field call_type, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_call_type, put = __cordl_internal_set_call_type)) ::System::Runtime::Remoting::Messaging::CallType call_type;

  /// @brief Field ctx, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx;

  /// @brief Field exc, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_exc, put = __cordl_internal_set_exc)) ::System::Exception* exc;

  /// @brief Field identity, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_identity, put = __cordl_internal_set_identity)) ::System::Runtime::Remoting::Identity* identity;

  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Reflection::RuntimeMethodInfo* method;

  /// @brief Field methodSignature, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_methodSignature, put = __cordl_internal_set_methodSignature)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> methodSignature;

  /// @brief Field names, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_names, put = __cordl_internal_set_names)) ::ArrayW<::StringW, ::Array<::StringW>*> names;

  /// @brief Field properties, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_properties, put = __cordl_internal_set_properties)) ::System::Runtime::Remoting::Messaging::MCMDictionary* properties;

  /// @brief Field rval, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rval, put = __cordl_internal_set_rval)) ::System::Object* rval;

  /// @brief Field uri, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::StringW uri;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Method GetArg, addr 0x5999ea8, size 0x30, virtual true, abstract: false, final true
  inline ::System::Object* GetArg(int32_t arg_num);

  /// @brief Method GetMethodInfo, addr 0x5999ae8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetMethodInfo(::System::Type* type, ::StringW methodName);

  /// @brief Method InitMessage, addr 0x5999688, size 0x27c, virtual false, abstract: false, final false
  inline void InitMessage(::System::Reflection::RuntimeMethodInfo* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method NeedsOutProcessing, addr 0x599a094, size 0x88, virtual false, abstract: false, final false
  inline bool NeedsOutProcessing(::ByRef<int32_t> outCount);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args,
                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity, addr 0x599a07c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity, addr 0x599a084, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_arg_types() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_arg_types();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_args() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_args();

  constexpr ::System::Runtime::Remoting::Messaging::AsyncResult* const& __cordl_internal_get_asyncResult() const;

  constexpr ::System::Runtime::Remoting::Messaging::AsyncResult*& __cordl_internal_get_asyncResult();

  constexpr ::System::Runtime::Remoting::Messaging::CallType const& __cordl_internal_get_call_type() const;

  constexpr ::System::Runtime::Remoting::Messaging::CallType& __cordl_internal_get_call_type();

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& __cordl_internal_get_ctx() const;

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get_ctx();

  constexpr ::System::Exception* const& __cordl_internal_get_exc() const;

  constexpr ::System::Exception*& __cordl_internal_get_exc();

  constexpr ::System::Runtime::Remoting::Identity* const& __cordl_internal_get_identity() const;

  constexpr ::System::Runtime::Remoting::Identity*& __cordl_internal_get_identity();

  constexpr ::System::Reflection::RuntimeMethodInfo* const& __cordl_internal_get_method() const;

  constexpr ::System::Reflection::RuntimeMethodInfo*& __cordl_internal_get_method();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_methodSignature() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_methodSignature();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_names();

  constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary* const& __cordl_internal_get_properties() const;

  constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary*& __cordl_internal_get_properties();

  constexpr ::System::Object* const& __cordl_internal_get_rval() const;

  constexpr ::System::Object*& __cordl_internal_get_rval();

  constexpr ::StringW const& __cordl_internal_get_uri() const;

  constexpr ::StringW& __cordl_internal_get_uri();

  constexpr void __cordl_internal_set_arg_types(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_asyncResult(::System::Runtime::Remoting::Messaging::AsyncResult* value);

  constexpr void __cordl_internal_set_call_type(::System::Runtime::Remoting::Messaging::CallType value);

  constexpr void __cordl_internal_set_ctx(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr void __cordl_internal_set_exc(::System::Exception* value);

  constexpr void __cordl_internal_set_identity(::System::Runtime::Remoting::Identity* value);

  constexpr void __cordl_internal_set_method(::System::Reflection::RuntimeMethodInfo* value);

  constexpr void __cordl_internal_set_methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_properties(::System::Runtime::Remoting::Messaging::MCMDictionary* value);

  constexpr void __cordl_internal_set_rval(::System::Object* value);

  constexpr void __cordl_internal_set_uri(::StringW value);

  /// @brief Method .ctor, addr 0x5999904, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method .ctor, addr 0x59999c0, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method .ctor, addr 0x5999b84, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args);

  /// @brief Method get_ArgCount, addr 0x5999c28, size 0x38, virtual true, abstract: false, final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args, addr 0x5999ce0, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_AsyncResult, addr 0x599a08c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult();

  /// @brief Method get_CallType, addr 0x5999c60, size 0x80, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::CallType get_CallType();

  /// @brief Method get_Exception, addr 0x5999ed8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Exception* get_Exception();

  /// @brief Method get_LogicalCallContext, addr 0x5999ce8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_MethodBase, addr 0x5999cf8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName, addr 0x5999d00, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature, addr 0x5999d28, size 0x124, virtual true, abstract: false, final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_OutArgCount, addr 0x5999ee0, size 0x68, virtual true, abstract: false, final true
  inline int32_t get_OutArgCount();

  /// @brief Method get_OutArgs, addr 0x5999f48, size 0x12c, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_OutArgs();

  /// @brief Method get_Properties, addr 0x5999bbc, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_ReturnValue, addr 0x599a074, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_ReturnValue();

  /// @brief Method get_TypeName, addr 0x5999e4c, size 0x4c, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri, addr 0x5999e98, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Uri();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept;

  /// @brief Method set_LogicalCallContext, addr 0x5999cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  /// @brief Method set_Uri, addr 0x5999ea0, size 0x8, virtual true, abstract: false, final true
  inline void set_Uri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoMethodMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoMethodMessage(MonoMethodMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoMethodMessage(MonoMethodMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3196 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::RuntimeMethodInfo* ___method;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___args;

  /// @brief Field names, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___names;

  /// @brief Field arg_types, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___arg_types;

  /// @brief Field ctx, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ___ctx;

  /// @brief Field rval, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___rval;

  /// @brief Field exc, offset: 0x40, size: 0x8, def value: None
  ::System::Exception* ___exc;

  /// @brief Field asyncResult, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::AsyncResult* ___asyncResult;

  /// @brief Field call_type, offset: 0x50, size: 0x4, def value: None
  ::System::Runtime::Remoting::Messaging::CallType ___call_type;

  /// @brief Field uri, offset: 0x58, size: 0x8, def value: None
  ::StringW ___uri;

  /// @brief Field properties, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::MCMDictionary* ___properties;

  /// @brief Field identity, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Identity* ___identity;

  /// @brief Field methodSignature, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___methodSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___method) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___names) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___arg_types) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___ctx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___rval) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___exc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___asyncResult) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___call_type) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___uri) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___properties) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___identity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MonoMethodMessage, ___methodSignature) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MonoMethodMessage, 0x78>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MonoMethodMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MonoMethodMessage*, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
