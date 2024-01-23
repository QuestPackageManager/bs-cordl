#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct ContextType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ContextType);
// Type: UnityEngine.UIElements::ContextType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6862))
// CS Name: ::UnityEngine.UIElements::ContextType
struct CORDL_TYPE ContextType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ContextType_Unwrapped
  enum struct __ContextType_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Editor = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContextType_Unwrapped() const noexcept {
    return static_cast<__ContextType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ContextType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Player value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::ContextType const Player;

  /// @brief Field Editor value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::ContextType const Editor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextType, "UnityEngine.UIElements", "ContextType");
