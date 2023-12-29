#pragma once
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
// Type: Newtonsoft.Json.Converters::XTextWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11993))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11989))
// CS Name: ::Newtonsoft.Json.Converters::XTextWrapper*
class CORDL_TYPE XTextWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_Text))::System::Xml::Linq::XText* Text;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  /// @brief Method get_Text addr 0x2557a00 size 0x78 virtual false final false
  inline ::System::Xml::Linq::XText* get_Text();

  static inline ::Newtonsoft::Json::Converters::XTextWrapper* New_ctor(::System::Xml::Linq::XText* text);

  /// @brief Method .ctor addr 0x2557a78 size 0x6c virtual false final false
  inline void _ctor(::System::Xml::Linq::XText* text);

  /// @brief Method get_Value addr 0x2557ae4 size 0x1c virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x2557b00 size 0x24 virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_ParentNode addr 0x2557b24 size 0x44 virtual true final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  // Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XTextWrapper(XTextWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XTextWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XTextWrapper(XTextWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XTextWrapper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XTextWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XTextWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XTextWrapper*, "Newtonsoft.Json.Converters", "XTextWrapper");
