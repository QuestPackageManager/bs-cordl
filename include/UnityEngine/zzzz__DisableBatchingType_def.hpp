#pragma once
// IWYU pragma private; include "UnityEngine/DisableBatchingType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisableBatchingType)
// Forward declare root types
namespace UnityEngine {
struct DisableBatchingType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DisableBatchingType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DisableBatchingType
struct CORDL_TYPE DisableBatchingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DisableBatchingType_Unwrapped
  enum struct __DisableBatchingType_Unwrapped : int32_t {
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
    __E_WhenLODFading = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DisableBatchingType_Unwrapped() const noexcept {
    return static_cast<__DisableBatchingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableBatchingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisableBatchingType(int32_t value__) noexcept;

  /// @brief Field False value: I32(0)
  static ::UnityEngine::DisableBatchingType const False;

  /// @brief Field True value: I32(1)
  static ::UnityEngine::DisableBatchingType const True;

  /// @brief Field WhenLODFading value: I32(2)
  static ::UnityEngine::DisableBatchingType const WhenLODFading;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DisableBatchingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::DisableBatchingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DisableBatchingType, "UnityEngine", "DisableBatchingType");
