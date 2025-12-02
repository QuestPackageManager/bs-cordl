#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpVector4Parameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(NoInterpVector4Parameter)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpVector4Parameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpVector4Parameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpVector4Parameter
class CORDL_TYPE NoInterpVector4Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector4> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::NoInterpVector4Parameter* New_ctor(::UnityEngine::Vector4 value, bool overrideState);

  /// @brief Method .ctor, addr 0x65ae9f8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpVector4Parameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector4Parameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpVector4Parameter(NoInterpVector4Parameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector4Parameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpVector4Parameter(NoInterpVector4Parameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpVector4Parameter, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpVector4Parameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpVector4Parameter*, "UnityEngine.Rendering", "NoInterpVector4Parameter");
