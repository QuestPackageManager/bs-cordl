#pragma once
// IWYU pragma private; include "GlobalNamespace/IRefractorDebuggerSettings.hpp"
#include "GlobalNamespace/zzzz__IRefractorDebuggerSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRefractorDebuggerSettings.get_addMissingLightActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IRefractorDebuggerSettings::*)()>(&::GlobalNamespace::IRefractorDebuggerSettings::get_addMissingLightActions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), { ::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IRefractorDebuggerSettings.InvokeLightRetargetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IRefractorDebuggerSettings::*)(int32_t, int32_t)>(
    &::GlobalNamespace::IRefractorDebuggerSettings::InvokeLightRetargetEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), { ::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), 1 }));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IRefractorDebuggerSettings::get_addMissingLightActions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IRefractorDebuggerSettings::InvokeLightRetargetEvent(int32_t lightId, int32_t refractId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRefractorDebuggerSettings*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, refractId);
}
