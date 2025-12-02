#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XTextWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XTextWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XText;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XTextWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XTextWrapper);
// Dependencies Newtonsoft.Json.Converters.XObjectWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XTextWrapper
class CORDL_TYPE XTextWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_ParentNode)) ::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Text)) ::System::Xml::Linq::XText* Text;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  static inline ::Newtonsoft::Json::Converters::XTextWrapper* New_ctor(::System::Xml::Linq::XText* text);

  /// @brief Method .ctor, addr 0x5b8c464, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XText* text);

  /// @brief Method get_ParentNode, addr 0x5b8c4c0, size 0x44, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Text, addr 0x5b8c3e8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XText* get_Text();

  /// @brief Method get_Value, addr 0x5b8c46c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x5b8c488, size 0x38, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XTextWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XTextWrapper(XTextWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XTextWrapper(XTextWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XTextWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XTextWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XTextWrapper*, "Newtonsoft.Json.Converters", "XTextWrapper");
