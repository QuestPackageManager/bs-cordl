#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/ConstructionCallDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConstructionCallDictionary)
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ConstructionCallDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ConstructionCallDictionary);
// Dependencies System.Runtime.Remoting.Messaging.MessageDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.ConstructionCallDictionary
class CORDL_TYPE ConstructionCallDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary {
public:
  // Declarations
  /// @brief Field InternalKeys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InternalKeys, put = setStaticF_InternalKeys)) ::ArrayW<::StringW, ::Array<::StringW>*> InternalKeys;

  /// @brief Method GetMethodProperty, addr 0x3cebeb8, size 0x3cc, virtual true, abstract: false, final false
  inline ::System::Object* GetMethodProperty(::StringW key);

  static inline ::System::Runtime::Remoting::Messaging::ConstructionCallDictionary* New_ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message);

  /// @brief Method SetMethodProperty, addr 0x3cec7e8, size 0x268, virtual true, abstract: false, final false
  inline void SetMethodProperty(::StringW key, ::System::Object* value);

  /// @brief Method .ctor, addr 0x3ceaf08, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* message);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InternalKeys();

  static inline void setStaticF_InternalKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructionCallDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructionCallDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructionCallDictionary(ConstructionCallDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructionCallDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructionCallDictionary(ConstructionCallDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ConstructionCallDictionary, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionCallDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
