#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawInstance)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawInstance);
// Dependencies UnityEngine.Rendering.DrawKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawInstance
struct CORDL_TYPE DrawInstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawInstance();

  // Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::DrawKey", modifiers: "", def_value: None }, CppParam { name: "instanceIndex", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr DrawInstance(::UnityEngine::Rendering::DrawKey key, int32_t instanceIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  /// @brief Field key, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::Rendering::DrawKey key;

  /// @brief Field instanceIndex, offset: 0x38, size: 0x4, def value: None
  int32_t instanceIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawInstance, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawInstance, instanceIndex) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawInstance, 0x3c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawInstance, "UnityEngine.Rendering", "DrawInstance");
