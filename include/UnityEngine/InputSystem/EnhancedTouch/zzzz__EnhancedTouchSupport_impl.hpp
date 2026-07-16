#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/EnhancedTouchSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_impl.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__EnhancedTouchSupport_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::get_enabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x65a01dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Enable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x65a0230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Disable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x65a0578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x65a08c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.SetUpState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::SetUpState)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x65a03b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "SetUpState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.TearDownState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::TearDownState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x65a0720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "TearDownState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.OnDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(
    &::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::OnDeviceChange)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x65a09e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(),
                                         { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.OnSettingsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::OnSettingsChange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65a0c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "OnSettingsChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport.CheckEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::CheckEnabled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65a0d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "CheckEnabled", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::setStaticF_s_Enabled(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_Enabled", ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::getStaticF_s_Enabled() {
  return ::cordl_internals::getStaticField<int32_t, "s_Enabled", ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>();
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::setStaticF_s_UpdateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputSettings_UpdateMode, "s_UpdateMode", ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(
      std::forward<::UnityEngine::InputSystem::InputSettings_UpdateMode>(value));
}
inline ::UnityEngine::InputSystem::InputSettings_UpdateMode UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::getStaticF_s_UpdateMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputSettings_UpdateMode, "s_UpdateMode", ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>();
}
inline bool UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::get_enabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::SetUpState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "SetUpState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::TearDownState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "TearDownState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(),
                                       { "OnDeviceChange", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, change);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::OnSettingsChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "OnSettingsChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::CheckEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport*>(), { "CheckEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport::EnhancedTouchSupport() {}
