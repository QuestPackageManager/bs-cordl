#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ICursorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICursorManager)
namespace UnityEngine::UIElements {
struct Cursor;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICursorManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICursorManager);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ICursorManager
class CORDL_TYPE ICursorManager {
public:
  // Declarations
  /// @brief Method ResetCursor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResetCursor();

  /// @brief Method SetCursor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCursor(::UnityEngine::UIElements::Cursor cursor);

  // Ctor Parameters [CppParam { name: "", ty: "ICursorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICursorManager(ICursorManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5733 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICursorManager*, "UnityEngine.UIElements", "ICursorManager");
