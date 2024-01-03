#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedHeightVirtualizationController_1)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
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
// Type: UnityEngine.UIElements::FixedHeightVirtualizationController`1
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7370), inst: 5350 }), TypeDefinitionIndex(TypeDefinitionIndex(7370))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7367))
// CS Name: ::UnityEngine.UIElements::FixedHeightVirtualizationController`1<T>*
class CORDL_TYPE FixedHeightVirtualizationController_1 : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
  // Declarations
  __declspec(property(get = get_resolvedItemHeight)) float_t resolvedItemHeight;

  /// @brief Method get_resolvedItemHeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t get_resolvedItemHeight();

  /// @brief Method VisibleItemPredicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VisibleItemPredicate(T i);

  static inline ::UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView);

  /// @brief Method GetIndexFromPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  /// @brief Method GetItemHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetItemHeight(int32_t index);

  /// @brief Method ScrollToItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ScrollToItem(int32_t index);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size, int32_t layoutPass);

  /// @brief Method OnScroll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::Vector2 scrollOffset);

  /// @brief Method GetOrMakeItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetOrMakeItem();

  // Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedHeightVirtualizationController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedHeightVirtualizationController_1(FixedHeightVirtualizationController_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedHeightVirtualizationController_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FixedHeightVirtualizationController_1, "UnityEngine.UIElements", "FixedHeightVirtualizationController`1");
