#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttributes)
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class XmlAnyAttributeAttribute;
}
namespace System::Xml::Serialization {
class XmlAnyElementAttributes;
}
namespace System::Xml::Serialization {
class XmlArrayAttribute;
}
namespace System::Xml::Serialization {
class XmlArrayItemAttributes;
}
namespace System::Xml::Serialization {
class XmlAttributeAttribute;
}
namespace System::Xml::Serialization {
class XmlChoiceIdentifierAttribute;
}
namespace System::Xml::Serialization {
class XmlElementAttributes;
}
namespace System::Xml::Serialization {
class XmlEnumAttribute;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlTextAttribute;
}
namespace System::Xml::Serialization {
class XmlTypeAttribute;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributes);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAttributes
class CORDL_TYPE XmlAttributes : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Order)) ::System::Nullable_1<int32_t> Order;

  __declspec(property(get = get_SortableOrder)) int32_t SortableOrder;

  __declspec(property(get = get_XmlAnyAttribute)) ::System::Xml::Serialization::XmlAnyAttributeAttribute* XmlAnyAttribute;

  __declspec(property(get = get_XmlAnyElements)) ::System::Xml::Serialization::XmlAnyElementAttributes* XmlAnyElements;

  __declspec(property(get = get_XmlArray)) ::System::Xml::Serialization::XmlArrayAttribute* XmlArray;

  __declspec(property(get = get_XmlArrayItems)) ::System::Xml::Serialization::XmlArrayItemAttributes* XmlArrayItems;

  __declspec(property(get = get_XmlAttribute)) ::System::Xml::Serialization::XmlAttributeAttribute* XmlAttribute;

  __declspec(property(get = get_XmlChoiceIdentifier)) ::System::Xml::Serialization::XmlChoiceIdentifierAttribute* XmlChoiceIdentifier;

  __declspec(property(get = get_XmlDefaultValue)) ::System::Object* XmlDefaultValue;

  __declspec(property(get = get_XmlElements)) ::System::Xml::Serialization::XmlElementAttributes* XmlElements;

  __declspec(property(get = get_XmlIgnore)) bool XmlIgnore;

  __declspec(property(get = get_XmlRoot)) ::System::Xml::Serialization::XmlRootAttribute* XmlRoot;

  __declspec(property(get = get_XmlText)) ::System::Xml::Serialization::XmlTextAttribute* XmlText;

  __declspec(property(get = get_XmlType)) ::System::Xml::Serialization::XmlTypeAttribute* XmlType;

  __declspec(property(get = get_Xmlns)) bool Xmlns;

  /// @brief Field xmlAnyAttribute, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlAnyAttribute, put = __cordl_internal_set_xmlAnyAttribute)) ::System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute;

  /// @brief Field xmlAnyElements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlAnyElements, put = __cordl_internal_set_xmlAnyElements)) ::System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements;

  /// @brief Field xmlArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlArray, put = __cordl_internal_set_xmlArray)) ::System::Xml::Serialization::XmlArrayAttribute* xmlArray;

  /// @brief Field xmlArrayItems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlArrayItems, put = __cordl_internal_set_xmlArrayItems)) ::System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems;

  /// @brief Field xmlAttribute, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlAttribute, put = __cordl_internal_set_xmlAttribute)) ::System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute;

  /// @brief Field xmlChoiceIdentifier, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlChoiceIdentifier, put = __cordl_internal_set_xmlChoiceIdentifier)) ::System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier;

  /// @brief Field xmlDefaultValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlDefaultValue, put = __cordl_internal_set_xmlDefaultValue)) ::System::Object* xmlDefaultValue;

  /// @brief Field xmlElements, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlElements, put = __cordl_internal_set_xmlElements)) ::System::Xml::Serialization::XmlElementAttributes* xmlElements;

  /// @brief Field xmlEnum, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlEnum, put = __cordl_internal_set_xmlEnum)) ::System::Xml::Serialization::XmlEnumAttribute* xmlEnum;

  /// @brief Field xmlIgnore, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlIgnore, put = __cordl_internal_set_xmlIgnore)) bool xmlIgnore;

  /// @brief Field xmlRoot, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlRoot, put = __cordl_internal_set_xmlRoot)) ::System::Xml::Serialization::XmlRootAttribute* xmlRoot;

  /// @brief Field xmlText, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlText, put = __cordl_internal_set_xmlText)) ::System::Xml::Serialization::XmlTextAttribute* xmlText;

  /// @brief Field xmlType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlType, put = __cordl_internal_set_xmlType)) ::System::Xml::Serialization::XmlTypeAttribute* xmlType;

  /// @brief Field xmlns, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlns, put = __cordl_internal_set_xmlns)) bool xmlns;

  /// @brief Method AddKeyHash, addr 0x437cdc8, size 0x270, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlAttributes* New_ctor();

  static inline ::System::Xml::Serialization::XmlAttributes* New_ctor(::System::Reflection::ICustomAttributeProvider* provider);

  constexpr ::System::Xml::Serialization::XmlAnyAttributeAttribute* const& __cordl_internal_get_xmlAnyAttribute() const;

  constexpr ::System::Xml::Serialization::XmlAnyAttributeAttribute*& __cordl_internal_get_xmlAnyAttribute();

  constexpr ::System::Xml::Serialization::XmlAnyElementAttributes* const& __cordl_internal_get_xmlAnyElements() const;

  constexpr ::System::Xml::Serialization::XmlAnyElementAttributes*& __cordl_internal_get_xmlAnyElements();

  constexpr ::System::Xml::Serialization::XmlArrayAttribute* const& __cordl_internal_get_xmlArray() const;

  constexpr ::System::Xml::Serialization::XmlArrayAttribute*& __cordl_internal_get_xmlArray();

  constexpr ::System::Xml::Serialization::XmlArrayItemAttributes* const& __cordl_internal_get_xmlArrayItems() const;

  constexpr ::System::Xml::Serialization::XmlArrayItemAttributes*& __cordl_internal_get_xmlArrayItems();

  constexpr ::System::Xml::Serialization::XmlAttributeAttribute* const& __cordl_internal_get_xmlAttribute() const;

  constexpr ::System::Xml::Serialization::XmlAttributeAttribute*& __cordl_internal_get_xmlAttribute();

  constexpr ::System::Xml::Serialization::XmlChoiceIdentifierAttribute* const& __cordl_internal_get_xmlChoiceIdentifier() const;

  constexpr ::System::Xml::Serialization::XmlChoiceIdentifierAttribute*& __cordl_internal_get_xmlChoiceIdentifier();

  constexpr ::System::Object* const& __cordl_internal_get_xmlDefaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get_xmlDefaultValue();

  constexpr ::System::Xml::Serialization::XmlElementAttributes* const& __cordl_internal_get_xmlElements() const;

  constexpr ::System::Xml::Serialization::XmlElementAttributes*& __cordl_internal_get_xmlElements();

  constexpr ::System::Xml::Serialization::XmlEnumAttribute* const& __cordl_internal_get_xmlEnum() const;

  constexpr ::System::Xml::Serialization::XmlEnumAttribute*& __cordl_internal_get_xmlEnum();

  constexpr bool const& __cordl_internal_get_xmlIgnore() const;

  constexpr bool& __cordl_internal_get_xmlIgnore();

  constexpr ::System::Xml::Serialization::XmlRootAttribute* const& __cordl_internal_get_xmlRoot() const;

  constexpr ::System::Xml::Serialization::XmlRootAttribute*& __cordl_internal_get_xmlRoot();

  constexpr ::System::Xml::Serialization::XmlTextAttribute* const& __cordl_internal_get_xmlText() const;

  constexpr ::System::Xml::Serialization::XmlTextAttribute*& __cordl_internal_get_xmlText();

  constexpr ::System::Xml::Serialization::XmlTypeAttribute* const& __cordl_internal_get_xmlType() const;

  constexpr ::System::Xml::Serialization::XmlTypeAttribute*& __cordl_internal_get_xmlType();

  constexpr bool const& __cordl_internal_get_xmlns() const;

  constexpr bool& __cordl_internal_get_xmlns();

  constexpr void __cordl_internal_set_xmlAnyAttribute(::System::Xml::Serialization::XmlAnyAttributeAttribute* value);

  constexpr void __cordl_internal_set_xmlAnyElements(::System::Xml::Serialization::XmlAnyElementAttributes* value);

  constexpr void __cordl_internal_set_xmlArray(::System::Xml::Serialization::XmlArrayAttribute* value);

  constexpr void __cordl_internal_set_xmlArrayItems(::System::Xml::Serialization::XmlArrayItemAttributes* value);

  constexpr void __cordl_internal_set_xmlAttribute(::System::Xml::Serialization::XmlAttributeAttribute* value);

  constexpr void __cordl_internal_set_xmlChoiceIdentifier(::System::Xml::Serialization::XmlChoiceIdentifierAttribute* value);

  constexpr void __cordl_internal_set_xmlDefaultValue(::System::Object* value);

  constexpr void __cordl_internal_set_xmlElements(::System::Xml::Serialization::XmlElementAttributes* value);

  constexpr void __cordl_internal_set_xmlEnum(::System::Xml::Serialization::XmlEnumAttribute* value);

  constexpr void __cordl_internal_set_xmlIgnore(bool value);

  constexpr void __cordl_internal_set_xmlRoot(::System::Xml::Serialization::XmlRootAttribute* value);

  constexpr void __cordl_internal_set_xmlText(::System::Xml::Serialization::XmlTextAttribute* value);

  constexpr void __cordl_internal_set_xmlType(::System::Xml::Serialization::XmlTypeAttribute* value);

  constexpr void __cordl_internal_set_xmlns(bool value);

  /// @brief Method .ctor, addr 0x437d038, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x437d134, size 0x62c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ICustomAttributeProvider* provider);

  /// @brief Method get_Order, addr 0x437e8b0, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Order();

  /// @brief Method get_SortableOrder, addr 0x437ec38, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_SortableOrder();

  /// @brief Method get_XmlAnyAttribute, addr 0x437d818, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAnyAttributeAttribute* get_XmlAnyAttribute();

  /// @brief Method get_XmlAnyElements, addr 0x437d820, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAnyElementAttributes* get_XmlAnyElements();

  /// @brief Method get_XmlArray, addr 0x437d828, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlArrayAttribute* get_XmlArray();

  /// @brief Method get_XmlArrayItems, addr 0x437d830, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlArrayItemAttributes* get_XmlArrayItems();

  /// @brief Method get_XmlAttribute, addr 0x437d838, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAttributeAttribute* get_XmlAttribute();

  /// @brief Method get_XmlChoiceIdentifier, addr 0x437d840, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlChoiceIdentifierAttribute* get_XmlChoiceIdentifier();

  /// @brief Method get_XmlDefaultValue, addr 0x437d848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_XmlDefaultValue();

  /// @brief Method get_XmlElements, addr 0x437d850, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlElementAttributes* get_XmlElements();

  /// @brief Method get_XmlIgnore, addr 0x437d858, size 0x8, virtual false, abstract: false, final false
  inline bool get_XmlIgnore();

  /// @brief Method get_XmlRoot, addr 0x437d868, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlRootAttribute* get_XmlRoot();

  /// @brief Method get_XmlText, addr 0x437d870, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTextAttribute* get_XmlText();

  /// @brief Method get_XmlType, addr 0x437d878, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeAttribute* get_XmlType();

  /// @brief Method get_Xmlns, addr 0x437d860, size 0x8, virtual false, abstract: false, final false
  inline bool get_Xmlns();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributes(XmlAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributes(XmlAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7414 };

  /// @brief Field xmlAnyAttribute, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAnyAttributeAttribute* ___xmlAnyAttribute;

  /// @brief Field xmlAnyElements, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAnyElementAttributes* ___xmlAnyElements;

  /// @brief Field xmlArray, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlArrayAttribute* ___xmlArray;

  /// @brief Field xmlArrayItems, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlArrayItemAttributes* ___xmlArrayItems;

  /// @brief Field xmlAttribute, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAttributeAttribute* ___xmlAttribute;

  /// @brief Field xmlChoiceIdentifier, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlChoiceIdentifierAttribute* ___xmlChoiceIdentifier;

  /// @brief Field xmlDefaultValue, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___xmlDefaultValue;

  /// @brief Field xmlElements, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlElementAttributes* ___xmlElements;

  /// @brief Field xmlEnum, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlEnumAttribute* ___xmlEnum;

  /// @brief Field xmlIgnore, offset: 0x58, size: 0x1, def value: None
  bool ___xmlIgnore;

  /// @brief Field xmlns, offset: 0x59, size: 0x1, def value: None
  bool ___xmlns;

  /// @brief Field xmlRoot, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlRootAttribute* ___xmlRoot;

  /// @brief Field xmlText, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTextAttribute* ___xmlText;

  /// @brief Field xmlType, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeAttribute* ___xmlType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlAnyAttribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlAnyElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlArrayItems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlChoiceIdentifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlDefaultValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlElements) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlEnum) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlIgnore) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlns) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributes, ___xmlType) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributes, 0x78>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributes*, "System.Xml.Serialization", "XmlAttributes");
