#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CallType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoMethodMessage)
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
struct CallType;
}
namespace System::Runtime::Remoting::Messaging {
class AsyncResult;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class MCMDictionary;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
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
// Type: System.Runtime.Remoting.Messaging::MonoMethodMessage
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3181))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3180))
// CS Name: ::System.Runtime.Remoting.Messaging::MonoMethodMessage*
class CORDL_TYPE MonoMethodMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Reflection::RuntimeMethodInfo* method;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> args;

  /// @brief Field names, offset 0x20, size 0x8
  __declspec(property(get = __get_names, put = __set_names))::ArrayW<::StringW, ::Array<::StringW>*> names;

  /// @brief Field arg_types, offset 0x28, size 0x8
  __declspec(property(get = __get_arg_types, put = __set_arg_types))::ArrayW<uint8_t, ::Array<uint8_t>*> arg_types;

  /// @brief Field ctx, offset 0x30, size 0x8
  __declspec(property(get = __get_ctx, put = __set_ctx))::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx;

  /// @brief Field rval, offset 0x38, size 0x8
  __declspec(property(get = __get_rval, put = __set_rval))::System::Object* rval;

  /// @brief Field exc, offset 0x40, size 0x8
  __declspec(property(get = __get_exc, put = __set_exc))::System::Exception* exc;

  /// @brief Field asyncResult, offset 0x48, size 0x8
  __declspec(property(get = __get_asyncResult, put = __set_asyncResult))::System::Runtime::Remoting::Messaging::AsyncResult* asyncResult;

  /// @brief Field call_type, offset 0x50, size 0x4
  __declspec(property(get = __get_call_type, put = __set_call_type))::System::Runtime::Remoting::Messaging::CallType call_type;

  /// @brief Field uri, offset 0x58, size 0x8
  __declspec(property(get = __get_uri, put = __set_uri))::StringW uri;

  /// @brief Field properties, offset 0x60, size 0x8
  __declspec(property(get = __get_properties, put = __set_properties))::System::Runtime::Remoting::Messaging::MCMDictionary* properties;

  /// @brief Field identity, offset 0x68, size 0x8
  __declspec(property(get = __get_identity, put = __set_identity))::System::Runtime::Remoting::Identity* identity;

  /// @brief Field methodSignature, offset 0x70, size 0x8
  __declspec(property(get = __get_methodSignature, put = __set_methodSignature))::ArrayW<::System::Type*, ::Array<::System::Type*>*> methodSignature;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_LogicalCallContext, put = set_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase))::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName))::StringW MethodName;

  __declspec(property(get = get_MethodSignature))::System::Object* MethodSignature;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_Uri, put = set_Uri))::StringW Uri;

  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_OutArgCount)) int32_t OutArgCount;

  __declspec(property(get = get_OutArgs))::ArrayW<::System::Object*, ::Array<::System::Object*>*> OutArgs;

  __declspec(property(get = get_ReturnValue))::System::Object* ReturnValue;

  __declspec(
      property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity,
               put = System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

  __declspec(property(get = get_AsyncResult))::System::Runtime::Remoting::Messaging::AsyncResult* AsyncResult;

  __declspec(property(get = get_CallType))::System::Runtime::Remoting::Messaging::CallType CallType;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept;

  constexpr ::System::Reflection::RuntimeMethodInfo*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeMethodInfo*> const& __get_method() const;

  constexpr void __set_method(::System::Reflection::RuntimeMethodInfo* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get_args();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get_args() const;

  constexpr void __set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_names();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_names() const;

  constexpr void __set_names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_arg_types();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_arg_types() const;

  constexpr void __set_arg_types(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __get_ctx() const;

  constexpr void __set_ctx(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr ::System::Object*& __get_rval();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_rval() const;

  constexpr void __set_rval(::System::Object* value);

  constexpr ::System::Exception*& __get_exc();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_exc() const;

  constexpr void __set_exc(::System::Exception* value);

  constexpr ::System::Runtime::Remoting::Messaging::AsyncResult*& __get_asyncResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::AsyncResult*> const& __get_asyncResult() const;

  constexpr void __set_asyncResult(::System::Runtime::Remoting::Messaging::AsyncResult* value);

  constexpr ::System::Runtime::Remoting::Messaging::CallType& __get_call_type();

  constexpr ::System::Runtime::Remoting::Messaging::CallType const& __get_call_type() const;

  constexpr void __set_call_type(::System::Runtime::Remoting::Messaging::CallType value);

  constexpr ::StringW& __get_uri();

  constexpr ::StringW const& __get_uri() const;

  constexpr void __set_uri(::StringW value);

  constexpr ::System::Runtime::Remoting::Messaging::MCMDictionary*& __get_properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MCMDictionary*> const& __get_properties() const;

  constexpr void __set_properties(::System::Runtime::Remoting::Messaging::MCMDictionary* value);

  constexpr ::System::Runtime::Remoting::Identity*& __get_identity();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& __get_identity() const;

  constexpr void __set_identity(::System::Runtime::Remoting::Identity* value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_methodSignature();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_methodSignature() const;

  constexpr void __set_methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method InitMessage addr 0x24b1118 size 0x294 virtual false final false
  inline void InitMessage(::System::Reflection::RuntimeMethodInfo* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method .ctor addr 0x24b13ac size 0xc8 virtual false final false
  inline void _ctor(::System::Reflection::MethodBase* method, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args,
                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method .ctor addr 0x2496980 size 0x138 virtual false final false
  inline void _ctor(::System::Reflection::MethodInfo* minfo, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> out_args);

  /// @brief Method GetMethodInfo addr 0x24b1474 size 0xb4 virtual false final false
  static inline ::System::Reflection::MethodInfo* GetMethodInfo(::System::Type* type, ::StringW methodName);

  static inline ::System::Runtime::Remoting::Messaging::MonoMethodMessage* New_ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args);

  /// @brief Method .ctor addr 0x24b1528 size 0x38 virtual false final false
  inline void _ctor(::System::Type* type, ::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> in_args);

  /// @brief Method get_Properties addr 0x24b1560 size 0x6c virtual true final true
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_ArgCount addr 0x24b15cc size 0x38 virtual true final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args addr 0x24b1604 size 0x8 virtual true final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_LogicalCallContext addr 0x24b160c size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method set_LogicalCallContext addr 0x24b1614 size 0x8 virtual false final false
  inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  /// @brief Method get_MethodBase addr 0x24b161c size 0x8 virtual true final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName addr 0x24b1624 size 0x80 virtual true final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature addr 0x24b16a4 size 0x11c virtual true final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_TypeName addr 0x24b17c0 size 0x94 virtual true final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri addr 0x24b1854 size 0x8 virtual true final true
  inline ::StringW get_Uri();

  /// @brief Method set_Uri addr 0x24b185c size 0x8 virtual true final true
  inline void set_Uri(::StringW value);

  /// @brief Method GetArg addr 0x2498c00 size 0x34 virtual true final true
  inline ::System::Object* GetArg(int32_t arg_num);

  /// @brief Method get_Exception addr 0x24b1864 size 0x8 virtual true final true
  inline ::System::Exception* get_Exception();

  /// @brief Method get_OutArgCount addr 0x24b186c size 0x6c virtual true final true
  inline int32_t get_OutArgCount();

  /// @brief Method get_OutArgs addr 0x24b18d8 size 0x128 virtual true final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_OutArgs();

  /// @brief Method get_ReturnValue addr 0x24b1a00 size 0x8 virtual true final true
  inline ::System::Object* get_ReturnValue();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity addr 0x24b1a08 size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity addr 0x24b1a10 size 0x8 virtual true final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  /// @brief Method get_AsyncResult addr 0x24b1a18 size 0x8 virtual false final false
  inline ::System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult();

  /// @brief Method get_CallType addr 0x24979d0 size 0x7c virtual false final false
  inline ::System::Runtime::Remoting::Messaging::CallType get_CallType();

  /// @brief Method NeedsOutProcessing addr 0x2498b70 size 0x90 virtual false final false
  inline bool NeedsOutProcessing(ByRef<int32_t> outCount);

  // Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoMethodMessage(MonoMethodMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoMethodMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoMethodMessage(MonoMethodMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoMethodMessage();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MonoMethodMessage, 0x78>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MonoMethodMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MonoMethodMessage*, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
