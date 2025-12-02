#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/NeutralRangeReductionModeParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(NeutralRangeReductionModeParameter)
namespace UnityEngine::Rendering::Universal {
struct NeutralRangeReductionMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class NeutralRangeReductionModeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter);
// Dependencies UnityEngine.Rendering.Universal.NeutralRangeReductionMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.NeutralRangeReductionModeParameter
class CORDL_TYPE NeutralRangeReductionModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::NeutralRangeReductionMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* New_ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x665fe60, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::NeutralRangeReductionMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NeutralRangeReductionModeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NeutralRangeReductionModeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NeutralRangeReductionModeParameter(NeutralRangeReductionModeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NeutralRangeReductionModeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NeutralRangeReductionModeParameter(NeutralRangeReductionModeParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12786 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*, "UnityEngine.Rendering.Universal", "NeutralRangeReductionModeParameter");
