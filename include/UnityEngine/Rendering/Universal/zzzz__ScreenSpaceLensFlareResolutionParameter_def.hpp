#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceLensFlareResolutionParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlareResolution_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceLensFlareResolutionParameter)
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceLensFlareResolution;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceLensFlareResolutionParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter);
// Dependencies UnityEngine.Rendering.Universal.ScreenSpaceLensFlareResolution, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceLensFlareResolutionParameter
class CORDL_TYPE ScreenSpaceLensFlareResolutionParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* New_ctor(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution value, bool overrideState);

  /// @brief Method .ctor, addr 0x66c72dc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolution value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceLensFlareResolutionParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceLensFlareResolutionParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceLensFlareResolutionParameter(ScreenSpaceLensFlareResolutionParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceLensFlareResolutionParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceLensFlareResolutionParameter(ScreenSpaceLensFlareResolutionParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*, "UnityEngine.Rendering.Universal", "ScreenSpaceLensFlareResolutionParameter");
