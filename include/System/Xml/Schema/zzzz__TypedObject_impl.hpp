#pragma once
// IWYU pragma private; include "System/Xml/Schema/TypedObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__TypedObject_def.hpp"
#include "System/Xml/Schema/zzzz__TypedObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.get_IsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::get_IsDecimal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4399b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(),
                                                                               "get_IsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.set_IsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)(bool)>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::set_IsDecimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4399b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(), "set_IsDecimal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct.get_Dvalue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::get_Dvalue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4399b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(),
                                                                               "get_Dvalue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)()>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x439977c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject_DecimalStruct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::TypedObject_DecimalStruct::*)(int32_t)>(
    &::System::Xml::Schema::TypedObject_DecimalStruct::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4399714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_dvalue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dvalue;
}
constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> const& System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_get_dvalue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dvalue;
}
constexpr void System::Xml::Schema::TypedObject_DecimalStruct::__cordl_internal_set_dvalue(::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dvalue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Xml::Schema::TypedObject_DecimalStruct::get_IsDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(),
                                                                             "get_IsDecimal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::set_IsDecimal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(), "set_IsDecimal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> System::Xml::Schema::TypedObject_DecimalStruct::get_Dvalue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(),
                                                                             "get_Dvalue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, false>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject_DecimalStruct::_ctor(int32_t dim) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject_DecimalStruct*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dim);
}
inline ::System::Xml::Schema::TypedObject_DecimalStruct* System::Xml::Schema::TypedObject_DecimalStruct::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::TypedObject_DecimalStruct*>());
}
inline ::System::Xml::Schema::TypedObject_DecimalStruct* System::Xml::Schema::TypedObject_DecimalStruct::New_ctor(int32_t dim) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::TypedObject_DecimalStruct*>(dim));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::TypedObject_DecimalStruct::TypedObject_DecimalStruct() {}
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Dim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Dim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43992e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Dim",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_IsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_IsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43992f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_IsList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_IsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_IsDecimal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x43992f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_IsDecimal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Dvalue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> (::System::Xml::Schema::TypedObject::*)()>(
    &::System::Xml::Schema::TypedObject::get_Dvalue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4399314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Dvalue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4399330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::TypedObject::*)()>(
    &::System::Xml::Schema::TypedObject::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4399338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::TypedObject::*)(::System::Object*, ::StringW, ::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::TypedObject::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x4399340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x439949c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.SetDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::TypedObject::*)()>(&::System::Xml::Schema::TypedObject::SetDecimal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x43994a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "SetDecimal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.ListDValueEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(
    &::System::Xml::Schema::TypedObject::ListDValueEquals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43997d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "ListDValueEquals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::TypedObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::TypedObject.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::TypedObject::*)(::System::Xml::Schema::TypedObject*)>(
    &::System::Xml::Schema::TypedObject::Equals)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x43998ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::TypedObject*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dstruct)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ovalue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___svalue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xsdtype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Dim",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::get_IsList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_IsList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::get_IsDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_IsDecimal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> System::Xml::Schema::TypedObject::get_Dvalue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Dvalue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::TypedObject::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::TypedObject::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject::_ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, svalue, xsdtype);
}
inline ::StringW System::Xml::Schema::TypedObject::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::TypedObject::SetDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "SetDecimal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::TypedObject::ListDValueEquals(::System::Xml::Schema::TypedObject* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "ListDValueEquals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::TypedObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool System::Xml::Schema::TypedObject::Equals(::System::Xml::Schema::TypedObject* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::TypedObject*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::TypedObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::System::Xml::Schema::TypedObject* System::Xml::Schema::TypedObject::New_ctor(::System::Object* obj, ::StringW svalue, ::System::Xml::Schema::XmlSchemaDatatype* xsdtype) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::TypedObject*>(obj, svalue, xsdtype));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::TypedObject::TypedObject() {}
