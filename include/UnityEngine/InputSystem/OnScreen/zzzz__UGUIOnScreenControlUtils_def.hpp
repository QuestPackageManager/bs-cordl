#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/UGUIOnScreenControlUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UGUIOnScreenControlUtils)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class UGUIOnScreenControlUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils);
// Dependencies System.Object
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// CS Name: UnityEngine.InputSystem.OnScreen.UGUIOnScreenControlUtils
class CORDL_TYPE UGUIOnScreenControlUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCanvasRectTransform, addr 0x63e731c, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RectTransform> GetCanvasRectTransform(::UnityEngine::Transform* transform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UGUIOnScreenControlUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UGUIOnScreenControlUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UGUIOnScreenControlUtils(UGUIOnScreenControlUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UGUIOnScreenControlUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UGUIOnScreenControlUtils(UGUIOnScreenControlUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils*, "UnityEngine.InputSystem.OnScreen", "UGUIOnScreenControlUtils");
