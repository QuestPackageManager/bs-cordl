#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineClip)
namespace UnityEngine {
class AnimationCurve;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__BlendCurveMode;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Timeline {
class __TimelineClip__TimelineClipUpgrade;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__ClipExtrapolation;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__Versions;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TimelineClip__BlendCurveMode;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__ClipExtrapolation;
}
namespace UnityEngine::Timeline {
struct __TimelineClip__Versions;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class __TimelineClip__TimelineClipUpgrade;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode);
MARK_VAL_T(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation);
MARK_VAL_T(::UnityEngine::Timeline::__TimelineClip__Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClip);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade);
// Type: ::Versions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13845))
// CS Name: ::TimelineClip::Versions
struct CORDL_TYPE __TimelineClip__Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineClip__Versions_Unwrapped
  enum struct ____TimelineClip__Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_ClipInFromGlobalToLocal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineClip__Versions_Unwrapped() const noexcept {
    return static_cast<____TimelineClip__Versions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineClip__Versions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineClip__Versions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineClip__Versions const Initial;

  /// @brief Field ClipInFromGlobalToLocal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineClip__Versions const ClipInFromGlobalToLocal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineClip__Versions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::TimelineClipUpgrade
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13846))
// CS Name: ::TimelineClip::TimelineClipUpgrade*
class CORDL_TYPE __TimelineClip__TimelineClipUpgrade : public ::System::Object {
public:
  // Declarations
  /// @brief Method UpgradeClipInFromGlobalToLocal addr 0x2c552c8 size 0x3c virtual false final false
  static inline void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* clip);

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineClip__TimelineClipUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineClip__TimelineClipUpgrade(__TimelineClip__TimelineClipUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineClip__TimelineClipUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineClip__TimelineClipUpgrade(__TimelineClip__TimelineClipUpgrade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineClip__TimelineClipUpgrade();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::ClipExtrapolation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13847))
// CS Name: ::TimelineClip::ClipExtrapolation
struct CORDL_TYPE __TimelineClip__ClipExtrapolation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineClip__ClipExtrapolation_Unwrapped
  enum struct ____TimelineClip__ClipExtrapolation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hold = static_cast<int32_t>(0x1),
    __E_Loop = static_cast<int32_t>(0x2),
    __E_PingPong = static_cast<int32_t>(0x3),
    __E_Continue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineClip__ClipExtrapolation_Unwrapped() const noexcept {
    return static_cast<____TimelineClip__ClipExtrapolation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineClip__ClipExtrapolation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineClip__ClipExtrapolation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const None;

  /// @brief Field Hold value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const Hold;

  /// @brief Field Loop value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const Loop;

  /// @brief Field PingPong value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const PingPong;

  /// @brief Field Continue value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const Continue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::BlendCurveMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13848))
// CS Name: ::TimelineClip::BlendCurveMode
struct CORDL_TYPE __TimelineClip__BlendCurveMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineClip__BlendCurveMode_Unwrapped
  enum struct ____TimelineClip__BlendCurveMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Manual = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineClip__BlendCurveMode_Unwrapped() const noexcept {
    return static_cast<____TimelineClip__BlendCurveMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineClip__BlendCurveMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineClip__BlendCurveMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const Auto;

  /// @brief Field Manual value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const Manual;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineClip__BlendCurveMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineClip
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13848)), TypeDefinitionIndex(TypeDefinitionIndex(13847)),
// TypeDefinitionIndex(TypeDefinitionIndex(13871))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13849)) CS Name: ::UnityEngine.Timeline::TimelineClip*
class CORDL_TYPE TimelineClip : public ::System::Object {
public:
  // Declarations
  using BlendCurveMode = ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode;

  using ClipExtrapolation = ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation;

  using TimelineClipUpgrade = ::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade;

  using Versions = ::UnityEngine::Timeline::__TimelineClip__Versions;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Version, put = __set_m_Version)) int32_t m_Version;

  /// @brief Field m_Start, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Start, put = __set_m_Start)) double_t m_Start;

  /// @brief Field m_ClipIn, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ClipIn, put = __set_m_ClipIn)) double_t m_ClipIn;

  /// @brief Field m_Asset, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Asset, put = __set_m_Asset))::UnityEngine::Object* m_Asset;

  /// @brief Field m_Duration, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Duration, put = __set_m_Duration)) double_t m_Duration;

  /// @brief Field m_TimeScale, offset 0x38, size 0x8
  __declspec(property(get = __get_m_TimeScale, put = __set_m_TimeScale)) double_t m_TimeScale;

  /// @brief Field m_ParentTrack, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ParentTrack, put = __set_m_ParentTrack))::UnityEngine::Timeline::TrackAsset* m_ParentTrack;

  /// @brief Field m_EaseInDuration, offset 0x48, size 0x8
  __declspec(property(get = __get_m_EaseInDuration, put = __set_m_EaseInDuration)) double_t m_EaseInDuration;

  /// @brief Field m_EaseOutDuration, offset 0x50, size 0x8
  __declspec(property(get = __get_m_EaseOutDuration, put = __set_m_EaseOutDuration)) double_t m_EaseOutDuration;

  /// @brief Field m_BlendInDuration, offset 0x58, size 0x8
  __declspec(property(get = __get_m_BlendInDuration, put = __set_m_BlendInDuration)) double_t m_BlendInDuration;

  /// @brief Field m_BlendOutDuration, offset 0x60, size 0x8
  __declspec(property(get = __get_m_BlendOutDuration, put = __set_m_BlendOutDuration)) double_t m_BlendOutDuration;

  /// @brief Field m_MixInCurve, offset 0x68, size 0x8
  __declspec(property(get = __get_m_MixInCurve, put = __set_m_MixInCurve))::UnityEngine::AnimationCurve* m_MixInCurve;

  /// @brief Field m_MixOutCurve, offset 0x70, size 0x8
  __declspec(property(get = __get_m_MixOutCurve, put = __set_m_MixOutCurve))::UnityEngine::AnimationCurve* m_MixOutCurve;

  /// @brief Field m_BlendInCurveMode, offset 0x78, size 0x4
  __declspec(property(get = __get_m_BlendInCurveMode, put = __set_m_BlendInCurveMode))::UnityEngine::Timeline::__TimelineClip__BlendCurveMode m_BlendInCurveMode;

  /// @brief Field m_BlendOutCurveMode, offset 0x7c, size 0x4
  __declspec(property(get = __get_m_BlendOutCurveMode, put = __set_m_BlendOutCurveMode))::UnityEngine::Timeline::__TimelineClip__BlendCurveMode m_BlendOutCurveMode;

  /// @brief Field m_ExposedParameterNames, offset 0x80, size 0x8
  __declspec(property(get = __get_m_ExposedParameterNames, put = __set_m_ExposedParameterNames))::System::Collections::Generic::List_1<::StringW>* m_ExposedParameterNames;

  /// @brief Field m_AnimationCurves, offset 0x88, size 0x8
  __declspec(property(get = __get_m_AnimationCurves, put = __set_m_AnimationCurves))::UnityEngine::AnimationClip* m_AnimationCurves;

  /// @brief Field m_Recordable, offset 0x90, size 0x1
  __declspec(property(get = __get_m_Recordable, put = __set_m_Recordable)) bool m_Recordable;

  /// @brief Field m_PostExtrapolationMode, offset 0x94, size 0x4
  __declspec(property(get = __get_m_PostExtrapolationMode, put = __set_m_PostExtrapolationMode))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation m_PostExtrapolationMode;

  /// @brief Field m_PreExtrapolationMode, offset 0x98, size 0x4
  __declspec(property(get = __get_m_PreExtrapolationMode, put = __set_m_PreExtrapolationMode))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation m_PreExtrapolationMode;

  /// @brief Field m_PostExtrapolationTime, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_PostExtrapolationTime, put = __set_m_PostExtrapolationTime)) double_t m_PostExtrapolationTime;

  /// @brief Field m_PreExtrapolationTime, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_PreExtrapolationTime, put = __set_m_PreExtrapolationTime)) double_t m_PreExtrapolationTime;

  /// @brief Field m_DisplayName, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_DisplayName, put = __set_m_DisplayName))::StringW m_DisplayName;

  /// @brief Field kDefaultClipCaps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kDefaultClipCaps, put = setStaticF_kDefaultClipCaps))::UnityEngine::Timeline::ClipCaps kDefaultClipCaps;

  /// @brief Field kDefaultClipDurationInSeconds, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kDefaultClipDurationInSeconds, put = setStaticF_kDefaultClipDurationInSeconds)) float_t kDefaultClipDurationInSeconds;

  /// @brief Field kTimeScaleMin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kTimeScaleMin, put = setStaticF_kTimeScaleMin)) double_t kTimeScaleMin;

  /// @brief Field kTimeScaleMax, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kTimeScaleMax, put = setStaticF_kTimeScaleMax)) double_t kTimeScaleMax;

  /// @brief Field kDefaultCurvesName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kDefaultCurvesName, put = setStaticF_kDefaultCurvesName))::StringW kDefaultCurvesName;

  /// @brief Field kMinDuration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMinDuration, put = setStaticF_kMinDuration)) double_t kMinDuration;

  /// @brief Field kMaxTimeValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMaxTimeValue, put = setStaticF_kMaxTimeValue)) double_t kMaxTimeValue;

  __declspec(property(get = get_hasPreExtrapolation)) bool hasPreExtrapolation;

  __declspec(property(get = get_hasPostExtrapolation)) bool hasPostExtrapolation;

  __declspec(property(get = get_timeScale, put = set_timeScale)) double_t timeScale;

  __declspec(property(get = get_start, put = set_start)) double_t start;

  __declspec(property(get = get_duration, put = set_duration)) double_t duration;

  __declspec(property(get = get_end)) double_t end;

  __declspec(property(get = get_clipIn, put = set_clipIn)) double_t clipIn;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_clipAssetDuration)) double_t clipAssetDuration;

  __declspec(property(get = get_curves, put = set_curves))::UnityEngine::AnimationClip* curves;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName))::StringW UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

  __declspec(property(get = get_hasCurves)) bool hasCurves;

  __declspec(property(get = get_asset, put = set_asset))::UnityEngine::Object* asset;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_assetOwner))::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_assetOwner;

  __declspec(property(get = UnityEngine_Timeline_ICurvesOwner_get_targetTrack))::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_targetTrack;

  __declspec(property(get = get_underlyingAsset, put = set_underlyingAsset))::UnityEngine::Object* underlyingAsset;

  __declspec(property(get = get_parentTrack, put = set_parentTrack))::UnityEngine::Timeline::TrackAsset* parentTrack;

  __declspec(property(get = get_easeInDuration, put = set_easeInDuration)) double_t easeInDuration;

  __declspec(property(get = get_easeOutDuration, put = set_easeOutDuration)) double_t easeOutDuration;

  __declspec(property(get = get_eastOutTime)) double_t eastOutTime;

  __declspec(property(get = get_easeOutTime)) double_t easeOutTime;

  __declspec(property(get = get_blendInDuration, put = set_blendInDuration)) double_t blendInDuration;

  __declspec(property(get = get_blendOutDuration, put = set_blendOutDuration)) double_t blendOutDuration;

  __declspec(property(get = get_blendInCurveMode, put = set_blendInCurveMode))::UnityEngine::Timeline::__TimelineClip__BlendCurveMode blendInCurveMode;

  __declspec(property(get = get_blendOutCurveMode, put = set_blendOutCurveMode))::UnityEngine::Timeline::__TimelineClip__BlendCurveMode blendOutCurveMode;

  __declspec(property(get = get_hasBlendIn)) bool hasBlendIn;

  __declspec(property(get = get_hasBlendOut)) bool hasBlendOut;

  __declspec(property(get = get_mixInCurve, put = set_mixInCurve))::UnityEngine::AnimationCurve* mixInCurve;

  __declspec(property(get = get_mixInPercentage)) float_t mixInPercentage;

  __declspec(property(get = get_mixInDuration)) double_t mixInDuration;

  __declspec(property(get = get_mixOutCurve, put = set_mixOutCurve))::UnityEngine::AnimationCurve* mixOutCurve;

  __declspec(property(get = get_mixOutTime)) double_t mixOutTime;

  __declspec(property(get = get_mixOutDuration)) double_t mixOutDuration;

  __declspec(property(get = get_mixOutPercentage)) float_t mixOutPercentage;

  __declspec(property(get = get_recordable, put = set_recordable)) bool recordable;

  __declspec(property(get = get_exposedParameters))::System::Collections::Generic::List_1<::StringW>* exposedParameters;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_animationClip))::UnityEngine::AnimationClip* animationClip;

  __declspec(property(get = get_postExtrapolationMode, put = set_postExtrapolationMode))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation postExtrapolationMode;

  __declspec(property(get = get_preExtrapolationMode, put = set_preExtrapolationMode))::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation preExtrapolationMode;

  __declspec(property(get = get_extrapolatedStart)) double_t extrapolatedStart;

  __declspec(property(get = get_extrapolatedDuration)) double_t extrapolatedDuration;

  /// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
  constexpr operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr int32_t& __get_m_Version();

  constexpr int32_t const& __get_m_Version() const;

  constexpr void __set_m_Version(int32_t value);

  constexpr double_t& __get_m_Start();

  constexpr double_t const& __get_m_Start() const;

  constexpr void __set_m_Start(double_t value);

  constexpr double_t& __get_m_ClipIn();

  constexpr double_t const& __get_m_ClipIn() const;

  constexpr void __set_m_ClipIn(double_t value);

  constexpr ::UnityEngine::Object*& __get_m_Asset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_m_Asset() const;

  constexpr void __set_m_Asset(::UnityEngine::Object* value);

  constexpr double_t& __get_m_Duration();

  constexpr double_t const& __get_m_Duration() const;

  constexpr void __set_m_Duration(double_t value);

  constexpr double_t& __get_m_TimeScale();

  constexpr double_t const& __get_m_TimeScale() const;

  constexpr void __set_m_TimeScale(double_t value);

  constexpr ::UnityEngine::Timeline::TrackAsset*& __get_m_ParentTrack();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TrackAsset*> const& __get_m_ParentTrack() const;

  constexpr void __set_m_ParentTrack(::UnityEngine::Timeline::TrackAsset* value);

  constexpr double_t& __get_m_EaseInDuration();

  constexpr double_t const& __get_m_EaseInDuration() const;

  constexpr void __set_m_EaseInDuration(double_t value);

  constexpr double_t& __get_m_EaseOutDuration();

  constexpr double_t const& __get_m_EaseOutDuration() const;

  constexpr void __set_m_EaseOutDuration(double_t value);

  constexpr double_t& __get_m_BlendInDuration();

  constexpr double_t const& __get_m_BlendInDuration() const;

  constexpr void __set_m_BlendInDuration(double_t value);

  constexpr double_t& __get_m_BlendOutDuration();

  constexpr double_t const& __get_m_BlendOutDuration() const;

  constexpr void __set_m_BlendOutDuration(double_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_MixInCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_MixInCurve() const;

  constexpr void __set_m_MixInCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_m_MixOutCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_m_MixOutCurve() const;

  constexpr void __set_m_MixOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode& __get_m_BlendInCurveMode();

  constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const& __get_m_BlendInCurveMode() const;

  constexpr void __set_m_BlendInCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode value);

  constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode& __get_m_BlendOutCurveMode();

  constexpr ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode const& __get_m_BlendOutCurveMode() const;

  constexpr void __set_m_BlendOutCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_m_ExposedParameterNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_m_ExposedParameterNames() const;

  constexpr void __set_m_ExposedParameterNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::UnityEngine::AnimationClip*& __get_m_AnimationCurves();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get_m_AnimationCurves() const;

  constexpr void __set_m_AnimationCurves(::UnityEngine::AnimationClip* value);

  constexpr bool& __get_m_Recordable();

  constexpr bool const& __get_m_Recordable() const;

  constexpr void __set_m_Recordable(bool value);

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& __get_m_PostExtrapolationMode();

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& __get_m_PostExtrapolationMode() const;

  constexpr void __set_m_PostExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& __get_m_PreExtrapolationMode();

  constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& __get_m_PreExtrapolationMode() const;

  constexpr void __set_m_PreExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  constexpr double_t& __get_m_PostExtrapolationTime();

  constexpr double_t const& __get_m_PostExtrapolationTime() const;

  constexpr void __set_m_PostExtrapolationTime(double_t value);

  constexpr double_t& __get_m_PreExtrapolationTime();

  constexpr double_t const& __get_m_PreExtrapolationTime() const;

  constexpr void __set_m_PreExtrapolationTime(double_t value);

  constexpr ::StringW& __get_m_DisplayName();

  constexpr ::StringW const& __get_m_DisplayName() const;

  constexpr void __set_m_DisplayName(::StringW value);

  static inline void setStaticF_kDefaultClipCaps(::UnityEngine::Timeline::ClipCaps value);

  static inline ::UnityEngine::Timeline::ClipCaps getStaticF_kDefaultClipCaps();

  static inline void setStaticF_kDefaultClipDurationInSeconds(float_t value);

  static inline float_t getStaticF_kDefaultClipDurationInSeconds();

  static inline void setStaticF_kTimeScaleMin(double_t value);

  static inline double_t getStaticF_kTimeScaleMin();

  static inline void setStaticF_kTimeScaleMax(double_t value);

  static inline double_t getStaticF_kTimeScaleMax();

  static inline void setStaticF_kDefaultCurvesName(::StringW value);

  static inline ::StringW getStaticF_kDefaultCurvesName();

  static inline void setStaticF_kMinDuration(double_t value);

  static inline double_t getStaticF_kMinDuration();

  static inline void setStaticF_kMaxTimeValue(double_t value);

  static inline double_t getStaticF_kMaxTimeValue();

  /// @brief Method UpgradeToLatestVersion addr 0x2c55290 size 0x38 virtual false final false
  inline void UpgradeToLatestVersion();

  static inline ::UnityEngine::Timeline::TimelineClip* New_ctor(::UnityEngine::Timeline::TrackAsset* parent);

  /// @brief Method .ctor addr 0x2c55304 size 0x3c virtual false final false
  inline void _ctor(::UnityEngine::Timeline::TrackAsset* parent);

  /// @brief Method get_hasPreExtrapolation addr 0x2c55434 size 0x20 virtual false final false
  inline bool get_hasPreExtrapolation();

  /// @brief Method get_hasPostExtrapolation addr 0x2c55454 size 0x20 virtual false final false
  inline bool get_hasPostExtrapolation();

  /// @brief Method get_timeScale addr 0x2c55474 size 0xd8 virtual false final false
  inline double_t get_timeScale();

  /// @brief Method set_timeScale addr 0x2c5563c size 0xdc virtual false final false
  inline void set_timeScale(double_t value);

  /// @brief Method get_start addr 0x2c5571c size 0x8 virtual false final false
  inline double_t get_start();

  /// @brief Method set_start addr 0x2c517f0 size 0x104 virtual false final false
  inline void set_start(double_t value);

  /// @brief Method get_duration addr 0x2c558c4 size 0x8 virtual true final true
  inline double_t get_duration();

  /// @brief Method set_duration addr 0x2c518f4 size 0xac virtual false final false
  inline void set_duration(double_t value);

  /// @brief Method get_end addr 0x2c558cc size 0x10 virtual false final false
  inline double_t get_end();

  /// @brief Method get_clipIn addr 0x2c558dc size 0x20 virtual false final false
  inline double_t get_clipIn();

  /// @brief Method set_clipIn addr 0x2c558fc size 0xd8 virtual false final false
  inline void set_clipIn(double_t value);

  /// @brief Method get_displayName addr 0x2c559d4 size 0x8 virtual false final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName addr 0x2c559dc size 0x8 virtual false final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_clipAssetDuration addr 0x2c559e4 size 0xc0 virtual false final false
  inline double_t get_clipAssetDuration();

  /// @brief Method get_curves addr 0x2c55aa4 size 0x8 virtual true final true
  inline ::UnityEngine::AnimationClip* get_curves();

  /// @brief Method set_curves addr 0x2c55aac size 0x8 virtual false final false
  inline void set_curves(::UnityEngine::AnimationClip* value);

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName addr 0x2c55ab4 size 0x58 virtual true final true
  inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName();

  /// @brief Method get_hasCurves addr 0x2c55b0c size 0x8c virtual true final true
  inline bool get_hasCurves();

  /// @brief Method get_asset addr 0x2c55b98 size 0x8 virtual true final true
  inline ::UnityEngine::Object* get_asset();

  /// @brief Method set_asset addr 0x2c55ba0 size 0x8 virtual false final false
  inline void set_asset(::UnityEngine::Object* value);

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner addr 0x2c55ba8 size 0x8 virtual true final true
  inline ::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner();

  /// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack addr 0x2c55bb0 size 0x8 virtual true final true
  inline ::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack();

  /// @brief Method get_underlyingAsset addr 0x2c55bb8 size 0x8 virtual false final false
  inline ::UnityEngine::Object* get_underlyingAsset();

  /// @brief Method set_underlyingAsset addr 0x2c55bc0 size 0x4 virtual false final false
  inline void set_underlyingAsset(::UnityEngine::Object* value);

  /// @brief Method get_parentTrack addr 0x2c55bc4 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* get_parentTrack();

  /// @brief Method set_parentTrack addr 0x2c55bcc size 0x4 virtual false final false
  inline void set_parentTrack(::UnityEngine::Timeline::TrackAsset* value);

  /// @brief Method GetParentTrack addr 0x2c55bd0 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* GetParentTrack();

  /// @brief Method SetParentTrack_Internal addr 0x2c55340 size 0xf4 virtual false final false
  inline void SetParentTrack_Internal(::UnityEngine::Timeline::TrackAsset* newParentTrack);

  /// @brief Method get_easeInDuration addr 0x2c55d0c size 0xbc virtual false final false
  inline double_t get_easeInDuration();

  /// @brief Method set_easeInDuration addr 0x2c55df4 size 0xf8 virtual false final false
  inline void set_easeInDuration(double_t value);

  /// @brief Method get_easeOutDuration addr 0x2c55eec size 0xbc virtual false final false
  inline double_t get_easeOutDuration();

  /// @brief Method set_easeOutDuration addr 0x2c55fd4 size 0xf8 virtual false final false
  inline void set_easeOutDuration(double_t value);

  /// @brief Method get_eastOutTime addr 0x2c560cc size 0x2c virtual false final false
  inline double_t get_eastOutTime();

  /// @brief Method get_easeOutTime addr 0x2c560f8 size 0x2c virtual false final false
  inline double_t get_easeOutTime();

  /// @brief Method get_blendInDuration addr 0x2c56124 size 0x20 virtual false final false
  inline double_t get_blendInDuration();

  /// @brief Method set_blendInDuration addr 0x2c56144 size 0x88 virtual false final false
  inline void set_blendInDuration(double_t value);

  /// @brief Method get_blendOutDuration addr 0x2c561cc size 0x20 virtual false final false
  inline double_t get_blendOutDuration();

  /// @brief Method set_blendOutDuration addr 0x2c561ec size 0x88 virtual false final false
  inline void set_blendOutDuration(double_t value);

  /// @brief Method get_blendInCurveMode addr 0x2c56274 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode get_blendInCurveMode();

  /// @brief Method set_blendInCurveMode addr 0x2c5627c size 0x8 virtual false final false
  inline void set_blendInCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode value);

  /// @brief Method get_blendOutCurveMode addr 0x2c56284 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode get_blendOutCurveMode();

  /// @brief Method set_blendOutCurveMode addr 0x2c5628c size 0x8 virtual false final false
  inline void set_blendOutCurveMode(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode value);

  /// @brief Method get_hasBlendIn addr 0x2c55fa8 size 0x2c virtual false final false
  inline bool get_hasBlendIn();

  /// @brief Method get_hasBlendOut addr 0x2c55dc8 size 0x2c virtual false final false
  inline bool get_hasBlendOut();

  /// @brief Method get_mixInCurve addr 0x2c56294 size 0x8c virtual false final false
  inline ::UnityEngine::AnimationCurve* get_mixInCurve();

  /// @brief Method set_mixInCurve addr 0x2c56338 size 0x8 virtual false final false
  inline void set_mixInCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method get_mixInPercentage addr 0x2c56340 size 0x20 virtual false final false
  inline float_t get_mixInPercentage();

  /// @brief Method get_mixInDuration addr 0x2c56360 size 0x44 virtual false final false
  inline double_t get_mixInDuration();

  /// @brief Method get_mixOutCurve addr 0x2c563a4 size 0x8c virtual false final false
  inline ::UnityEngine::AnimationCurve* get_mixOutCurve();

  /// @brief Method set_mixOutCurve addr 0x2c56448 size 0x8 virtual false final false
  inline void set_mixOutCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method get_mixOutTime addr 0x2c56450 size 0x2c virtual false final false
  inline double_t get_mixOutTime();

  /// @brief Method get_mixOutDuration addr 0x2c5647c size 0x44 virtual false final false
  inline double_t get_mixOutDuration();

  /// @brief Method get_mixOutPercentage addr 0x2c564c0 size 0x20 virtual false final false
  inline float_t get_mixOutPercentage();

  /// @brief Method get_recordable addr 0x2c564e0 size 0x8 virtual false final false
  inline bool get_recordable();

  /// @brief Method set_recordable addr 0x2c564e8 size 0xc virtual false final false
  inline void set_recordable(bool value);

  /// @brief Method get_exposedParameters addr 0x2c564f4 size 0x80 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_exposedParameters();

  /// @brief Method get_clipCaps addr 0x2c5554c size 0xe4 virtual false final false
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method Hash addr 0x2c56574 size 0x1ec virtual false final false
  inline int32_t Hash();

  /// @brief Method EvaluateMixOut addr 0x2c56760 size 0xf4 virtual false final false
  inline float_t EvaluateMixOut(double_t time);

  /// @brief Method EvaluateMixIn addr 0x2c56854 size 0xd4 virtual false final false
  inline float_t EvaluateMixIn(double_t time);

  /// @brief Method GetDefaultMixInCurve addr 0x2c56320 size 0x18 virtual false final false
  static inline ::UnityEngine::AnimationCurve* GetDefaultMixInCurve();

  /// @brief Method GetDefaultMixOutCurve addr 0x2c56430 size 0x18 virtual false final false
  static inline ::UnityEngine::AnimationCurve* GetDefaultMixOutCurve();

  /// @brief Method ToLocalTime addr 0x2c56928 size 0xec virtual false final false
  inline double_t ToLocalTime(double_t time);

  /// @brief Method ToLocalTimeUnbound addr 0x2c56bd4 size 0x50 virtual false final false
  inline double_t ToLocalTimeUnbound(double_t time);

  /// @brief Method FromLocalTimeUnbound addr 0x2c56c24 size 0x44 virtual false final false
  inline double_t FromLocalTimeUnbound(double_t time);

  /// @brief Method get_animationClip addr 0x2c56c68 size 0xf8 virtual false final false
  inline ::UnityEngine::AnimationClip* get_animationClip();

  /// @brief Method SanitizeTimeValue addr 0x2c55724 size 0x198 virtual false final false
  static inline double_t SanitizeTimeValue(double_t value, double_t defaultValue);

  /// @brief Method get_postExtrapolationMode addr 0x2c56d60 size 0x24 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_postExtrapolationMode();

  /// @brief Method set_postExtrapolationMode addr 0x2c51b34 size 0x34 virtual false final false
  inline void set_postExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method get_preExtrapolationMode addr 0x2c56d84 size 0x24 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation get_preExtrapolationMode();

  /// @brief Method set_preExtrapolationMode addr 0x2c51b00 size 0x34 virtual false final false
  inline void set_preExtrapolationMode(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation value);

  /// @brief Method SetPostExtrapolationTime addr 0x2c56da8 size 0x8 virtual false final false
  inline void SetPostExtrapolationTime(double_t time);

  /// @brief Method SetPreExtrapolationTime addr 0x2c56db0 size 0x8 virtual false final false
  inline void SetPreExtrapolationTime(double_t time);

  /// @brief Method IsExtrapolatedTime addr 0x2c56db8 size 0x3c virtual false final false
  inline bool IsExtrapolatedTime(double_t sequenceTime);

  /// @brief Method IsPreExtrapolatedTime addr 0x2c56a14 size 0x50 virtual false final false
  inline bool IsPreExtrapolatedTime(double_t sequenceTime);

  /// @brief Method IsPostExtrapolatedTime addr 0x2c56b7c size 0x58 virtual false final false
  inline bool IsPostExtrapolatedTime(double_t sequenceTime);

  /// @brief Method get_extrapolatedStart addr 0x2c56df4 size 0x18 virtual false final false
  inline double_t get_extrapolatedStart();

  /// @brief Method get_extrapolatedDuration addr 0x2c56e0c size 0xcc virtual false final false
  inline double_t get_extrapolatedDuration();

  /// @brief Method GetExtrapolatedTime addr 0x2c56a64 size 0x118 virtual false final false
  static inline double_t GetExtrapolatedTime(double_t time, ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation mode, double_t duration);

  /// @brief Method CreateCurves addr 0x2c56ed8 size 0xcc virtual true final true
  inline void CreateCurves(::StringW curvesClipName);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2c56fa4 size 0xc virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2c56fb0 size 0x38 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method ToString addr 0x2c56fe8 size 0x1dc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ConformEaseValues addr 0x2c571c4 size 0x90 virtual false final false
  inline void ConformEaseValues();

  /// @brief Method CalculateEasingRatio addr 0x2c57254 size 0xcc virtual false final false
  static inline double_t CalculateEasingRatio(double_t easeIn, double_t easeOut);

  /// @brief Method UpdateDirty addr 0x2c55718 size 0x4 virtual false final false
  inline void UpdateDirty(double_t oldValue, double_t newValue);

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineClip(TimelineClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineClip(TimelineClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClip();

public:
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_Start, offset: 0x18, size: 0x8, def value: None
  double_t ___m_Start;

  /// @brief Field m_ClipIn, offset: 0x20, size: 0x8, def value: None
  double_t ___m_ClipIn;

  /// @brief Field m_Asset, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Object* ___m_Asset;

  /// @brief Field m_Duration, offset: 0x30, size: 0x8, def value: None
  double_t ___m_Duration;

  /// @brief Field m_TimeScale, offset: 0x38, size: 0x8, def value: None
  double_t ___m_TimeScale;

  /// @brief Field m_ParentTrack, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Timeline::TrackAsset* ___m_ParentTrack;

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
  ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode ___m_BlendInCurveMode;

  /// @brief Field m_BlendOutCurveMode, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineClip__BlendCurveMode ___m_BlendOutCurveMode;

  /// @brief Field m_ExposedParameterNames, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ExposedParameterNames;

  /// @brief Field m_AnimationCurves, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ___m_AnimationCurves;

  /// @brief Field m_Recordable, offset: 0x90, size: 0x1, def value: None
  bool ___m_Recordable;

  /// @brief Field m_PostExtrapolationMode, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation ___m_PostExtrapolationMode;

  /// @brief Field m_PreExtrapolationMode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation ___m_PreExtrapolationMode;

  /// @brief Field m_PostExtrapolationTime, offset: 0xa0, size: 0x8, def value: None
  double_t ___m_PostExtrapolationTime;

  /// @brief Field m_PreExtrapolationTime, offset: 0xa8, size: 0x8, def value: None
  double_t ___m_PreExtrapolationTime;

  /// @brief Field m_DisplayName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClip, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineClip__BlendCurveMode, "UnityEngine.Timeline", "TimelineClip/BlendCurveMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, "UnityEngine.Timeline", "TimelineClip/ClipExtrapolation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineClip__Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip*, "UnityEngine.Timeline", "TimelineClip");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineClip__TimelineClipUpgrade*, "UnityEngine.Timeline", "TimelineClip/TimelineClipUpgrade");
