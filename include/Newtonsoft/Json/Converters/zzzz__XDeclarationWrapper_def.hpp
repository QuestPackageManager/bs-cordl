#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XDeclarationWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlDeclaration_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDeclarationWrapper)
namespace System::Xml::Linq {
class XDeclaration;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDeclarationWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XDeclarationWrapper);
// Dependencies Newtonsoft.Json.Converters.IXmlDeclaration, Newtonsoft.Json.Converters.IXmlNode, Newtonsoft.Json.Converters.XObjectWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XDeclarationWrapper
class CORDL_TYPE XDeclarationWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  __declspec(property(get = get_Declaration)) ::System::Xml::Linq::XDeclaration* Declaration;

  __declspec(property(get = get_Encoding, put = set_Encoding)) ::StringW Encoding;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Standalone, put = set_Standalone)) ::StringW Standalone;

  __declspec(property(get = get_Version)) ::StringW Version;

  /// @brief Field <Declaration>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Declaration_k__BackingField,
                      put = __cordl_internal_set__Declaration_k__BackingField)) ::System::Xml::Linq::XDeclaration* _Declaration_k__BackingField;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  static inline ::Newtonsoft::Json::Converters::XDeclarationWrapper* New_ctor(::System::Xml::Linq::XDeclaration* declaration);

  constexpr ::System::Xml::Linq::XDeclaration* const& __cordl_internal_get__Declaration_k__BackingField() const;

  constexpr ::System::Xml::Linq::XDeclaration*& __cordl_internal_get__Declaration_k__BackingField();

  constexpr void __cordl_internal_set__Declaration_k__BackingField(::System::Xml::Linq::XDeclaration* value);

  /// @brief Method .ctor, addr 0x3f44754, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XDeclaration* declaration);

  /// @brief Method get_Declaration, addr 0x3f4474c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XDeclaration* get_Declaration();

  /// @brief Method get_Encoding, addr 0x3f447c8, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Encoding();

  /// @brief Method get_NodeType, addr 0x3f447a4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Standalone, addr 0x3f44800, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Standalone();

  /// @brief Method get_Version, addr 0x3f447ac, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Version();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDeclaration"
  constexpr ::Newtonsoft::Json::Converters::IXmlDeclaration* i___Newtonsoft__Json__Converters__IXmlDeclaration() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Encoding, addr 0x3f447e4, size 0x1c, virtual true, abstract: false, final true
  inline void set_Encoding(::StringW value);

  /// @brief Method set_Standalone, addr 0x3f4481c, size 0x1c, virtual true, abstract: false, final true
  inline void set_Standalone(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDeclarationWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDeclarationWrapper(XDeclarationWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDeclarationWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDeclarationWrapper(XDeclarationWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10494 };

  /// @brief Field <Declaration>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XDeclaration* ____Declaration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::XDeclarationWrapper, ____Declaration_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XDeclarationWrapper, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDeclarationWrapper*, "Newtonsoft.Json.Converters", "XDeclarationWrapper");
