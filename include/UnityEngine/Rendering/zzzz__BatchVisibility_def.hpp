#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchVisibility)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchVisibility);
// Type: UnityEngine.Rendering::BatchVisibility
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchVisibility
struct CORDL_TYPE BatchVisibility {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchVisibility();

  // Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instancesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "visibleCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BatchVisibility(int32_t offset, int32_t instancesCount, int32_t visibleCount) noexcept;

  /// @brief Field offset, offset: 0x0, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field instancesCount, offset: 0x4, size: 0x4, def value: None
  int32_t instancesCount;

  /// @brief Field visibleCount, offset: 0x8, size: 0x4, def value: None
  int32_t visibleCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchVisibility, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchVisibility, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchVisibility, instancesCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchVisibility, visibleCount) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchVisibility, "UnityEngine.Rendering", "BatchVisibility");
