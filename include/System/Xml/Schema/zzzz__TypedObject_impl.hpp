#pragma once
// IWYU pragma private; include "System/Xml/Schema/TypedObject.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__TypedObject_def.hpp"
#include "System/Xml/Schema/zzzz__TypedObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.get_IsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(&::System::Xml::Schema::TypedObject_DecimalStruct::get_IsDecimal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "get_IsDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.set_IsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)(bool)>(&::System::Xml::Schema::TypedObject_DecimalStruct::set_IsDecimal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631732c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "set_IsDecimal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.get_Dvalue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Decimal> (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::get_Dvalue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6317334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "get_Dvalue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(&::System::Xml::Schema::TypedObject_DecimalStruct::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6316f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)(int32_t)>(&::System::Xml::Schema::TypedObject_DecimalStruct::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6316eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_isDecimal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDecimal;
}
constexpr bool const& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_isDecimal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDecimal;
}
constexpr void System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_set_isDecimal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDecimal = value;
}
constexpr ::ArrayW<::System::Decimal>& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_dvalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dvalue;
}
constexpr ::ArrayW<::System::Decimal> const& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_dvalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dvalue;
}
constexpr void System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_set_dvalue(::ArrayW<::System::Decimal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dvalue = value;
}
inline bool System::Xml::Schema::TypedObject_DecimalStruct::get_IsDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "get_IsDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::set_IsDecimal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "set_IsDecimal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Decimal> System::Xml::Schema::TypedObject_DecimalStruct::get_Dvalue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { "get_Dvalue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Decimal>>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::_ctor(int32_t dim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject_DecimalStruct*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dim);
}
inline ::System::Xml::Schema::TypedObject_DecimalStruct* System::Xml::Schema::TypedObject_DecimalStruct::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::TypedObject_DecimalStruct*>());
}
inline ::System::Xml::Schema::TypedObject_DecimalStruct* System::Xml::Schema::TypedObject_DecimalStruct::New_ctor(int32_t dim) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::TypedObject_DecimalStruct*>(dim));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::TypedObject_DecimalStruct::TypedObject_DecimalStruct() {}
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Dim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Dim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Dim", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_IsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_IsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_IsList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_IsDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_IsDecimal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6316afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_IsDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Dvalue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Decimal> (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Dvalue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6316b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Dvalue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::TypedObject::*)(::System::Object*, ::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::TypedObject::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6316b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6316c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { ::i2c::class_of<::System::Xml::Schema::TypedObject*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.SetDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::SetDecimal)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6316c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "SetDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.ListDValueEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(&::System::Xml::Schema::TypedObject::ListDValueEquals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6316fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "ListDValueEquals", {}, { ::i2c::type_of<::System::Xml::Schema::TypedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(&::System::Xml::Schema::TypedObject::Equals)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x63170b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "Equals", {}, { ::i2c::type_of<::System::Xml::Schema::TypedObject*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::TypedObject_DecimalStruct*& System::Xml::Schema::TypedObject::__cordl_internal_get_dstruct() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstruct;
}
constexpr ::System::Xml::Schema::TypedObject_DecimalStruct* const& System::Xml::Schema::TypedObject::__cordl_internal_get_dstruct() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstruct;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_dstruct(::System::Xml::Schema::TypedObject_DecimalStruct* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dstruct = value;
}
constexpr ::System::Object*& System::Xml::Schema::TypedObject::__cordl_internal_get_ovalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovalue;
}
constexpr ::System::Object* const& System::Xml::Schema::TypedObject::__cordl_internal_get_ovalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ovalue;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_ovalue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ovalue = value;
}
constexpr ::StringW& System::Xml::Schema::TypedObject::__cordl_internal_get_svalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___svalue;
}
constexpr ::StringW const& System::Xml::Schema::TypedObject::__cordl_internal_get_svalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___svalue;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_svalue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___svalue = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype*& System::Xml::Schema::TypedObject::__cordl_internal_get_xsdtype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsdtype;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& System::Xml::Schema::TypedObject::__cordl_internal_get_xsdtype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsdtype;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_xsdtype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsdtype = value;
}
constexpr int32_t& System::Xml::Schema::TypedObject::__cordl_internal_get_dim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dim;
}
constexpr int32_t const& System::Xml::Schema::TypedObject::__cordl_internal_get_dim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dim;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_dim(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dim = value;
}
constexpr bool& System::Xml::Schema::TypedObject::__cordl_internal_get_isList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isList;
}
constexpr bool const& System::Xml::Schema::TypedObject::__cordl_internal_get_isList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isList;
}
constexpr void System::Xml::Schema::TypedObject::__cordl_internal_set_isList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isList = value;
}
inline int32_t System::Xml::Schema::TypedObject::get_Dim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Dim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::get_IsList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_IsList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::get_IsDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_IsDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Decimal> System::Xml::Schema::TypedObject::get_Dvalue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Dvalue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Decimal>>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::TypedObject::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::TypedObject::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject::_ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, svalue, xsdtype);
}
inline ::StringW System::Xml::Schema::TypedObject::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::TypedObject*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject::SetDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "SetDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::ListDValueEquals(::System::Xml::Schema::TypedObject* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "ListDValueEquals", {}, { ::i2c::type_of<::System::Xml::Schema::TypedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::Xml::Schema::TypedObject::Equals(::System::Xml::Schema::TypedObject* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::TypedObject*>(), { "Equals", {}, { ::i2c::type_of<::System::Xml::Schema::TypedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::TypedObject* System::Xml::Schema::TypedObject::New_ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::TypedObject*>(obj, svalue, xsdtype));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::TypedObject::TypedObject() {}
