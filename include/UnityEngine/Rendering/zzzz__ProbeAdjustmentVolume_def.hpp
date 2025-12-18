#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume)
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Mode;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_RenderingLayerMaskOperation;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Shape;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Version;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Mode;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_RenderingLayerMaskOperation;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Shape;
}
namespace UnityEngine::Rendering {
struct ProbeAdjustmentVolume_Version;
}
namespace UnityEngine::Rendering {
class ProbeAdjustmentVolume;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode);
MARK_VAL_T(::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation);
MARK_VAL_T(::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape);
MARK_VAL_T(::UnityEngine::Rendering::ProbeAdjustmentVolume_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeAdjustmentVolume);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Shape
struct CORDL_TYPE ProbeAdjustmentVolume_Shape {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeAdjustmentVolume_Shape_Unwrapped
  enum struct __ProbeAdjustmentVolume_Shape_Unwrapped : int32_t {
    __E_Box = static_cast<int32_t>(0x0),
    __E_Sphere = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeAdjustmentVolume_Shape_Unwrapped() const noexcept {
    return static_cast<__ProbeAdjustmentVolume_Shape_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeAdjustmentVolume_Shape();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeAdjustmentVolume_Shape(int32_t value__) noexcept;

  /// @brief Field Box value: I32(0)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape const Box;

  /// @brief Field Sphere value: I32(1)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape const Sphere;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12048 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Mode
struct CORDL_TYPE ProbeAdjustmentVolume_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeAdjustmentVolume_Mode_Unwrapped
  enum struct __ProbeAdjustmentVolume_Mode_Unwrapped : int32_t {
    __E_InvalidateProbes = static_cast<int32_t>(0x0),
    __E_OverrideValidityThreshold = static_cast<int32_t>(0x1),
    __E_ApplyVirtualOffset = static_cast<int32_t>(0x2),
    __E_OverrideVirtualOffsetSettings = static_cast<int32_t>(0x3),
    __E_OverrideSkyDirection = static_cast<int32_t>(0x4),
    __E_OverrideSampleCount = static_cast<int32_t>(0x5),
    __E_OverrideRenderingLayerMask = static_cast<int32_t>(0x6),
    __E_IntensityScale = static_cast<int32_t>(0x63),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeAdjustmentVolume_Mode_Unwrapped() const noexcept {
    return static_cast<__ProbeAdjustmentVolume_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeAdjustmentVolume_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeAdjustmentVolume_Mode(int32_t value__) noexcept;

  /// @brief Field ApplyVirtualOffset value: I32(2)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const ApplyVirtualOffset;

  /// @brief Field IntensityScale value: I32(99)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const IntensityScale;

  /// @brief Field InvalidateProbes value: I32(0)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const InvalidateProbes;

  /// @brief Field OverrideRenderingLayerMask value: I32(6)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const OverrideRenderingLayerMask;

  /// @brief Field OverrideSampleCount value: I32(5)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const OverrideSampleCount;

  /// @brief Field OverrideSkyDirection value: I32(4)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const OverrideSkyDirection;

  /// @brief Field OverrideValidityThreshold value: I32(1)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const OverrideValidityThreshold;

  /// @brief Field OverrideVirtualOffsetSettings value: I32(3)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const OverrideVirtualOffsetSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/RenderingLayerMaskOperation
struct CORDL_TYPE ProbeAdjustmentVolume_RenderingLayerMaskOperation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped
  enum struct __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped : int32_t {
    __E_Override = static_cast<int32_t>(0x0),
    __E_Add = static_cast<int32_t>(0x1),
    __E_Remove = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped() const noexcept {
    return static_cast<__ProbeAdjustmentVolume_RenderingLayerMaskOperation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeAdjustmentVolume_RenderingLayerMaskOperation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeAdjustmentVolume_RenderingLayerMaskOperation(int32_t value__) noexcept;

  /// @brief Field Add value: I32(1)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Add;

  /// @brief Field Override value: I32(0)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Override;

  /// @brief Field Remove value: I32(2)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation const Remove;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Version
struct CORDL_TYPE ProbeAdjustmentVolume_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeAdjustmentVolume_Version_Unwrapped
  enum struct __ProbeAdjustmentVolume_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Mode = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeAdjustmentVolume_Version_Unwrapped() const noexcept {
    return static_cast<__ProbeAdjustmentVolume_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeAdjustmentVolume_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeAdjustmentVolume_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version const Initial;

  /// @brief Field Mode value: I32(1)
  static ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version const Mode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeAdjustmentVolume_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.ProbeAdjustmentVolume::Mode, UnityEngine.Rendering.ProbeAdjustmentVolume::RenderingLayerMaskOperation,
// UnityEngine.Rendering.ProbeAdjustmentVolume::Shape, UnityEngine.Rendering.ProbeAdjustmentVolume::Version, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume
class CORDL_TYPE ProbeAdjustmentVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Mode = ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode;

  using RenderingLayerMaskOperation = ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation;

  using Shape = ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape;

  using Version = ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version;

  /// @brief Field directSampleCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_directSampleCount, put = __cordl_internal_set_directSampleCount)) int32_t directSampleCount;

  /// @brief Field geometryBias, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_geometryBias, put = __cordl_internal_set_geometryBias)) float_t geometryBias;

  /// @brief Field indirectSampleCount, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_indirectSampleCount, put = __cordl_internal_set_indirectSampleCount)) int32_t indirectSampleCount;

  /// @brief Field intensityScale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_intensityScale, put = __cordl_internal_set_intensityScale)) float_t intensityScale;

  /// @brief Field invalidateProbes, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_invalidateProbes, put = __cordl_internal_set_invalidateProbes)) bool invalidateProbes;

  /// @brief Field maxBounces, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBounces, put = __cordl_internal_set_maxBounces)) int32_t maxBounces;

  /// @brief Field mode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode mode;

  /// @brief Field overriddenDilationThreshold, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_overriddenDilationThreshold, put = __cordl_internal_set_overriddenDilationThreshold)) float_t overriddenDilationThreshold;

  /// @brief Field overrideDilationThreshold, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDilationThreshold, put = __cordl_internal_set_overrideDilationThreshold)) bool overrideDilationThreshold;

  /// @brief Field radius, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field rayOriginBias, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_rayOriginBias, put = __cordl_internal_set_rayOriginBias)) float_t rayOriginBias;

  /// @brief Field renderingLayerMask, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_renderingLayerMask, put = __cordl_internal_set_renderingLayerMask)) uint8_t renderingLayerMask;

  /// @brief Field renderingLayerMaskOperation, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_renderingLayerMaskOperation,
                      put = __cordl_internal_set_renderingLayerMaskOperation)) ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation renderingLayerMaskOperation;

  /// @brief Field sampleCountMultiplier, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_sampleCountMultiplier, put = __cordl_internal_set_sampleCountMultiplier)) int32_t sampleCountMultiplier;

  /// @brief Field shape, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_shape, put = __cordl_internal_set_shape)) ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape shape;

  /// @brief Field size, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) ::UnityEngine::Vector3 size;

  /// @brief Field skyDirection, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_skyDirection, put = __cordl_internal_set_skyDirection)) ::UnityEngine::Vector3 skyDirection;

  /// @brief Field skyOcclusionMaxBounces, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_skyOcclusionMaxBounces, put = __cordl_internal_set_skyOcclusionMaxBounces)) int32_t skyOcclusionMaxBounces;

  /// @brief Field skyOcclusionSampleCount, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_skyOcclusionSampleCount, put = __cordl_internal_set_skyOcclusionSampleCount)) int32_t skyOcclusionSampleCount;

  /// @brief Field skyShadingDirectionRotation, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_skyShadingDirectionRotation, put = __cordl_internal_set_skyShadingDirectionRotation)) ::UnityEngine::Vector3 skyShadingDirectionRotation;

  /// @brief Field version, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version version;

  /// @brief Field virtualOffsetDistance, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualOffsetDistance, put = __cordl_internal_set_virtualOffsetDistance)) float_t virtualOffsetDistance;

  /// @brief Field virtualOffsetRotation, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_virtualOffsetRotation, put = __cordl_internal_set_virtualOffsetRotation)) ::UnityEngine::Vector3 virtualOffsetRotation;

  /// @brief Field virtualOffsetThreshold, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualOffsetThreshold, put = __cordl_internal_set_virtualOffsetThreshold)) float_t virtualOffsetThreshold;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x65d1194, size 0x38, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::Rendering::ProbeAdjustmentVolume* New_ctor();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x65d11e4, size 0x14, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x65d11cc, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr int32_t const& __cordl_internal_get_directSampleCount() const;

  constexpr int32_t& __cordl_internal_get_directSampleCount();

  constexpr float_t const& __cordl_internal_get_geometryBias() const;

  constexpr float_t& __cordl_internal_get_geometryBias();

  constexpr int32_t const& __cordl_internal_get_indirectSampleCount() const;

  constexpr int32_t& __cordl_internal_get_indirectSampleCount();

  constexpr float_t const& __cordl_internal_get_intensityScale() const;

  constexpr float_t& __cordl_internal_get_intensityScale();

  constexpr bool const& __cordl_internal_get_invalidateProbes() const;

  constexpr bool& __cordl_internal_get_invalidateProbes();

  constexpr int32_t const& __cordl_internal_get_maxBounces() const;

  constexpr int32_t& __cordl_internal_get_maxBounces();

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode& __cordl_internal_get_mode();

  constexpr float_t const& __cordl_internal_get_overriddenDilationThreshold() const;

  constexpr float_t& __cordl_internal_get_overriddenDilationThreshold();

  constexpr bool const& __cordl_internal_get_overrideDilationThreshold() const;

  constexpr bool& __cordl_internal_get_overrideDilationThreshold();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr float_t const& __cordl_internal_get_rayOriginBias() const;

  constexpr float_t& __cordl_internal_get_rayOriginBias();

  constexpr uint8_t const& __cordl_internal_get_renderingLayerMask() const;

  constexpr uint8_t& __cordl_internal_get_renderingLayerMask();

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation const& __cordl_internal_get_renderingLayerMaskOperation() const;

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation& __cordl_internal_get_renderingLayerMaskOperation();

  constexpr int32_t const& __cordl_internal_get_sampleCountMultiplier() const;

  constexpr int32_t& __cordl_internal_get_sampleCountMultiplier();

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape const& __cordl_internal_get_shape() const;

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape& __cordl_internal_get_shape();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_size();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_skyDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_skyDirection();

  constexpr int32_t const& __cordl_internal_get_skyOcclusionMaxBounces() const;

  constexpr int32_t& __cordl_internal_get_skyOcclusionMaxBounces();

  constexpr int32_t const& __cordl_internal_get_skyOcclusionSampleCount() const;

  constexpr int32_t& __cordl_internal_get_skyOcclusionSampleCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_skyShadingDirectionRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_skyShadingDirectionRotation();

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version& __cordl_internal_get_version();

  constexpr float_t const& __cordl_internal_get_virtualOffsetDistance() const;

  constexpr float_t& __cordl_internal_get_virtualOffsetDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_virtualOffsetRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_virtualOffsetRotation();

  constexpr float_t const& __cordl_internal_get_virtualOffsetThreshold() const;

  constexpr float_t& __cordl_internal_get_virtualOffsetThreshold();

  constexpr void __cordl_internal_set_directSampleCount(int32_t value);

  constexpr void __cordl_internal_set_geometryBias(float_t value);

  constexpr void __cordl_internal_set_indirectSampleCount(int32_t value);

  constexpr void __cordl_internal_set_intensityScale(float_t value);

  constexpr void __cordl_internal_set_invalidateProbes(bool value);

  constexpr void __cordl_internal_set_maxBounces(int32_t value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode value);

  constexpr void __cordl_internal_set_overriddenDilationThreshold(float_t value);

  constexpr void __cordl_internal_set_overrideDilationThreshold(bool value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_rayOriginBias(float_t value);

  constexpr void __cordl_internal_set_renderingLayerMask(uint8_t value);

  constexpr void __cordl_internal_set_renderingLayerMaskOperation(::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation value);

  constexpr void __cordl_internal_set_sampleCountMultiplier(int32_t value);

  constexpr void __cordl_internal_set_shape(::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape value);

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_skyDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_skyOcclusionMaxBounces(int32_t value);

  constexpr void __cordl_internal_set_skyOcclusionSampleCount(int32_t value);

  constexpr void __cordl_internal_set_skyShadingDirectionRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Rendering::ProbeAdjustmentVolume_Version value);

  constexpr void __cordl_internal_set_virtualOffsetDistance(float_t value);

  constexpr void __cordl_internal_set_virtualOffsetRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_virtualOffsetThreshold(float_t value);

  /// @brief Method .ctor, addr 0x65d11f8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeAdjustmentVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeAdjustmentVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeAdjustmentVolume(ProbeAdjustmentVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeAdjustmentVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeAdjustmentVolume(ProbeAdjustmentVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12052 };

  /// @brief Field shape, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape ___shape;

  /// @brief Field size, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___size;

  /// @brief Field radius, offset: 0x30, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field mode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode ___mode;

  /// @brief Field intensityScale, offset: 0x38, size: 0x4, def value: None
  float_t ___intensityScale;

  /// @brief Field overriddenDilationThreshold, offset: 0x3c, size: 0x4, def value: None
  float_t ___overriddenDilationThreshold;

  /// @brief Field virtualOffsetRotation, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___virtualOffsetRotation;

  /// @brief Field virtualOffsetDistance, offset: 0x4c, size: 0x4, def value: None
  float_t ___virtualOffsetDistance;

  /// @brief Field geometryBias, offset: 0x50, size: 0x4, def value: None
  float_t ___geometryBias;

  /// @brief Field virtualOffsetThreshold, offset: 0x54, size: 0x4, def value: None
  float_t ___virtualOffsetThreshold;

  /// @brief Field rayOriginBias, offset: 0x58, size: 0x4, def value: None
  float_t ___rayOriginBias;

  /// @brief Field skyDirection, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___skyDirection;

  /// @brief Field skyShadingDirectionRotation, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___skyShadingDirectionRotation;

  /// @brief Field directSampleCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___directSampleCount;

  /// @brief Field indirectSampleCount, offset: 0x78, size: 0x4, def value: None
  int32_t ___indirectSampleCount;

  /// @brief Field sampleCountMultiplier, offset: 0x7c, size: 0x4, def value: None
  int32_t ___sampleCountMultiplier;

  /// @brief Field maxBounces, offset: 0x80, size: 0x4, def value: None
  int32_t ___maxBounces;

  /// @brief Field skyOcclusionSampleCount, offset: 0x84, size: 0x4, def value: None
  int32_t ___skyOcclusionSampleCount;

  /// @brief Field skyOcclusionMaxBounces, offset: 0x88, size: 0x4, def value: None
  int32_t ___skyOcclusionMaxBounces;

  /// @brief Field renderingLayerMaskOperation, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation ___renderingLayerMaskOperation;

  /// @brief Field renderingLayerMask, offset: 0x90, size: 0x1, def value: None
  uint8_t ___renderingLayerMask;

  /// @brief Field version, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version ___version;

  /// @brief Field invalidateProbes, offset: 0x98, size: 0x1, def value: None
  bool ___invalidateProbes;

  /// @brief Field overrideDilationThreshold, offset: 0x99, size: 0x1, def value: None
  bool ___overrideDilationThreshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___mode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___intensityScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___overriddenDilationThreshold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___geometryBias) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___virtualOffsetThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___rayOriginBias) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyDirection) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyShadingDirectionRotation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___directSampleCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___indirectSampleCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___sampleCountMultiplier) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___maxBounces) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyOcclusionSampleCount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___skyOcclusionMaxBounces) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___renderingLayerMaskOperation) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___renderingLayerMask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___version) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___invalidateProbes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeAdjustmentVolume, ___overrideDilationThreshold) == 0x99, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeAdjustmentVolume, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Mode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation, "UnityEngine.Rendering", "ProbeAdjustmentVolume/RenderingLayerMaskOperation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Shape");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeAdjustmentVolume_Version, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Version");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeAdjustmentVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeAdjustmentVolume*, "UnityEngine.Rendering", "ProbeAdjustmentVolume");
