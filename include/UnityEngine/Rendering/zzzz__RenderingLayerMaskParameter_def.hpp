#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingLayerMaskParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
CORDL_MODULE_EXPORT(RenderingLayerMaskParameter)
namespace UnityEngine {
struct RenderingLayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderingLayerMaskParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderingLayerMaskParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.RenderingLayerMask
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderingLayerMaskParameter
class CORDL_TYPE RenderingLayerMaskParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::RenderingLayerMask> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::RenderingLayerMaskParameter* New_ctor(::UnityEngine::RenderingLayerMask value, bool overrideState);

  /// @brief Method .ctor, addr 0x65adb14, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderingLayerMask value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingLayerMaskParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingLayerMaskParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingLayerMaskParameter(RenderingLayerMaskParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingLayerMaskParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingLayerMaskParameter(RenderingLayerMaskParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderingLayerMaskParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderingLayerMaskParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderingLayerMaskParameter*, "UnityEngine.Rendering", "RenderingLayerMaskParameter");
