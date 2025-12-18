#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupData)
namespace UnityEngine::Rendering {
struct LODGroupData__fadeTransitionWidth_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODGroupData;
}
namespace UnityEngine::Rendering {
struct LODGroupData__fadeTransitionWidth_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODGroupData);
MARK_VAL_T(::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupData/<fadeTransitionWidth>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupData__fadeTransitionWidth_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupData__fadeTransitionWidth_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LODGroupData__fadeTransitionWidth_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
  uint8_t _cordl_size_padding[0x1c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupData/<screenRelativeTransitionHeights>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17719 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x20 - 0x4 = 0x1c, packed as 0x1c
  uint8_t _cordl_size_padding[0x1c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.LODGroupData::<fadeTransitionWidth>e__FixedBuffer, UnityEngine.Rendering.LODGroupData::<screenRelativeTransitionHeights>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupData
struct CORDL_TYPE LODGroupData {
public:
  // Declarations
  using _fadeTransitionWidth_e__FixedBuffer = ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer;

  using _screenRelativeTransitionHeights_e__FixedBuffer = ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupData();

  // Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "rendererCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenRelativeTransitionHeights", ty:
  // "::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "fadeTransitionWidth", ty:
  // "::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr LODGroupData(bool valid, int32_t lodCount, int32_t rendererCount, ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer screenRelativeTransitionHeights,
                         ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer fadeTransitionWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17720 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  /// @brief Field k_MaxLODLevelsCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxLODLevelsCount{ static_cast<int32_t>(0x8) };

  /// @brief Field valid, offset: 0x0, size: 0x1, def value: None
  bool valid;

  /// @brief Field lodCount, offset: 0x4, size: 0x4, def value: None
  int32_t lodCount;

  /// @brief Field rendererCount, offset: 0x8, size: 0x4, def value: None
  int32_t rendererCount;

  /// @brief Field screenRelativeTransitionHeights, offset: 0xc, size: 0x20, def value: None
  ::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer screenRelativeTransitionHeights;

  /// @brief Field fadeTransitionWidth, offset: 0x2c, size: 0x20, def value: None
  ::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer fadeTransitionWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, lodCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, rendererCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, screenRelativeTransitionHeights) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupData, fadeTransitionWidth) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupData, 0x4c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupData, "UnityEngine.Rendering", "LODGroupData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupData__fadeTransitionWidth_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupData/<fadeTransitionWidth>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupData__screenRelativeTransitionHeights_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupData/<screenRelativeTransitionHeights>e__FixedBuffer");
