#pragma once
// IWYU pragma private; include "System/Xml/Schema/AutoValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AutoValidator)
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
struct ValidationType;
}
namespace System::Xml {
class XmlValidatingReaderImpl;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class AutoValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::AutoValidator);
// Dependencies System.Xml.Schema.BaseValidator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.AutoValidator
class CORDL_TYPE AutoValidator : public ::System::Xml::Schema::BaseValidator {
public:
  // Declarations
  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  /// @brief Method CompleteValidation, addr 0x4395fc8, size 0x4, virtual true, abstract: false, final false
  inline void CompleteValidation();

  /// @brief Method DetectValidationType, addr 0x4395c84, size 0x344, virtual false, abstract: false, final false
  inline ::System::Xml::ValidationType DetectValidationType();

  /// @brief Method FindId, addr 0x4395fcc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  static inline ::System::Xml::Schema::AutoValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                               ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method Validate, addr 0x4395ba8, size 0xdc, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method .ctor, addr 0x4395a68, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method get_PreserveWhitespace, addr 0x4395ba0, size 0x8, virtual true, abstract: false, final false
  inline bool get_PreserveWhitespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoValidator(AutoValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoValidator(AutoValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::AutoValidator, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::AutoValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AutoValidator*, "System.Xml.Schema", "AutoValidator");
