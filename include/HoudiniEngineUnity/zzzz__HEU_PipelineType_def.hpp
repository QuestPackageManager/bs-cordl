#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PipelineType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_PipelineType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_PipelineType);
// Type: HoudiniEngineUnity::HEU_PipelineType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9645))
// CS Name: ::HoudiniEngineUnity::HEU_PipelineType
struct CORDL_TYPE HEU_PipelineType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_PipelineType_Unwrapped
  enum struct __HEU_PipelineType_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_BiRP = static_cast<int32_t>(0x1),
    __E_URP = static_cast<int32_t>(0x2),
    __E_HDRP = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_PipelineType_Unwrapped() const noexcept {
    return static_cast<__HEU_PipelineType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_PipelineType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PipelineType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unsupported value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HEU_PipelineType const Unsupported;

  /// @brief Field BiRP value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HEU_PipelineType const BiRP;

  /// @brief Field URP value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HEU_PipelineType const URP;

  /// @brief Field HDRP value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HEU_PipelineType const HDRP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PipelineType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_PipelineType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PipelineType, "HoudiniEngineUnity", "HEU_PipelineType");
