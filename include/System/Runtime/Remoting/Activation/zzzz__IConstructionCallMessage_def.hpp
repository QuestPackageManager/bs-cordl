#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConstructionCallMessage)
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Activation {
class IActivator;
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::IConstructionCallMessage);
// Type: System.Runtime.Remoting.Activation::IConstructionCallMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Activation::IConstructionCallMessage*
class CORDL_TYPE IConstructionCallMessage {
public:
  // Declarations
  __declspec(property(get = get_ActivationType)) ::System::Type* ActivationType;

  __declspec(property(get = get_ActivationTypeName)) ::StringW ActivationTypeName;

  __declspec(property(get = get_Activator, put = set_Activator)) ::System::Runtime::Remoting::Activation::IActivator* Activator;

  __declspec(property(get = get_CallSiteActivationAttributes)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> CallSiteActivationAttributes;

  __declspec(property(get = get_ContextProperties)) ::System::Collections::IList* ContextProperties;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Method get_ActivationType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ActivationType();

  /// @brief Method get_ActivationTypeName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ActivationTypeName();

  /// @brief Method get_Activator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Activation::IActivator* get_Activator();

  /// @brief Method get_CallSiteActivationAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_CallSiteActivationAttributes();

  /// @brief Method get_ContextProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IList* get_ContextProperties();

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodCallMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodCallMessage* i___System__Runtime__Remoting__Messaging__IMethodCallMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Method set_Activator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Activator(::System::Runtime::Remoting::Activation::IActivator* value);

  // Ctor Parameters [CppParam { name: "", ty: "IConstructionCallMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConstructionCallMessage(IConstructionCallMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConstructionCallMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConstructionCallMessage(IConstructionCallMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3133 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IConstructionCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
