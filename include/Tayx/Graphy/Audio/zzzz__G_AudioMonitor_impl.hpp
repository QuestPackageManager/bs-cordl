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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::get_Spectrum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "get_Spectrum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_Spectrum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::set_Spectrum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_Spectrum", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_SpectrumHighestValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumHighestValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                               "get_SpectrumHighestValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_SpectrumHighestValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(::ArrayW<float_t, ::Array<float_t>*>)>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::set_SpectrumHighestValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_SpectrumHighestValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_MaxDB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::get_MaxDB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "get_MaxDB",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.set_MaxDB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::set_MaxDB)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3041488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_MaxDB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.get_SpectrumDataAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumDataAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x30406d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                               "get_SpectrumDataAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3041490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3041494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3041734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.UpdateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::UpdateParameters)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x30411a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                               "UpdateParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.lin2dB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::lin2dB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3040eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "lin2dB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.dBNormalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::Audio::G_AudioMonitor::*)(float_t)>(&::Tayx::Graphy::Audio::G_AudioMonitor::dBNormalized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3040f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "dBNormalized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.FindAudioListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioListener> (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(
    &::Tayx::Graphy::Audio::G_AudioMonitor::FindAudioListener)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3041680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                               "FindAudioListener", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.OnSceneLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)(
    ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Tayx::Graphy::Audio::G_AudioMonitor::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x30417d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "OnSceneLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x303a824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioMonitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::Audio::G_AudioMonitor::*)()>(&::Tayx::Graphy::Audio::G_AudioMonitor::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x30417fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_graphyManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_audioListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_findAudioListenerInCameraIfNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get_m_findAudioListenerInCameraIfNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_findAudioListenerInCameraIfNull;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener value) {
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
constexpr ::ArrayW<float_t, ::Array<float_t>*>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__Spectrum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Spectrum_k__BackingField;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__Spectrum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Spectrum_k__BackingField;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set__Spectrum_k__BackingField(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Spectrum_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__SpectrumHighestValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SpectrumHighestValues_k__BackingField;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_get__SpectrumHighestValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SpectrumHighestValues_k__BackingField;
}
constexpr void Tayx::Graphy::Audio::G_AudioMonitor::__cordl_internal_set__SpectrumHighestValues_k__BackingField(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SpectrumHighestValues_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::ArrayW<float_t, ::Array<float_t>*> Tayx::Graphy::Audio::G_AudioMonitor::get_Spectrum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "get_Spectrum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_Spectrum(::ArrayW<float_t, ::Array<float_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_Spectrum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<float_t, ::Array<float_t>*> Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumHighestValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                             "get_SpectrumHighestValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_SpectrumHighestValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_SpectrumHighestValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::get_MaxDB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "get_MaxDB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::set_MaxDB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "set_MaxDB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Tayx::Graphy::Audio::G_AudioMonitor::get_SpectrumDataAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(),
                                                                             "get_SpectrumDataAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "UpdateParameters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::lin2dB(float_t linear) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "lin2dB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, linear);
}
inline float_t Tayx::Graphy::Audio::G_AudioMonitor::dBNormalized(float_t db) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "dBNormalized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, db);
}
inline ::UnityW<::UnityEngine::AudioListener> Tayx::Graphy::Audio::G_AudioMonitor::FindAudioListener() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "FindAudioListener",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioListener>, false>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "OnSceneLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scene, loadSceneMode);
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Tayx::Graphy::Audio::G_AudioMonitor* Tayx::Graphy::Audio::G_AudioMonitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Tayx::Graphy::Audio::G_AudioMonitor*>());
}
inline void Tayx::Graphy::Audio::G_AudioMonitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::Audio::G_AudioMonitor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor::G_AudioMonitor() {}
