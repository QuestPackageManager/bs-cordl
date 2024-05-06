#pragma once
// IWYU pragma private; include "System/Data/XDRSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__XMLSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XDRSchema)
namespace System::Collections {
class ArrayList;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class __XDRSchema__NameType;
}
namespace System::Xml {
class XmlElement;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class XDRSchema;
}
namespace System::Data {
class __XDRSchema__NameType;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XDRSchema);
MARK_REF_PTR_T(::System::Data::__XDRSchema__NameType);
// Type: ::NameType
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::XDRSchema::NameType*
class CORDL_TYPE __XDRSchema__NameType : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x2ce4ef8, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::System::Data::__XDRSchema__NameType* New_ctor(::StringW n, ::System::Type* t);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2ce4ecc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW n, ::System::Type* t);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XDRSchema__NameType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XDRSchema__NameType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XDRSchema__NameType(__XDRSchema__NameType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XDRSchema__NameType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XDRSchema__NameType(__XDRSchema__NameType const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__XDRSchema__NameType, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::__XDRSchema__NameType, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::__XDRSchema__NameType, ___type) == 0x18, "Offset mismatch!");

} // namespace System::Data
// Type: System.Data::XDRSchema
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::XDRSchema*
class CORDL_TYPE XDRSchema : public ::System::Data::XMLSchema {
public:
  // Declarations
  using NameType = ::System::Data::__XDRSchema__NameType;

  /// @brief Field _ds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ds, put = __cordl_internal_set__ds))::System::Data::DataSet* _ds;

  /// @brief Field _schemaName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaName, put = __cordl_internal_set__schemaName))::StringW _schemaName;

  /// @brief Field _schemaRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaRoot, put = __cordl_internal_set__schemaRoot))::System::Xml::XmlElement* _schemaRoot;

  /// @brief Field _schemaUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaUri, put = __cordl_internal_set__schemaUri))::StringW _schemaUri;

  /// @brief Field s_colonArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_colonArray, put = setStaticF_s_colonArray))::ArrayW<char16_t, ::Array<char16_t>*> s_colonArray;

  /// @brief Field s_enumerationNameType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_enumerationNameType, put = setStaticF_s_enumerationNameType))::System::Data::__XDRSchema__NameType* s_enumerationNameType;

  /// @brief Field s_mapNameTypeXdr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_mapNameTypeXdr,
                             put = setStaticF_s_mapNameTypeXdr))::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*> s_mapNameTypeXdr;

  /// @brief Method FindNameType, addr 0x2ce2678, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::__XDRSchema__NameType* FindNameType(::StringW name);

  /// @brief Method FindTypeNode, addr 0x2ce174c, size 0x324, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* FindTypeNode(::System::Xml::XmlElement* node);

  /// @brief Method GetInstanceName, addr 0x2ce2888, size 0x178, virtual false, abstract: false, final false
  inline ::StringW GetInstanceName(::System::Xml::XmlElement* node);

  /// @brief Method GetMinMax, addr 0x2ce3388, size 0x348, virtual false, abstract: false, final false
  inline void GetMinMax(::System::Xml::XmlElement* elNode, bool isAttribute, ByRef<int32_t> minOccurs, ByRef<int32_t> maxOccurs);

  /// @brief Method GetMinMax, addr 0x2ce1d84, size 0x10, virtual false, abstract: false, final false
  inline void GetMinMax(::System::Xml::XmlElement* elNode, ByRef<int32_t> minOccurs, ByRef<int32_t> maxOccurs);

  /// @brief Method HandleColumn, addr 0x2ce2a00, size 0x860, virtual false, abstract: false, final false
  inline void HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table);

  /// @brief Method HandleTable, addr 0x2ce158c, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* HandleTable(::System::Xml::XmlElement* node);

  /// @brief Method HandleTypeNode, addr 0x2ce3b18, size 0x1e8, virtual false, abstract: false, final false
  inline void HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren);

  /// @brief Method InstantiateSimpleTable, addr 0x2ce1d94, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node);

  /// @brief Method InstantiateTable, addr 0x2ce1fc0, size 0x6b8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);

  /// @brief Method IsTextOnlyContent, addr 0x2ce1a70, size 0x1d0, virtual false, abstract: false, final false
  inline bool IsTextOnlyContent(::System::Xml::XmlElement* node);

  /// @brief Method IsXDRField, addr 0x2ce1c40, size 0x144, virtual false, abstract: false, final false
  inline bool IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);

  /// @brief Method LoadSchema, addr 0x2ce130c, size 0x20c, virtual false, abstract: false, final false
  inline void LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds);

  static inline ::System::Data::XDRSchema* New_ctor(::System::Data::DataSet* ds, bool fInline);

  /// @brief Method ParseDataType, addr 0x2ce274c, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Type* ParseDataType(::StringW dt, ::StringW dtValues);

  constexpr ::System::Data::DataSet*& __cordl_internal_get__ds();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__ds() const;

  constexpr ::StringW const& __cordl_internal_get__schemaName() const;

  constexpr ::StringW& __cordl_internal_get__schemaName();

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get__schemaRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlElement*> const& __cordl_internal_get__schemaRoot() const;

  constexpr ::StringW const& __cordl_internal_get__schemaUri() const;

  constexpr ::StringW& __cordl_internal_get__schemaUri();

  constexpr void __cordl_internal_set__ds(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__schemaName(::StringW value);

  constexpr void __cordl_internal_set__schemaRoot(::System::Xml::XmlElement* value);

  constexpr void __cordl_internal_set__schemaUri(::StringW value);

  /// @brief Method .ctor, addr 0x2ce1294, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* ds, bool fInline);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_colonArray();

  static inline ::System::Data::__XDRSchema__NameType* getStaticF_s_enumerationNameType();

  static inline ::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*> getStaticF_s_mapNameTypeXdr();

  static inline void setStaticF_s_colonArray(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_enumerationNameType(::System::Data::__XDRSchema__NameType* value);

  static inline void setStaticF_s_mapNameTypeXdr(::ArrayW<::System::Data::__XDRSchema__NameType*, ::Array<::System::Data::__XDRSchema__NameType*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDRSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDRSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDRSchema(XDRSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDRSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDRSchema(XDRSchema const&) = delete;

  /// @brief Field _schemaName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____schemaName;

  /// @brief Field _schemaUri, offset: 0x18, size: 0x8, def value: None
  ::StringW ____schemaUri;

  /// @brief Field _schemaRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlElement* ____schemaRoot;

  /// @brief Field _ds, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataSet* ____ds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::XDRSchema, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____schemaName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____schemaUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____schemaRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____ds) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XDRSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XDRSchema*, "System.Data", "XDRSchema");
NEED_NO_BOX(::System::Data::__XDRSchema__NameType);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__XDRSchema__NameType*, "System.Data", "XDRSchema/NameType");
