#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_yearMonthDuration.hpp"
#include "System/Xml/Schema/zzzz__Datatype_duration_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_yearMonthDuration_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration.TryParseValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::Datatype_yearMonthDuration::*)(::StringW, ::System::Xml::XmlNameTable*,
                                                                                                                                   ::System::Xml::IXmlNamespaceResolver*, ::by_ref<::System::Object*>)>(
    &::System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x61c5cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_yearMonthDuration::*)()>(
    &::System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61c5ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), { ::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_yearMonthDuration::*)()>(&::System::Xml::Schema::Datatype_yearMonthDuration::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61c0788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                           ::by_ref<::System::Object*> typedValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_yearMonthDuration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_yearMonthDuration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_yearMonthDuration* System::Xml::Schema::Datatype_yearMonthDuration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_yearMonthDuration*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_yearMonthDuration::Datatype_yearMonthDuration() {}
