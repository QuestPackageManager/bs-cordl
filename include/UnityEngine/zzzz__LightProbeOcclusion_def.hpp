#pragma once
// IWYU pragma private; include "UnityEngine/LightProbeOcclusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbeOcclusion)
namespace UnityEngine {
struct LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer;
}
namespace UnityEngine {
struct LightProbeOcclusion__m_Occlusion_e__FixedBuffer;
}
namespace UnityEngine {
struct LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct LightProbeOcclusion;
}
namespace UnityEngine {
struct LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer;
}
namespace UnityEngine {
struct LightProbeOcclusion__m_Occlusion_e__FixedBuffer;
}
namespace UnityEngine {
struct LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightProbeOcclusion);
MARK_VAL_T(::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbeOcclusion, "UnityEngine", "LightProbeOcclusion");
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer, "UnityEngine", "LightProbeOcclusion/<m_OcclusionMaskChannel>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer, "UnityEngine", "LightProbeOcclusion/<m_Occlusion>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer, "UnityEngine", "LightProbeOcclusion/<m_ProbeOcclusionLightIndex>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbeOcclusion/<m_Occlusion>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LightProbeOcclusion__m_Occlusion_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeOcclusion__m_Occlusion_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr LightProbeOcclusion__m_Occlusion_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9717 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbeOcclusion/<m_OcclusionMaskChannel>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int8_t", modifiers: "", def_value: None, comment: None }]
  constexpr LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer(int8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  int8_t FixedElementField;

  /// @brief Size padding 0x4 - 0x1 = 0x3, packed as 0x3
  uint8_t _cordl_size_padding[0x3];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbeOcclusion/<m_ProbeOcclusionLightIndex>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9719 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [NativeType("Runtime/GI/SceneData.h")]
// Dependencies UnityEngine.LightProbeOcclusion::<m_Occlusion>e__FixedBuffer, UnityEngine.LightProbeOcclusion::<m_OcclusionMaskChannel>e__FixedBuffer,
// UnityEngine.LightProbeOcclusion::<m_ProbeOcclusionLightIndex>e__FixedBuffer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightProbeOcclusion
struct CORDL_TYPE LightProbeOcclusion {
public:
  // Declarations
  using _m_OcclusionMaskChannel_e__FixedBuffer = ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer;

  using _m_Occlusion_e__FixedBuffer = ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer;

  using _m_ProbeOcclusionLightIndex_e__FixedBuffer = ::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightProbeOcclusion();

  // Ctor Parameters [CppParam { name: "m_ProbeOcclusionLightIndex", ty: "::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "m_Occlusion", ty: "::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_OcclusionMaskChannel", ty: "::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr LightProbeOcclusion(::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer m_ProbeOcclusionLightIndex,
                                ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer m_Occlusion,
                                ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer m_OcclusionMaskChannel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9720 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// [FixedBuffer(typeof(System.Int32), 4)]
  /// @brief Field m_ProbeOcclusionLightIndex, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::LightProbeOcclusion__m_ProbeOcclusionLightIndex_e__FixedBuffer m_ProbeOcclusionLightIndex;

  /// [FixedBuffer(typeof(System.Single), 4)]
  /// @brief Field m_Occlusion, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::LightProbeOcclusion__m_Occlusion_e__FixedBuffer m_Occlusion;

  /// [FixedBuffer(typeof(System.SByte), 4)]
  /// @brief Field m_OcclusionMaskChannel, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LightProbeOcclusion__m_OcclusionMaskChannel_e__FixedBuffer m_OcclusionMaskChannel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightProbeOcclusion, m_ProbeOcclusionLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightProbeOcclusion, m_Occlusion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LightProbeOcclusion, m_OcclusionMaskChannel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LightProbeOcclusion) == 0x24, "Size mismatch!");

} // namespace UnityEngine
