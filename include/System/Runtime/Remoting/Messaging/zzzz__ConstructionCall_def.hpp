#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ConstructionCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MethodCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConstructionCall)
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
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
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
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
class ConstructionCall;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ConstructionCall);
// Type: System.Runtime.Remoting.Messaging::ConstructionCall
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::ConstructionCall*
class CORDL_TYPE ConstructionCall : public ::System::Runtime::Remoting::Messaging::MethodCall {
public:
  // Declarations
  __declspec(property(get = get_ActivationType))::System::Type* ActivationType;

  __declspec(property(get = get_ActivationTypeName))::StringW ActivationTypeName;

  __declspec(property(get = get_Activator, put = set_Activator))::System::Runtime::Remoting::Activation::IActivator* Activator;

  __declspec(property(get = get_CallSiteActivationAttributes))::ArrayW<::System::Object*, ::Array<::System::Object*>*> CallSiteActivationAttributes;

  __declspec(property(get = get_ContextProperties))::System::Collections::IList* ContextProperties;

  __declspec(property(get = get_IsContextOk, put = set_IsContextOk)) bool IsContextOk;

  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  __declspec(property(get = get_SourceProxy, put = set_SourceProxy))::System::Runtime::Remoting::Proxies::RemotingProxy* SourceProxy;

  /// @brief Field _activationAttributes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__activationAttributes,
                      put = __cordl_internal_set__activationAttributes))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _activationAttributes;

  /// @brief Field _activationType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__activationType, put = __cordl_internal_set__activationType))::System::Type* _activationType;

  /// @brief Field _activationTypeName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__activationTypeName, put = __cordl_internal_set__activationTypeName))::StringW _activationTypeName;

  /// @brief Field _activator, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__activator, put = __cordl_internal_set__activator))::System::Runtime::Remoting::Activation::IActivator* _activator;

  /// @brief Field _contextProperties, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__contextProperties, put = __cordl_internal_set__contextProperties))::System::Collections::IList* _contextProperties;

  /// @brief Field _isContextOk, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__isContextOk, put = __cordl_internal_set__isContextOk)) bool _isContextOk;

  /// @brief Field _sourceProxy, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceProxy, put = __cordl_internal_set__sourceProxy))::System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
  constexpr operator ::System::Runtime::Remoting::Activation::IConstructionCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Method GetObjectData, addr 0x2846278, size 0x198, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InitDictionary, addr 0x284590c, size 0x84, virtual true, abstract: false, final false
  inline void InitDictionary();

  /// @brief Method InitMethodProperty, addr 0x2845bac, size 0x2b0, virtual true, abstract: false, final false
  inline void InitMethodProperty(::StringW key, ::System::Object* value);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* New_ctor(::System::Type* type);

  /// @brief Method SetActivationAttributes, addr 0x2845b38, size 0x8, virtual false, abstract: false, final false
  inline void SetActivationAttributes(::ArrayW<::System::Object*, ::Array<::System::Object*>*> attributes);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__activationAttributes() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__activationAttributes();

  constexpr ::System::Type*& __cordl_internal_get__activationType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__activationType() const;

  constexpr ::StringW const& __cordl_internal_get__activationTypeName() const;

  constexpr ::StringW& __cordl_internal_get__activationTypeName();

  constexpr ::System::Runtime::Remoting::Activation::IActivator*& __cordl_internal_get__activator();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> const& __cordl_internal_get__activator() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get__contextProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__contextProperties() const;

  constexpr bool const& __cordl_internal_get__isContextOk() const;

  constexpr bool& __cordl_internal_get__isContextOk();

  constexpr ::System::Runtime::Remoting::Proxies::RemotingProxy*& __cordl_internal_get__sourceProxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Proxies::RemotingProxy*> const& __cordl_internal_get__sourceProxy() const;

  constexpr void __cordl_internal_set__activationAttributes(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__activationType(::System::Type* value);

  constexpr void __cordl_internal_set__activationTypeName(::StringW value);

  constexpr void __cordl_internal_set__activator(::System::Runtime::Remoting::Activation::IActivator* value);

  constexpr void __cordl_internal_set__contextProperties(::System::Collections::IList* value);

  constexpr void __cordl_internal_set__isContextOk(bool value);

  constexpr void __cordl_internal_set__sourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value);

  /// @brief Method .ctor, addr 0x2845870, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2833b58, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_ActivationType, addr 0x2845a50, size 0xc8, virtual true, abstract: false, final true
  inline ::System::Type* get_ActivationType();

  /// @brief Method get_ActivationTypeName, addr 0x2845b18, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ActivationTypeName();

  /// @brief Method get_Activator, addr 0x2845b20, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_Activator();

  /// @brief Method get_CallSiteActivationAttributes, addr 0x2845b30, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_CallSiteActivationAttributes();

  /// @brief Method get_ContextProperties, addr 0x2845b40, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Collections::IList* get_ContextProperties();

  /// @brief Method get_IsContextOk, addr 0x2845a3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsContextOk();

  /// @brief Method get_Properties, addr 0x28468a0, size 0x30, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  /// @brief Method get_SourceProxy, addr 0x2846900, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IConstructionCallMessage"
  constexpr ::System::Runtime::Remoting::Activation::IConstructionCallMessage* i___System__Runtime__Remoting__Activation__IConstructionCallMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Method set_Activator, addr 0x2845b28, size 0x8, virtual true, abstract: false, final true
  inline void set_Activator(::System::Runtime::Remoting::Activation::IActivator* value);

  /// @brief Method set_IsContextOk, addr 0x2845a44, size 0xc, virtual false, abstract: false, final false
  inline void set_IsContextOk(bool value);

  /// @brief Method set_SourceProxy, addr 0x2846908, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceProxy(::System::Runtime::Remoting::Proxies::RemotingProxy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructionCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructionCall(ConstructionCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructionCall(ConstructionCall const&) = delete;

  /// @brief Field _activator, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Activation::IActivator* ____activator;

  /// @brief Field _activationAttributes, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____activationAttributes;

  /// @brief Field _contextProperties, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::IList* ____contextProperties;

  /// @brief Field _activationType, offset: 0x80, size: 0x8, def value: None
  ::System::Type* ____activationType;

  /// @brief Field _activationTypeName, offset: 0x88, size: 0x8, def value: None
  ::StringW ____activationTypeName;

  /// @brief Field _isContextOk, offset: 0x90, size: 0x1, def value: None
  bool ____isContextOk;

  /// @brief Field _sourceProxy, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Remoting::Proxies::RemotingProxy* ____sourceProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ConstructionCall, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____activator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____activationAttributes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____contextProperties) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____activationType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____activationTypeName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____isContextOk) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::ConstructionCall, ____sourceProxy) == 0x98, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionCall*, "System.Runtime.Remoting.Messaging", "ConstructionCall");
