#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DownscaleParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__BloomDownscaleMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(DownscaleParameter)
namespace UnityEngine::Rendering::Universal {
struct BloomDownscaleMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DownscaleParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DownscaleParameter);
// Dependencies UnityEngine.Rendering.Universal.BloomDownscaleMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DownscaleParameter
class CORDL_TYPE DownscaleParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::Universal::BloomDownscaleMode> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::DownscaleParameter* New_ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value, bool overrideState);

  /// @brief Method .ctor, addr 0x665425c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::BloomDownscaleMode value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DownscaleParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DownscaleParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DownscaleParameter(DownscaleParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DownscaleParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DownscaleParameter(DownscaleParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DownscaleParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DownscaleParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DownscaleParameter*, "UnityEngine.Rendering.Universal", "DownscaleParameter");
