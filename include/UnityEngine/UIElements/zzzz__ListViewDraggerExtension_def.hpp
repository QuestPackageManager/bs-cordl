#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDraggerExtension)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDraggerExtension;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDraggerExtension);
// Type: UnityEngine.UIElements::ListViewDraggerExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ListViewDraggerExtension*
class CORDL_TYPE ListViewDraggerExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRecycledItemFromIndex, addr 0x355d420, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItemFromIndex(::UnityEngine::UIElements::BaseVerticalCollectionView* listView, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDraggerExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewDraggerExtension(ListViewDraggerExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewDraggerExtension(ListViewDraggerExtension const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDraggerExtension, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDraggerExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDraggerExtension*, "UnityEngine.UIElements", "ListViewDraggerExtension");
