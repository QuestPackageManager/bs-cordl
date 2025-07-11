#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDeclarationWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlDeclaration_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDeclarationWrapper)
namespace System::Xml {
class XmlDeclaration;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDeclarationWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDeclarationWrapper);
// Dependencies Newtonsoft.Json.Converters.IXmlDeclaration, Newtonsoft.Json.Converters.IXmlNode, Newtonsoft.Json.Converters.XmlNodeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XmlDeclarationWrapper
class CORDL_TYPE XmlDeclarationWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  __declspec(property(get = get_Encoding, put = set_Encoding)) ::StringW Encoding;

  __declspec(property(get = get_Standalone, put = set_Standalone)) ::StringW Standalone;

  __declspec(property(get = get_Version)) ::StringW Version;

  /// @brief Field _declaration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__declaration, put = __cordl_internal_set__declaration)) ::System::Xml::XmlDeclaration* _declaration;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDeclaration"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDeclaration*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  static inline ::Newtonsoft::Json::Converters::XmlDeclarationWrapper* New_ctor(::System::Xml::XmlDeclaration* declaration);

  constexpr ::System::Xml::XmlDeclaration* const& __cordl_internal_get__declaration() const;

  constexpr ::System::Xml::XmlDeclaration*& __cordl_internal_get__declaration();

  constexpr void __cordl_internal_set__declaration(::System::Xml::XmlDeclaration* value);

  /// @brief Method .ctor, addr 0x3f43388, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDeclaration* declaration);

  /// @brief Method get_Encoding, addr 0x3f439b0, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Encoding();

  /// @brief Method get_Standalone, addr 0x3f439e8, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Standalone();

  /// @brief Method get_Version, addr 0x3f43994, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW get_Version();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDeclaration"
  constexpr ::Newtonsoft::Json::Converters::IXmlDeclaration* i___Newtonsoft__Json__Converters__IXmlDeclaration() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Encoding, addr 0x3f439cc, size 0x1c, virtual true, abstract: false, final true
  inline void set_Encoding(::StringW value);

  /// @brief Method set_Standalone, addr 0x3f43a04, size 0x1c, virtual true, abstract: false, final true
  inline void set_Standalone(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDeclarationWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDeclarationWrapper(XmlDeclarationWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDeclarationWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDeclarationWrapper(XmlDeclarationWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10486 };

  /// @brief Field _declaration, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDeclaration* ____declaration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::XmlDeclarationWrapper, ____declaration) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDeclarationWrapper, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDeclarationWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDeclarationWrapper*, "Newtonsoft.Json.Converters", "XmlDeclarationWrapper");
