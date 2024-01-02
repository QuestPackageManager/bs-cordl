#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtrudeMethod)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ExtrudeMethod;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ExtrudeMethod);
// Type: UnityEngine.ProBuilder::ExtrudeMethod
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12169))
// CS Name: ::UnityEngine.ProBuilder::ExtrudeMethod
struct CORDL_TYPE ExtrudeMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExtrudeMethod_Unwrapped
  enum struct __ExtrudeMethod_Unwrapped : int32_t {
    __E_IndividualFaces = static_cast<int32_t>(0x0),
    __E_VertexNormal = static_cast<int32_t>(0x1),
    __E_FaceNormal = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExtrudeMethod_Unwrapped() const noexcept {
    return static_cast<__ExtrudeMethod_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExtrudeMethod(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtrudeMethod();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field IndividualFaces value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::ExtrudeMethod const IndividualFaces;

  /// @brief Field VertexNormal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::ExtrudeMethod const VertexNormal;

  /// @brief Field FaceNormal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::ExtrudeMethod const FaceNormal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ExtrudeMethod, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ExtrudeMethod, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ExtrudeMethod, "UnityEngine.ProBuilder", "ExtrudeMethod");
