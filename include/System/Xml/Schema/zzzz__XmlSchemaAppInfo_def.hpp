#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAppInfo)
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAppInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAppInfo);
// Type: System.Xml.Schema::XmlSchemaAppInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaAppInfo*
class CORDL_TYPE XmlSchemaAppInfo : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_Markup, put = set_Markup))::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> Markup;

  __declspec(property(put = set_Source))::StringW Source;

  /// @brief Field markup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_markup, put = __cordl_internal_set_markup))::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup;

  /// @brief Field source, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::StringW source;

  static inline ::System::Xml::Schema::XmlSchemaAppInfo* New_ctor();

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> const& __cordl_internal_get_markup() const;

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>& __cordl_internal_get_markup();

  constexpr ::StringW const& __cordl_internal_get_source() const;

  constexpr ::StringW& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value);

  constexpr void __cordl_internal_set_source(::StringW value);

  /// @brief Method .ctor, addr 0x2d0fb38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Markup, addr 0x2d0fb28, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> get_Markup();

  /// @brief Method set_Markup, addr 0x2d0fb30, size 0x8, virtual false, abstract: false, final false
  inline void set_Markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value);

  /// @brief Method set_Source, addr 0x2d0fb20, size 0x8, virtual false, abstract: false, final false
  inline void set_Source(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAppInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAppInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAppInfo(XmlSchemaAppInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAppInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAppInfo(XmlSchemaAppInfo const&) = delete;

  /// @brief Field source, offset: 0x38, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field markup, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> ___markup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAppInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAppInfo, ___source) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAppInfo, ___markup) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAppInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAppInfo*, "System.Xml.Schema", "XmlSchemaAppInfo");
