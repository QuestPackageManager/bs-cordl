#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_QNameXdr.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_QNameXdr_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_QNameXdr.get_TokenizedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlTokenizedType (::System::Xml::Schema::Datatype_QNameXdr::*)()>(&::System::Xml::Schema::Datatype_QNameXdr::get_TokenizedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ca9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_QNameXdr.ParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::Datatype_QNameXdr::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::Datatype_QNameXdr::ParseValue)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x61ca9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_QNameXdr.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_QNameXdr::*)()>(&::System::Xml::Schema::Datatype_QNameXdr::get_ValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61cac70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_QNameXdr.get_ListValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Schema::Datatype_QNameXdr::*)()>(&::System::Xml::Schema::Datatype_QNameXdr::get_ListValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61caccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_QNameXdr._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_QNameXdr::*)()>(&::System::Xml::Schema::Datatype_QNameXdr::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61c0274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_QNameXdr::setStaticF_atomicValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_QNameXdr*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_QNameXdr::getStaticF_atomicValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "atomicValueType", ::System::Xml::Schema::Datatype_QNameXdr*>();
}
inline void System::Xml::Schema::Datatype_QNameXdr::setStaticF_listValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_QNameXdr*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_QNameXdr::getStaticF_listValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "listValueType", ::System::Xml::Schema::Datatype_QNameXdr*>();
}
inline ::System::Xml::XmlTokenizedType System::Xml::Schema::Datatype_QNameXdr::get_TokenizedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlTokenizedType>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::Datatype_QNameXdr::ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s, nameTable, nsmgr);
}
inline ::System::Type* System::Xml::Schema::Datatype_QNameXdr::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::Datatype_QNameXdr::get_ListValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_QNameXdr::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_QNameXdr*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_QNameXdr* System::Xml::Schema::Datatype_QNameXdr::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_QNameXdr*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_QNameXdr::Datatype_QNameXdr() {}
