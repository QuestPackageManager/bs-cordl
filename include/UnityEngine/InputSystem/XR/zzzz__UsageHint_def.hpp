#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/UsageHint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UsageHint)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::UsageHint);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::XR::UsageHint, "UnityEngine.InputSystem.XR", "UsageHint");
// Dependencies
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.UsageHint
struct CORDL_TYPE UsageHint {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UsageHint();

  // Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr UsageHint(::StringW content) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8793 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field content, offset: 0x0, size: 0x8, def value: None
  ::StringW content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::UsageHint, content) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::XR::UsageHint) == 0x8, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
