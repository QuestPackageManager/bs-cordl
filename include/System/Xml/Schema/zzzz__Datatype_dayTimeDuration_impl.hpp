#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_dayTimeDuration.hpp"
#include "System/Xml/Schema/zzzz__Datatype_duration_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dayTimeDuration_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_dayTimeDuration::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_dayTimeDuration::TryParseValue)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61c5ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_dayTimeDuration::*)()>(
    &::System::Xml::Schema::Datatype_dayTimeDuration::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c6090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_dayTimeDuration::*)()>(&::System::Xml::Schema::Datatype_dayTimeDuration::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61c0734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::Datatype_dayTimeDuration::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                         ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_dayTimeDuration::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_dayTimeDuration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dayTimeDuration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_dayTimeDuration* System::Xml::Schema::Datatype_dayTimeDuration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_dayTimeDuration*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_dayTimeDuration::Datatype_dayTimeDuration() {}
