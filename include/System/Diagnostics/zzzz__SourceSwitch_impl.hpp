#pragma once
// IWYU pragma private; include "System\Diagnostics\SourceSwitch.hpp"
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__SourceSwitch_def.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::SourceSwitch::*)(::StringW, ::StringW)>(&::System::Diagnostics::SourceSwitch::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63971cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.get_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::SourceLevels (::System::Diagnostics::SourceSwitch::*)()>(&::System::Diagnostics::SourceSwitch::get_Level)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6397484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { "get_Level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.set_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::SourceSwitch::*)(::System::Diagnostics::SourceLevels)>(&::System::Diagnostics::SourceSwitch::set_Level)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63974c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { "set_Level", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SourceSwitch.OnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::SourceSwitch::*)()>(&::System::Diagnostics::SourceSwitch::OnValueChanged)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63974c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { ::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Diagnostics::SourceSwitch::_ctor(::StringW displayName, ::StringW defaultSwitchValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, defaultSwitchValue);
}
inline ::System::Diagnostics::SourceLevels System::Diagnostics::SourceSwitch::get_Level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { "get_Level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels>(this, ___internal_method);
}
inline void System::Diagnostics::SourceSwitch::set_Level(::System::Diagnostics::SourceLevels value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), { "set_Level", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::SourceSwitch::OnValueChanged() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::SourceSwitch*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceSwitch* System::Diagnostics::SourceSwitch::New_ctor(::StringW displayName, ::StringW defaultSwitchValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::SourceSwitch*>(displayName, defaultSwitchValue));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::SourceSwitch::SourceSwitch() {}
