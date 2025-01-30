#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/RENDERING_PIPELINE.hpp"
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
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.RENDERING_PIPELINE
struct CORDL_TYPE RENDERING_PIPELINE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __RENDERING_PIPELINE_Unwrapped
  enum struct __RENDERING_PIPELINE_Unwrapped : uint32_t {
    __E_UNDEFINED = static_cast<uint32_t>(0x0u),
    __E_FORWARD = static_cast<uint32_t>(0x1u),
    __E_DEFERRED = static_cast<uint32_t>(0x2u),
    __E_VERTEX_LIT = static_cast<uint32_t>(0x3u),
    __E_UNIVERSAL = static_cast<uint32_t>(0x4u),
    __E_HIGH_DEFINITION = static_cast<uint32_t>(0x5u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RENDERING_PIPELINE_Unwrapped() const noexcept {
    return static_cast<__RENDERING_PIPELINE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RENDERING_PIPELINE();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RENDERING_PIPELINE(uint32_t value__) noexcept;

  /// @brief Field DEFERRED value: U32(2)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const DEFERRED;

  /// @brief Field FORWARD value: U32(1)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const FORWARD;

  /// @brief Field HIGH_DEFINITION value: U32(5)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const HIGH_DEFINITION;

  /// @brief Field UNDEFINED value: U32(0)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNDEFINED;

  /// @brief Field UNIVERSAL value: U32(4)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNIVERSAL;

  /// @brief Field VERTEX_LIT value: U32(3)
  static ::LIV::SDK::Unity::RENDERING_PIPELINE const VERTEX_LIT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17319 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::RENDERING_PIPELINE, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::RENDERING_PIPELINE, 0x4>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::RENDERING_PIPELINE, "LIV.SDK.Unity", "RENDERING_PIPELINE");
