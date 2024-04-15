#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlElementWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlElementWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlElementWrapper);
// Type: Newtonsoft.Json.Converters::XmlElementWrapper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::XmlElementWrapper*
class CORDL_TYPE XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Field _element, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__element, put = __cordl_internal_set__element))::System::Xml::XmlElement* _element;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlElement*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method GetPrefixOfNamespace, addr 0x298eda8, size 0x24, virtual true, abstract: false, final true
  inline ::StringW GetPrefixOfNamespace(::StringW namespaceUri);

  static inline ::Newtonsoft::Json::Converters::XmlElementWrapper* New_ctor(::System::Xml::XmlElement* element);

  /// @brief Method SetAttributeNode, addr 0x298ecc0, size 0xe8, virtual true, abstract: false, final true
  inline void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get__element();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& __cordl_internal_get__element() const;

  constexpr void __cordl_internal_set__element(::System::Xml::XmlElement* value);

  /// @brief Method .ctor, addr 0x298e9e8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlElement* element);

  /// @brief Method get_IsEmpty, addr 0x298edcc, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlElement"
  constexpr ::Newtonsoft::Json::Converters::IXmlElement* i___Newtonsoft__Json__Converters__IXmlElement() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementWrapper(XmlElementWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementWrapper(XmlElementWrapper const&) = delete;

  /// @brief Field _element, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlElement* ____element;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlElementWrapper, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlElementWrapper, ____element) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlElementWrapper*, "Newtonsoft.Json.Converters", "XmlElementWrapper");
