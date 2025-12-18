#pragma once
// IWYU pragma private; include "HMUI/ScrollViewItemForVisibilityController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScrollViewItemForVisibilityController)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class ScrollViewItemForVisibilityController;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScrollViewItemForVisibilityController);
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ScrollViewItemForVisibilityController
class CORDL_TYPE ScrollViewItemForVisibilityController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method GetWorldCorners, addr 0x56d57e0, size 0x6c, virtual false, abstract: false, final false
  inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray);

  static inline ::HMUI::ScrollViewItemForVisibilityController* New_ctor();

  /// @brief Method .ctor, addr 0x56d584c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollViewItemForVisibilityController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemForVisibilityController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollViewItemForVisibilityController(ScrollViewItemForVisibilityController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19199 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScrollViewItemForVisibilityController, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScrollViewItemForVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollViewItemForVisibilityController*, "HMUI", "ScrollViewItemForVisibilityController");
