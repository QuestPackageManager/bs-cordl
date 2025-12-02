#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ComponentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentType)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct ComponentType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::ComponentType);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.ComponentType
struct CORDL_TYPE ComponentType {
public:
  // Declarations
  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::UIElements::Layout::ComponentType Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentType();

  // Ctor Parameters [CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComponentType(int32_t Size) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5413 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Size, offset: 0x0, size: 0x4, def value: None
  int32_t Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::ComponentType, Size) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::ComponentType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::ComponentType, "UnityEngine.UIElements.Layout", "ComponentType");
