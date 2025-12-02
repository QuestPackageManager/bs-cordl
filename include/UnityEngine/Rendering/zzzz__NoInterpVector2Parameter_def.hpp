#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpVector2Parameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(NoInterpVector2Parameter)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpVector2Parameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpVector2Parameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpVector2Parameter
class CORDL_TYPE NoInterpVector2Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::NoInterpVector2Parameter* New_ctor(::UnityEngine::Vector2 value, bool overrideState);

  /// @brief Method .ctor, addr 0x65ae7a4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpVector2Parameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector2Parameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpVector2Parameter(NoInterpVector2Parameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector2Parameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpVector2Parameter(NoInterpVector2Parameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpVector2Parameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpVector2Parameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpVector2Parameter*, "UnityEngine.Rendering", "NoInterpVector2Parameter");
