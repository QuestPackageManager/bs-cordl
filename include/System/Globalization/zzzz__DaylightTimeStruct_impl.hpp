#pragma once
// IWYU pragma private; include "System\Globalization\DaylightTimeStruct.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__DaylightTimeStruct_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Globalization::DaylightTimeStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::DaylightTimeStruct::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan)>(
    &::System::Globalization::DaylightTimeStruct::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bbce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTimeStruct>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::DaylightTimeStruct::_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::DaylightTimeStruct>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end, delta);
}
// Ctor Parameters [CppParam { name: "Start", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "::System::DateTime", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "Delta", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DaylightTimeStruct::DaylightTimeStruct(::System::DateTime Start, ::System::DateTime End, ::System::TimeSpan Delta) noexcept {
  this->Start = Start;
  this->End = End;
  this->Delta = Delta;
}
// Ctor Parameters []
constexpr ::System::Globalization::DaylightTimeStruct::DaylightTimeStruct() {}
