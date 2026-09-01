#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimelineClip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimelineClip_Versions::TimelineClip_Versions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip_Versions::TimelineClip_Versions() {}
constexpr ::UnityEngine::Timeline::TimelineClip_Versions UnityEngine::Timeline::TimelineClip_Versions::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TimelineClip_Versions UnityEngine::Timeline::TimelineClip_Versions::ClipInFromGlobalToLocal{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade.UpgradeClipInFromGlobalToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69b2ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade*>(),
                                                                                           { "UpgradeClipInFromGlobalToLocal", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade*>(),
                                                                                         { "UpgradeClipInFromGlobalToLocal", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade::TimelineClip_TimelineClipUpgrade() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation::TimelineClip_ClipExtrapolation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation::TimelineClip_ClipExtrapolation() {}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip_ClipExtrapolation::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip_ClipExtrapolation::Hold{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip_ClipExtrapolation::Loop{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip_ClipExtrapolation::PingPong{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip_ClipExtrapolation::Continue{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode::TimelineClip_BlendCurveMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode::TimelineClip_BlendCurveMode() {}
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode UnityEngine::Timeline::TimelineClip_BlendCurveMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode UnityEngine::Timeline::TimelineClip_BlendCurveMode::Manual{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UpgradeToLatestVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69b2ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UpgradeToLatestVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClip::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69b2d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasPreExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b2e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasPreExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasPostExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b2e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasPostExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_timeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_timeScale)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69b2e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_timeScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_timeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_timeScale)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x69b303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_timeScale", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x69af148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_start", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_duration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69af260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_duration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_end
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_end)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69b3278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_end", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipIn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b3288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipIn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_clipIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_clipIn)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x69b32a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_clipIn", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b339c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&::UnityEngine::Timeline::TimelineClip::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b33a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipAssetDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipAssetDuration)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x69b33ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipAssetDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_curves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_curves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_curves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::TimelineClip::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_curves", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69b3480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasCurves)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69b34dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasCurves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Object*)>(&::UnityEngine::Timeline::TimelineClip::set_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_asset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b357c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_underlyingAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_underlyingAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_underlyingAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_underlyingAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Object*)>(&::UnityEngine::Timeline::TimelineClip::set_underlyingAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b3594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_underlyingAsset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_parentTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_parentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_parentTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_parentTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClip::set_parentTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b35a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_parentTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetParentTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::GetParentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b35a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetParentTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetParentTrack_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x69b2d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetParentTrack_Internal", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeInDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeInDuration)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69b36f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeInDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_easeInDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_easeInDuration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x69b37ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_easeInDuration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeOutDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeOutDuration)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69b38f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeOutDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_easeOutDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_easeOutDuration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x69b39e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_easeOutDuration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_eastOutTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_eastOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69b3ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_eastOutTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_easeOutTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_easeOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69b3b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeOutTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendInDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendInDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b3b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendInDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendInDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_blendInDuration)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69b3b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendInDuration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendOutDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_blendOutDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b3bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendOutDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendOutDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::set_blendOutDuration)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69b3c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendOutDuration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendInCurveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_BlendCurveMode (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendInCurveMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendInCurveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TimelineClip_BlendCurveMode)>(
    &::UnityEngine::Timeline::TimelineClip::set_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendInCurveMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_blendOutCurveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_BlendCurveMode (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendOutCurveMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_blendOutCurveMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TimelineClip_BlendCurveMode)>(
    &::UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendOutCurveMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasBlendIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasBlendIn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69b39b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasBlendIn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_hasBlendOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_hasBlendOut)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69b37c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasBlendOut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInCurve)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69b3cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_mixInCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Timeline::TimelineClip::set_mixInCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_mixInCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b3d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInPercentage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixInDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixInDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69b3d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutCurve)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69b3dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_mixOutCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Timeline::TimelineClip::set_mixOutCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_mixOutCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69b3e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69b3ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_mixOutPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_mixOutPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b3eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutPercentage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_recordable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_recordable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_recordable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_recordable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(bool)>(&::UnityEngine::Timeline::TimelineClip::set_recordable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_recordable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_exposedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_exposedParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69b3f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_exposedParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_clipCaps)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x69b2f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::Hash)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69b3f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "Hash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.EvaluateMixOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::EvaluateMixOut)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69b4010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "EvaluateMixOut", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.EvaluateMixIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::EvaluateMixIn)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69b410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "EvaluateMixIn", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetDefaultMixInCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)()>(&::UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69b3d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetDefaultMixInCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetDefaultMixOutCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)()>(&::UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69b3e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetDefaultMixOutCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::ToLocalTime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69b41e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ToLocalTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToLocalTimeUnbound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69b44a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ToLocalTimeUnbound", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.FromLocalTimeUnbound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69b44f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "FromLocalTimeUnbound", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_animationClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_animationClip)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69b4534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_animationClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SanitizeTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::SanitizeTimeValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x69b3130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SanitizeTimeValue", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_postExtrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x69b4634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_postExtrapolationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_postExtrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x69af4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                             { "set_postExtrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_preExtrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x69b4658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_preExtrapolationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.set_preExtrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x69af478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                             { "set_preExtrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetPostExtrapolationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetPostExtrapolationTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.SetPreExtrapolationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b4684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetPreExtrapolationTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsExtrapolatedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69b468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsPreExtrapolatedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69b42d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsPreExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.IsPostExtrapolatedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TimelineClip::*)(double_t)>(&::UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69b4448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsPostExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_extrapolatedStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_extrapolatedStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69b46c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_extrapolatedStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.get_extrapolatedDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69b46e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_extrapolatedDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.GetExtrapolatedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, double_t)>(
    &::UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x69b4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                            { "GetExtrapolatedTime", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.CreateCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&::UnityEngine::Timeline::TimelineClip::CreateCurves)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69b47bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "CreateCurves", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(
    &::UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69b4898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x69b48d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.ConformEaseValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)()>(&::UnityEngine::Timeline::TimelineClip::ConformEaseValues)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69b4aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ConformEaseValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.CalculateEasingRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::CalculateEasingRatio)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69b4b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "CalculateEasingRatio", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClip.UpdateDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimelineClip::*)(double_t, double_t)>(&::UnityEngine::Timeline::TimelineClip::UpdateDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b3124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UpdateDirty", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Start(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Start = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ClipIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipIn;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ClipIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipIn;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ClipIn(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipIn = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Asset;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Asset = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Duration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Duration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Duration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Duration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_TimeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeScale;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_TimeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeScale;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_TimeScale(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeScale = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ParentTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentTrack;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ParentTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentTrack;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ParentTrack(::UnityW<::UnityEngine::Timeline::TrackAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentTrack = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EaseInDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EaseInDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_EaseInDuration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EaseInDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EaseOutDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_EaseOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EaseOutDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_EaseOutDuration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EaseOutDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendInDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendInDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendInDuration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendInDuration = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendOutDuration;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendOutDuration;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendOutDuration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendOutDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixInCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixInCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixInCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixInCurve;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_MixInCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixInCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixOutCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixOutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_MixOutCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixOutCurve;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_MixOutCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixOutCurve = value;
}
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInCurveMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendInCurveMode;
}
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendInCurveMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendInCurveMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendInCurveMode = value;
}
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutCurveMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendOutCurveMode;
}
constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_BlendOutCurveMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendOutCurveMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_BlendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendOutCurveMode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ExposedParameterNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExposedParameterNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_ExposedParameterNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExposedParameterNames;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_ExposedParameterNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExposedParameterNames = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_AnimationCurves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationCurves;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_AnimationCurves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationCurves;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_AnimationCurves(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimationCurves = value;
}
constexpr bool& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Recordable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Recordable;
}
constexpr bool const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_Recordable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Recordable;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_Recordable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Recordable = value;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostExtrapolationMode;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostExtrapolationMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PostExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostExtrapolationMode = value;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreExtrapolationMode;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreExtrapolationMode;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PreExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreExtrapolationMode = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostExtrapolationTime;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PostExtrapolationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostExtrapolationTime;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PostExtrapolationTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostExtrapolationTime = value;
}
constexpr double_t& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreExtrapolationTime;
}
constexpr double_t const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_PreExtrapolationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreExtrapolationTime;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_PreExtrapolationTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreExtrapolationTime = value;
}
constexpr ::StringW& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::Timeline::TimelineClip::__cordl_internal_get_m_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayName;
}
constexpr void UnityEngine::Timeline::TimelineClip::__cordl_internal_set_m_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayName = value;
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultClipCaps(::UnityEngine::Timeline::ClipCaps value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::UnityEngine::Timeline::TimelineClip*>(std::forward<::UnityEngine::Timeline::ClipCaps>(value));
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultClipCaps() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultClipDurationInSeconds(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kDefaultClipDurationInSeconds", ::UnityEngine::Timeline::TimelineClip*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultClipDurationInSeconds() {
  return ::cordl_internals::getStaticField<float_t, "kDefaultClipDurationInSeconds", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kTimeScaleMin(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kTimeScaleMin", ::UnityEngine::Timeline::TimelineClip*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kTimeScaleMin() {
  return ::cordl_internals::getStaticField<double_t, "kTimeScaleMin", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kTimeScaleMax(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kTimeScaleMax", ::UnityEngine::Timeline::TimelineClip*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kTimeScaleMax() {
  return ::cordl_internals::getStaticField<double_t, "kTimeScaleMax", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kDefaultCurvesName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kDefaultCurvesName", ::UnityEngine::Timeline::TimelineClip*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Timeline::TimelineClip::getStaticF_kDefaultCurvesName() {
  return ::cordl_internals::getStaticField<::StringW, "kDefaultCurvesName", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kMinDuration(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kMinDuration", ::UnityEngine::Timeline::TimelineClip*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kMinDuration() {
  return ::cordl_internals::getStaticField<double_t, "kMinDuration", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::setStaticF_kMaxTimeValue(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kMaxTimeValue", ::UnityEngine::Timeline::TimelineClip*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::TimelineClip::getStaticF_kMaxTimeValue() {
  return ::cordl_internals::getStaticField<double_t, "kMaxTimeValue", ::UnityEngine::Timeline::TimelineClip*>();
}
inline void UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UpgradeToLatestVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::_ctor(::UnityEngine::Timeline::TrackAsset* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasPreExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasPostExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_timeScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_timeScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_timeScale(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_timeScale", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_start(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_start", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_duration(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_duration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_end() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_end", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_clipIn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipIn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_clipIn(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_clipIn", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_displayName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_displayName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_clipAssetDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipAssetDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::TimelineClip::get_curves() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_curves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_curves(::UnityEngine::AnimationClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_curves", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasCurves() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasCurves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_asset(::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_asset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TimelineClip::get_underlyingAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_underlyingAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_underlyingAsset(::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_underlyingAsset", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::get_parentTrack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_parentTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_parentTrack(::UnityEngine::Timeline::TrackAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_parentTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineClip::GetParentTrack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetParentTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset* newParentTrack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetParentTrack_Internal", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newParentTrack);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeInDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeInDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_easeInDuration(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_easeInDuration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeOutDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeOutDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_easeOutDuration(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_easeOutDuration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_eastOutTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_eastOutTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_easeOutTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_easeOutTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_blendInDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendInDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendInDuration(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendInDuration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_blendOutDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendOutDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendOutDuration(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_blendOutDuration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendInCurveMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendInCurveMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                                                         { "set_blendInCurveMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_blendOutCurveMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                                                         { "set_blendOutCurveMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_BlendCurveMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasBlendIn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasBlendIn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_hasBlendOut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_hasBlendOut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixInCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_mixInCurve(::UnityEngine::AnimationCurve* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_mixInCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Timeline::TimelineClip::get_mixInPercentage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInPercentage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixInDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixInDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixOutCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_mixOutCurve(::UnityEngine::AnimationCurve* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_mixOutCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixOutTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_mixOutDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t UnityEngine::Timeline::TimelineClip::get_mixOutPercentage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_mixOutPercentage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimelineClip::get_recordable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_recordable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_recordable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "set_recordable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Timeline::TimelineClip::get_exposedParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_exposedParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_clipCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TimelineClip::Hash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "Hash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Timeline::TimelineClip::EvaluateMixOut(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "EvaluateMixOut", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline float_t UnityEngine::Timeline::TimelineClip::EvaluateMixIn(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "EvaluateMixIn", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetDefaultMixInCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "GetDefaultMixOutCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::ToLocalTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ToLocalTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, time);
}
inline double_t UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ToLocalTimeUnbound", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, time);
}
inline double_t UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "FromLocalTimeUnbound", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, time);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::TimelineClip::get_animationClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_animationClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::SanitizeTimeValue(double_t value, double_t defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SanitizeTimeValue", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, defaultValue);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_postExtrapolationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                           { "set_postExtrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_preExtrapolationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                                                           { "set_preExtrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetPostExtrapolationTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "SetPreExtrapolationTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline bool UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime(double_t sequenceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceTime);
}
inline bool UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime(double_t sequenceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsPreExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceTime);
}
inline bool UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime(double_t sequenceTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "IsPostExtrapolatedTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sequenceTime);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_extrapolatedStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "get_extrapolatedDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime(double_t time, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation mode, double_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(),
                          { "GetExtrapolatedTime", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, time, mode, duration);
}
inline void UnityEngine::Timeline::TimelineClip::CreateCurves(::StringW curvesClipName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "CreateCurves", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curvesClipName);
}
inline void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Timeline::TimelineClip::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimelineClip::ConformEaseValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "ConformEaseValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TimelineClip::CalculateEasingRatio(double_t easeIn, double_t easeOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "CalculateEasingRatio", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, easeIn, easeOut);
}
inline void UnityEngine::Timeline::TimelineClip::UpdateDirty(double_t oldValue, double_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClip*>(), { "UpdateDirty", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TimelineClip::New_ctor(::UnityEngine::Timeline::TrackAsset* parent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimelineClip*>(parent));
}
/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr UnityEngine::Timeline::TimelineClip::operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept {
  return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
constexpr ::UnityEngine::Timeline::ICurvesOwner* UnityEngine::Timeline::TimelineClip::i___UnityEngine__Timeline__ICurvesOwner() noexcept {
  return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Timeline::TimelineClip::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Timeline::TimelineClip::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClip::TimelineClip() {}
