#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineClip)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
struct TimelineClip_BlendCurveMode;
}
namespace UnityEngine::Timeline {
struct TimelineClip_ClipExtrapolation;
}
namespace UnityEngine::Timeline {
class TimelineClip_TimelineClipUpgrade;
}
namespace UnityEngine::Timeline {
struct TimelineClip_Versions;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct TimelineClip_BlendCurveMode;
}
namespace UnityEngine::Timeline {
struct TimelineClip_ClipExtrapolation;
}
namespace UnityEngine::Timeline {
struct TimelineClip_Versions;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TimelineClip_TimelineClipUpgrade;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TimelineClip_BlendCurveMode);
MARK_VAL_T(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation);
MARK_VAL_T(::UnityEngine::Timeline::TimelineClip_Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClip);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineClip/Versions
struct CORDL_TYPE TimelineClip_Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineClip_Versions_Unwrapped
  enum struct __TimelineClip_Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_ClipInFromGlobalToLocal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineClip_Versions_Unwrapped() const noexcept {
    return static_cast<__TimelineClip_Versions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip_Versions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineClip_Versions(int32_t value__) noexcept;

  /// @brief Field ClipInFromGlobalToLocal value: I32(1)
  static ::UnityEngine::Timeline::TimelineClip_Versions const ClipInFromGlobalToLocal;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Timeline::TimelineClip_Versions const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15803 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineClip_Versions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip_Versions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClip/TimelineClipUpgrade
class CORDL_TYPE TimelineClip_TimelineClipUpgrade : public ::System::Object {
public:
  // Declarations
  /// @brief Method UpgradeClipInFromGlobalToLocal, addr 0x481112c, size 0x3c, virtual false, abstract: false, final false
  static inline void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* clip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip_TimelineClipUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip_TimelineClipUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineClip_TimelineClipUpgrade(TimelineClip_TimelineClipUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip_TimelineClipUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineClip_TimelineClipUpgrade(TimelineClip_TimelineClipUpgrade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15804 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct CORDL_TYPE TimelineClip_ClipExtrapolation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineClip_ClipExtrapolation_Unwrapped
  enum struct __TimelineClip_ClipExtrapolation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hold = static_cast<int32_t>(0x1),
    __E_Loop = static_cast<int32_t>(0x2),
    __E_PingPong = static_cast<int32_t>(0x3),
    __E_Continue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineClip_ClipExtrapolation_Unwrapped() const noexcept {
    return static_cast<__TimelineClip_ClipExtrapolation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip_ClipExtrapolation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineClip_ClipExtrapolation(int32_t value__) noexcept;

  /// @brief Field Continue value: I32(4)
  static ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const Continue;

  /// @brief Field Hold value: I32(1)
  static ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const Hold;

  /// @brief Field Loop value: I32(2)
  static ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const Loop;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const None;

  /// @brief Field PingPong value: I32(3)
  static ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const PingPong;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15805 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineClip/BlendCurveMode
struct CORDL_TYPE TimelineClip_BlendCurveMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineClip_BlendCurveMode_Unwrapped
  enum struct __TimelineClip_BlendCurveMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Manual = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineClip_BlendCurveMode_Unwrapped() const noexcept {
    return static_cast<__TimelineClip_BlendCurveMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip_BlendCurveMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineClip_BlendCurveMode(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const Auto;

  /// @brief Field Manual value: I32(1)
  static ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineClip_BlendCurveMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip_BlendCurveMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object, UnityEngine.ISerializationCallbackReceiver, UnityEngine.Timeline.ClipCaps, UnityEngine.Timeline.ICurvesOwner, UnityEngine.Timeline.TimelineClip::BlendCurveMode,
// UnityEngine.Timeline.TimelineClip::ClipExtrapolation
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClip
class CORDL_TYPE TimelineClip : public ::System::Object {
public:
  // Declarations
  using BlendCurveMode = ::UnityEngine::Timeline::TimelineClip_BlendCurveMode;

  using ClipExtrapolation = ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation;

  using TimelineClipUpgrade = ::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade;

  using Versions = ::UnityEngine::Timeline::TimelineClip_Versions;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_assetOwner)) ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_assetOwner;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)) ::StringW UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_targetTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_targetTrack;

  __declspec(property(get = get_animationClip)) ::UnityW<::UnityEngine::AnimationClip> animationClip;

  __declspec(property(get = get_asset, put = set_asset)) ::UnityW<::UnityEngine::Object> asset;

  __declspec(property(get = get_blendInCurveMode, put = set_blendInCurveMode)) ::UnityEngine::Timeline::TimelineClip_BlendCurveMode blendInCurveMode;

  __declspec(property(get = get_blendInDuration, put = set_blendInDuration)) double_t blendInDuration;

  __declspec(property(get = get_blendOutCurveMode, put = set_blendOutCurveMode)) ::UnityEngine::Timeline::TimelineClip_BlendCurveMode blendOutCurveMode;

  __declspec(property(get = get_blendOutDuration, put = set_blendOutDuration)) double_t blendOutDuration;

  __declspec(property(get = get_clipAssetDuration)) double_t clipAssetDuration;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_clipIn, put = set_clipIn)) double_t clipIn;

  __declspec(property(get = get_curves, put = set_curves)) ::UnityW<::UnityEngine::AnimationClip> curves;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_duration, put = set_duration)) double_t duration;

  __declspec(property(get = get_easeInDuration, put = set_easeInDuration)) double_t easeInDuration;

  __declspec(property(get = get_easeOutDuration, put = set_easeOutDuration)) double_t easeOutDuration;

  __declspec(property(get = get_easeOutTime)) double_t easeOutTime;

  __declspec(property(get = get_eastOutTime)) double_t eastOutTime;

  __declspec(property(get = get_end)) double_t end;

  __declspec(property(get = get_exposedParameters)) ::System::Collections::Generic::List_1<::StringW>* exposedParameters;

  __declspec(property(get = get_extrapolatedDuration)) double_t extrapolatedDuration;

  __declspec(property(get = get_extrapolatedStart)) double_t extrapolatedStart;

  __declspec(property(get = get_hasBlendIn)) bool hasBlendIn;

  __declspec(property(get = get_hasBlendOut)) bool hasBlendOut;

  __declspec(property(get = get_hasCurves)) bool hasCurves;

  __declspec(property(get = get_hasPostExtrapolation)) bool hasPostExtrapolation;

  __declspec(property(get = get_hasPreExtrapolation)) bool hasPreExtrapolation;

  /// @brief Field kDefaultClipCaps, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kDefaultClipCaps, put = setStaticF_kDefaultClipCaps)) ::UnityEngine::Timeline::ClipCaps kDefaultClipCaps;

  /// @brief Field kDefaultClipDurationInSeconds, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kDefaultClipDurationInSeconds, put = setStaticF_kDefaultClipDurationInSeconds)) float_t kDefaultClipDurationInSeconds;

  /// @brief Field kDefaultCurvesName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultCurvesName, put = setStaticF_kDefaultCurvesName)) ::StringW kDefaultCurvesName;

  /// @brief Field kMaxTimeValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMaxTimeValue, put = setStaticF_kMaxTimeValue)) double_t kMaxTimeValue;

  /// @brief Field kMinDuration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMinDuration, put = setStaticF_kMinDuration)) double_t kMinDuration;

  /// @brief Field kTimeScaleMax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kTimeScaleMax, put = setStaticF_kTimeScaleMax)) double_t kTimeScaleMax;

  /// @brief Field kTimeScaleMin, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kTimeScaleMin, put = setStaticF_kTimeScaleMin)) double_t kTimeScaleMin;

  /// @brief Field m_AnimationCurves, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationCurves, put = __cordl_internal_set_m_AnimationCurves)) ::UnityW<::UnityEngine::AnimationClip> m_AnimationCurves;

  /// @brief Field m_Asset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::Object> m_Asset;

  /// @brief Field m_BlendInCurveMode, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendInCurveMode, put = __cordl_internal_set_m_BlendInCurveMode)) ::UnityEngine::Timeline::TimelineClip_BlendCurveMode m_BlendInCurveMode;

  /// @brief Field m_BlendInDuration, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlendInDuration, put = __cordl_internal_set_m_BlendInDuration)) double_t m_BlendInDuration;

  /// @brief Field m_BlendOutCurveMode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendOutCurveMode, put = __cordl_internal_set_m_BlendOutCurveMode)) ::UnityEngine::Timeline::TimelineClip_BlendCurveMode m_BlendOutCurveMode;

  /// @brief Field m_BlendOutDuration, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlendOutDuration, put = __cordl_internal_set_m_BlendOutDuration)) double_t m_BlendOutDuration;

  /// @brief Field m_ClipIn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipIn, put = __cordl_internal_set_m_ClipIn)) double_t m_ClipIn;

  /// @brief Field m_DisplayName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayName, put = __cordl_internal_set_m_DisplayName)) ::StringW m_DisplayName;

  /// @brief Field m_Duration, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Duration, put = __cordl_internal_set_m_Duration)) double_t m_Duration;

  /// @brief Field m_EaseInDuration, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EaseInDuration, put = __cordl_internal_set_m_EaseInDuration)) double_t m_EaseInDuration;

  /// @brief Field m_EaseOutDuration, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EaseOutDuration, put = __cordl_internal_set_m_EaseOutDuration)) double_t m_EaseOutDuration;

  /// @brief Field m_ExposedParameterNames, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExposedParameterNames,
                      put = __cordl_internal_set_m_ExposedParameterNames)) ::System::Collections::Generic::List_1<::StringW>* m_ExposedParameterNames;

  /// @brief Field m_MixInCurve, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MixInCurve, put = __cordl_internal_set_m_MixInCurve)) ::UnityEngine::AnimationCurve* m_MixInCurve;

  /// @brief Field m_MixOutCurve, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MixOutCurve, put = __cordl_internal_set_m_MixOutCurve)) ::UnityEngine::AnimationCurve* m_MixOutCurve;

  /// @brief Field m_ParentTrack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentTrack, put = __cordl_internal_set_m_ParentTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset> m_ParentTrack;

  /// @brief Field m_PostExtrapolationMode, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PostExtrapolationMode,
                      put = __cordl_internal_set_m_PostExtrapolationMode)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_PostExtrapolationMode;

  /// @brief Field m_PostExtrapolationTime, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostExtrapolationTime, put = __cordl_internal_set_m_PostExtrapolationTime)) double_t m_PostExtrapolationTime;

  /// @brief Field m_PreExtrapolationMode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreExtrapolationMode,
                      put = __cordl_internal_set_m_PreExtrapolationMode)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation m_PreExtrapolationMode;

  /// @brief Field m_PreExtrapolationTime, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreExtrapolationTime, put = __cordl_internal_set_m_PreExtrapolationTime)) double_t m_PreExtrapolationTime;

  /// @brief Field m_Recordable, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Recordable, put = __cordl_internal_set_m_Recordable)) bool m_Recordable;

  /// @brief Field m_Start, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start)) double_t m_Start;

  /// @brief Field m_TimeScale, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeScale, put = __cordl_internal_set_m_TimeScale)) double_t m_TimeScale;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_mixInCurve, put = set_mixInCurve)) ::UnityEngine::AnimationCurve* mixInCurve;

  __declspec(property(get = get_mixInDuration)) double_t mixInDuration;

  __declspec(property(get = get_mixInPercentage)) float_t mixInPercentage;

  __declspec(property(get = get_mixOutCurve, put = set_mixOutCurve)) ::UnityEngine::AnimationCurve* mixOutCurve;

  __declspec(property(get = get_mixOutDuration)) double_t mixOutDuration;

  __declspec(property(get = get_mixOutPercentage)) float_t mixOutPercentage;

  __declspec(property(get = get_mixOutTime)) double_t mixOutTime;

  __declspec(property(get = get_parentTrack, put = set_parentTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset> parentTrack;

  __declspec(property(get = get_postExtrapolationMode, put = set_postExtrapolationMode)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation postExtrapolationMode;

  __declspec(property(get = get_preExtrapolationMode, put = set_preExtrapolationMode)) ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation preExtrapolationMode;

  __declspec(property(get = get_recordable, put = set_recordable)) bool recordable;

  __declspec(property(get = get_start, put = set_start)) double_t start;

  __declspec(property(get = get_timeScale, put = set_timeScale)) double_t timeScale;

  __declspec(property(get = get_underlyingAsset, put = set_underlyingAsset)) ::UnityW<::UnityEngine::Object> underlyingAsset;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
  constexpr operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

  /// @brief Method CalculateEasingRatio, addr 0x4812f24, size 0xc4, virtual false, abstract: false, final false
  static inline double_t CalculateEasingRatio(double_t easeIn, double_t easeOut);

  /// @brief Method ConformEaseValues, addr 0x4812e94, size 0x90, virtual false, abstract: false, final false
  inline void ConformEaseValues();

  /// @brief Method CreateCurves, addr 0x4812ba4, size 0xcc, virtual true, abstract: false, final true
  inline void CreateCurves(::StringW curvesClipName);

  /// @brief Method EvaluateMixIn, addr 0x4812518, size 0xd4, virtual false, abstract: false, final false
  inline float_t EvaluateMixIn(double_t time);

  /// @brief Method EvaluateMixOut, addr 0x4812424, size 0xf4, virtual false, abstract: false, final false
  inline float_t EvaluateMixOut(double_t time);

  /// @brief Method FromLocalTimeUnbound, addr 0x48128f0, size 0x44, virtual false, abstract: false, final false
  inline double_t FromLocalTimeUnbound(double_t time);

  /// @brief Method GetDefaultMixInCurve, addr 0x48120fc, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetDefaultMixInCurve();

  /// @brief Method GetDefaultMixOutCurve, addr 0x481220c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* GetDefaultMixOutCurve();

  /// @brief Method GetExtrapolatedTime, addr 0x481272c, size 0x11c, virtual false, abstract: false, final false
  static inline double_t GetExtrapolatedTime(double_t time, ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation mode, double_t duration);

  /// @brief Method GetParentTrack, addr 0x48119b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetParentTrack();

  /// @brief Method Hash, addr 0x4812348, size 0xdc, virtual false, abstract: false, final false
  inline int32_t Hash();

  /// @brief Method IsExtrapolatedTime, addr 0x4812a84, size 0x3c, virtual false, abstract: false, final false
  inline bool IsExtrapolatedTime(double_t sequenceTime);

  /// @brief Method IsPostExtrapolatedTime, addr 0x4812848, size 0x58, virtual false, abstract: false, final false
  inline bool IsPostExtrapolatedTime(double_t sequenceTime);

  /// @brief Method IsPreExtrapolatedTime, addr 0x48126dc, size 0x50, virtual false, abstract: false, final false
  inline bool IsPreExtrapolatedTime(double_t sequenceTime);

  static inline ::UnityEngine::Timeline::TimelineClip* New_ctor(::UnityEngine::Timeline::TrackAsset* parent);

  /// @brief Method SanitizeTimeValue, addr 0x4811580, size 0x11c, virtual false, abstract: false, final false
  static inline double_t SanitizeTimeValue(double_t value, double_t defaultValue);

  /// @brief Method SetParentTrack_Internal, addr 0x48111a4, size 0xf4, virtual false, abstract: false, final false
  inline void SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset* newParentTrack);

  /// @brief Method SetPostExtrapolationTime, addr 0x4812a74, size 0x8, virtual false, abstract: false, final false
  inline void SetPostExtrapolationTime(double_t time);

  /// @brief Method SetPreExtrapolationTime, addr 0x4812a7c, size 0x8, virtual false, abstract: false, final false
  inline void SetPreExtrapolationTime(double_t time);

  /// @brief Method ToLocalTime, addr 0x48125ec, size 0xf0, virtual false, abstract: false, final false
  inline double_t ToLocalTime(double_t time);

  /// @brief Method ToLocalTimeUnbound, addr 0x48128a0, size 0x50, virtual false, abstract: false, final false
  inline double_t ToLocalTimeUnbound(double_t time);

  /// @brief Method ToString, addr 0x4812cb8, size 0x1dc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x4812c7c, size 0x3c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x4812c70, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner, addr 0x4811988, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> UnityEngine_Timeline_ICurvesOwner_get_assetOwner();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName, addr 0x4811894, size 0x58, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack, addr 0x4811990, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine_Timeline_ICurvesOwner_get_targetTrack();

  /// @brief Method UpdateDirty, addr 0x4811574, size 0x4, virtual false, abstract: false, final false
  inline void UpdateDirty(double_t oldValue, double_t newValue);

  /// @brief Method UpgradeToLatestVersion, addr 0x48110f0, size 0x3c, virtual false, abstract: false, final false
  inline void UpgradeToLatestVersion();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_m_AnimationCurves() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_m_AnimationCurves();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_Asset() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_Asset();

  constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const& __cordl_internal_get_m_BlendInCurveMode() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode& __cordl_internal_get_m_BlendInCurveMode();

  constexpr double_t const& __cordl_internal_get_m_BlendInDuration() const;

  constexpr double_t& __cordl_internal_get_m_BlendInDuration();

  constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode const& __cordl_internal_get_m_BlendOutCurveMode() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_BlendCurveMode& __cordl_internal_get_m_BlendOutCurveMode();

  constexpr double_t const& __cordl_internal_get_m_BlendOutDuration() const;

  constexpr double_t& __cordl_internal_get_m_BlendOutDuration();

  constexpr double_t const& __cordl_internal_get_m_ClipIn() const;

  constexpr double_t& __cordl_internal_get_m_ClipIn();

  constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_m_DisplayName();

  constexpr double_t const& __cordl_internal_get_m_Duration() const;

  constexpr double_t& __cordl_internal_get_m_Duration();

  constexpr double_t const& __cordl_internal_get_m_EaseInDuration() const;

  constexpr double_t& __cordl_internal_get_m_EaseInDuration();

  constexpr double_t const& __cordl_internal_get_m_EaseOutDuration() const;

  constexpr double_t& __cordl_internal_get_m_EaseOutDuration();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ExposedParameterNames() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ExposedParameterNames();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_MixInCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_MixInCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_MixOutCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_MixOutCurve();

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& __cordl_internal_get_m_ParentTrack() const;

  constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& __cordl_internal_get_m_ParentTrack();

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_PostExtrapolationMode() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_PostExtrapolationMode();

  constexpr double_t const& __cordl_internal_get_m_PostExtrapolationTime() const;

  constexpr double_t& __cordl_internal_get_m_PostExtrapolationTime();

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& __cordl_internal_get_m_PreExtrapolationMode() const;

  constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& __cordl_internal_get_m_PreExtrapolationMode();

  constexpr double_t const& __cordl_internal_get_m_PreExtrapolationTime() const;

  constexpr double_t& __cordl_internal_get_m_PreExtrapolationTime();

  constexpr bool const& __cordl_internal_get_m_Recordable() const;

  constexpr bool& __cordl_internal_get_m_Recordable();

  constexpr double_t const& __cordl_internal_get_m_Start() const;

  constexpr double_t& __cordl_internal_get_m_Start();

  constexpr double_t const& __cordl_internal_get_m_TimeScale() const;

  constexpr double_t& __cordl_internal_get_m_TimeScale();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_AnimationCurves(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_BlendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value);

  constexpr void __cordl_internal_set_m_BlendInDuration(double_t value);

  constexpr void __cordl_internal_set_m_BlendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value);

  constexpr void __cordl_internal_set_m_BlendOutDuration(double_t value);

  constexpr void __cordl_internal_set_m_ClipIn(double_t value);

  constexpr void __cordl_internal_set_m_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_m_Duration(double_t value);

  constexpr void __cordl_internal_set_m_EaseInDuration(double_t value);

  constexpr void __cordl_internal_set_m_EaseOutDuration(double_t value);

  constexpr void __cordl_internal_set_m_ExposedParameterNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_MixInCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_MixOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_m_ParentTrack(::UnityW<::UnityEngine::Timeline::TrackAsset> value);

  constexpr void __cordl_internal_set_m_PostExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  constexpr void __cordl_internal_set_m_PostExtrapolationTime(double_t value);

  constexpr void __cordl_internal_set_m_PreExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  constexpr void __cordl_internal_set_m_PreExtrapolationTime(double_t value);

  constexpr void __cordl_internal_set_m_Recordable(bool value);

  constexpr void __cordl_internal_set_m_Start(double_t value);

  constexpr void __cordl_internal_set_m_TimeScale(double_t value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x4811168, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::TrackAsset* parent);

  static inline ::UnityEngine::Timeline::ClipCaps getStaticF_kDefaultClipCaps();

  static inline float_t getStaticF_kDefaultClipDurationInSeconds();

  static inline ::StringW getStaticF_kDefaultCurvesName();

  static inline double_t getStaticF_kMaxTimeValue();

  static inline double_t getStaticF_kMinDuration();

  static inline double_t getStaticF_kTimeScaleMax();

  static inline double_t getStaticF_kTimeScaleMin();

  /// @brief Method get_animationClip, addr 0x4812934, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_animationClip();

  /// @brief Method get_asset, addr 0x4811978, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> get_asset();

  /// @brief Method get_blendInCurveMode, addr 0x4812050, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendInCurveMode();

  /// @brief Method get_blendInDuration, addr 0x4811f00, size 0x20, virtual false, abstract: false, final false
  inline double_t get_blendInDuration();

  /// @brief Method get_blendOutCurveMode, addr 0x4812060, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_BlendCurveMode get_blendOutCurveMode();

  /// @brief Method get_blendOutDuration, addr 0x4811fa8, size 0x20, virtual false, abstract: false, final false
  inline double_t get_blendOutDuration();

  /// @brief Method get_clipAssetDuration, addr 0x48117c4, size 0xc0, virtual false, abstract: false, final false
  inline double_t get_clipAssetDuration();

  /// @brief Method get_clipCaps, addr 0x48113b0, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_clipIn, addr 0x48116bc, size 0x20, virtual false, abstract: false, final false
  inline double_t get_clipIn();

  /// @brief Method get_curves, addr 0x4811884, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AnimationClip> get_curves();

  /// @brief Method get_displayName, addr 0x48117b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_duration, addr 0x48116a4, size 0x8, virtual true, abstract: false, final true
  inline double_t get_duration();

  /// @brief Method get_easeInDuration, addr 0x4811ae8, size 0xbc, virtual false, abstract: false, final false
  inline double_t get_easeInDuration();

  /// @brief Method get_easeOutDuration, addr 0x4811cc8, size 0xbc, virtual false, abstract: false, final false
  inline double_t get_easeOutDuration();

  /// @brief Method get_easeOutTime, addr 0x4811ed4, size 0x2c, virtual false, abstract: false, final false
  inline double_t get_easeOutTime();

  /// @brief Method get_eastOutTime, addr 0x4811ea8, size 0x2c, virtual false, abstract: false, final false
  inline double_t get_eastOutTime();

  /// @brief Method get_end, addr 0x48116ac, size 0x10, virtual false, abstract: false, final false
  inline double_t get_end();

  /// @brief Method get_exposedParameters, addr 0x48122d0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_exposedParameters();

  /// @brief Method get_extrapolatedDuration, addr 0x4812ad8, size 0xcc, virtual false, abstract: false, final false
  inline double_t get_extrapolatedDuration();

  /// @brief Method get_extrapolatedStart, addr 0x4812ac0, size 0x18, virtual false, abstract: false, final false
  inline double_t get_extrapolatedStart();

  /// @brief Method get_hasBlendIn, addr 0x4811d84, size 0x2c, virtual false, abstract: false, final false
  inline bool get_hasBlendIn();

  /// @brief Method get_hasBlendOut, addr 0x4811ba4, size 0x2c, virtual false, abstract: false, final false
  inline bool get_hasBlendOut();

  /// @brief Method get_hasCurves, addr 0x48118ec, size 0x8c, virtual true, abstract: false, final true
  inline bool get_hasCurves();

  /// @brief Method get_hasPostExtrapolation, addr 0x48112b8, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasPostExtrapolation();

  /// @brief Method get_hasPreExtrapolation, addr 0x4811298, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasPreExtrapolation();

  /// @brief Method get_mixInCurve, addr 0x4812070, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_mixInCurve();

  /// @brief Method get_mixInDuration, addr 0x481213c, size 0x44, virtual false, abstract: false, final false
  inline double_t get_mixInDuration();

  /// @brief Method get_mixInPercentage, addr 0x481211c, size 0x20, virtual false, abstract: false, final false
  inline float_t get_mixInPercentage();

  /// @brief Method get_mixOutCurve, addr 0x4812180, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_mixOutCurve();

  /// @brief Method get_mixOutDuration, addr 0x4812258, size 0x44, virtual false, abstract: false, final false
  inline double_t get_mixOutDuration();

  /// @brief Method get_mixOutPercentage, addr 0x481229c, size 0x20, virtual false, abstract: false, final false
  inline float_t get_mixOutPercentage();

  /// @brief Method get_mixOutTime, addr 0x481222c, size 0x2c, virtual false, abstract: false, final false
  inline double_t get_mixOutTime();

  /// @brief Method get_parentTrack, addr 0x48119a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> get_parentTrack();

  /// @brief Method get_postExtrapolationMode, addr 0x4812a2c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_postExtrapolationMode();

  /// @brief Method get_preExtrapolationMode, addr 0x4812a50, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation get_preExtrapolationMode();

  /// @brief Method get_recordable, addr 0x48122bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_recordable();

  /// @brief Method get_start, addr 0x4811578, size 0x8, virtual false, abstract: false, final false
  inline double_t get_start();

  /// @brief Method get_timeScale, addr 0x48112d8, size 0xd8, virtual false, abstract: false, final false
  inline double_t get_timeScale();

  /// @brief Method get_underlyingAsset, addr 0x4811998, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_underlyingAsset();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
  constexpr ::UnityEngine::Timeline::ICurvesOwner* i___UnityEngine__Timeline__ICurvesOwner() noexcept;

  static inline void setStaticF_kDefaultClipCaps(::UnityEngine::Timeline::ClipCaps value);

  static inline void setStaticF_kDefaultClipDurationInSeconds(float_t value);

  static inline void setStaticF_kDefaultCurvesName(::StringW value);

  static inline void setStaticF_kMaxTimeValue(double_t value);

  static inline void setStaticF_kMinDuration(double_t value);

  static inline void setStaticF_kTimeScaleMax(double_t value);

  static inline void setStaticF_kTimeScaleMin(double_t value);

  /// @brief Method set_asset, addr 0x4811980, size 0x8, virtual false, abstract: false, final false
  inline void set_asset(::UnityEngine::Object* value);

  /// @brief Method set_blendInCurveMode, addr 0x4812058, size 0x8, virtual false, abstract: false, final false
  inline void set_blendInCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value);

  /// @brief Method set_blendInDuration, addr 0x4811f20, size 0x88, virtual false, abstract: false, final false
  inline void set_blendInDuration(double_t value);

  /// @brief Method set_blendOutCurveMode, addr 0x4812068, size 0x8, virtual false, abstract: false, final false
  inline void set_blendOutCurveMode(::UnityEngine::Timeline::TimelineClip_BlendCurveMode value);

  /// @brief Method set_blendOutDuration, addr 0x4811fc8, size 0x88, virtual false, abstract: false, final false
  inline void set_blendOutDuration(double_t value);

  /// @brief Method set_clipIn, addr 0x48116dc, size 0xd8, virtual false, abstract: false, final false
  inline void set_clipIn(double_t value);

  /// @brief Method set_curves, addr 0x481188c, size 0x8, virtual false, abstract: false, final false
  inline void set_curves(::UnityEngine::AnimationClip* value);

  /// @brief Method set_displayName, addr 0x48117bc, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_duration, addr 0x480d794, size 0xac, virtual false, abstract: false, final false
  inline void set_duration(double_t value);

  /// @brief Method set_easeInDuration, addr 0x4811bd0, size 0xf8, virtual false, abstract: false, final false
  inline void set_easeInDuration(double_t value);

  /// @brief Method set_easeOutDuration, addr 0x4811db0, size 0xf8, virtual false, abstract: false, final false
  inline void set_easeOutDuration(double_t value);

  /// @brief Method set_mixInCurve, addr 0x4812114, size 0x8, virtual false, abstract: false, final false
  inline void set_mixInCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_mixOutCurve, addr 0x4812224, size 0x8, virtual false, abstract: false, final false
  inline void set_mixOutCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_parentTrack, addr 0x48119ac, size 0x4, virtual false, abstract: false, final false
  inline void set_parentTrack(::UnityEngine::Timeline::TrackAsset* value);

  /// @brief Method set_postExtrapolationMode, addr 0x480d9d4, size 0x34, virtual false, abstract: false, final false
  inline void set_postExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_preExtrapolationMode, addr 0x480d9a0, size 0x34, virtual false, abstract: false, final false
  inline void set_preExtrapolationMode(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value);

  /// @brief Method set_recordable, addr 0x48122c4, size 0xc, virtual false, abstract: false, final false
  inline void set_recordable(bool value);

  /// @brief Method set_start, addr 0x480d690, size 0x104, virtual false, abstract: false, final false
  inline void set_start(double_t value);

  /// @brief Method set_timeScale, addr 0x48114a0, size 0xd4, virtual false, abstract: false, final false
  inline void set_timeScale(double_t value);

  /// @brief Method set_underlyingAsset, addr 0x48119a0, size 0x4, virtual false, abstract: false, final false
  inline void set_underlyingAsset(::UnityEngine::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineClip(TimelineClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineClip(TimelineClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15807 };

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_Start, offset: 0x18, size: 0x8, def value: None
  double_t ___m_Start;

  /// @brief Field m_ClipIn, offset: 0x20, size: 0x8, def value: None
  double_t ___m_ClipIn;

  /// @brief Field m_Asset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_Asset;

  /// @brief Field m_Duration, offset: 0x30, size: 0x8, def value: None
  double_t ___m_Duration;

  /// @brief Field m_TimeScale, offset: 0x38, size: 0x8, def value: None
  double_t ___m_TimeScale;

  /// @brief Field m_ParentTrack, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::TrackAsset> ___m_ParentTrack;

  /// @brief Field m_EaseInDuration, offset: 0x48, size: 0x8, def value: None
  double_t ___m_EaseInDuration;

  /// @brief Field m_EaseOutDuration, offset: 0x50, size: 0x8, def value: None
  double_t ___m_EaseOutDuration;

  /// @brief Field m_BlendInDuration, offset: 0x58, size: 0x8, def value: None
  double_t ___m_BlendInDuration;

  /// @brief Field m_BlendOutDuration, offset: 0x60, size: 0x8, def value: None
  double_t ___m_BlendOutDuration;

  /// @brief Field m_MixInCurve, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_MixInCurve;

  /// @brief Field m_MixOutCurve, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_MixOutCurve;

  /// @brief Field m_BlendInCurveMode, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_BlendCurveMode ___m_BlendInCurveMode;

  /// @brief Field m_BlendOutCurveMode, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_BlendCurveMode ___m_BlendOutCurveMode;

  /// @brief Field m_ExposedParameterNames, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ExposedParameterNames;

  /// @brief Field m_AnimationCurves, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ___m_AnimationCurves;

  /// @brief Field m_Recordable, offset: 0x90, size: 0x1, def value: None
  bool ___m_Recordable;

  /// @brief Field m_PostExtrapolationMode, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation ___m_PostExtrapolationMode;

  /// @brief Field m_PreExtrapolationMode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation ___m_PreExtrapolationMode;

  /// @brief Field m_PostExtrapolationTime, offset: 0xa0, size: 0x8, def value: None
  double_t ___m_PostExtrapolationTime;

  /// @brief Field m_PreExtrapolationTime, offset: 0xa8, size: 0x8, def value: None
  double_t ___m_PreExtrapolationTime;

  /// @brief Field m_DisplayName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ClipIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Asset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_TimeScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ParentTrack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_EaseInDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_EaseOutDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendInDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendOutDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_MixInCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_MixOutCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendInCurveMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_BlendOutCurveMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_ExposedParameterNames) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_AnimationCurves) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_Recordable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PostExtrapolationMode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PreExtrapolationMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PostExtrapolationTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_PreExtrapolationTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineClip, ___m_DisplayName) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip_BlendCurveMode, "UnityEngine.Timeline", "TimelineClip/BlendCurveMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation, "UnityEngine.Timeline", "TimelineClip/ClipExtrapolation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip_Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip*, "UnityEngine.Timeline", "TimelineClip");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip_TimelineClipUpgrade*, "UnityEngine.Timeline", "TimelineClip/TimelineClipUpgrade");
