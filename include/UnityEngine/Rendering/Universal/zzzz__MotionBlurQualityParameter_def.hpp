#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionBlurQualityParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurQuality_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(MotionBlurQualityParameter)
namespace UnityEngine::Rendering::Universal {
struct MotionBlurQuality;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionBlurQualityParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionBlurQualityParameter);
// Dependencies UnityEngine.Rendering.Universal.MotionBlurQuality, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionBlurQualityParameter
class CORDL_TYPE MotionBlurQualityParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::MotionBlurQuality> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* New_ctor(::UnityEngine::Rendering::Universal::MotionBlurQuality value, bool overrideState);

  /// @brief Method .ctor, addr 0x66c6e18, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::MotionBlurQuality value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionBlurQualityParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurQualityParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionBlurQualityParameter(MotionBlurQualityParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurQualityParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionBlurQualityParameter(MotionBlurQualityParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12778 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionBlurQualityParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlurQualityParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlurQualityParameter*, "UnityEngine.Rendering.Universal", "MotionBlurQualityParameter");
