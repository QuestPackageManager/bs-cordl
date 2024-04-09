#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeUnion)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeUnion;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeUnion);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeUnion
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeUnion*
class CORDL_TYPE XmlSchemaSimpleTypeUnion : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
  // Declarations
  __declspec(property(get = get_BaseMemberTypes))::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> BaseMemberTypes;

  __declspec(property(get = get_BaseTypes))::System::Xml::Schema::XmlSchemaObjectCollection* BaseTypes;

  __declspec(property(get = get_MemberTypes, put = set_MemberTypes))::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> MemberTypes;

  /// @brief Field baseMemberTypes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMemberTypes,
                      put = __cordl_internal_set_baseMemberTypes))::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> baseMemberTypes;

  /// @brief Field baseTypes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_baseTypes, put = __cordl_internal_set_baseTypes))::System::Xml::Schema::XmlSchemaObjectCollection* baseTypes;

  /// @brief Field memberTypes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes,
                      put = __cordl_internal_set_memberTypes))::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> memberTypes;

  /// @brief Method Clone, addr 0x2d1fa64, size 0x168, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaSimpleTypeUnion* New_ctor();

  /// @brief Method SetBaseMemberTypes, addr 0x2d1fa5c, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseMemberTypes(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> baseMemberTypes);

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> const& __cordl_internal_get_baseMemberTypes() const;

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>& __cordl_internal_get_baseMemberTypes();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_baseTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_baseTypes() const;

  constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>& __cordl_internal_get_memberTypes();

  constexpr void __cordl_internal_set_baseMemberTypes(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> value);

  constexpr void __cordl_internal_set_baseTypes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_memberTypes(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value);

  /// @brief Method .ctor, addr 0x2d1fbcc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseMemberTypes, addr 0x2d1fa54, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> get_BaseMemberTypes();

  /// @brief Method get_BaseTypes, addr 0x2d1fa3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_BaseTypes();

  /// @brief Method get_MemberTypes, addr 0x2d1fa44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> get_MemberTypes();

  /// @brief Method set_MemberTypes, addr 0x2d1fa4c, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberTypes(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleTypeUnion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeUnion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleTypeUnion(XmlSchemaSimpleTypeUnion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeUnion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleTypeUnion(XmlSchemaSimpleTypeUnion const&) = delete;

  /// @brief Field baseTypes, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___baseTypes;

  /// @brief Field memberTypes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> ___memberTypes;

  /// @brief Field baseMemberTypes, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> ___baseMemberTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeUnion, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeUnion, ___baseTypes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeUnion, ___memberTypes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeUnion, ___baseMemberTypes) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeUnion);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeUnion*, "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
