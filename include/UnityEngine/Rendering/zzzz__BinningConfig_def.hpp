#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BinningConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinningConfig)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BinningConfig;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BinningConfig);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BinningConfig
struct CORDL_TYPE BinningConfig {
public:
  // Declarations
  __declspec(property(get = get_visibilityConfigCount)) int32_t visibilityConfigCount;

  /// @brief Method get_visibilityConfigCount, addr 0x665fb48, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_visibilityConfigCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinningConfig();

  // Ctor Parameters [CppParam { name: "viewCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportsCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "supportsMotionCheck", ty: "bool", modifiers: "", def_value: None }]
  constexpr BinningConfig(int32_t viewCount, bool supportsCrossFade, bool supportsMotionCheck) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field viewCount, offset: 0x0, size: 0x4, def value: None
  int32_t viewCount;

  /// @brief Field supportsCrossFade, offset: 0x4, size: 0x1, def value: None
  bool supportsCrossFade;

  /// @brief Field supportsMotionCheck, offset: 0x5, size: 0x1, def value: None
  bool supportsMotionCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BinningConfig, viewCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BinningConfig, supportsCrossFade) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BinningConfig, supportsMotionCheck) == 0x5, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BinningConfig, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BinningConfig, "UnityEngine.Rendering", "BinningConfig");
