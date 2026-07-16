#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlCustomFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlCustomFormatter_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlCustomFormatter.FromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, ::ArrayW<::StringW>, ::ArrayW<int64_t>, ::StringW)>(&::System::Xml::Serialization::XmlCustomFormatter::FromEnum)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x62ee5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                         { "FromEnum", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlCustomFormatter.FromXmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::XmlCustomFormatter::FromXmlName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62ee820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(), { "FromXmlName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlCustomFormatter.FromXmlNCName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::XmlCustomFormatter::FromXmlNCName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62ee87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(), { "FromXmlNCName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlCustomFormatter.ToXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::Serialization::TypeData*, ::System::Object*)>(&::System::Xml::Serialization::XmlCustomFormatter::ToXmlString)> {
  constexpr static std::size_t size = 0xce0;
  constexpr static std::size_t addrs = 0x62ee8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                                             { "ToXmlString", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlCustomFormatter.FromXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Xml::Serialization::TypeData*, ::StringW)>(&::System::Xml::Serialization::XmlCustomFormatter::FromXmlString)> {
  constexpr static std::size_t size = 0xa98;
  constexpr static std::size_t addrs = 0x62ef5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                                             { "FromXmlString", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlCustomFormatter::setStaticF_allTimeFormats(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "allTimeFormats", ::System::Xml::Serialization::XmlCustomFormatter*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Serialization::XmlCustomFormatter::getStaticF_allTimeFormats() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "allTimeFormats", ::System::Xml::Serialization::XmlCustomFormatter*>();
}
inline ::StringW System::Xml::Serialization::XmlCustomFormatter::FromEnum(int64_t value, ::ArrayW<::StringW> values, ::ArrayW<int64_t> ids, ::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                       { "FromEnum", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, values, ids, typeName);
}
inline ::StringW System::Xml::Serialization::XmlCustomFormatter::FromXmlName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(), { "FromXmlName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline ::StringW System::Xml::Serialization::XmlCustomFormatter::FromXmlNCName(::StringW ncName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(), { "FromXmlNCName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ncName);
}
inline ::StringW System::Xml::Serialization::XmlCustomFormatter::ToXmlString(::System::Xml::Serialization::TypeData* type, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                                           { "ToXmlString", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, value);
}
inline ::System::Object* System::Xml::Serialization::XmlCustomFormatter::FromXmlString(::System::Xml::Serialization::TypeData* type, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlCustomFormatter*>(),
                                                           { "FromXmlString", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlCustomFormatter::XmlCustomFormatter() {}
