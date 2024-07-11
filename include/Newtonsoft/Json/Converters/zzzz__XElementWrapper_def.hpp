#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XElementWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XElementWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Linq {
class XElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XElementWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XElementWrapper);
// Type: Newtonsoft.Json.Converters::XElementWrapper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XElementWrapper*
class CORDL_TYPE XElementWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* Attributes;

  __declspec(property(get = get_Element))::System::Xml::Linq::XElement* Element;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceUri))::StringW NamespaceUri;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field _attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* _attributes;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlElement*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method AppendChild, addr 0x2ac2e04, size 0x18, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  /// @brief Method GetPrefixOfNamespace, addr 0x2ac2dc4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW GetPrefixOfNamespace(::StringW namespaceUri);

  /// @brief Method HasImplicitNamespaceAttribute, addr 0x2ac2914, size 0x4b0, virtual false, abstract: false, final false
  inline bool HasImplicitNamespaceAttribute(::StringW namespaceUri);

  static inline ::Newtonsoft::Json::Converters::XElementWrapper* New_ctor(::System::Xml::Linq::XElement* element);

  /// @brief Method SetAttributeNode, addr 0x2ac2310, size 0xa4, virtual true, abstract: false, final true
  inline void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*& __cordl_internal_get__attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>*> const& __cordl_internal_get__attributes() const;

  constexpr void __cordl_internal_set__attributes(::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* value);

  /// @brief Method .ctor, addr 0x2ac1334, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XElement* element);

  /// @brief Method get_Attributes, addr 0x2ac23b4, size 0x560, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_Attributes();

  /// @brief Method get_Element, addr 0x2ac2298, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XElement* get_Element();

  /// @brief Method get_IsEmpty, addr 0x2ac2eec, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_LocalName, addr 0x2ac2ea4, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceUri, addr 0x2ac2ec8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceUri();

  /// @brief Method get_Value, addr 0x2ac2e1c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlElement"
  constexpr ::Newtonsoft::Json::Converters::IXmlElement* i___Newtonsoft__Json__Converters__IXmlElement() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Value, addr 0x2ac2e38, size 0x6c, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XElementWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XElementWrapper(XElementWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XElementWrapper(XElementWrapper const&) = delete;

  /// @brief Field _attributes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ____attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XElementWrapper, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XElementWrapper, ____attributes) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XElementWrapper*, "Newtonsoft.Json.Converters", "XElementWrapper");
