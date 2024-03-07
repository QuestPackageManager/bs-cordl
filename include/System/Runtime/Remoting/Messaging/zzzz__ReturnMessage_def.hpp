#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReturnMessage)
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
class MethodReturnDictionary;
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
class ReturnMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ReturnMessage);
// Type: System.Runtime.Remoting.Messaging::ReturnMessage
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ReturnMessage*
class CORDL_TYPE ReturnMessage : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgCount)) int32_t ArgCount;

  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_LogicalCallContext))::System::Runtime::Remoting::Messaging::LogicalCallContext* LogicalCallContext;

  __declspec(property(get = get_MethodBase))::System::Reflection::MethodBase* MethodBase;

  __declspec(property(get = get_MethodName))::StringW MethodName;

  __declspec(property(get = get_MethodSignature))::System::Object* MethodSignature;

  __declspec(property(get = get_OutArgs))::ArrayW<::System::Object*, ::Array<::System::Object*>*> OutArgs;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_ReturnValue))::System::Object* ReturnValue;

  __declspec(
      property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity,
               put = System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity))::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_TargetIdentity;

  __declspec(property(get = System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri,
                      put = System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri))::StringW System_Runtime_Remoting_Messaging_IInternalMessage_Uri;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_Uri, put = set_Uri))::StringW Uri;

  /// @brief Field _args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__args, put = __cordl_internal_set__args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief Field _callCtx, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__callCtx, put = __cordl_internal_set__callCtx))::System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx;

  /// @brief Field _exception, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception))::System::Exception* _exception;

  /// @brief Field _inArgInfo, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__inArgInfo, put = __cordl_internal_set__inArgInfo))::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo;

  /// @brief Field _methodBase, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__methodBase, put = __cordl_internal_set__methodBase))::System::Reflection::MethodBase* _methodBase;

  /// @brief Field _methodName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__methodName, put = __cordl_internal_set__methodName))::StringW _methodName;

  /// @brief Field _methodSignature, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__methodSignature, put = __cordl_internal_set__methodSignature))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _methodSignature;

  /// @brief Field _outArgs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__outArgs, put = __cordl_internal_set__outArgs))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _outArgs;

  /// @brief Field _properties, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties))::System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties;

  /// @brief Field _returnValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValue, put = __cordl_internal_set__returnValue))::System::Object* _returnValue;

  /// @brief Field _targetIdentity, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__targetIdentity, put = __cordl_internal_set__targetIdentity))::System::Runtime::Remoting::Identity* _targetIdentity;

  /// @brief Field _typeName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__typeName, put = __cordl_internal_set__typeName))::StringW _typeName;

  /// @brief Field _uri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri))::StringW _uri;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IInternalMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Method GetArg, addr 0x26087e8, size 0x30, virtual true, abstract: false, final true
  inline ::System::Object* GetArg(int32_t argNum);

  static inline ::System::Runtime::Remoting::Messaging::ReturnMessage* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);

  static inline ::System::Runtime::Remoting::Messaging::ReturnMessage* New_ctor(::System::Object* ret, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> outArgs, int32_t outArgsCount,
                                                                                ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                                                                                ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity, addr 0x26088c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri, addr 0x26087d8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity, addr 0x26088c8, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  /// @brief Method System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri, addr 0x26087e0, size 0x8, virtual true, abstract: false, final true
  inline void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__args() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__args();

  constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__callCtx();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& __cordl_internal_get__callCtx() const;

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

  constexpr ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*& __cordl_internal_get__properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MethodReturnDictionary*> const& __cordl_internal_get__properties() const;

  constexpr ::System::Object*& __cordl_internal_get__returnValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__returnValue() const;

  constexpr ::System::Runtime::Remoting::Identity*& __cordl_internal_get__targetIdentity();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> const& __cordl_internal_get__targetIdentity() const;

  constexpr ::StringW const& __cordl_internal_get__typeName() const;

  constexpr ::StringW& __cordl_internal_get__typeName();

  constexpr ::StringW const& __cordl_internal_get__uri() const;

  constexpr ::StringW& __cordl_internal_get__uri();

  constexpr void __cordl_internal_set__args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__callCtx(::System::Runtime::Remoting::Messaging::LogicalCallContext* value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  constexpr void __cordl_internal_set__inArgInfo(::System::Runtime::Remoting::Messaging::ArgInfo* value);

  constexpr void __cordl_internal_set__methodBase(::System::Reflection::MethodBase* value);

  constexpr void __cordl_internal_set__methodName(::StringW value);

  constexpr void __cordl_internal_set__methodSignature(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__outArgs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__properties(::System::Runtime::Remoting::Messaging::MethodReturnDictionary* value);

  constexpr void __cordl_internal_set__returnValue(::System::Object* value);

  constexpr void __cordl_internal_set__targetIdentity(::System::Runtime::Remoting::Identity* value);

  constexpr void __cordl_internal_set__typeName(::StringW value);

  constexpr void __cordl_internal_set__uri(::StringW value);

  /// @brief Method .ctor, addr 0x25ee1f0, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);

  /// @brief Method .ctor, addr 0x25ee338, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* ret, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> outArgs, int32_t outArgsCount, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx,
                    ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);

  /// @brief Method get_ArgCount, addr 0x26084e4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_ArgCount();

  /// @brief Method get_Args, addr 0x2608500, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_Exception, addr 0x2608818, size 0x8, virtual true, abstract: false, final true
  inline ::System::Exception* get_Exception();

  /// @brief Method get_LogicalCallContext, addr 0x2608508, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();

  /// @brief Method get_MethodBase, addr 0x2608574, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodBase* get_MethodBase();

  /// @brief Method get_MethodName, addr 0x260857c, size 0x50, virtual true, abstract: false, final true
  inline ::StringW get_MethodName();

  /// @brief Method get_MethodSignature, addr 0x26085cc, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Object* get_MethodSignature();

  /// @brief Method get_OutArgs, addr 0x2608820, size 0x98, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_OutArgs();

  /// @brief Method get_Properties, addr 0x26086f8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_ReturnValue, addr 0x26088b8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_ReturnValue();

  /// @brief Method get_TypeName, addr 0x2608764, size 0x64, virtual true, abstract: false, final true
  inline ::StringW get_TypeName();

  /// @brief Method get_Uri, addr 0x26087c8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Uri();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IInternalMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IInternalMessage* i___System__Runtime__Remoting__Messaging__IInternalMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept;

  /// @brief Method set_Uri, addr 0x26087d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Uri(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReturnMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReturnMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReturnMessage(ReturnMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReturnMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReturnMessage(ReturnMessage const&) = delete;

  /// @brief Field _outArgs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____outArgs;

  /// @brief Field _args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____args;

  /// @brief Field _callCtx, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::LogicalCallContext* ____callCtx;

  /// @brief Field _returnValue, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____returnValue;

  /// @brief Field _uri, offset: 0x30, size: 0x8, def value: None
  ::StringW ____uri;

  /// @brief Field _exception, offset: 0x38, size: 0x8, def value: None
  ::System::Exception* ____exception;

  /// @brief Field _methodBase, offset: 0x40, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ____methodBase;

  /// @brief Field _methodName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____methodName;

  /// @brief Field _methodSignature, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____methodSignature;

  /// @brief Field _typeName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____typeName;

  /// @brief Field _properties, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::MethodReturnDictionary* ____properties;

  /// @brief Field _targetIdentity, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Identity* ____targetIdentity;

  /// @brief Field _inArgInfo, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::ArgInfo* ____inArgInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ReturnMessage, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____outArgs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____callCtx) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____returnValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____uri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____exception) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____methodBase) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____methodName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____methodSignature) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____typeName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____properties) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____targetIdentity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ReturnMessage, ____inArgInfo) == 0x70, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ReturnMessage*, "System.Runtime.Remoting.Messaging", "ReturnMessage");
