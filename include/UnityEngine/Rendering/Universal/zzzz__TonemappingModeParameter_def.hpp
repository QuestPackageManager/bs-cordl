#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TonemappingModeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(TonemappingModeParameter)
namespace UnityEngine::Rendering::Universal {
struct TonemappingMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TonemappingModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TonemappingModeParameter);
// Dependencies UnityEngine.Rendering.Universal.TonemappingMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TonemappingModeParameter
class CORDL_TYPE TonemappingModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::TonemappingMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::TonemappingModeParameter* New_ctor(::UnityEngine::Rendering::Universal::TonemappingMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x665fdfc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::TonemappingMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TonemappingModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TonemappingModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TonemappingModeParameter(TonemappingModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TonemappingModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TonemappingModeParameter(TonemappingModeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TonemappingModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TonemappingModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TonemappingModeParameter*, "UnityEngine.Rendering.Universal", "TonemappingModeParameter");
