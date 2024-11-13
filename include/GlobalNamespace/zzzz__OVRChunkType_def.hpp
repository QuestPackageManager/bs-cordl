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
// Type: ::OVRChunkType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRChunkType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BIN value: static_cast<int32_t>(0x4e4942)
  static ::GlobalNamespace::OVRChunkType const BIN;

  /// @brief Field JSON value: static_cast<int32_t>(0x4e4f534a)
  static ::GlobalNamespace::OVRChunkType const JSON;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7847 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRChunkType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRChunkType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChunkType, "", "OVRChunkType");
