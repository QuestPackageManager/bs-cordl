#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RENDERING_PIPELINE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::RENDERING_PIPELINE);
// Type: LIV.SDK.Unity::RENDERING_PIPELINE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15107))
// CS Name: ::LIV.SDK.Unity::RENDERING_PIPELINE
struct CORDL_TYPE RENDERING_PIPELINE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __RENDERING_PIPELINE_Unwrapped
  enum struct __RENDERING_PIPELINE_Unwrapped : uint32_t {
    __E_UNDEFINED = static_cast<uint32_t>(0x3020100u),
    __E_FORWARD = static_cast<uint32_t>(0x4030201u),
    __E_DEFERRED = static_cast<uint32_t>(0x5040302u),
    __E_VERTEX_LIT = static_cast<uint32_t>(0x50403u),
    __E_UNIVERSAL = static_cast<uint32_t>(0x2000504u),
    __E_HIGH_DEFINITION = static_cast<uint32_t>(0x20005u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RENDERING_PIPELINE_Unwrapped() const noexcept {
    return static_cast<__RENDERING_PIPELINE_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RENDERING_PIPELINE(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RENDERING_PIPELINE();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNDEFINED value: static_cast<uint32_t>(0x3020100u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNDEFINED;

  /// @brief Field FORWARD value: static_cast<uint32_t>(0x4030201u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const FORWARD;

  /// @brief Field DEFERRED value: static_cast<uint32_t>(0x5040302u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const DEFERRED;

  /// @brief Field VERTEX_LIT value: static_cast<uint32_t>(0x50403u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const VERTEX_LIT;

  /// @brief Field UNIVERSAL value: static_cast<uint32_t>(0x2000504u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNIVERSAL;

  /// @brief Field HIGH_DEFINITION value: static_cast<uint32_t>(0x20005u)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const HIGH_DEFINITION;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::RENDERING_PIPELINE, 0x4>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::RENDERING_PIPELINE, "LIV.SDK.Unity", "RENDERING_PIPELINE");
