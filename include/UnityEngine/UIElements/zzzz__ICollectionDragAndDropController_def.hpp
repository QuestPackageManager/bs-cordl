#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ICollectionDragAndDropController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
CORDL_MODULE_EXPORT(ICollectionDragAndDropController)
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICollectionDragAndDropController);
// Dependencies UnityEngine.UIElements.IDragAndDropController`1<TArgs>, UnityEngine.UIElements.IReorderable
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ICollectionDragAndDropController
class CORDL_TYPE ICollectionDragAndDropController {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
  constexpr operator ::UnityEngine::UIElements::IReorderable*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*
  i___UnityEngine__UIElements__IDragAndDropController_1___UnityEngine__UIElements__IListDragAndDropArgs__() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IReorderable"
  constexpr ::UnityEngine::UIElements::IReorderable* i___UnityEngine__UIElements__IReorderable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionDragAndDropController(ICollectionDragAndDropController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICollectionDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICollectionDragAndDropController*, "UnityEngine.UIElements", "ICollectionDragAndDropController");
