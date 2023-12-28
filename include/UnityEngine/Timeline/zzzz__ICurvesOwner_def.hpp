#pragma once
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
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ICurvesOwner);
// Type: UnityEngine.Timeline::ICurvesOwner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13844))
// CS Name: ::UnityEngine.Timeline::ICurvesOwner*
class CORDL_TYPE ICurvesOwner {
public:
  // Declarations
  __declspec(property(get = get_curves))::UnityEngine::AnimationClip* curves;

  __declspec(property(get = get_hasCurves)) bool hasCurves;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_defaultCurvesName))::StringW defaultCurvesName;

  __declspec(property(get = get_asset))::UnityEngine::Object* asset;

  __declspec(property(get = get_assetOwner))::UnityEngine::Object* assetOwner;

  __declspec(property(get = get_targetTrack))::UnityEngine::Timeline::TrackAsset* targetTrack;

  /// @brief Method get_curves addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::AnimationClip* get_curves();

  /// @brief Method get_hasCurves addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_hasCurves();

  /// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
  inline double_t get_duration();

  /// @brief Method CreateCurves addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CreateCurves(::StringW curvesClipName);

  /// @brief Method get_defaultCurvesName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_defaultCurvesName();

  /// @brief Method get_asset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Object* get_asset();

  /// @brief Method get_assetOwner addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Object* get_assetOwner();

  /// @brief Method get_targetTrack addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Timeline::TrackAsset* get_targetTrack();

  // Ctor Parameters [CppParam { name: "", ty: "ICurvesOwner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICurvesOwner(ICurvesOwner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICurvesOwner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICurvesOwner(ICurvesOwner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ICurvesOwner);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ICurvesOwner*, "UnityEngine.Timeline", "ICurvesOwner");
