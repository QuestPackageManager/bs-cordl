#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/INVALIDATION_FLAGS.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(INVALIDATION_FLAGS)
// Forward declare root types
namespace LIV::SDK::Unity {
struct INVALIDATION_FLAGS;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::INVALIDATION_FLAGS);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.INVALIDATION_FLAGS
struct CORDL_TYPE INVALIDATION_FLAGS {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __INVALIDATION_FLAGS_Unwrapped
  enum struct __INVALIDATION_FLAGS_Unwrapped : uint32_t {
    __E_NONE = static_cast<uint32_t>(0x0u),
    __E_HMD_CAMERA = static_cast<uint32_t>(0x1u),
    __E_STAGE = static_cast<uint32_t>(0x2u),
    __E_MR_CAMERA_PREFAB = static_cast<uint32_t>(0x4u),
    __E_EXCLUDE_BEHAVIOURS = static_cast<uint32_t>(0x8u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __INVALIDATION_FLAGS_Unwrapped() const noexcept {
    return static_cast<__INVALIDATION_FLAGS_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr INVALIDATION_FLAGS();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr INVALIDATION_FLAGS(uint32_t value__) noexcept;

  /// @brief Field EXCLUDE_BEHAVIOURS value: U32(8)
  static ::LIV::SDK::Unity::INVALIDATION_FLAGS const EXCLUDE_BEHAVIOURS;

  /// @brief Field HMD_CAMERA value: U32(1)
  static ::LIV::SDK::Unity::INVALIDATION_FLAGS const HMD_CAMERA;

  /// @brief Field MR_CAMERA_PREFAB value: U32(4)
  static ::LIV::SDK::Unity::INVALIDATION_FLAGS const MR_CAMERA_PREFAB;

  /// @brief Field NONE value: U32(0)
  static ::LIV::SDK::Unity::INVALIDATION_FLAGS const NONE;

  /// @brief Field STAGE value: U32(2)
  static ::LIV::SDK::Unity::INVALIDATION_FLAGS const STAGE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17312 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::INVALIDATION_FLAGS, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::INVALIDATION_FLAGS, 0x4>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::INVALIDATION_FLAGS, "LIV.SDK.Unity", "INVALIDATION_FLAGS");
