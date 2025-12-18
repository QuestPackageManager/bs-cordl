#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RayTracingShader)
// Forward declare root types
namespace UnityEngine::Rendering {
class RayTracingShader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RayTracingShader);
// Dependencies UnityEngine.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingShader
class CORDL_TYPE RayTracingShader : public ::UnityEngine::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingShader(RayTracingShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingShader(RayTracingShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RayTracingShader, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RayTracingShader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RayTracingShader*, "UnityEngine.Rendering", "RayTracingShader");
