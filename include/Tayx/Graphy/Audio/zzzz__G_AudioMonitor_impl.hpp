#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioMonitor.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_impl.hpp"
#include "UnityEngine/zzzz__FFTWindow_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_Spectrum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::get_Spectrum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_Spectrum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_Spectrum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(::ArrayW<float_t>)>(&::Tayx::Graphy::Audio::G_AudioMonitor::set_Spectrum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_Spectrum", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_SpectrumHighestValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumHighestValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_SpectrumHighestValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_SpectrumHighestValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(::ArrayW<float_t>)>(&::Tayx::Graphy::Audio::G_AudioMonitor::set_SpectrumHighestValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_SpectrumHighestValues", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_MaxDB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::get_MaxDB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_MaxDB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_MaxDB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::set_MaxDB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x643c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_MaxDB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_SpectrumDataAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumDataAvailable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x643b658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_SpectrumDataAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643c464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Update)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x643c468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::OnDestroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x643c728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::UpdateParameters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x643c160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.lin2dB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::lin2dB)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x643be94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "lin2dB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.dBNormalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::dBNormalized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x643bec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "dBNormalized", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.FindAudioListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioListener> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::FindAudioListener)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x643c66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "FindAudioListener", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.OnSceneLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x643c7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(),
                                         { "OnSceneLoaded", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Init)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6435930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x643c7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::UnityEngine::AudioListener>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_audioListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioListener;
}
constexpr ::UnityW<::UnityEngine::AudioListener> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_audioListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioListener;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_audioListener(::UnityW<::UnityEngine::AudioListener> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioListener = value;
}
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_findAudioListenerInCameraIfNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr ::Tayx::Graphy::GraphyManager_LookForAudioListener const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_findAudioListenerInCameraIfNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::GraphyManager_LookForAudioListener value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_findAudioListenerInCameraIfNull = value;
}
constexpr ::UnityEngine::FFTWindow& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_FFTWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FFTWindow;
}
constexpr ::UnityEngine::FFTWindow const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_FFTWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FFTWindow;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_FFTWindow(::UnityEngine::FFTWindow value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FFTWindow = value;
}
constexpr int32_t& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_spectrumSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spectrumSize;
}
constexpr int32_t const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_spectrumSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_spectrumSize;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_spectrumSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_spectrumSize = value;
}
constexpr ::ArrayW<float_t>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__Spectrum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Spectrum_k__BackingField;
}
constexpr ::ArrayW<float_t> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__Spectrum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Spectrum_k__BackingField;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set__Spectrum_k__BackingField(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Spectrum_k__BackingField = value;
}
constexpr ::ArrayW<float_t>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__SpectrumHighestValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SpectrumHighestValues_k__BackingField;
}
constexpr ::ArrayW<float_t> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__SpectrumHighestValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SpectrumHighestValues_k__BackingField;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set__SpectrumHighestValues_k__BackingField(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SpectrumHighestValues_k__BackingField = value;
}
constexpr float_t& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__MaxDB_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxDB_k__BackingField;
}
constexpr float_t const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__MaxDB_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxDB_k__BackingField;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set__MaxDB_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxDB_k__BackingField = value;
}
inline ::ArrayW<float_t> Tayx::Graphy::Audio::G_AudioMonitor::get_Spectrum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_Spectrum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_Spectrum(::ArrayW<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_Spectrum", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumHighestValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_SpectrumHighestValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_SpectrumHighestValues(::ArrayW<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_SpectrumHighestValues", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::get_MaxDB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_MaxDB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_MaxDB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "set_MaxDB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumDataAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "get_SpectrumDataAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::lin2dB(float_t linear) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "lin2dB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, linear);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::dBNormalized(float_t db) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "dBNormalized", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, db);
}
inline ::UnityW<::UnityEngine::AudioListener> Tayx::Graphy::Audio::G_AudioMonitor::FindAudioListener() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "FindAudioListener", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioListener>>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(),
                                              { "OnSceneLoaded", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, loadSceneMode);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioMonitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Audio::G_AudioMonitor* Tayx::Graphy::Audio::G_AudioMonitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Audio::G_AudioMonitor*>());
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor::G_AudioMonitor() {}
