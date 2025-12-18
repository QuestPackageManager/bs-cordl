#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthOfFieldModeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(DepthOfFieldModeParameter)
namespace UnityEngine::Rendering::Universal {
struct DepthOfFieldMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DepthOfFieldModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter);
// Dependencies UnityEngine.Rendering.Universal.DepthOfFieldMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DepthOfFieldModeParameter
class CORDL_TYPE DepthOfFieldModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter* New_ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x66c6684, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOfFieldModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOfFieldModeParameter(DepthOfFieldModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOfFieldModeParameter(DepthOfFieldModeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DepthOfFieldModeParameter*, "UnityEngine.Rendering.Universal", "DepthOfFieldModeParameter");
