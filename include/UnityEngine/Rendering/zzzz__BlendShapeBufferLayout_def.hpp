#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendShapeBufferLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendShapeBufferLayout)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BlendShapeBufferLayout;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BlendShapeBufferLayout);
// Type: UnityEngine.Rendering::BlendShapeBufferLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BlendShapeBufferLayout
struct CORDL_TYPE BlendShapeBufferLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BlendShapeBufferLayout_Unwrapped
  enum struct __BlendShapeBufferLayout_Unwrapped : int32_t {
    __E_PerShape = static_cast<int32_t>(0x0),
    __E_PerVertex = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BlendShapeBufferLayout_Unwrapped() const noexcept {
    return static_cast<__BlendShapeBufferLayout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendShapeBufferLayout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BlendShapeBufferLayout(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PerShape value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::BlendShapeBufferLayout const PerShape;

  /// @brief Field PerVertex value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::BlendShapeBufferLayout const PerVertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BlendShapeBufferLayout, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BlendShapeBufferLayout, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BlendShapeBufferLayout, "UnityEngine.Rendering", "BlendShapeBufferLayout");
