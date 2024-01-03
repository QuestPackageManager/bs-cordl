#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICollectionDragAndDropController)
namespace UnityEngine::UIElements {
template <typename TArgs> class IDragAndDropController_1;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class IReorderable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICollectionDragAndDropController);
// Type: UnityEngine.UIElements::ICollectionDragAndDropController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6962))
// CS Name: ::UnityEngine.UIElements::ICollectionDragAndDropController*
class CORDL_TYPE ICollectionDragAndDropController {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
  constexpr operator ::UnityEngine::UIElements::IReorderable*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionDragAndDropController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICollectionDragAndDropController(ICollectionDragAndDropController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionDragAndDropController(ICollectionDragAndDropController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICollectionDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICollectionDragAndDropController*, "UnityEngine.UIElements", "ICollectionDragAndDropController");
