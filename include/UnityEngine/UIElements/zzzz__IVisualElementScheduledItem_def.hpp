#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementScheduledItem.hpp"
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
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IVisualElementScheduledItem
class CORDL_TYPE IVisualElementScheduledItem {
public:
  // Declarations
  /// @brief Method Every, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Every(int64_t intervalMs);

  /// @brief Method ExecuteLater, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteLater(int64_t delayMs);

  /// @brief Method Pause, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resume();

  /// @brief Method StartingIn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(int64_t delayMs);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduledItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementScheduledItem(IVisualElementScheduledItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementScheduledItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementScheduledItem*, "UnityEngine.UIElements", "IVisualElementScheduledItem");
