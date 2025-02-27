#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XCommentWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XCommentWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XComment;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XCommentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XCommentWrapper);
// Dependencies Newtonsoft.Json.Converters.XObjectWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XCommentWrapper
class CORDL_TYPE XCommentWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_ParentNode)) ::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Text)) ::System::Xml::Linq::XComment* Text;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  static inline ::Newtonsoft::Json::Converters::XCommentWrapper* New_ctor(::System::Xml::Linq::XComment* text);

  /// @brief Method .ctor, addr 0x3f5375c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XComment* text);

  /// @brief Method get_ParentNode, addr 0x3f5380c, size 0x44, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Text, addr 0x3f536e4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XComment* get_Text();

  /// @brief Method get_Value, addr 0x3f53784, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x3f537a0, size 0x6c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XCommentWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XCommentWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XCommentWrapper(XCommentWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XCommentWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XCommentWrapper(XCommentWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10498 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XCommentWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XCommentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XCommentWrapper*, "Newtonsoft.Json.Converters", "XCommentWrapper");
