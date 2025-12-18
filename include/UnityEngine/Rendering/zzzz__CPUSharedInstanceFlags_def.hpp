#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUSharedInstanceFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdateFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CPUSharedInstanceFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUSharedInstanceFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUSharedInstanceFlags);
// Dependencies UnityEngine.Rendering.InstanceFlags, UnityEngine.Rendering.TransformUpdateFlags
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUSharedInstanceFlags
struct CORDL_TYPE CPUSharedInstanceFlags {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CPUSharedInstanceFlags();

  // Ctor Parameters [CppParam { name: "transformUpdateFlags", ty: "::UnityEngine::Rendering::TransformUpdateFlags", modifiers: "", def_value: None }, CppParam { name: "instanceFlags", ty:
  // "::UnityEngine::Rendering::InstanceFlags", modifiers: "", def_value: None }]
  constexpr CPUSharedInstanceFlags(::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags, ::UnityEngine::Rendering::InstanceFlags instanceFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field transformUpdateFlags, offset: 0x0, size: 0x1, def value: None
  ::UnityEngine::Rendering::TransformUpdateFlags transformUpdateFlags;

  /// @brief Field instanceFlags, offset: 0x1, size: 0x1, def value: None
  ::UnityEngine::Rendering::InstanceFlags instanceFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceFlags, transformUpdateFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUSharedInstanceFlags, instanceFlags) == 0x1, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CPUSharedInstanceFlags, 0x2>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CPUSharedInstanceFlags, "UnityEngine.Rendering", "CPUSharedInstanceFlags");
