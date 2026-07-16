#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettings.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IDebugDisplaySettings::*)()>(&::UnityEngine::Rendering::IDebugDisplaySettings::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.ForEach
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IDebugDisplaySettings::*)(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*)>(
    &::UnityEngine::Rendering::IDebugDisplaySettings::ForEach)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettings.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData* (
    ::UnityEngine::Rendering::IDebugDisplaySettings::*)(::UnityEngine::Rendering::IDebugDisplaySettingsData*)>(&::UnityEngine::Rendering::IDebugDisplaySettings::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IDebugDisplaySettings::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IDebugDisplaySettings::ForEach(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* onExecute) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onExecute);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::IDebugDisplaySettings::Add(::UnityEngine::Rendering::IDebugDisplaySettingsData* newData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettings*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(this, ___internal_method, newData);
}
