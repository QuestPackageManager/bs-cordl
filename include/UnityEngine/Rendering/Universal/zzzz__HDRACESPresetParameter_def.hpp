#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRACESPresetParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPreset_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(HDRACESPresetParameter)
namespace UnityEngine::Rendering::Universal {
struct HDRACESPreset;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class HDRACESPresetParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::HDRACESPresetParameter);
// Dependencies UnityEngine.Rendering.Universal.HDRACESPreset, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.HDRACESPresetParameter
class CORDL_TYPE HDRACESPresetParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::HDRACESPreset> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* New_ctor(::UnityEngine::Rendering::Universal::HDRACESPreset value, bool overrideState);

  /// @brief Method .ctor, addr 0x66c7a50, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::HDRACESPreset value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRACESPresetParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDRACESPresetParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDRACESPresetParameter(HDRACESPresetParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDRACESPresetParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDRACESPresetParameter(HDRACESPresetParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12791 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRACESPresetParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRACESPresetParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRACESPresetParameter*, "UnityEngine.Rendering.Universal", "HDRACESPresetParameter");
