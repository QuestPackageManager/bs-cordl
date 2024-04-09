#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlComment)
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
class XmlComment;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlComment);
// Type: System.Xml::XmlComment
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlComment*
class CORDL_TYPE XmlComment : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  /// @brief Method CloneNode, addr 0x2d8fac4, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlComment* New_ctor(::StringW comment, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0x2d8fb60, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x2d8fb20, size 0x40, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  /// @brief Method .ctor, addr 0x2d8fa40, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW comment, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_LocalName, addr 0x2d8fa94, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x2d8fa6c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x2d8fabc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlComment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlComment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlComment(XmlComment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlComment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlComment(XmlComment const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlComment, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlComment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlComment*, "System.Xml", "XmlComment");
