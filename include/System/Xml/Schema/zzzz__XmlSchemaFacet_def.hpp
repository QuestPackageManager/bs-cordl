#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaFacet)
namespace System::Xml::Schema {
struct FacetType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaFacet);
// Type: System.Xml.Schema::XmlSchemaFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaFacet*
class CORDL_TYPE XmlSchemaFacet : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_FacetType, put = set_FacetType))::System::Xml::Schema::FacetType FacetType;

  __declspec(property(get = get_IsFixed, put = set_IsFixed)) bool IsFixed;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field facetType, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_facetType, put = __cordl_internal_set_facetType))::System::Xml::Schema::FacetType facetType;

  /// @brief Field isFixed, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isFixed, put = __cordl_internal_set_isFixed)) bool isFixed;

  /// @brief Field value, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  static inline ::System::Xml::Schema::XmlSchemaFacet* New_ctor();

  constexpr ::System::Xml::Schema::FacetType const& __cordl_internal_get_facetType() const;

  constexpr ::System::Xml::Schema::FacetType& __cordl_internal_get_facetType();

  constexpr bool const& __cordl_internal_get_isFixed() const;

  constexpr bool& __cordl_internal_get_isFixed();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_facetType(::System::Xml::Schema::FacetType value);

  constexpr void __cordl_internal_set_isFixed(bool value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x2e13124, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FacetType, addr 0x2e13114, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::FacetType get_FacetType();

  /// @brief Method get_IsFixed, addr 0x2e13058, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixed();

  /// @brief Method get_Value, addr 0x2e13048, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_FacetType, addr 0x2e1311c, size 0x8, virtual false, abstract: false, final false
  inline void set_FacetType(::System::Xml::Schema::FacetType value);

  /// @brief Method set_IsFixed, addr 0x2e13060, size 0xb4, virtual true, abstract: false, final false
  inline void set_IsFixed(bool value);

  /// @brief Method set_Value, addr 0x2e13050, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaFacet(XmlSchemaFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaFacet(XmlSchemaFacet const&) = delete;

  /// @brief Field value, offset: 0x50, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field isFixed, offset: 0x58, size: 0x1, def value: None
  bool ___isFixed;

  /// @brief Field facetType, offset: 0x5c, size: 0x4, def value: None
  ::System::Xml::Schema::FacetType ___facetType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaFacet, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaFacet, ___value) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaFacet, ___isFixed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaFacet, ___facetType) == 0x5c, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaFacet*, "System.Xml.Schema", "XmlSchemaFacet");
