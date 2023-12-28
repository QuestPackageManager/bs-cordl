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
namespace System::Xml {
class XmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12049))
// CS Name: ::Newtonsoft.Json.Converters::XmlElementWrapper*
class CORDL_TYPE XmlElementWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  /// @brief Field _element, offset 0x28, size 0x8
  __declspec(property(get = __get__element, put = __set__element))::System::Xml::XmlElement* _element;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlElement"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlElement*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  constexpr ::System::Xml::XmlElement*& __get__element();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& __get__element() const;

  constexpr void __set__element(::System::Xml::XmlElement* value);

  static inline ::Newtonsoft::Json::Converters::XmlElementWrapper* New_ctor(::System::Xml::XmlElement* element);

  /// @brief Method .ctor addr 0x26b9dac size 0x2c virtual false final false
  inline void _ctor(::System::Xml::XmlElement* element);

  /// @brief Method SetAttributeNode addr 0x26ba084 size 0xe8 virtual true final true
  inline void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);

  /// @brief Method GetPrefixOfNamespace addr 0x26ba16c size 0x24 virtual true final true
  inline ::StringW GetPrefixOfNamespace(::StringW namespaceUri);

  /// @brief Method get_IsEmpty addr 0x26ba190 size 0x1c virtual true final true
  inline bool get_IsEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementWrapper(XmlElementWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementWrapper(XmlElementWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementWrapper();

public:
  /// @brief Field _element, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlElement* ____element;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlElementWrapper, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlElementWrapper*, "Newtonsoft.Json.Converters", "XmlElementWrapper");
