#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapping)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapping);
// Type: System.Xml.Serialization::XmlTypeMapping
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapping*
class CORDL_TYPE XmlTypeMapping : public ::System::Xml::Serialization::XmlMapping {
public:
  // Declarations
  __declspec(property(get = get_BaseMap, put = set_BaseMap))::System::Xml::Serialization::XmlTypeMapping* BaseMap;

  __declspec(property(get = get_DerivedTypes))::System::Collections::ArrayList* DerivedTypes;

  __declspec(property(get = get_HasXmlTypeNamespace)) bool HasXmlTypeNamespace;

  __declspec(property(put = set_IncludeInSchema)) bool IncludeInSchema;

  __declspec(property(get = get_IsAny, put = set_IsAny)) bool IsAny;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_MultiReferenceType)) bool MultiReferenceType;

  __declspec(property(get = get_TypeData))::System::Xml::Serialization::TypeData* TypeData;

  __declspec(property(get = get_TypeFullName))::StringW TypeFullName;

  __declspec(property(get = get_XmlType, put = set_XmlType))::StringW XmlType;

  __declspec(property(get = get_XmlTypeNamespace, put = set_XmlTypeNamespace))::StringW XmlTypeNamespace;

  /// @brief Field _derivedTypes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__derivedTypes, put = __cordl_internal_set__derivedTypes))::System::Collections::ArrayList* _derivedTypes;

  /// @brief Field baseMap, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_baseMap, put = __cordl_internal_set_baseMap))::System::Xml::Serialization::XmlTypeMapping* baseMap;

  /// @brief Field includeInSchema, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInSchema, put = __cordl_internal_set_includeInSchema)) bool includeInSchema;

  /// @brief Field isAny, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get_isAny, put = __cordl_internal_set_isAny)) bool isAny;

  /// @brief Field isNullable, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullable, put = __cordl_internal_set_isNullable)) bool isNullable;

  /// @brief Field multiReferenceType, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_multiReferenceType, put = __cordl_internal_set_multiReferenceType)) bool multiReferenceType;

  /// @brief Field type, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Xml::Serialization::TypeData* type;

  /// @brief Field xmlType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlType, put = __cordl_internal_set_xmlType))::StringW xmlType;

  /// @brief Field xmlTypeNamespace, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlTypeNamespace, put = __cordl_internal_set_xmlTypeNamespace))::StringW xmlTypeNamespace;

  /// @brief Method GetRealElementMap, addr 0x2def370, size 0x3dc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(::StringW name, ::StringW ens);

  /// @brief Method GetRealTypeMap, addr 0x2de702c, size 0x170, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(::System::Type* objectType);

  static inline ::System::Xml::Serialization::XmlTypeMapping* New_ctor(::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType,
                                                                       ::StringW xmlTypeNamespace);

  /// @brief Method UpdateRoot, addr 0x2def74c, size 0x80, virtual false, abstract: false, final false
  inline void UpdateRoot(::System::Xml::XmlQualifiedName* qname);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__derivedTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__derivedTypes() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get_baseMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapping*> const& __cordl_internal_get_baseMap() const;

  constexpr bool const& __cordl_internal_get_includeInSchema() const;

  constexpr bool& __cordl_internal_get_includeInSchema();

  constexpr bool const& __cordl_internal_get_isAny() const;

  constexpr bool& __cordl_internal_get_isAny();

  constexpr bool const& __cordl_internal_get_isNullable() const;

  constexpr bool& __cordl_internal_get_isNullable();

  constexpr bool const& __cordl_internal_get_multiReferenceType() const;

  constexpr bool& __cordl_internal_get_multiReferenceType();

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::TypeData*> const& __cordl_internal_get_type() const;

  constexpr ::StringW const& __cordl_internal_get_xmlType() const;

  constexpr ::StringW& __cordl_internal_get_xmlType();

  constexpr ::StringW const& __cordl_internal_get_xmlTypeNamespace() const;

  constexpr ::StringW& __cordl_internal_get_xmlTypeNamespace();

  constexpr void __cordl_internal_set__derivedTypes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_baseMap(::System::Xml::Serialization::XmlTypeMapping* value);

  constexpr void __cordl_internal_set_includeInSchema(bool value);

  constexpr void __cordl_internal_set_isAny(bool value);

  constexpr void __cordl_internal_set_isNullable(bool value);

  constexpr void __cordl_internal_set_multiReferenceType(bool value);

  constexpr void __cordl_internal_set_type(::System::Xml::Serialization::TypeData* value);

  constexpr void __cordl_internal_set_xmlType(::StringW value);

  constexpr void __cordl_internal_set_xmlTypeNamespace(::StringW value);

  /// @brief Method .ctor, addr 0x2def23c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace);

  /// @brief Method get_BaseMap, addr 0x2def32c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* get_BaseMap();

  /// @brief Method get_DerivedTypes, addr 0x2def31c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_DerivedTypes();

  /// @brief Method get_HasXmlTypeNamespace, addr 0x2def30c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasXmlTypeNamespace();

  /// @brief Method get_IsAny, addr 0x2def35c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAny();

  /// @brief Method get_IsNullable, addr 0x2def348, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_MultiReferenceType, addr 0x2def324, size 0x8, virtual false, abstract: false, final false
  inline bool get_MultiReferenceType();

  /// @brief Method get_TypeData, addr 0x2def2ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_TypeData();

  /// @brief Method get_TypeFullName, addr 0x2dec48c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_TypeFullName();

  /// @brief Method get_XmlType, addr 0x2def2f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlType();

  /// @brief Method get_XmlTypeNamespace, addr 0x2de719c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_XmlTypeNamespace();

  /// @brief Method set_BaseMap, addr 0x2def334, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* value);

  /// @brief Method set_IncludeInSchema, addr 0x2def33c, size 0xc, virtual false, abstract: false, final false
  inline void set_IncludeInSchema(bool value);

  /// @brief Method set_IsAny, addr 0x2def364, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAny(bool value);

  /// @brief Method set_IsNullable, addr 0x2def350, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

  /// @brief Method set_XmlType, addr 0x2def2fc, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlType(::StringW value);

  /// @brief Method set_XmlTypeNamespace, addr 0x2def304, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlTypeNamespace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapping(XmlTypeMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapping(XmlTypeMapping const&) = delete;

  /// @brief Field xmlType, offset: 0x48, size: 0x8, def value: None
  ::StringW ___xmlType;

  /// @brief Field xmlTypeNamespace, offset: 0x50, size: 0x8, def value: None
  ::StringW ___xmlTypeNamespace;

  /// @brief Field type, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ___type;

  /// @brief Field baseMap, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapping* ___baseMap;

  /// @brief Field multiReferenceType, offset: 0x68, size: 0x1, def value: None
  bool ___multiReferenceType;

  /// @brief Field includeInSchema, offset: 0x69, size: 0x1, def value: None
  bool ___includeInSchema;

  /// @brief Field isNullable, offset: 0x6a, size: 0x1, def value: None
  bool ___isNullable;

  /// @brief Field isAny, offset: 0x6b, size: 0x1, def value: None
  bool ___isAny;

  /// @brief Field _derivedTypes, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____derivedTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapping, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___xmlType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___xmlTypeNamespace) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___type) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___baseMap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___multiReferenceType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___includeInSchema) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___isNullable) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ___isAny) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapping, ____derivedTypes) == 0x70, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapping*, "System.Xml.Serialization", "XmlTypeMapping");
