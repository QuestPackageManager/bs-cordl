#pragma once
// IWYU pragma private; include "System/Diagnostics/MonitoringDescriptionAttribute.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_impl.hpp"
#include "System/Diagnostics/zzzz__MonitoringDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::MonitoringDescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::MonitoringDescriptionAttribute::*)(::StringW)>(&::System::Diagnostics::MonitoringDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639aa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::MonitoringDescriptionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::MonitoringDescriptionAttribute.get_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::MonitoringDescriptionAttribute::*)()>(
    &::System::Diagnostics::MonitoringDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639aaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::MonitoringDescriptionAttribute*>(),
                                                                                          { ::i2c::class_of<::System::Diagnostics::MonitoringDescriptionAttribute*>(), 7 }));
    return ___internal_method;
  }
};
inline void System::Diagnostics::MonitoringDescriptionAttribute::_ctor(::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::MonitoringDescriptionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::StringW System::Diagnostics::MonitoringDescriptionAttribute::get_Description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::MonitoringDescriptionAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Diagnostics::MonitoringDescriptionAttribute* System::Diagnostics::MonitoringDescriptionAttribute::New_ctor(::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::MonitoringDescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::MonitoringDescriptionAttribute::MonitoringDescriptionAttribute() {}
