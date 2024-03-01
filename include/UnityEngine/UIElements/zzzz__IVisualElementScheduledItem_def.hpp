#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IVisualElementScheduledItem)
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IVisualElementScheduledItem);
// Type: UnityEngine.UIElements::IVisualElementScheduledItem
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IVisualElementScheduledItem*
class CORDL_TYPE IVisualElementScheduledItem {
public:
  // Declarations
  /// @brief Method Every, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Every(int64_t intervalMs);

  /// @brief Method ExecuteLater, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExecuteLater(int64_t delayMs);

  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Resume();

  /// @brief Method StartingIn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(int64_t delayMs);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduledItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVisualElementScheduledItem(IVisualElementScheduledItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementScheduledItem(IVisualElementScheduledItem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementScheduledItem*, "UnityEngine.UIElements", "IVisualElementScheduledItem");
