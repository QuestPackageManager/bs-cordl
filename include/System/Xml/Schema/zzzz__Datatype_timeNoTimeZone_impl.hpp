#pragma once
// IWYU pragma private; include "System\Xml\Schema\Datatype_timeNoTimeZone.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_timeNoTimeZone_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_timeNoTimeZone._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Datatype_timeNoTimeZone::*)()>(&::System::Xml::Schema::Datatype_timeNoTimeZone::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x61c03c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_timeNoTimeZone*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::Datatype_timeNoTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Datatype_timeNoTimeZone*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_timeNoTimeZone* System::Xml::Schema::Datatype_timeNoTimeZone::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Datatype_timeNoTimeZone*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_timeNoTimeZone::Datatype_timeNoTimeZone() {}
