#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpCubemapParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpCubemapParameter)
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpCubemapParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpCubemapParameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpCubemapParameter
class CORDL_TYPE NoInterpCubemapParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityW<::UnityEngine::Cubemap>> {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x6617080, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::NoInterpCubemapParameter* New_ctor(::UnityEngine::Cubemap* value, bool overrideState);

  /// @brief Method .ctor, addr 0x661701c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Cubemap* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpCubemapParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpCubemapParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpCubemapParameter(NoInterpCubemapParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpCubemapParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpCubemapParameter(NoInterpCubemapParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpCubemapParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpCubemapParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpCubemapParameter*, "UnityEngine.Rendering", "NoInterpCubemapParameter");
