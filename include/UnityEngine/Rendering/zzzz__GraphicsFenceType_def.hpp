#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsFenceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFenceType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsFenceType);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GraphicsFenceType
struct CORDL_TYPE GraphicsFenceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsFenceType_Unwrapped
  enum struct __GraphicsFenceType_Unwrapped : int32_t {
    __E_AsyncQueueSynchronisation = static_cast<int32_t>(0x0),
    __E_CPUSynchronisation = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicsFenceType_Unwrapped() const noexcept {
    return static_cast<__GraphicsFenceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFenceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsFenceType(int32_t value__) noexcept;

  /// @brief Field AsyncQueueSynchronisation value: I32(0)
  static ::UnityEngine::Rendering::GraphicsFenceType const AsyncQueueSynchronisation;

  /// @brief Field CPUSynchronisation value: I32(1)
  static ::UnityEngine::Rendering::GraphicsFenceType const CPUSynchronisation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GraphicsFenceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsFenceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsFenceType, "UnityEngine.Rendering", "GraphicsFenceType");
