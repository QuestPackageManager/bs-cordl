#pragma once
// IWYU pragma private; include "System/Data/XDRSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__XMLSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class XDRSchema_NameType;
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
class XDRSchema_NameType;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XDRSchema);
MARK_REF_PTR_T(::System::Data::XDRSchema_NameType);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XDRSchema/NameType
class CORDL_TYPE XDRSchema_NameType : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x5e39df0, size 0x38, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::System::Data::XDRSchema_NameType* New_ctor(::StringW n, ::System::Type* t);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5e39de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW n, ::System::Type* t);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDRSchema_NameType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDRSchema_NameType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDRSchema_NameType(XDRSchema_NameType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDRSchema_NameType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDRSchema_NameType(XDRSchema_NameType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13832 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XDRSchema_NameType, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema_NameType, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XDRSchema_NameType, 0x20>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Data.XMLSchema
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XDRSchema
class CORDL_TYPE XDRSchema : public ::System::Data::XMLSchema {
public:
  // Declarations
  using NameType = ::System::Data::XDRSchema_NameType;

  /// @brief Field _ds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ds, put = __cordl_internal_set__ds)) ::System::Data::DataSet* _ds;

  /// @brief Field _schemaName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaName, put = __cordl_internal_set__schemaName)) ::StringW _schemaName;

  /// @brief Field _schemaRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaRoot, put = __cordl_internal_set__schemaRoot)) ::System::Xml::XmlElement* _schemaRoot;

  /// @brief Field _schemaUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaUri, put = __cordl_internal_set__schemaUri)) ::StringW _schemaUri;

  /// @brief Field s_colonArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_colonArray, put = setStaticF_s_colonArray)) ::ArrayW<char16_t, ::Array<char16_t>*> s_colonArray;

  /// @brief Field s_enumerationNameType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_enumerationNameType, put = setStaticF_s_enumerationNameType)) ::System::Data::XDRSchema_NameType* s_enumerationNameType;

  /// @brief Field s_mapNameTypeXdr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_mapNameTypeXdr, put = setStaticF_s_mapNameTypeXdr)) ::ArrayW<::System::Data::XDRSchema_NameType*, ::Array<::System::Data::XDRSchema_NameType*>*>
      s_mapNameTypeXdr;

  /// @brief Method FindNameType, addr 0x5e37a5c, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Data::XDRSchema_NameType* FindNameType(::StringW name);

  /// @brief Method FindTypeNode, addr 0x5e36b30, size 0x330, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* FindTypeNode(::System::Xml::XmlElement* node);

  /// @brief Method GetInstanceName, addr 0x5e37c84, size 0x184, virtual false, abstract: false, final false
  inline ::StringW GetInstanceName(::System::Xml::XmlElement* node);

  /// @brief Method GetMinMax, addr 0x5e387ac, size 0x354, virtual false, abstract: false, final false
  inline void GetMinMax(::System::Xml::XmlElement* elNode, bool isAttribute, ::ByRef<int32_t> minOccurs, ::ByRef<int32_t> maxOccurs);

  /// @brief Method GetMinMax, addr 0x5e37184, size 0x10, virtual false, abstract: false, final false
  inline void GetMinMax(::System::Xml::XmlElement* elNode, ::ByRef<int32_t> minOccurs, ::ByRef<int32_t> maxOccurs);

  /// @brief Method HandleColumn, addr 0x5e37e08, size 0x87c, virtual false, abstract: false, final false
  inline void HandleColumn(::System::Xml::XmlElement* node, ::System::Data::DataTable* table);

  /// @brief Method HandleTable, addr 0x5e3695c, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* HandleTable(::System::Xml::XmlElement* node);

  /// @brief Method HandleTypeNode, addr 0x5e38f18, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleTypeNode(::System::Xml::XmlElement* typeNode, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren);

  /// @brief Method InstantiateSimpleTable, addr 0x5e37194, size 0x23c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateSimpleTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node);

  /// @brief Method InstantiateTable, addr 0x5e373d0, size 0x68c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateTable(::System::Data::DataSet* dataSet, ::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);

  /// @brief Method IsTextOnlyContent, addr 0x5e36e60, size 0x1d4, virtual false, abstract: false, final false
  inline bool IsTextOnlyContent(::System::Xml::XmlElement* node);

  /// @brief Method IsXDRField, addr 0x5e37034, size 0x150, virtual false, abstract: false, final false
  inline bool IsXDRField(::System::Xml::XmlElement* node, ::System::Xml::XmlElement* typeNode);

  /// @brief Method LoadSchema, addr 0x5e366dc, size 0x214, virtual false, abstract: false, final false
  inline void LoadSchema(::System::Xml::XmlElement* schemaRoot, ::System::Data::DataSet* ds);

  static inline ::System::Data::XDRSchema* New_ctor(::System::Data::DataSet* ds, bool fInline);

  /// @brief Method ParseDataType, addr 0x5e37b34, size 0x150, virtual false, abstract: false, final false
  inline ::System::Type* ParseDataType(::StringW dt, ::StringW dtValues);

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__ds() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__ds();

  constexpr ::StringW const& __cordl_internal_get__schemaName() const;

  constexpr ::StringW& __cordl_internal_get__schemaName();

  constexpr ::System::Xml::XmlElement* const& __cordl_internal_get__schemaRoot() const;

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get__schemaRoot();

  constexpr ::StringW const& __cordl_internal_get__schemaUri() const;

  constexpr ::StringW& __cordl_internal_get__schemaUri();

  constexpr void __cordl_internal_set__ds(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__schemaName(::StringW value);

  constexpr void __cordl_internal_set__schemaRoot(::System::Xml::XmlElement* value);

  constexpr void __cordl_internal_set__schemaUri(::StringW value);

  /// @brief Method .ctor, addr 0x5e366bc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* ds, bool fInline);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_colonArray();

  static inline ::System::Data::XDRSchema_NameType* getStaticF_s_enumerationNameType();

  static inline ::ArrayW<::System::Data::XDRSchema_NameType*, ::Array<::System::Data::XDRSchema_NameType*>*> getStaticF_s_mapNameTypeXdr();

  static inline void setStaticF_s_colonArray(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_enumerationNameType(::System::Data::XDRSchema_NameType* value);

  static inline void setStaticF_s_mapNameTypeXdr(::ArrayW<::System::Data::XDRSchema_NameType*, ::Array<::System::Data::XDRSchema_NameType*>*> value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13833 };

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
static_assert(offsetof(::System::Data::XDRSchema, ____schemaName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____schemaUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____schemaRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::XDRSchema, ____ds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XDRSchema, 0x30>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XDRSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XDRSchema*, "System.Data", "XDRSchema");
NEED_NO_BOX(::System::Data::XDRSchema_NameType);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XDRSchema_NameType*, "System.Data", "XDRSchema/NameType");
