#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData_Flags::FrameData_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData_Flags::FrameData_Flags() {}
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::Evaluate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::SeekOccured{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::Loop{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::Hold{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::EffectivePlayStateDelayed{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Playables::FrameData_Flags UnityEngine::Playables::FrameData_Flags::EffectivePlayStatePlaying{ static_cast<int32_t>(0x20) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData_EvaluationType::FrameData_EvaluationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData_EvaluationType::FrameData_EvaluationType() {}
constexpr ::UnityEngine::Playables::FrameData_EvaluationType UnityEngine::Playables::FrameData_EvaluationType::Evaluate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Playables::FrameData_EvaluationType UnityEngine::Playables::FrameData_EvaluationType::Playback{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.HasFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)(::UnityEngine::Playables::FrameData_Flags)>(
    &::UnityEngine::Playables::FrameData::HasFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48d7cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "HasFlags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData_Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_deltaTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48d7ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_deltaTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectiveSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectiveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48d7cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_effectiveSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_evaluationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::FrameData_EvaluationType (::UnityEngine::Playables::FrameData::*)()>(
    &::UnityEngine::Playables::FrameData::get_evaluationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x48d7cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_evaluationType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_seekOccurred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_seekOccurred)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48d7d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_seekOccurred",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeLooped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeLooped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48d7d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_timeLooped",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeHeld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeHeld)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48d7d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_timeHeld",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::FrameData::*)()>(
    &::UnityEngine::Playables::FrameData::get_output)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48d7d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_output",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectivePlayState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::FrameData::*)()>(
    &::UnityEngine::Playables::FrameData::get_effectivePlayState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x48d7d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                                                                               "get_effectivePlayState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::Playables::FrameData::HasFlags(::UnityEngine::Playables::FrameData_Flags flag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "HasFlags", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData_Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flag);
}
inline float_t UnityEngine::Playables::FrameData::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_deltaTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Playables::FrameData::get_effectiveSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_effectiveSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::FrameData_EvaluationType UnityEngine::Playables::FrameData::get_evaluationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_evaluationType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::FrameData_EvaluationType, false>(this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_seekOccurred() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_seekOccurred",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_timeLooped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_timeLooped",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_timeHeld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_timeHeld",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::FrameData::get_output() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(), "get_output",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::FrameData::get_effectivePlayState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                                                                             "get_effectivePlayState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::FrameData_Flags", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData::FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay,
                                                         float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed, ::UnityEngine::Playables::FrameData_Flags m_Flags,
                                                         ::UnityEngine::Playables::PlayableOutput m_Output) noexcept {
  this->m_FrameID = m_FrameID;
  this->m_DeltaTime = m_DeltaTime;
  this->m_Weight = m_Weight;
  this->m_EffectiveWeight = m_EffectiveWeight;
  this->m_EffectiveParentDelay = m_EffectiveParentDelay;
  this->m_EffectiveParentSpeed = m_EffectiveParentSpeed;
  this->m_EffectiveSpeed = m_EffectiveSpeed;
  this->m_Flags = m_Flags;
  this->m_Output = m_Output;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData::FrameData() {}
