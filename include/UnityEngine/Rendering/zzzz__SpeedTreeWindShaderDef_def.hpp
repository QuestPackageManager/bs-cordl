#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SpeedTreeWindShaderDef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpeedTreeWindShaderDef)
// Forward declare root types
namespace UnityEngine::Rendering {
class SpeedTreeWindShaderDef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SpeedTreeWindShaderDef);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SpeedTreeWindShaderDef
class CORDL_TYPE SpeedTreeWindShaderDef : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpeedTreeWindShaderDef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpeedTreeWindShaderDef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpeedTreeWindShaderDef(SpeedTreeWindShaderDef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpeedTreeWindShaderDef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpeedTreeWindShaderDef(SpeedTreeWindShaderDef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17700 };

  /// @brief Field kMaxWindParamsCount offset 0xffffffff size 0x4
  static constexpr int32_t kMaxWindParamsCount{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SpeedTreeWindShaderDef, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SpeedTreeWindShaderDef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SpeedTreeWindShaderDef*, "UnityEngine.Rendering", "SpeedTreeWindShaderDef");
