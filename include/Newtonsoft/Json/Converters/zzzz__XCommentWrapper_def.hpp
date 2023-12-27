#pragma once
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
// Type: Newtonsoft.Json.Converters::XCommentWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12062))
// CS Name: ::Newtonsoft.Json.Converters::XCommentWrapper*
class CORDL_TYPE XCommentWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_Text))::System::Xml::Linq::XComment* Text;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  /// @brief Method get_Text addr 0x26bc73c size 0x78 virtual false final false
  inline ::System::Xml::Linq::XComment* get_Text();

  static inline ::Newtonsoft::Json::Converters::XCommentWrapper* New_ctor(::System::Xml::Linq::XComment* text);

  /// @brief Method .ctor addr 0x26bc7b4 size 0x6c virtual false final false
  inline void _ctor(::System::Xml::Linq::XComment* text);

  /// @brief Method get_Value addr 0x26bc820 size 0x1c virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x26bc83c size 0x24 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_ParentNode addr 0x26bc860 size 0x44 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  // Ctor Parameters [CppParam { name: "", ty: "XCommentWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XCommentWrapper(XCommentWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XCommentWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XCommentWrapper(XCommentWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XCommentWrapper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XCommentWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XCommentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XCommentWrapper*, "Newtonsoft.Json.Converters", "XCommentWrapper");
