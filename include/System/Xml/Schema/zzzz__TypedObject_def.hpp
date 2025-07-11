#pragma once
// IWYU pragma private; include "System/Xml/Schema/TypedObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypedObject)
namespace System::Xml::Schema {
class TypedObject_DecimalStruct;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class TypedObject;
}
namespace System::Xml::Schema {
class TypedObject_DecimalStruct;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::TypedObject);
MARK_REF_PTR_T(::System::Xml::Schema::TypedObject_DecimalStruct);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.TypedObject/DecimalStruct
class CORDL_TYPE TypedObject_DecimalStruct : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Dvalue)) ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> Dvalue;

  __declspec(property(get = get_IsDecimal, put = set_IsDecimal)) bool IsDecimal;

  /// @brief Field dvalue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dvalue, put = __cordl_internal_set_dvalue)) ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> dvalue;

  /// @brief Field isDecimal, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isDecimal, put = __cordl_internal_set_isDecimal)) bool isDecimal;

  static inline ::System::Xml::Schema::TypedObject_DecimalStruct* New_ctor();

  static inline ::System::Xml::Schema::TypedObject_DecimalStruct* New_ctor(int32_t dim);

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> const& __cordl_internal_get_dvalue() const;

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>& __cordl_internal_get_dvalue();

  constexpr bool const& __cordl_internal_get_isDecimal() const;

  constexpr bool& __cordl_internal_get_isDecimal();

  constexpr void __cordl_internal_set_dvalue(::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> value);

  constexpr void __cordl_internal_set_isDecimal(bool value);

  /// @brief Method .ctor, addr 0x439977c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4399714, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t dim);

  /// @brief Method get_Dvalue, addr 0x4399b70, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> get_Dvalue();

  /// @brief Method get_IsDecimal, addr 0x4399b5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDecimal();

  /// @brief Method set_IsDecimal, addr 0x4399b64, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDecimal(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedObject_DecimalStruct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedObject_DecimalStruct", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedObject_DecimalStruct(TypedObject_DecimalStruct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedObject_DecimalStruct", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedObject_DecimalStruct(TypedObject_DecimalStruct const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7492 };

  /// @brief Field isDecimal, offset: 0x10, size: 0x1, def value: None
  bool ___isDecimal;

  /// @brief Field dvalue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> ___dvalue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::TypedObject_DecimalStruct, ___isDecimal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject_DecimalStruct, ___dvalue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::TypedObject_DecimalStruct, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.TypedObject
class CORDL_TYPE TypedObject : public ::System::Object {
public:
  // Declarations
  using DecimalStruct = ::System::Xml::Schema::TypedObject_DecimalStruct;

  __declspec(property(get = get_Dim)) int32_t Dim;

  __declspec(property(get = get_Dvalue)) ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> Dvalue;

  __declspec(property(get = get_IsDecimal)) bool IsDecimal;

  __declspec(property(get = get_IsList)) bool IsList;

  __declspec(property(get = get_Type)) ::System::Xml::Schema::XmlSchemaDatatype* Type;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field dim, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dim, put = __cordl_internal_set_dim)) int32_t dim;

  /// @brief Field dstruct, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dstruct, put = __cordl_internal_set_dstruct)) ::System::Xml::Schema::TypedObject_DecimalStruct* dstruct;

  /// @brief Field isList, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_isList, put = __cordl_internal_set_isList)) bool isList;

  /// @brief Field ovalue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ovalue, put = __cordl_internal_set_ovalue)) ::System::Object* ovalue;

  /// @brief Field svalue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_svalue, put = __cordl_internal_set_svalue)) ::StringW svalue;

  /// @brief Field xsdtype, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xsdtype, put = __cordl_internal_set_xsdtype)) ::System::Xml::Schema::XmlSchemaDatatype* xsdtype;

  /// @brief Method Equals, addr 0x43998ec, size 0x270, virtual false, abstract: false, final false
  inline bool Equals(::System::Xml::Schema::TypedObject* other);

  /// @brief Method ListDValueEquals, addr 0x43997d8, size 0x114, virtual false, abstract: false, final false
  inline bool ListDValueEquals(::System::Xml::Schema::TypedObject* other);

  static inline ::System::Xml::Schema::TypedObject* New_ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype);

  /// @brief Method SetDecimal, addr 0x43994a4, size 0x270, virtual false, abstract: false, final false
  inline void SetDecimal();

  /// @brief Method ToString, addr 0x439949c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_dim() const;

  constexpr int32_t& __cordl_internal_get_dim();

  constexpr ::System::Xml::Schema::TypedObject_DecimalStruct* const& __cordl_internal_get_dstruct() const;

  constexpr ::System::Xml::Schema::TypedObject_DecimalStruct*& __cordl_internal_get_dstruct();

  constexpr bool const& __cordl_internal_get_isList() const;

  constexpr bool& __cordl_internal_get_isList();

  constexpr ::System::Object* const& __cordl_internal_get_ovalue() const;

  constexpr ::System::Object*& __cordl_internal_get_ovalue();

  constexpr ::StringW const& __cordl_internal_get_svalue() const;

  constexpr ::StringW& __cordl_internal_get_svalue();

  constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& __cordl_internal_get_xsdtype() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __cordl_internal_get_xsdtype();

  constexpr void __cordl_internal_set_dim(int32_t value);

  constexpr void __cordl_internal_set_dstruct(::System::Xml::Schema::TypedObject_DecimalStruct* value);

  constexpr void __cordl_internal_set_isList(bool value);

  constexpr void __cordl_internal_set_ovalue(::System::Object* value);

  constexpr void __cordl_internal_set_svalue(::StringW value);

  constexpr void __cordl_internal_set_xsdtype(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method .ctor, addr 0x4399340, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype);

  /// @brief Method get_Dim, addr 0x43992e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Dim();

  /// @brief Method get_Dvalue, addr 0x4399314, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> get_Dvalue();

  /// @brief Method get_IsDecimal, addr 0x43992f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsDecimal();

  /// @brief Method get_IsList, addr 0x43992f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsList();

  /// @brief Method get_Type, addr 0x4399338, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Type();

  /// @brief Method get_Value, addr 0x4399330, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypedObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypedObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypedObject(TypedObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypedObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypedObject(TypedObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7493 };

  /// @brief Field dstruct, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::TypedObject_DecimalStruct* ___dstruct;

  /// @brief Field ovalue, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___ovalue;

  /// @brief Field svalue, offset: 0x20, size: 0x8, def value: None
  ::StringW ___svalue;

  /// @brief Field xsdtype, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ___xsdtype;

  /// @brief Field dim, offset: 0x30, size: 0x4, def value: None
  int32_t ___dim;

  /// @brief Field isList, offset: 0x34, size: 0x1, def value: None
  bool ___isList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::TypedObject, ___dstruct) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject, ___ovalue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject, ___svalue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject, ___xsdtype) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject, ___dim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::TypedObject, ___isList) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::TypedObject, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::TypedObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::TypedObject*, "System.Xml.Schema", "TypedObject");
NEED_NO_BOX(::System::Xml::Schema::TypedObject_DecimalStruct);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::TypedObject_DecimalStruct*, "System.Xml.Schema", "TypedObject/DecimalStruct");
