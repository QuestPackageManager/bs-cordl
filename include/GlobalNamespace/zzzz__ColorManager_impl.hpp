#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorManager.get_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::get_obstaclesColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d2e668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "get_obstaclesColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.add_colorSchemeDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorManager::*)(::System::Action*)>(&::GlobalNamespace::ColorManager::add_colorSchemeDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d2e684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "add_colorSchemeDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.remove_colorSchemeDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorManager::*)(::System::Action*)>(&::GlobalNamespace::ColorManager::remove_colorSchemeDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d2e730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "remove_colorSchemeDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.SetColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorManager::*)(::GlobalNamespace::ColorScheme*)>(&::GlobalNamespace::ColorManager::SetColorScheme)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d2e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "SetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.ColorForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)(::GlobalNamespace::EnvironmentColorType, bool)>(
    &::GlobalNamespace::ColorManager::ColorForType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d2e808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.ColorForType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::ColorManager::ColorForType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d2e90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.ColorForSaberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::ColorManager::ColorForSaberType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d2e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForSaberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.EffectsColorForSaberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::ColorManager::EffectsColorForSaberType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d2e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "EffectsColorForSaberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetObstacleEffectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::GetObstacleEffectColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d2ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "GetObstacleEffectColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d2eaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::ColorManager::__cordl_internal_get_colorSchemeDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeDidChangeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ColorManager::__cordl_internal_get_colorSchemeDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeDidChangeEvent;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_colorSchemeDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorSchemeDidChangeEvent = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::ColorManager::__cordl_internal_get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::ColorManager::__cordl_internal_get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set__colorScheme(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme = value;
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::get_obstaclesColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "get_obstaclesColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorManager::add_colorSchemeDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "add_colorSchemeDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorManager::remove_colorSchemeDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "remove_colorSchemeDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorManager::SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "SetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorScheme);
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::ColorForType(::GlobalNamespace::EnvironmentColorType type, bool boost) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForType", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, type, boost);
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::ColorForType(::GlobalNamespace::ColorType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, type);
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::ColorForSaberType(::GlobalNamespace::SaberType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "ColorForSaberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, type);
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::EffectsColorForSaberType(::GlobalNamespace::SaberType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "EffectsColorForSaberType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, type);
}
inline ::UnityEngine::Color GlobalNamespace::ColorManager::GetObstacleEffectColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { "GetObstacleEffectColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorManager* GlobalNamespace::ColorManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorManager::ColorManager() {}
