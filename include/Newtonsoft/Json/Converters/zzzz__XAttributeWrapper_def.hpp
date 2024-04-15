#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XAttributeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XAttribute;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XAttributeWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XAttributeWrapper);
// Type: Newtonsoft.Json.Converters::XAttributeWrapper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XAttributeWrapper*
class CORDL_TYPE XAttributeWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_Attribute))::System::Xml::Linq::XAttribute* Attribute;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  __declspec(property(get = get_ParentNode))::Newtonsoft::Json::Converters::IXmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  static inline ::Newtonsoft::Json::Converters::XAttributeWrapper* New_ctor(::System::Xml::Linq::XAttribute* attribute);

  /// @brief Method .ctor, addr 0x2990b84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XAttribute* attribute);

  /// @brief Method get_Attribute, addr 0x29917bc, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XAttribute* get_Attribute();

  /// @brief Method get_LocalName, addr 0x29918bc, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x29918e0, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_ParentNode, addr 0x2991904, size 0x44, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0x2991834, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x2991850, size 0x6c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XAttributeWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XAttributeWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XAttributeWrapper(XAttributeWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XAttributeWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XAttributeWrapper(XAttributeWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XAttributeWrapper, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XAttributeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XAttributeWrapper*, "Newtonsoft.Json.Converters", "XAttributeWrapper");
