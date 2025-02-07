#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/XR/Interaction/BasePoseProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BasePoseProvider)
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Experimental::XR::Interaction {
// Is value type: false
// CS Name: UnityEngine.Experimental.XR.Interaction.BasePoseProvider
class CORDL_TYPE BasePoseProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method GetPoseFromProvider, addr 0x491e1e0, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseFromProvider(::ByRef<::UnityEngine::Pose> output);

  static inline ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* New_ctor();

  /// @brief Method TryGetPoseFromProvider, addr 0x491e204, size 0x88, virtual true, abstract: false, final false
  inline bool TryGetPoseFromProvider(::ByRef<::UnityEngine::Pose> output);

  /// @brief Method .ctor, addr 0x491e28c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePoseProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePoseProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePoseProvider(BasePoseProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePoseProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePoseProvider(BasePoseProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Experimental::XR::Interaction
NEED_NO_BOX(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*, "UnityEngine.Experimental.XR.Interaction", "BasePoseProvider");
