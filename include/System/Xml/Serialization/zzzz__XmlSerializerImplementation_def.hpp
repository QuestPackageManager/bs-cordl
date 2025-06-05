#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializerImplementation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSerializerImplementation)
namespace System::Xml::Serialization {
class XmlSerializationWriter;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializerImplementation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializerImplementation);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializerImplementation
class CORDL_TYPE XmlSerializerImplementation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Writer)) ::System::Xml::Serialization::XmlSerializationWriter* Writer;

  /// @brief Method get_Writer, addr 0x438f168, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::Serialization::XmlSerializationWriter* get_Writer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializerImplementation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerImplementation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializerImplementation(XmlSerializerImplementation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializerImplementation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializerImplementation(XmlSerializerImplementation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializerImplementation, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializerImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializerImplementation*, "System.Xml.Serialization", "XmlSerializerImplementation");
