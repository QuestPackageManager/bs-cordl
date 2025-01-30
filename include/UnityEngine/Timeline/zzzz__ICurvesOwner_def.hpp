#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ICurvesOwner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ICurvesOwner)
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ICurvesOwner);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ICurvesOwner
class CORDL_TYPE ICurvesOwner {
public:
  // Declarations
  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::Object> asset;

  __declspec(property(get = get_assetOwner)) ::UnityW<::UnityEngine::Object> assetOwner;

  __declspec(property(get = get_curves)) ::UnityW<::UnityEngine::AnimationClip> curves;

  __declspec(property(get = get_defaultCurvesName)) ::StringW defaultCurvesName;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_hasCurves)) bool hasCurves;

  __declspec(property(get = get_targetTrack)) ::UnityW<::UnityEngine::Timeline::TrackAsset> targetTrack;

  /// @brief Method CreateCurves, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CreateCurves(::StringW curvesClipName);

  /// @brief Method get_asset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_asset();

  /// @brief Method get_assetOwner, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_assetOwner();

  /// @brief Method get_curves, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AnimationClip> get_curves();

  /// @brief Method get_defaultCurvesName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_defaultCurvesName();

  /// @brief Method get_duration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_hasCurves, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_hasCurves();

  /// @brief Method get_targetTrack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> get_targetTrack();

  // Ctor Parameters [CppParam { name: "", ty: "ICurvesOwner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICurvesOwner(ICurvesOwner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15805 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ICurvesOwner);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ICurvesOwner*, "UnityEngine.Timeline", "ICurvesOwner");
