#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshVertexAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshVertexAttributes)
// Forward declare root types
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshVertexAttributes);
// Type: UnityEngine.XR::MeshVertexAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::MeshVertexAttributes
struct CORDL_TYPE MeshVertexAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MeshVertexAttributes_Unwrapped
  enum struct __MeshVertexAttributes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normals = static_cast<int32_t>(0x1),
    __E_Tangents = static_cast<int32_t>(0x2),
    __E_UVs = static_cast<int32_t>(0x4),
    __E_Colors = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MeshVertexAttributes_Unwrapped() const noexcept {
    return static_cast<__MeshVertexAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshVertexAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshVertexAttributes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Colors value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::MeshVertexAttributes const Colors;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::MeshVertexAttributes const None;

  /// @brief Field Normals value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::MeshVertexAttributes const Normals;

  /// @brief Field Tangents value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::MeshVertexAttributes const Tangents;

  /// @brief Field UVs value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::MeshVertexAttributes const UVs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshVertexAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshVertexAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshVertexAttributes, "UnityEngine.XR", "MeshVertexAttributes");
