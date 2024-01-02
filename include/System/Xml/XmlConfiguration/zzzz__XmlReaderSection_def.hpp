#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlReaderSection)
// Forward declare root types
namespace System::Xml::XmlConfiguration {
class XmlReaderSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlConfiguration::XmlReaderSection);
// Type: System.Xml.XmlConfiguration::XmlReaderSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::XmlConfiguration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11591))
// CS Name: ::System.Xml.XmlConfiguration::XmlReaderSection*
class CORDL_TYPE XmlReaderSection : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_ProhibitDefaultUrlResolver, addr 0x28abf90, size 0x8, virtual false, abstract: false, final false
  static inline bool get_ProhibitDefaultUrlResolver();

  /// @brief Method get_CollapseWhiteSpaceIntoEmptyString, addr 0x289e1d8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_CollapseWhiteSpaceIntoEmptyString();

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReaderSection(XmlReaderSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReaderSection(XmlReaderSection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReaderSection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlConfiguration::XmlReaderSection, 0x10>, "Size mismatch!");

} // namespace System::Xml::XmlConfiguration
NEED_NO_BOX(::System::Xml::XmlConfiguration::XmlReaderSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlConfiguration::XmlReaderSection*, "System.Xml.XmlConfiguration", "XmlReaderSection");
