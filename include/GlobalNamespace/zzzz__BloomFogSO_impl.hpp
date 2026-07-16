#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.set_transition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(float_t)>(&::GlobalNamespace::BloomFogSO::set_transition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5861444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_transition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_transition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::get_transition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_transition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_defaultForParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> (::GlobalNamespace::BloomFogSO::*)()>(
    &::GlobalNamespace::BloomFogSO::get_defaultForParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_defaultForParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.set_defaultForParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&::GlobalNamespace::BloomFogSO::set_defaultForParams)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x586191c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_defaultForParams", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_transitionFogParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> (::GlobalNamespace::BloomFogSO::*)()>(
    &::GlobalNamespace::BloomFogSO::get_transitionFogParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_transitionFogParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.set_transitionFogParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(
    &::GlobalNamespace::BloomFogSO::set_transitionFogParams)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5861794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_transitionFogParams", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.set_bloomFogEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(bool)>(&::GlobalNamespace::BloomFogSO::set_bloomFogEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_bloomFogEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_bloomFogEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::get_bloomFogEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_bloomFogEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.set_legacyAutoExposureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(bool)>(&::GlobalNamespace::BloomFogSO::set_legacyAutoExposureEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5861530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_legacyAutoExposureEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_legacyAutoExposureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::get_legacyAutoExposureEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_legacyAutoExposureEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_autoExposureLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::get_autoExposureLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_autoExposureLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.get_noteSpawnIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::get_noteSpawnIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_noteSpawnIntensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&::GlobalNamespace::BloomFogSO::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5861b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { ::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.UpdateKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::UpdateKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5861b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "UpdateKeyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.UpdateShaderParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::UpdateShaderParams)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x586154c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "UpdateShaderParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO.SetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::BloomFogSO::SetParams)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5861bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "SetParams",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogSO::*)()>(&::GlobalNamespace::BloomFogSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BloomFogSO::__cordl_internal_get__bloomFogEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogEnabled;
}
constexpr bool const& GlobalNamespace::BloomFogSO::__cordl_internal_get__bloomFogEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogEnabled;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__bloomFogEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFogEnabled = value;
}
constexpr bool& GlobalNamespace::BloomFogSO::__cordl_internal_get__legacyAutoExposureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureEnabled;
}
constexpr bool const& GlobalNamespace::BloomFogSO::__cordl_internal_get__legacyAutoExposureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureEnabled;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__legacyAutoExposureEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____legacyAutoExposureEnabled = value;
}
constexpr float_t& GlobalNamespace::BloomFogSO::__cordl_internal_get__transition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transition;
}
constexpr float_t const& GlobalNamespace::BloomFogSO::__cordl_internal_get__transition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transition;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__transition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transition = value;
}
constexpr float_t& GlobalNamespace::BloomFogSO::__cordl_internal_get__autoExposureLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoExposureLimit;
}
constexpr float_t const& GlobalNamespace::BloomFogSO::__cordl_internal_get__autoExposureLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoExposureLimit;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__autoExposureLimit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoExposureLimit = value;
}
constexpr float_t& GlobalNamespace::BloomFogSO::__cordl_internal_get__noteSpawnIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteSpawnIntensity;
}
constexpr float_t const& GlobalNamespace::BloomFogSO::__cordl_internal_get__noteSpawnIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteSpawnIntensity;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__noteSpawnIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteSpawnIntensity = value;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword& GlobalNamespace::BloomFogSO::__cordl_internal_get__bloomFogEnabledKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogEnabledKeyword;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword const& GlobalNamespace::BloomFogSO::__cordl_internal_get__bloomFogEnabledKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogEnabledKeyword;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__bloomFogEnabledKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFogEnabledKeyword = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& GlobalNamespace::BloomFogSO::__cordl_internal_get__defaultFogParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFogParams;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& GlobalNamespace::BloomFogSO::__cordl_internal_get__defaultFogParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultFogParams;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__defaultFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultFogParams = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& GlobalNamespace::BloomFogSO::__cordl_internal_get__transitionFogParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionFogParams;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& GlobalNamespace::BloomFogSO::__cordl_internal_get__transitionFogParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionFogParams;
}
constexpr void GlobalNamespace::BloomFogSO::__cordl_internal_set__transitionFogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionFogParams = value;
}
inline void GlobalNamespace::BloomFogSO::setStaticF__customFogAttenuationID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogAttenuationID", ::GlobalNamespace::BloomFogSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomFogSO::getStaticF__customFogAttenuationID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogAttenuationID", ::GlobalNamespace::BloomFogSO*>();
}
inline void GlobalNamespace::BloomFogSO::setStaticF__customFogOffsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogOffsetID", ::GlobalNamespace::BloomFogSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomFogSO::getStaticF__customFogOffsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogOffsetID", ::GlobalNamespace::BloomFogSO*>();
}
inline void GlobalNamespace::BloomFogSO::setStaticF__customFogHeightFogStartYID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogHeightFogStartYID", ::GlobalNamespace::BloomFogSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomFogSO::getStaticF__customFogHeightFogStartYID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogHeightFogStartYID", ::GlobalNamespace::BloomFogSO*>();
}
inline void GlobalNamespace::BloomFogSO::setStaticF__customFogHeightFogHeightID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogHeightFogHeightID", ::GlobalNamespace::BloomFogSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomFogSO::getStaticF__customFogHeightFogHeightID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogHeightFogHeightID", ::GlobalNamespace::BloomFogSO*>();
}
inline void GlobalNamespace::BloomFogSO::set_transition(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_transition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BloomFogSO::get_transition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_transition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> GlobalNamespace::BloomFogSO::get_defaultForParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_defaultForParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::set_defaultForParams(::GlobalNamespace::BloomFogEnvironmentParams* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_defaultForParams", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> GlobalNamespace::BloomFogSO::get_transitionFogParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_transitionFogParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::set_transitionFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_transitionFogParams", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BloomFogSO::set_bloomFogEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_bloomFogEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BloomFogSO::get_bloomFogEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_bloomFogEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::set_legacyAutoExposureEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "set_legacyAutoExposureEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BloomFogSO::get_legacyAutoExposureEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_legacyAutoExposureEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::BloomFogSO::get_autoExposureLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_autoExposureLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BloomFogSO::get_noteSpawnIntensity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "get_noteSpawnIntensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::Setup(::GlobalNamespace::BloomFogEnvironmentParams* defaultFogParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::BloomFogEnvironmentParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultFogParams);
}
inline void GlobalNamespace::BloomFogSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::UpdateKeyword() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "UpdateKeyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::UpdateShaderParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { "UpdateShaderParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogSO::SetParams(float_t attenuation, float_t offset, float_t heightFogStartY, float_t heightFogHeight, float_t autoExposureLimit, float_t noteSpawnIntensity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BloomFogSO*>(),
          { "SetParams", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attenuation, offset, heightFogStartY, heightFogHeight, autoExposureLimit, noteSpawnIntensity);
}
inline void GlobalNamespace::BloomFogSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomFogSO* GlobalNamespace::BloomFogSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomFogSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomFogSO::BloomFogSO() {}
