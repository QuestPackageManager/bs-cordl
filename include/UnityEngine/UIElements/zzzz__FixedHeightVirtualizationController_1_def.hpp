#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FixedHeightVirtualizationController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedHeightVirtualizationController_1)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class FixedHeightVirtualizationController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::FixedHeightVirtualizationController_1);
// Dependencies System.Nullable`1<T>, UnityEngine.UIElements.VerticalVirtualizationController`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.FixedHeightVirtualizationController`1<T>
class CORDL_TYPE FixedHeightVirtualizationController_1 : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
  // Declarations
  /// @brief Field m_ScrolledToItemIndex, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrolledToItemIndex, put = __cordl_internal_set_m_ScrolledToItemIndex)) ::System::Nullable_1<int32_t> m_ScrolledToItemIndex;

  __declspec(property(get = get_resolvedItemHeight)) float_t resolvedItemHeight;

  /// @brief Method EndDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndDrag(int32_t dropIndex);

  /// @brief Method GetExpectedContentHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedContentHeight();

  /// @brief Method GetExpectedItemHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetExpectedItemHeight(int32_t index);

  /// @brief Method GetIndexFromPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  /// @brief Method GetOrMakeItemAtIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItemAtIndex(int32_t activeItemIndex, int32_t scrollViewIndex);

  static inline ::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method OnGeometryChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* _);

  /// @brief Method OnScroll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::Vector2 scrollOffset);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size);

  /// @brief Method ScrollToItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScrollToItem(int32_t index);

  /// @brief Method VisibleItemPredicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VisibleItemPredicate(T i);

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_m_ScrolledToItemIndex() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_m_ScrolledToItemIndex();

  constexpr void __cordl_internal_set_m_ScrolledToItemIndex(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method get_resolvedItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_resolvedItemHeight();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedHeightVirtualizationController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4093 };

  /// @brief Field m_ScrolledToItemIndex, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___m_ScrolledToItemIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FixedHeightVirtualizationController_1, "UnityEngine.UIElements", "FixedHeightVirtualizationController`1");
