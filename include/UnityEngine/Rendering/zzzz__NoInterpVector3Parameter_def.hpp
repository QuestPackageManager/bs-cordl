#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/NoInterpVector3Parameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(NoInterpVector3Parameter)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpVector3Parameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpVector3Parameter);
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.NoInterpVector3Parameter
class CORDL_TYPE NoInterpVector3Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::NoInterpVector3Parameter* New_ctor(::UnityEngine::Vector3 value, bool overrideState);

  /// @brief Method .ctor, addr 0x65ae8c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpVector3Parameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector3Parameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpVector3Parameter(NoInterpVector3Parameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpVector3Parameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpVector3Parameter(NoInterpVector3Parameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12331 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpVector3Parameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpVector3Parameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpVector3Parameter*, "UnityEngine.Rendering", "NoInterpVector3Parameter");
