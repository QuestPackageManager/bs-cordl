#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MotionBlurModeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlurMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(MotionBlurModeParameter)
namespace UnityEngine::Rendering::Universal {
struct MotionBlurMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionBlurModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionBlurModeParameter);
// Dependencies UnityEngine.Rendering.Universal.MotionBlurMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.MotionBlurModeParameter
class CORDL_TYPE MotionBlurModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::MotionBlurMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::MotionBlurModeParameter* New_ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x665f228, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::MotionBlurMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionBlurModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionBlurModeParameter(MotionBlurModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionBlurModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionBlurModeParameter(MotionBlurModeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionBlurModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionBlurModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionBlurModeParameter*, "UnityEngine.Rendering.Universal", "MotionBlurModeParameter");
