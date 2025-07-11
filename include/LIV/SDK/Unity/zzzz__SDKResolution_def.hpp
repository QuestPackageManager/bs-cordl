#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKResolution.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKResolution)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKResolution;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKResolution);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.SDKResolution
struct CORDL_TYPE SDKResolution {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3ac6618, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_zero, addr 0x3ac2534, size 0x8, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKResolution get_zero();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKResolution();

  // Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SDKResolution(int32_t width, int32_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17328 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  int32_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::SDKResolution, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LIV::SDK::Unity::SDKResolution, height) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKResolution, 0x8>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKResolution, "LIV.SDK.Unity", "SDKResolution");
