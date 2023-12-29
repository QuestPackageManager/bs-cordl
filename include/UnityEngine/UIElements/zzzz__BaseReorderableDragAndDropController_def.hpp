#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseReorderableDragAndDropController)
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IReorderable;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class IListDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
template <typename TArgs> class IDragAndDropController_1;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseReorderableDragAndDropController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseReorderableDragAndDropController);
// Type: UnityEngine.UIElements::BaseReorderableDragAndDropController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7037))
// CS Name: ::UnityEngine.UIElements::BaseReorderableDragAndDropController*
class CORDL_TYPE BaseReorderableDragAndDropController : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_View, offset 0x10, size 0x8
  __declspec(property(get = __get_m_View, put = __set_m_View))::UnityEngine::UIElements::BaseVerticalCollectionView* m_View;

  /// @brief Field m_SelectedIndices, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SelectedIndices, put = __set_m_SelectedIndices))::System::Collections::Generic::List_1<int32_t>* m_SelectedIndices;

  /// @brief Field <enableReordering>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __get__enableReordering_k__BackingField, put = __set__enableReordering_k__BackingField)) bool _enableReordering_k__BackingField;

  __declspec(property(get = get_enableReordering, put = set_enableReordering)) bool enableReordering;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICollectionDragAndDropController"
  constexpr operator ::UnityEngine::UIElements::ICollectionDragAndDropController*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>"
  constexpr operator ::UnityEngine::UIElements::IDragAndDropController_1<::UnityEngine::UIElements::IListDragAndDropArgs*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IReorderable"
  constexpr operator ::UnityEngine::UIElements::IReorderable*() noexcept;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __get_m_View();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const& __get_m_View() const;

  constexpr void __set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_m_SelectedIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_m_SelectedIndices() const;

  constexpr void __set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr bool& __get__enableReordering_k__BackingField();

  constexpr bool const& __get__enableReordering_k__BackingField() const;

  constexpr void __set__enableReordering_k__BackingField(bool value);

  static inline ::UnityEngine::UIElements::BaseReorderableDragAndDropController* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view);

  /// @brief Method .ctor addr 0x2ca2790 size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* view);

  /// @brief Method get_enableReordering addr 0x2ca2be4 size 0x8 virtual true final true
  inline bool get_enableReordering();

  /// @brief Method set_enableReordering addr 0x2ca2bec size 0xc virtual true final true
  inline void set_enableReordering(bool value);

  /// @brief Method CanStartDrag addr 0x2ca2bf8 size 0x8 virtual true final false
  inline bool CanStartDrag(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices);

  /// @brief Method SetupDragAndDrop addr 0x2ca2c00 size 0x5d4 virtual true final false
  inline ::UnityEngine::UIElements::StartDragArgs* SetupDragAndDrop(::System::Collections::Generic::IEnumerable_1<int32_t>* itemIndices, bool skipText);

  /// @brief Method HandleDragAndDrop addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::DragVisualMode HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  /// @brief Method OnDrop addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args);

  // Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseReorderableDragAndDropController(BaseReorderableDragAndDropController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseReorderableDragAndDropController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseReorderableDragAndDropController(BaseReorderableDragAndDropController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseReorderableDragAndDropController();

public:
  /// @brief Field m_View, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_View;

  /// @brief Field m_SelectedIndices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SelectedIndices;

  /// @brief Field <enableReordering>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____enableReordering_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseReorderableDragAndDropController, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ___m_View) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ___m_SelectedIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseReorderableDragAndDropController, ____enableReordering_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseReorderableDragAndDropController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseReorderableDragAndDropController*, "UnityEngine.UIElements", "BaseReorderableDragAndDropController");
