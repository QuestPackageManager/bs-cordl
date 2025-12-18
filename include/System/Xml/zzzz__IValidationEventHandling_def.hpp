#pragma once
// IWYU pragma private; include "System/Xml/IValidationEventHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IValidationEventHandling)
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class IValidationEventHandling;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IValidationEventHandling);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IValidationEventHandling
class CORDL_TYPE IValidationEventHandling {
public:
  // Declarations
  __declspec(property(get = get_EventHandler)) ::System::Object* EventHandler;

  /// @brief Method SendEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method get_EventHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_EventHandler();

  // Ctor Parameters [CppParam { name: "", ty: "IValidationEventHandling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValidationEventHandling(IValidationEventHandling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IValidationEventHandling);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IValidationEventHandling*, "System.Xml", "IValidationEventHandling");
