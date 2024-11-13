#pragma once
// IWYU pragma private; include "System/Xml/XmlCDataSection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlCDataSection)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlCDataSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlCDataSection);
// Type: System.Xml::XmlCDataSection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlCDataSection*
class CORDL_TYPE XmlCDataSection : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_IsText)) bool IsText;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode)) ::System::Xml::XmlNode* ParentNode;

  /// @brief Method CloneNode, addr 0x42d2b5c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlCDataSection* New_ctor(::StringW data, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0x42d2bf8, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x42d2bb8, size 0x40, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  /// @brief Method .ctor, addr 0x42d2a28, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW data, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_IsText, addr 0x42d2bfc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  /// @brief Method get_LocalName, addr 0x42d2aa8, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x42d2a80, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x42d2ad0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0x42d2ad8, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCDataSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCDataSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCDataSection(XmlCDataSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCDataSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCDataSection(XmlCDataSection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCDataSection, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlCDataSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCDataSection*, "System.Xml", "XmlCDataSection");
