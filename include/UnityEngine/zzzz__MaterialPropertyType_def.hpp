#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyType)
// Forward declare root types
namespace UnityEngine {
struct MaterialPropertyType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MaterialPropertyType);
// Type: UnityEngine::MaterialPropertyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::MaterialPropertyType
struct CORDL_TYPE MaterialPropertyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaterialPropertyType_Unwrapped
  enum struct __MaterialPropertyType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x0),
    __E_Int = static_cast<int32_t>(0x1),
    __E_Vector = static_cast<int32_t>(0x2),
    __E_Matrix = static_cast<int32_t>(0x3),
    __E_Texture = static_cast<int32_t>(0x4),
    __E_ConstantBuffer = static_cast<int32_t>(0x5),
    __E_ComputeBuffer = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaterialPropertyType_Unwrapped() const noexcept {
    return static_cast<__MaterialPropertyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaterialPropertyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ComputeBuffer value: static_cast<int32_t>(0x6)
  static ::UnityEngine::MaterialPropertyType const ComputeBuffer;

  /// @brief Field ConstantBuffer value: static_cast<int32_t>(0x5)
  static ::UnityEngine::MaterialPropertyType const ConstantBuffer;

  /// @brief Field Float value: static_cast<int32_t>(0x0)
  static ::UnityEngine::MaterialPropertyType const Float;

  /// @brief Field Int value: static_cast<int32_t>(0x1)
  static ::UnityEngine::MaterialPropertyType const Int;

  /// @brief Field Matrix value: static_cast<int32_t>(0x3)
  static ::UnityEngine::MaterialPropertyType const Matrix;

  /// @brief Field Texture value: static_cast<int32_t>(0x4)
  static ::UnityEngine::MaterialPropertyType const Texture;

  /// @brief Field Vector value: static_cast<int32_t>(0x2)
  static ::UnityEngine::MaterialPropertyType const Vector;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10892 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MaterialPropertyType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyType, "UnityEngine", "MaterialPropertyType");
