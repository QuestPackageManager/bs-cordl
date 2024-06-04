#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughLayer)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BCSStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BaseGeneratedStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__ColorLutHandler;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ColorMapEditorType;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__IStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__InterpolatedColorLutHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToMonoStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToRgbaStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__NoneStyleHandler;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ProjectionSurfaceType;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__SerializedSurfaceGeometry;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__Settings;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__StylesHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ColorMapEditorType;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ProjectionSurfaceType;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BCSStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BaseGeneratedStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__ColorLutHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__IStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__InterpolatedColorLutHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToMonoStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToRgbaStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__NoneStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__StylesHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__SerializedSurfaceGeometry;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__Settings);
// Type: ::ProjectionSurfaceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::ProjectionSurfaceType
struct CORDL_TYPE __OVRPassthroughLayer__ProjectionSurfaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped
  enum struct ____OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped : int32_t {
    __E_Reconstructed = static_cast<int32_t>(0x0),
    __E_UserDefined = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped() const noexcept {
    return static_cast<____OVRPassthroughLayer__ProjectionSurfaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ProjectionSurfaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Reconstructed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const Reconstructed;

  /// @brief Field UserDefined value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const UserDefined;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorMapEditorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::ColorMapEditorType
struct CORDL_TYPE __OVRPassthroughLayer__ColorMapEditorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPassthroughLayer__ColorMapEditorType_Unwrapped
  enum struct ____OVRPassthroughLayer__ColorMapEditorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_GrayscaleToColor = static_cast<int32_t>(0x1),
    __E_Controls = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
    __E_Grayscale = static_cast<int32_t>(0x3),
    __E_ColorAdjustment = static_cast<int32_t>(0x4),
    __E_ColorLut = static_cast<int32_t>(0x5),
    __E_InterpolatedColorLut = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPassthroughLayer__ColorMapEditorType_Unwrapped() const noexcept {
    return static_cast<____OVRPassthroughLayer__ColorMapEditorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ColorMapEditorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColorAdjustment value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const ColorAdjustment;

  /// @brief Field ColorLut value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const ColorLut;

  /// @brief Field Controls value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Controls;

  /// @brief Field Custom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Custom;

  /// @brief Field Grayscale value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Grayscale;

  /// @brief Field GrayscaleToColor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const GrayscaleToColor;

  /// @brief Field InterpolatedColorLut value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const InterpolatedColorLut;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Settings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::Settings
struct CORDL_TYPE __OVRPassthroughLayer__Settings {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2b494bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation, float_t posterize, float_t brightness, float_t contrast,
                    ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__Settings();

  // Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "colorLutSourceTexture", ty:
  // "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posterize", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "contrast", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "flipLutY", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__Settings(::UnityW<::UnityEngine::Texture2D> colorLutTargetTexture, ::UnityW<::UnityEngine::Texture2D> colorLutSourceTexture, float_t saturation, float_t posterize,
                                            float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) noexcept;

  /// @brief Field colorLutTargetTexture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> colorLutTargetTexture;

  /// @brief Field colorLutSourceTexture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> colorLutSourceTexture;

  /// @brief Field saturation, offset: 0x10, size: 0x4, def value: None
  float_t saturation;

  /// @brief Field posterize, offset: 0x14, size: 0x4, def value: None
  float_t posterize;

  /// @brief Field brightness, offset: 0x18, size: 0x4, def value: None
  float_t brightness;

  /// @brief Field contrast, offset: 0x1c, size: 0x4, def value: None
  float_t contrast;

  /// @brief Field gradient, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Gradient* gradient;

  /// @brief Field lutWeight, offset: 0x28, size: 0x4, def value: None
  float_t lutWeight;

  /// @brief Field flipLutY, offset: 0x2c, size: 0x1, def value: None
  bool flipLutY;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__Settings, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, colorLutTargetTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, colorLutSourceTexture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, saturation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, posterize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, brightness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, contrast) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, gradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, lutWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__Settings, flipLutY) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughMeshInstance
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::PassthroughMeshInstance
struct CORDL_TYPE __OVRPassthroughLayer__PassthroughMeshInstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__PassthroughMeshInstance();

  // Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "updateTransform", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform, ::UnityEngine::Matrix4x4 localToWorld) noexcept;

  /// @brief Field meshHandle, offset: 0x0, size: 0x8, def value: None
  uint64_t meshHandle;

  /// @brief Field instanceHandle, offset: 0x8, size: 0x8, def value: None
  uint64_t instanceHandle;

  /// @brief Field updateTransform, offset: 0x10, size: 0x1, def value: None
  bool updateTransform;

  /// @brief Field localToWorld, offset: 0x14, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorld;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, meshHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, instanceHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, updateTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, localToWorld) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SerializedSurfaceGeometry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::SerializedSurfaceGeometry
struct CORDL_TYPE __OVRPassthroughLayer__SerializedSurfaceGeometry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry();

  // Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter> meshFilter, bool updateTransform) noexcept;

  /// @brief Field meshFilter, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> meshFilter;

  /// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
  bool updateTransform;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry, meshFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry, updateTransform) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DeferredPassthroughMeshAddition
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRPassthroughLayer::DeferredPassthroughMeshAddition
struct CORDL_TYPE __OVRPassthroughLayer__DeferredPassthroughMeshAddition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition();

  // Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject> gameObject, bool updateTransform) noexcept;

  /// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
  bool updateTransform;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition, updateTransform) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IStyleHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::IStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__IStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method ApplyStyleSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsValid();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__IStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__IStyleHandler(__OVRPassthroughLayer__IStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__IStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__IStyleHandler(__OVRPassthroughLayer__IStyleHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::StylesHandler
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::StylesHandler*
class CORDL_TYPE __OVRPassthroughLayer__StylesHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field CurrentStyleHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_CurrentStyleHandler, put = __cordl_internal_set_CurrentStyleHandler))::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* CurrentStyleHandler;

  /// @brief Field _bcsHandler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bcsHandler, put = __cordl_internal_set__bcsHandler))::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* _bcsHandler;

  /// @brief Field _colorMapData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapData, put = __cordl_internal_set__colorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  /// @brief Field _colorMapDataHandle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapDataHandle, put = __cordl_internal_set__colorMapDataHandle))::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Field _interpolatedLutHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__interpolatedLutHandler,
                      put = __cordl_internal_set__interpolatedLutHandler))::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* _interpolatedLutHandler;

  /// @brief Field _lutHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lutHandler, put = __cordl_internal_set__lutHandler))::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* _lutHandler;

  /// @brief Field _monoToMonoHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__monoToMonoHandler,
                      put = __cordl_internal_set__monoToMonoHandler))::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* _monoToMonoHandler;

  /// @brief Field _monoToRgbaHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__monoToRgbaHandler,
                      put = __cordl_internal_set__monoToRgbaHandler))::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* _monoToRgbaHandler;

  /// @brief Field _noneHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__noneHandler, put = __cordl_internal_set__noneHandler))::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* _noneHandler;

  /// @brief Method GetStyleHandler, addr 0x2b49834, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* GetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type);

  static inline ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* New_ctor();

  /// @brief Method SetColorLutHandler, addr 0x2b468e4, size 0x58, virtual false, abstract: false, final false
  inline void SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method SetInterpolatedColorLutHandler, addr 0x2b46a58, size 0x64, virtual false, abstract: false, final false
  inline void SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetMonoToMonoHandler, addr 0x2b46ec0, size 0x5c, virtual false, abstract: false, final false
  inline void SetMonoToMonoHandler(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetMonoToRgbaHandler, addr 0x2b46718, size 0x34, virtual false, abstract: false, final false
  inline void SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetStyleHandler, addr 0x2b47208, size 0xc4, virtual false, abstract: false, final false
  inline void SetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*& __cordl_internal_get_CurrentStyleHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*> const& __cordl_internal_get_CurrentStyleHandler() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*& __cordl_internal_get__bcsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*> const& __cordl_internal_get__bcsHandler() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorMapData();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__colorMapDataHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__colorMapDataHandle();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*& __cordl_internal_get__interpolatedLutHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*> const& __cordl_internal_get__interpolatedLutHandler() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*& __cordl_internal_get__lutHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*> const& __cordl_internal_get__lutHandler() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*& __cordl_internal_get__monoToMonoHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*> const& __cordl_internal_get__monoToMonoHandler() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*& __cordl_internal_get__monoToRgbaHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*> const& __cordl_internal_get__monoToRgbaHandler() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*& __cordl_internal_get__noneHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*> const& __cordl_internal_get__noneHandler() const;

  constexpr void __cordl_internal_set_CurrentStyleHandler(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* value);

  constexpr void __cordl_internal_set__bcsHandler(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* value);

  constexpr void __cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set__interpolatedLutHandler(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* value);

  constexpr void __cordl_internal_set__lutHandler(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* value);

  constexpr void __cordl_internal_set__monoToMonoHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* value);

  constexpr void __cordl_internal_set__monoToRgbaHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* value);

  constexpr void __cordl_internal_set__noneHandler(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* value);

  /// @brief Method .ctor, addr 0x2b494dc, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__StylesHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__StylesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__StylesHandler(__OVRPassthroughLayer__StylesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__StylesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__StylesHandler(__OVRPassthroughLayer__StylesHandler const&) = delete;

  /// @brief Field _noneHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* ____noneHandler;

  /// @brief Field _lutHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* ____lutHandler;

  /// @brief Field _interpolatedLutHandler, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* ____interpolatedLutHandler;

  /// @brief Field _monoToRgbaHandler, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* ____monoToRgbaHandler;

  /// @brief Field _monoToMonoHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* ____monoToMonoHandler;

  /// @brief Field _bcsHandler, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* ____bcsHandler;

  /// @brief Field _colorMapDataHandle, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____colorMapDataHandle;

  /// @brief Field _colorMapData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorMapData;

  /// @brief Field CurrentStyleHandler, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* ___CurrentStyleHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____noneHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____lutHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____interpolatedLutHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____monoToRgbaHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____monoToMonoHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____bcsHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____colorMapDataHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ____colorMapData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler, ___CurrentStyleHandler) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoneStyleHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::NoneStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__NoneStyleHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  /// @brief Method ApplyStyleSettings, addr 0x2b49a1c, size 0x4, virtual true, abstract: false, final true
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x2b49a24, size 0x4, virtual true, abstract: false, final true
  inline void Clear();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* New_ctor();

  /// @brief Method Update, addr 0x2b49a20, size 0x4, virtual true, abstract: false, final true
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method .ctor, addr 0x2b4978c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsValid, addr 0x2b49a14, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__NoneStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__NoneStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__NoneStyleHandler(__OVRPassthroughLayer__NoneStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__NoneStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__NoneStyleHandler(__OVRPassthroughLayer__NoneStyleHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BaseGeneratedStyleHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::BaseGeneratedStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__BaseGeneratedStyleHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Field _colorMapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapData, put = __cordl_internal_set__colorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  /// @brief Field _colorMapDataHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapDataHandle, put = __cordl_internal_set__colorMapDataHandle))::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  /// @brief Method AllocateColorMapData, addr 0x2b49ad8, size 0x90, virtual true, abstract: false, final false
  inline void AllocateColorMapData(uint32_t size);

  /// @brief Method ApplyStyleSettings, addr 0x2b49a64, size 0x68, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x2b49acc, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ComputeBrightnessContrastPosterizeMap, addr 0x2b49da0, size 0x174, virtual false, abstract: false, final false
  static inline void ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast, float_t posterize);

  /// @brief Method DeallocateColorMapData, addr 0x2b49b68, size 0x28, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2b49a60, size 0x4, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method WriteColorToColorMap, addr 0x2b49b90, size 0x188, virtual false, abstract: false, final false
  inline void WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color);

  /// @brief Method WriteFloatToColorMap, addr 0x2b49d18, size 0x88, virtual false, abstract: false, final false
  inline void WriteFloatToColorMap(int32_t index, float_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorMapData();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__colorMapDataHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__colorMapDataHandle();

  constexpr void __cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x2b49a30, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_IsValid, addr 0x2b49a28, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method get_MapSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_MapSize();

  /// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__BaseGeneratedStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BaseGeneratedStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__BaseGeneratedStyleHandler(__OVRPassthroughLayer__BaseGeneratedStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BaseGeneratedStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__BaseGeneratedStyleHandler(__OVRPassthroughLayer__BaseGeneratedStyleHandler const&) = delete;

  /// @brief Field _colorMapDataHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____colorMapDataHandle;

  /// @brief Field _colorMapData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler, ____colorMapDataHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler, ____colorMapData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MonoToRgbaStyleHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::MonoToRgbaStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__MonoToRgbaStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Field _tmpColorMapData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tmpColorMapData, put = __cordl_internal_set__tmpColorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpColorMapData;

  /// @brief Method AllocateColorMapData, addr 0x2b49fd8, size 0x68, virtual true, abstract: false, final false
  inline void AllocateColorMapData(uint32_t size);

  /// @brief Method DeallocateColorMapData, addr 0x2b4a040, size 0x2c, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2b49f1c, size 0xbc, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Update, addr 0x2b4995c, size 0x74, virtual false, abstract: false, final false
  inline void Update(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__tmpColorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__tmpColorMapData();

  constexpr void __cordl_internal_set__tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2b497d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x2b49f14, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__MonoToRgbaStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToRgbaStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__MonoToRgbaStyleHandler(__OVRPassthroughLayer__MonoToRgbaStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToRgbaStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__MonoToRgbaStyleHandler(__OVRPassthroughLayer__MonoToRgbaStyleHandler const&) = delete;

  /// @brief Field _tmpColorMapData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____tmpColorMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler, ____tmpColorMapData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MonoToMonoStyleHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::MonoToMonoStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__MonoToMonoStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  static inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2b4a074, size 0x38, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Update, addr 0x2b499d0, size 0x44, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method .ctor, addr 0x2b497a4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x2b4a06c, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__MonoToMonoStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToMonoStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__MonoToMonoStyleHandler(__OVRPassthroughLayer__MonoToMonoStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToMonoStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__MonoToMonoStyleHandler(__OVRPassthroughLayer__MonoToMonoStyleHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BCSStyleHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::BCSStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__BCSStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  static inline ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2b4a0b4, size 0x78, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method .ctor, addr 0x2b49804, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x2b4a0ac, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__BCSStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BCSStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__BCSStyleHandler(__OVRPassthroughLayer__BCSStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BCSStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__BCSStyleHandler(__OVRPassthroughLayer__BCSStyleHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorLutHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::ColorLutHandler*
class CORDL_TYPE __OVRPassthroughLayer__ColorLutHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid, put = set_IsValid)) bool IsValid;

  __declspec(property(get = get_Lut, put = set_Lut))::GlobalNamespace::OVRPassthroughColorLut* Lut;

  __declspec(property(get = get_Weight, put = set_Weight)) float_t Weight;

  /// @brief Field <IsValid>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__IsValid_k__BackingField, put = __cordl_internal_set__IsValid_k__BackingField)) bool _IsValid_k__BackingField;

  /// @brief Field <Lut>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Lut_k__BackingField, put = __cordl_internal_set__Lut_k__BackingField))::GlobalNamespace::OVRPassthroughColorLut* _Lut_k__BackingField;

  /// @brief Field <Weight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Weight_k__BackingField, put = __cordl_internal_set__Weight_k__BackingField)) float_t _Weight_k__BackingField;

  /// @brief Field _currentColorLutSourceTexture, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__currentColorLutSourceTexture,
                      put = __cordl_internal_set__currentColorLutSourceTexture))::UnityW<::UnityEngine::Texture2D> _currentColorLutSourceTexture;

  /// @brief Field _currentFlipLutY, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__currentFlipLutY, put = __cordl_internal_set__currentFlipLutY)) bool _currentFlipLutY;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  /// @brief Method ApplyStyleSettings, addr 0x2b4a160, size 0x28, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x2b4a33c, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetColorLutForTexture, addr 0x2b4a1dc, size 0x160, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* GetColorLutForTexture(::UnityEngine::Texture2D* newTexture, ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                          ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY);

  static inline ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* New_ctor();

  /// @brief Method Update, addr 0x2b49914, size 0x20, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method Update, addr 0x2b4a188, size 0x54, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  constexpr bool const& __cordl_internal_get__IsValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsValid_k__BackingField();

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __cordl_internal_get__Lut_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const& __cordl_internal_get__Lut_k__BackingField() const;

  constexpr float_t const& __cordl_internal_get__Weight_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Weight_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__currentColorLutSourceTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__currentColorLutSourceTexture();

  constexpr bool const& __cordl_internal_get__currentFlipLutY() const;

  constexpr bool& __cordl_internal_get__currentFlipLutY();

  constexpr void __cordl_internal_set__IsValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Lut_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value);

  constexpr void __cordl_internal_set__Weight_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__currentColorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__currentFlipLutY(bool value);

  /// @brief Method .ctor, addr 0x2b49794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsValid, addr 0x2b4a14c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method get_Lut, addr 0x2b4a12c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_Lut();

  /// @brief Method get_Weight, addr 0x2b4a13c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Weight();

  /// @brief Convert to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* i___GlobalNamespace____OVRPassthroughLayer__IStyleHandler() noexcept;

  /// @brief Method set_IsValid, addr 0x2b4a154, size 0xc, virtual false, abstract: false, final false
  inline void set_IsValid(bool value);

  /// @brief Method set_Lut, addr 0x2b4a134, size 0x8, virtual false, abstract: false, final false
  inline void set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value);

  /// @brief Method set_Weight, addr 0x2b4a144, size 0x8, virtual false, abstract: false, final false
  inline void set_Weight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ColorLutHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__ColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__ColorLutHandler(__OVRPassthroughLayer__ColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__ColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__ColorLutHandler(__OVRPassthroughLayer__ColorLutHandler const&) = delete;

  /// @brief Field _currentFlipLutY, offset: 0x10, size: 0x1, def value: None
  bool ____currentFlipLutY;

  /// @brief Field _currentColorLutSourceTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____currentColorLutSourceTexture;

  /// @brief Field <Lut>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughColorLut* ____Lut_k__BackingField;

  /// @brief Field <Weight>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____Weight_k__BackingField;

  /// @brief Field <IsValid>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____IsValid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, ____currentFlipLutY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, ____currentColorLutSourceTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, ____Lut_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, ____Weight_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler, ____IsValid_k__BackingField) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InterpolatedColorLutHandler
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::InterpolatedColorLutHandler*
class CORDL_TYPE __OVRPassthroughLayer__InterpolatedColorLutHandler : public ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler {
public:
  // Declarations
  __declspec(property(get = get_LutTarget, put = set_LutTarget))::GlobalNamespace::OVRPassthroughColorLut* LutTarget;

  /// @brief Field <LutTarget>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__LutTarget_k__BackingField,
                      put = __cordl_internal_set__LutTarget_k__BackingField))::GlobalNamespace::OVRPassthroughColorLut* _LutTarget_k__BackingField;

  /// @brief Field _currentColorLutTargetTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentColorLutTargetTexture,
                      put = __cordl_internal_set__currentColorLutTargetTexture))::UnityW<::UnityEngine::Texture2D> _currentColorLutTargetTexture;

  /// @brief Method ApplyStyleSettings, addr 0x2b4a354, size 0x38, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x2b4a408, size 0xc, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* New_ctor();

  /// @brief Method Update, addr 0x2b49934, size 0x28, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method Update, addr 0x2b4a38c, size 0x7c, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __cordl_internal_get__LutTarget_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const& __cordl_internal_get__LutTarget_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__currentColorLutTargetTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__currentColorLutTargetTexture();

  constexpr void __cordl_internal_set__LutTarget_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value);

  constexpr void __cordl_internal_set__currentColorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x2b4979c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LutTarget, addr 0x2b4a344, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_LutTarget();

  /// @brief Method set_LutTarget, addr 0x2b4a34c, size 0x8, virtual false, abstract: false, final false
  inline void set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__InterpolatedColorLutHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__InterpolatedColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__InterpolatedColorLutHandler(__OVRPassthroughLayer__InterpolatedColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__InterpolatedColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__InterpolatedColorLutHandler(__OVRPassthroughLayer__InterpolatedColorLutHandler const&) = delete;

  /// @brief Field _currentColorLutTargetTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____currentColorLutTargetTexture;

  /// @brief Field <LutTarget>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughColorLut* ____LutTarget_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler, ____currentColorLutTargetTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler, ____LutTarget_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass9_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0* New_ctor();

  /// @brief Method <RemoveSurfaceGeometry>b__0, addr 0x2b4a414, size 0x6c, virtual false, abstract: false, final false
  inline bool _RemoveSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2b46234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer____c__DisplayClass9_0(__OVRPassthroughLayer____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer____c__DisplayClass9_0(__OVRPassthroughLayer____c__DisplayClass9_0 const&) = delete;

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0, ___obj) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass10_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0* New_ctor();

  /// @brief Method <IsSurfaceGeometry>b__0, addr 0x2b4a480, size 0x6c, virtual false, abstract: false, final false
  inline bool _IsSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2b464e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer____c__DisplayClass10_0(__OVRPassthroughLayer____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer____c__DisplayClass10_0(__OVRPassthroughLayer____c__DisplayClass10_0 const&) = delete;

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0, ___obj) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPassthroughLayer
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPassthroughLayer*
class CORDL_TYPE OVRPassthroughLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BCSStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler;

  using BaseGeneratedStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler;

  using ColorLutHandler = ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler;

  using ColorMapEditorType = ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType;

  using DeferredPassthroughMeshAddition = ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition;

  using IStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler;

  using InterpolatedColorLutHandler = ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler;

  using MonoToMonoStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler;

  using MonoToRgbaStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler;

  using NoneStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler;

  using PassthroughMeshInstance = ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance;

  using ProjectionSurfaceType = ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType;

  using SerializedSurfaceGeometry = ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry;

  using Settings = ::GlobalNamespace::__OVRPassthroughLayer__Settings;

  using StylesHandler = ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0;

  /// @brief Field _colorLutSourceTexture, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutSourceTexture, put = __cordl_internal_set__colorLutSourceTexture))::UnityW<::UnityEngine::Texture2D> _colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutTargetTexture, put = __cordl_internal_set__colorLutTargetTexture))::UnityW<::UnityEngine::Texture2D> _colorLutTargetTexture;

  /// @brief Field _editorToColorMapType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__editorToColorMapType, put = setStaticF__editorToColorMapType))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>* _editorToColorMapType;

  /// @brief Field _flipLutY, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__flipLutY, put = __cordl_internal_set__flipLutY)) bool _flipLutY;

  /// @brief Field _lutWeight, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__lutWeight, put = __cordl_internal_set__lutWeight)) float_t _lutWeight;

  /// @brief Field _settings, offset 0x80, size 0x30
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings))::GlobalNamespace::__OVRPassthroughLayer__Settings _settings;

  /// @brief Field _stylesHandler, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesHandler, put = __cordl_internal_set__stylesHandler))::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* _stylesHandler;

  /// @brief Field auxGameObject, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_auxGameObject, put = __cordl_internal_set_auxGameObject))::UnityW<::UnityEngine::GameObject> auxGameObject;

  /// @brief Field cameraRig, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig, put = __cordl_internal_set_cameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig;

  /// @brief Field cameraRigInitialized, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_cameraRigInitialized, put = __cordl_internal_set_cameraRigInitialized)) bool cameraRigInitialized;

  /// @brief Field colorMapEditorBrightness, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorBrightness, put = __cordl_internal_set_colorMapEditorBrightness)) float_t colorMapEditorBrightness;

  /// @brief Field colorMapEditorContrast, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorContrast, put = __cordl_internal_set_colorMapEditorContrast)) float_t colorMapEditorContrast;

  /// @brief Field colorMapEditorGradient, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapEditorGradient, put = __cordl_internal_set_colorMapEditorGradient))::UnityEngine::Gradient* colorMapEditorGradient;

  /// @brief Field colorMapEditorPosterize, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorPosterize, put = __cordl_internal_set_colorMapEditorPosterize)) float_t colorMapEditorPosterize;

  /// @brief Field colorMapEditorSaturation, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorSaturation, put = __cordl_internal_set_colorMapEditorSaturation)) float_t colorMapEditorSaturation;

  __declspec(property(get = get_colorMapEditorType, put = set_colorMapEditorType))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType;

  /// @brief Field colorMapEditorType_, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorType_, put = __cordl_internal_set_colorMapEditorType_))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType_;

  /// @brief Field colorMapNeutralGradient, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_colorMapNeutralGradient, put = setStaticF_colorMapNeutralGradient))::UnityEngine::Gradient* colorMapNeutralGradient;

  /// @brief Field colorMapType, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapType, put = __cordl_internal_set_colorMapType))::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType colorMapType;

  /// @brief Field colorOffset, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_colorOffset, put = __cordl_internal_set_colorOffset))::UnityEngine::Vector4 colorOffset;

  /// @brief Field colorScale, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_colorScale, put = __cordl_internal_set_colorScale))::UnityEngine::Vector4 colorScale;

  /// @brief Field compositionDepth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionDepth, put = __cordl_internal_set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field deferredSurfaceGameObjects, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_deferredSurfaceGameObjects, put = __cordl_internal_set_deferredSurfaceGameObjects))::System::Collections::Generic::List_1<
      ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* deferredSurfaceGameObjects;

  __declspec(property(get = get_edgeColor, put = set_edgeColor))::UnityEngine::Color edgeColor;

  /// @brief Field edgeColor_, offset 0xf0, size 0x10
  __declspec(property(get = __cordl_internal_get_edgeColor_, put = __cordl_internal_set_edgeColor_))::UnityEngine::Color edgeColor_;

  __declspec(property(get = get_edgeRenderingEnabled, put = set_edgeRenderingEnabled)) bool edgeRenderingEnabled;

  /// @brief Field edgeRenderingEnabled_, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get_edgeRenderingEnabled_, put = __cordl_internal_set_edgeRenderingEnabled_)) bool edgeRenderingEnabled_;

  /// @brief Field hidden, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_hidden, put = __cordl_internal_set_hidden)) bool hidden;

  __declspec(property(get = get_overlayShape))::GlobalNamespace::__OVROverlay__OverlayShape overlayShape;

  /// @brief Field overlayType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_overlayType, put = __cordl_internal_set_overlayType))::GlobalNamespace::__OVROverlay__OverlayType overlayType;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_overridePerLayerColorScaleAndOffset, put = __cordl_internal_set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field passthroughOverlay, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_passthroughOverlay, put = __cordl_internal_set_passthroughOverlay))::UnityW<::GlobalNamespace::OVROverlay> passthroughOverlay;

  /// @brief Field projectionSurfaceType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_projectionSurfaceType,
                      put = __cordl_internal_set_projectionSurfaceType))::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType projectionSurfaceType;

  /// @brief Field serializedSurfaceGeometry, offset 0xe0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedSurfaceGeometry,
      put = __cordl_internal_set_serializedSurfaceGeometry))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* serializedSurfaceGeometry;

  /// @brief Field styleDirty, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_styleDirty, put = __cordl_internal_set_styleDirty)) bool styleDirty;

  /// @brief Field surfaceGameObjects, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_surfaceGameObjects, put = __cordl_internal_set_surfaceGameObjects))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* surfaceGameObjects;

  __declspec(property(get = get_textureOpacity, put = set_textureOpacity)) float_t textureOpacity;

  /// @brief Field textureOpacity_, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_textureOpacity_, put = __cordl_internal_set_textureOpacity_)) float_t textureOpacity_;

  /// @brief Method AddDeferredSurfaceGeometries, addr 0x2b472d8, size 0x258, virtual false, abstract: false, final false
  inline void AddDeferredSurfaceGeometries();

  /// @brief Method AddSurfaceGeometry, addr 0x2b45e2c, size 0x1f0, virtual false, abstract: false, final false
  inline void AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform);

  /// @brief Method Awake, addr 0x2b48914, size 0x228, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClampWeight, addr 0x2b46848, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ClampWeight(float_t weight);

  /// @brief Method CreateAndAddMesh, addr 0x2b47530, size 0x2b0, virtual false, abstract: false, final false
  inline bool CreateAndAddMesh(::UnityEngine::GameObject* obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle, ByRef<::UnityEngine::Matrix4x4> localToWorld);

  /// @brief Method CreateNeutralColorMapGradient, addr 0x2b46c4c, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* CreateNeutralColorMapGradient();

  /// @brief Method CreateOvrPluginStyleObject, addr 0x2b48cb0, size 0x154, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2 CreateOvrPluginStyleObject();

  /// @brief Method DestroySurfaceGeometries, addr 0x2b47e00, size 0x280, virtual false, abstract: false, final false
  inline void DestroySurfaceGeometries(bool addBackToDeferredQueue);

  /// @brief Method DisableColorMap, addr 0x2b471f8, size 0x8, virtual false, abstract: false, final false
  inline void DisableColorMap();

  /// @brief Method GetTransformMatrixForPassthroughSurfaceObject, addr 0x2b477e0, size 0x354, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj);

  /// @brief Method HasControlsBasedColorMap, addr 0x2b4865c, size 0x30, virtual false, abstract: false, final false
  inline bool HasControlsBasedColorMap();

  /// @brief Method IsSurfaceGeometry, addr 0x2b463cc, size 0x11c, virtual false, abstract: false, final false
  inline bool IsSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method LateUpdate, addr 0x2b48b40, size 0x170, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OVRPassthroughLayer* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b49274, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2b491a4, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2b49018, size 0x18c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RemoveSurfaceGeometry, addr 0x2b4601c, size 0x218, virtual false, abstract: false, final false
  inline void RemoveSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method SetBrightnessContrastSaturation, addr 0x2b46f1c, size 0x4c, virtual false, abstract: false, final false
  inline void SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation);

  /// @brief Method SetColorLut, addr 0x2b4674c, size 0xfc, virtual false, abstract: false, final false
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method SetColorLut, addr 0x2b4693c, size 0x11c, virtual false, abstract: false, final false
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetColorMap, addr 0x2b465a0, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorMapControls, addr 0x2b46abc, size 0x190, virtual false, abstract: false, final false
  inline void SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                  ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapType);

  /// @brief Method SetColorMapMonochromatic, addr 0x2b46e1c, size 0xa4, virtual false, abstract: false, final false
  inline void SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetStyleDirty, addr 0x2b472cc, size 0xc, virtual false, abstract: false, final false
  inline void SetStyleDirty();

  /// @brief Method SyncToOverlay, addr 0x2b4868c, size 0x274, virtual false, abstract: false, final false
  inline void SyncToOverlay();

  /// @brief Method Update, addr 0x2b48b3c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateColorMapFromControls, addr 0x2b46f68, size 0x290, virtual false, abstract: false, final false
  inline void UpdateColorMapFromControls(bool forceUpdate);

  /// @brief Method UpdateSurfaceGeometryTransform, addr 0x2b4839c, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld);

  /// @brief Method UpdateSurfaceGeometryTransforms, addr 0x2b48080, size 0x31c, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransforms();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__colorLutSourceTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__colorLutSourceTexture();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__colorLutTargetTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__colorLutTargetTexture();

  constexpr bool const& __cordl_internal_get__flipLutY() const;

  constexpr bool& __cordl_internal_get__flipLutY();

  constexpr float_t const& __cordl_internal_get__lutWeight() const;

  constexpr float_t& __cordl_internal_get__lutWeight();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings const& __cordl_internal_get__settings() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings& __cordl_internal_get__settings();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*& __cordl_internal_get__stylesHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*> const& __cordl_internal_get__stylesHandler() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_auxGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_auxGameObject();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig();

  constexpr bool const& __cordl_internal_get_cameraRigInitialized() const;

  constexpr bool& __cordl_internal_get_cameraRigInitialized();

  constexpr float_t const& __cordl_internal_get_colorMapEditorBrightness() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorBrightness();

  constexpr float_t const& __cordl_internal_get_colorMapEditorContrast() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorContrast();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorMapEditorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_colorMapEditorGradient() const;

  constexpr float_t const& __cordl_internal_get_colorMapEditorPosterize() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorPosterize();

  constexpr float_t const& __cordl_internal_get_colorMapEditorSaturation() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorSaturation();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const& __cordl_internal_get_colorMapEditorType_() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType& __cordl_internal_get_colorMapEditorType_();

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const& __cordl_internal_get_colorMapType() const;

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType& __cordl_internal_get_colorMapType();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorScale() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorScale();

  constexpr int32_t const& __cordl_internal_get_compositionDepth() const;

  constexpr int32_t& __cordl_internal_get_compositionDepth();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*& __cordl_internal_get_deferredSurfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*> const&
  __cordl_internal_get_deferredSurfaceGameObjects() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_edgeColor_() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_edgeColor_();

  constexpr bool const& __cordl_internal_get_edgeRenderingEnabled_() const;

  constexpr bool& __cordl_internal_get_edgeRenderingEnabled_();

  constexpr bool const& __cordl_internal_get_hidden() const;

  constexpr bool& __cordl_internal_get_hidden();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& __cordl_internal_get_overlayType() const;

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType& __cordl_internal_get_overlayType();

  constexpr bool const& __cordl_internal_get_overridePerLayerColorScaleAndOffset() const;

  constexpr bool& __cordl_internal_get_overridePerLayerColorScaleAndOffset();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_passthroughOverlay() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_passthroughOverlay();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const& __cordl_internal_get_projectionSurfaceType() const;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType& __cordl_internal_get_projectionSurfaceType();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*& __cordl_internal_get_serializedSurfaceGeometry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*> const&
  __cordl_internal_get_serializedSurfaceGeometry() const;

  constexpr bool const& __cordl_internal_get_styleDirty() const;

  constexpr bool& __cordl_internal_get_styleDirty();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*&
  __cordl_internal_get_surfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*> const&
  __cordl_internal_get_surfaceGameObjects() const;

  constexpr float_t const& __cordl_internal_get_textureOpacity_() const;

  constexpr float_t& __cordl_internal_get_textureOpacity_();

  constexpr void __cordl_internal_set__colorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__colorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__flipLutY(bool value);

  constexpr void __cordl_internal_set__lutWeight(float_t value);

  constexpr void __cordl_internal_set__settings(::GlobalNamespace::__OVRPassthroughLayer__Settings value);

  constexpr void __cordl_internal_set__stylesHandler(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* value);

  constexpr void __cordl_internal_set_auxGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_cameraRigInitialized(bool value);

  constexpr void __cordl_internal_set_colorMapEditorBrightness(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorContrast(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_colorMapEditorPosterize(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorSaturation(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorType_(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  constexpr void __cordl_internal_set_colorMapType(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType value);

  constexpr void __cordl_internal_set_colorOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_colorScale(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_compositionDepth(int32_t value);

  constexpr void __cordl_internal_set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* value);

  constexpr void __cordl_internal_set_edgeColor_(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_edgeRenderingEnabled_(bool value);

  constexpr void __cordl_internal_set_hidden(bool value);

  constexpr void __cordl_internal_set_overlayType(::GlobalNamespace::__OVROverlay__OverlayType value);

  constexpr void __cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr void __cordl_internal_set_passthroughOverlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set_projectionSurfaceType(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType value);

  constexpr void __cordl_internal_set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* value);

  constexpr void __cordl_internal_set_styleDirty(bool value);

  constexpr void
  __cordl_internal_set_surfaceGameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* value);

  constexpr void __cordl_internal_set_textureOpacity_(float_t value);

  /// @brief Method .ctor, addr 0x2b4927c, size 0x240, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*
  getStaticF__editorToColorMapType();

  static inline ::UnityEngine::Gradient* getStaticF_colorMapNeutralGradient();

  /// @brief Method get_colorMapEditorType, addr 0x2b47200, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType get_colorMapEditorType();

  /// @brief Method get_edgeColor, addr 0x2b4653c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_edgeColor();

  /// @brief Method get_edgeRenderingEnabled, addr 0x2b46514, size 0x8, virtual false, abstract: false, final false
  inline bool get_edgeRenderingEnabled();

  /// @brief Method get_overlayShape, addr 0x2b48900, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVROverlay__OverlayShape get_overlayShape();

  /// @brief Method get_textureOpacity, addr 0x2b464f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_textureOpacity();

  static inline void setStaticF__editorToColorMapType(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>* value);

  static inline void setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_colorMapEditorType, addr 0x2b46640, size 0xd8, virtual false, abstract: false, final false
  inline void set_colorMapEditorType(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  /// @brief Method set_edgeColor, addr 0x2b46548, size 0x58, virtual false, abstract: false, final false
  inline void set_edgeColor(::UnityEngine::Color value);

  /// @brief Method set_edgeRenderingEnabled, addr 0x2b4651c, size 0x20, virtual false, abstract: false, final false
  inline void set_edgeRenderingEnabled(bool value);

  /// @brief Method set_textureOpacity, addr 0x2b464f8, size 0x1c, virtual false, abstract: false, final false
  inline void set_textureOpacity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer(OVRPassthroughLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer(OVRPassthroughLayer const&) = delete;

  /// @brief Field projectionSurfaceType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType ___projectionSurfaceType;

  /// @brief Field overlayType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVROverlay__OverlayType ___overlayType;

  /// @brief Field compositionDepth, offset: 0x20, size: 0x4, def value: None
  int32_t ___compositionDepth;

  /// @brief Field hidden, offset: 0x24, size: 0x1, def value: None
  bool ___hidden;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset: 0x25, size: 0x1, def value: None
  bool ___overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorScale;

  /// @brief Field colorOffset, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorOffset;

  /// @brief Field colorMapEditorType_, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType ___colorMapEditorType_;

  /// @brief Field colorMapEditorGradient, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___colorMapEditorGradient;

  /// @brief Field colorMapEditorContrast, offset: 0x58, size: 0x4, def value: None
  float_t ___colorMapEditorContrast;

  /// @brief Field colorMapEditorBrightness, offset: 0x5c, size: 0x4, def value: None
  float_t ___colorMapEditorBrightness;

  /// @brief Field colorMapEditorPosterize, offset: 0x60, size: 0x4, def value: None
  float_t ___colorMapEditorPosterize;

  /// @brief Field colorMapEditorSaturation, offset: 0x64, size: 0x4, def value: None
  float_t ___colorMapEditorSaturation;

  /// @brief Field _colorLutSourceTexture, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____colorLutTargetTexture;

  /// @brief Field _lutWeight, offset: 0x78, size: 0x4, def value: None
  float_t ____lutWeight;

  /// @brief Field _flipLutY, offset: 0x7c, size: 0x1, def value: None
  bool ____flipLutY;

  /// @brief Field _settings, offset: 0x80, size: 0x30, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__Settings ____settings;

  /// @brief Field cameraRig, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig;

  /// @brief Field cameraRigInitialized, offset: 0xb8, size: 0x1, def value: None
  bool ___cameraRigInitialized;

  /// @brief Field auxGameObject, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___auxGameObject;

  /// @brief Field passthroughOverlay, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* ___surfaceGameObjects;

  /// @brief Field deferredSurfaceGameObjects, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* ___deferredSurfaceGameObjects;

  /// @brief Field serializedSurfaceGeometry, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* ___serializedSurfaceGeometry;

  /// @brief Field textureOpacity_, offset: 0xe8, size: 0x4, def value: None
  float_t ___textureOpacity_;

  /// @brief Field edgeRenderingEnabled_, offset: 0xec, size: 0x1, def value: None
  bool ___edgeRenderingEnabled_;

  /// @brief Field edgeColor_, offset: 0xf0, size: 0x10, def value: None
  ::UnityEngine::Color ___edgeColor_;

  /// @brief Field colorMapType, offset: 0x100, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType ___colorMapType;

  /// @brief Field styleDirty, offset: 0x104, size: 0x1, def value: None
  bool ___styleDirty;

  /// @brief Field _stylesHandler, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* ____stylesHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___projectionSurfaceType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overlayType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___compositionDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___hidden) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overridePerLayerColorScaleAndOffset) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorType_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorGradient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorContrast) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorBrightness) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorPosterize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorSaturation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____colorLutSourceTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____colorLutTargetTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____lutWeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____flipLutY) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____settings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRig) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRigInitialized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___auxGameObject) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___passthroughOverlay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___surfaceGameObjects) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___deferredSurfaceGameObjects) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___serializedSurfaceGeometry) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___textureOpacity_) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeRenderingEnabled_) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeColor_) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapType) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___styleDirty) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____stylesHandler) == 0x108, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, "", "OVRPassthroughLayer/ColorMapEditorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType, "", "OVRPassthroughLayer/ProjectionSurfaceType");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer*, "", "OVRPassthroughLayer");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*, "", "OVRPassthroughLayer/BCSStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler*, "", "OVRPassthroughLayer/BaseGeneratedStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*, "", "OVRPassthroughLayer/ColorLutHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*, "", "OVRPassthroughLayer/IStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*, "", "OVRPassthroughLayer/InterpolatedColorLutHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*, "", "OVRPassthroughLayer/MonoToMonoStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*, "", "OVRPassthroughLayer/MonoToRgbaStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*, "", "OVRPassthroughLayer/NoneStyleHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*, "", "OVRPassthroughLayer/StylesHandler");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*, "", "OVRPassthroughLayer/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*, "", "OVRPassthroughLayer/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition, "", "OVRPassthroughLayer/DeferredPassthroughMeshAddition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, "", "OVRPassthroughLayer/PassthroughMeshInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry, "", "OVRPassthroughLayer/SerializedSurfaceGeometry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__Settings, "", "OVRPassthroughLayer/Settings");
