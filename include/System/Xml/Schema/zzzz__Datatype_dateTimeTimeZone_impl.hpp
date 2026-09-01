#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_dateTimeTimeZone.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeTimeZone_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dateTimeTimeZone._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_dateTimeTimeZone::*)()>(&::System::Xml::Schema::Datatype_dateTimeTimeZone::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61bfaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dateTimeTimeZone*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_dateTimeTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_dateTimeTimeZone*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_dateTimeTimeZone* System::Xml::Schema::Datatype_dateTimeTimeZone::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_dateTimeTimeZone*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_dateTimeTimeZone::Datatype_dateTimeTimeZone() {}
