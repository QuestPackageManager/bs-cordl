#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CollectionVirtualizationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionVirtualizationController)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CollectionVirtualizationController);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CollectionVirtualizationController
class CORDL_TYPE CollectionVirtualizationController : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_activeItems)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* activeItems;

  __declspec(property(get = get_firstVisibleIndex, put = set_firstVisibleIndex)) int32_t firstVisibleIndex;

  /// @brief Field m_ScrollView, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollView, put = __cordl_internal_set_m_ScrollView)) ::UnityEngine::UIElements::ScrollView* m_ScrollView;

  __declspec(property(get = get_visibleItemCount)) int32_t visibleItemCount;

  /// @brief Method EndDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndDrag(int32_t dropIndex);

  /// @brief Method GetExpectedContentHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedContentHeight();

  /// @brief Method GetExpectedItemHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedItemHeight(int32_t index);

  /// @brief Method GetIndexFromPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  static inline ::UnityEngine::UIElements::CollectionVirtualizationController* New_ctor(::UnityEngine::UIElements::ScrollView* scrollView);

  /// @brief Method OnBlur, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::VisualElement* willFocus);

  /// @brief Method OnFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget);

  /// @brief Method OnScroll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::Vector2 offset);

  /// @brief Method Refresh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh(bool rebuild);

  /// @brief Method Resize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size);

  /// @brief Method ScrollToItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScrollToItem(int32_t id);

  /// @brief Method StartDragItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartDragItem(::UnityEngine::UIElements::ReusableCollectionItem* item);

  /// @brief Method UpdateBackground, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBackground();

  constexpr ::UnityEngine::UIElements::ScrollView* const& __cordl_internal_get_m_ScrollView() const;

  constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_m_ScrollView();

  constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  /// @brief Method .ctor, addr 0x4981668, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::ScrollView* scrollView);

  /// @brief Method get_activeItems, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();

  /// @brief Method get_firstVisibleIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_firstVisibleIndex();

  /// @brief Method get_visibleItemCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_visibleItemCount();

  /// @brief Method set_firstVisibleIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_firstVisibleIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionVirtualizationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionVirtualizationController(CollectionVirtualizationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionVirtualizationController(CollectionVirtualizationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5480 };

  /// @brief Field m_ScrollView, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___m_ScrollView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CollectionVirtualizationController, ___m_ScrollView) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CollectionVirtualizationController, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CollectionVirtualizationController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CollectionVirtualizationController*, "UnityEngine.UIElements", "CollectionVirtualizationController");
