#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupCullingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupCullingData)
namespace UnityEngine::Rendering {
struct LODGroupCullingData__percentageFlags_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData__sqrDistances_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData__transitionDistances_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData__percentageFlags_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData__sqrDistances_e__FixedBuffer;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData__transitionDistances_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LODGroupCullingData);
MARK_VAL_T(::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData/<percentageFlags>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupCullingData__percentageFlags_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupCullingData__percentageFlags_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: None }]
  constexpr LODGroupCullingData__percentageFlags_e__FixedBuffer(bool FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17721 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  bool FixedElementField;

  /// @brief Size padding 0x8 - 0x1 = 0x7, packed as 0x7
  uint8_t _cordl_size_padding[0x7];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData/<sqrDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupCullingData__sqrDistances_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupCullingData__sqrDistances_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LODGroupCullingData__sqrDistances_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17722 };

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
static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData/<transitionDistances>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LODGroupCullingData__transitionDistances_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupCullingData__transitionDistances_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LODGroupCullingData__transitionDistances_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17723 };

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
static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Mathematics.float3, UnityEngine.Rendering.LODGroupCullingData::<percentageFlags>e__FixedBuffer, UnityEngine.Rendering.LODGroupCullingData::<sqrDistances>e__FixedBuffer,
// UnityEngine.Rendering.LODGroupCullingData::<transitionDistances>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LODGroupCullingData
struct CORDL_TYPE LODGroupCullingData {
public:
  // Declarations
  using _percentageFlags_e__FixedBuffer = ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer;

  using _sqrDistances_e__FixedBuffer = ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer;

  using _transitionDistances_e__FixedBuffer = ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroupCullingData();

  // Ctor Parameters [CppParam { name: "worldSpaceReferencePoint", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "lodCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "sqrDistances", ty: "::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name:
  // "transitionDistances", ty: "::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "worldSpaceSize", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "percentageFlags", ty: "::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr LODGroupCullingData(::Unity::Mathematics::float3 worldSpaceReferencePoint, int32_t lodCount, ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer sqrDistances,
                                ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer transitionDistances, float_t worldSpaceSize,
                                ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer percentageFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17724 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5c };

  /// @brief Field worldSpaceReferencePoint, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 worldSpaceReferencePoint;

  /// @brief Field lodCount, offset: 0xc, size: 0x4, def value: None
  int32_t lodCount;

  /// @brief Field sqrDistances, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer sqrDistances;

  /// @brief Field transitionDistances, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer transitionDistances;

  /// @brief Field worldSpaceSize, offset: 0x50, size: 0x4, def value: None
  float_t worldSpaceSize;

  /// @brief Field percentageFlags, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer percentageFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, worldSpaceReferencePoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, lodCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, sqrDistances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, transitionDistances) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, worldSpaceSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LODGroupCullingData, percentageFlags) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LODGroupCullingData, 0x5c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupCullingData, "UnityEngine.Rendering", "LODGroupCullingData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupCullingData__percentageFlags_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupCullingData/<percentageFlags>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupCullingData__sqrDistances_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupCullingData/<sqrDistances>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODGroupCullingData__transitionDistances_e__FixedBuffer, "UnityEngine.Rendering", "LODGroupCullingData/<transitionDistances>e__FixedBuffer");
