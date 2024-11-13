#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/IXmlElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlElement)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IXmlElement);
// Type: Newtonsoft.Json.Converters::IXmlElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::IXmlElement*
class CORDL_TYPE IXmlElement {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method GetPrefixOfNamespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetPrefixOfNamespace(::StringW namespaceUri);

  /// @brief Method SetAttributeNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode* attribute);

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlElement(IXmlElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlElement(IXmlElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10462 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlElement);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlElement*, "Newtonsoft.Json.Converters", "IXmlElement");
