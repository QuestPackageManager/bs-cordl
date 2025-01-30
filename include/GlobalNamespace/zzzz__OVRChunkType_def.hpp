#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRChunkType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRChunkType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRChunkType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRChunkType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRChunkType
struct CORDL_TYPE OVRChunkType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRChunkType_Unwrapped
  enum struct __OVRChunkType_Unwrapped : int32_t {
    __E_JSON = static_cast<int32_t>(0x4e4f534a),
    __E_BIN = static_cast<int32_t>(0x4e4942),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRChunkType_Unwrapped() const noexcept {
    return static_cast<__OVRChunkType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRChunkType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRChunkType(int32_t value__) noexcept;

  /// @brief Field BIN value: I32(5130562)
  static ::GlobalNamespace::OVRChunkType const BIN;

  /// @brief Field JSON value: I32(1313821514)
  static ::GlobalNamespace::OVRChunkType const JSON;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7875 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRChunkType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRChunkType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChunkType, "", "OVRChunkType");
