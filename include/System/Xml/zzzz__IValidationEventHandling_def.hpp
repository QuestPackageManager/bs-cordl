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
// Type: System.Xml::IValidationEventHandling
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IValidationEventHandling*
class CORDL_TYPE IValidationEventHandling {
public:
  // Declarations
  __declspec(property(get = get_EventHandler)) ::System::Object* EventHandler;

  /// @brief Method SendEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method get_EventHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_EventHandler();

  // Ctor Parameters [CppParam { name: "", ty: "IValidationEventHandling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValidationEventHandling(IValidationEventHandling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValidationEventHandling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValidationEventHandling(IValidationEventHandling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7164 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IValidationEventHandling);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IValidationEventHandling*, "System.Xml", "IValidationEventHandling");
