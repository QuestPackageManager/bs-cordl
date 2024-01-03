#pragma once
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
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle2;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToRgbaStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__NoneStyleHandler;
}
namespace UnityEngine {
class Gradient;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__IStyleHandler;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__Settings;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ColorMapEditorType;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BCSStyleHandler;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ProjectionSurfaceType;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__BaseGeneratedStyleHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__InterpolatedColorLutHandler;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__StylesHandler;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__ColorLutHandler;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer__MonoToMonoStyleHandler;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__SerializedSurfaceGeometry;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__PassthroughMeshInstance;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass10_0;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine {
class MeshFilter;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7661))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ProjectionSurfaceType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Reconstructed value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const Reconstructed;

  /// @brief Field UserDefined value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const UserDefined;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7662))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ColorMapEditorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const None;

  /// @brief Field GrayscaleToColor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const GrayscaleToColor;

  /// @brief Field Controls value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Controls;

  /// @brief Field Custom value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Custom;

  /// @brief Field Grayscale value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const Grayscale;

  /// @brief Field ColorAdjustment value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const ColorAdjustment;

  /// @brief Field ColorLut value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const ColorLut;

  /// @brief Field InterpolatedColorLut value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const InterpolatedColorLut;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7663))
// CS Name: ::OVRPassthroughLayer::Settings
struct CORDL_TYPE __OVRPassthroughLayer__Settings {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2751e60, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation, float_t posterize, float_t brightness, float_t contrast,
                    ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY);

  // Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "colorLutSourceTexture", ty:
  // "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posterize", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "contrast", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "flipLutY", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__Settings(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation, float_t posterize, float_t brightness,
                                            float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__Settings();

  /// @brief Field colorLutTargetTexture, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture2D* colorLutTargetTexture;

  /// @brief Field colorLutSourceTexture, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Texture2D* colorLutSourceTexture;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10245))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7664))
// CS Name: ::OVRPassthroughLayer::PassthroughMeshInstance
struct CORDL_TYPE __OVRPassthroughLayer__PassthroughMeshInstance {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "updateTransform", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform, ::UnityEngine::Matrix4x4 localToWorld) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__PassthroughMeshInstance();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7665))
// CS Name: ::OVRPassthroughLayer::SerializedSurfaceGeometry
struct CORDL_TYPE __OVRPassthroughLayer__SerializedSurfaceGeometry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityEngine::MeshFilter*", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityEngine::MeshFilter* meshFilter, bool updateTransform) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry();

  /// @brief Field meshFilter, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* meshFilter;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7666))
// CS Name: ::OVRPassthroughLayer::DeferredPassthroughMeshAddition
struct CORDL_TYPE __OVRPassthroughLayer__DeferredPassthroughMeshAddition {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityEngine::GameObject* gameObject, bool updateTransform) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition();

  /// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GameObject* gameObject;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7667))
// CS Name: ::OVRPassthroughLayer::IStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__IStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method ApplyStyleSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsValid();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3336)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7668))
// CS Name: ::OVRPassthroughLayer::StylesHandler*
class CORDL_TYPE __OVRPassthroughLayer__StylesHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _noneHandler, offset 0x10, size 0x8
  __declspec(property(get = __get__noneHandler, put = __set__noneHandler))::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* _noneHandler;

  /// @brief Field _lutHandler, offset 0x18, size 0x8
  __declspec(property(get = __get__lutHandler, put = __set__lutHandler))::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* _lutHandler;

  /// @brief Field _interpolatedLutHandler, offset 0x20, size 0x8
  __declspec(property(get = __get__interpolatedLutHandler, put = __set__interpolatedLutHandler))::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* _interpolatedLutHandler;

  /// @brief Field _monoToRgbaHandler, offset 0x28, size 0x8
  __declspec(property(get = __get__monoToRgbaHandler, put = __set__monoToRgbaHandler))::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* _monoToRgbaHandler;

  /// @brief Field _monoToMonoHandler, offset 0x30, size 0x8
  __declspec(property(get = __get__monoToMonoHandler, put = __set__monoToMonoHandler))::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* _monoToMonoHandler;

  /// @brief Field _bcsHandler, offset 0x38, size 0x8
  __declspec(property(get = __get__bcsHandler, put = __set__bcsHandler))::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* _bcsHandler;

  /// @brief Field _colorMapDataHandle, offset 0x40, size 0x8
  __declspec(property(get = __get__colorMapDataHandle, put = __set__colorMapDataHandle))::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Field _colorMapData, offset 0x48, size 0x8
  __declspec(property(get = __get__colorMapData, put = __set__colorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  /// @brief Field CurrentStyleHandler, offset 0x50, size 0x8
  __declspec(property(get = __get_CurrentStyleHandler, put = __set_CurrentStyleHandler))::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* CurrentStyleHandler;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*& __get__noneHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler*> const& __get__noneHandler() const;

  constexpr void __set__noneHandler(::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*& __get__lutHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler*> const& __get__lutHandler() const;

  constexpr void __set__lutHandler(::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*& __get__interpolatedLutHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler*> const& __get__interpolatedLutHandler() const;

  constexpr void __set__interpolatedLutHandler(::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*& __get__monoToRgbaHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler*> const& __get__monoToRgbaHandler() const;

  constexpr void __set__monoToRgbaHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*& __get__monoToMonoHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler*> const& __get__monoToMonoHandler() const;

  constexpr void __set__monoToMonoHandler(::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*& __get__bcsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler*> const& __get__bcsHandler() const;

  constexpr void __set__bcsHandler(::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get__colorMapDataHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get__colorMapDataHandle() const;

  constexpr void __set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__colorMapData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__colorMapData() const;

  constexpr void __set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*& __get_CurrentStyleHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*> const& __get_CurrentStyleHandler() const;

  constexpr void __set_CurrentStyleHandler(::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* value);

  static inline ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2751e80, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetStyleHandler, addr 0x274fbac, size 0xc4, virtual false, abstract: false, final false
  inline void SetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type);

  /// @brief Method GetStyleHandler, addr 0x27521d8, size 0xe0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler* GetStyleHandler(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType type);

  /// @brief Method SetColorLutHandler, addr 0x274f288, size 0x58, virtual false, abstract: false, final false
  inline void SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method SetInterpolatedColorLutHandler, addr 0x274f3fc, size 0x64, virtual false, abstract: false, final false
  inline void SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetMonoToRgbaHandler, addr 0x274f0bc, size 0x34, virtual false, abstract: false, final false
  inline void SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetMonoToMonoHandler, addr 0x274f864, size 0x5c, virtual false, abstract: false, final false
  inline void SetMonoToMonoHandler(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__StylesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__StylesHandler(__OVRPassthroughLayer__StylesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__StylesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__StylesHandler(__OVRPassthroughLayer__StylesHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__StylesHandler();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7669))
// CS Name: ::OVRPassthroughLayer::NoneStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__NoneStyleHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  /// @brief Method get_IsValid, addr 0x27523b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method ApplyStyleSettings, addr 0x27523c0, size 0x4, virtual true, abstract: false, final true
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Update, addr 0x27523c4, size 0x4, virtual true, abstract: false, final true
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Clear, addr 0x27523c8, size 0x4, virtual true, abstract: false, final true
  inline void Clear();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2752130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__NoneStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__NoneStyleHandler(__OVRPassthroughLayer__NoneStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__NoneStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__NoneStyleHandler(__OVRPassthroughLayer__NoneStyleHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__NoneStyleHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BaseGeneratedStyleHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7670))
// CS Name: ::OVRPassthroughLayer::BaseGeneratedStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__BaseGeneratedStyleHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorMapDataHandle, offset 0x10, size 0x8
  __declspec(property(get = __get__colorMapDataHandle, put = __set__colorMapDataHandle))::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Field _colorMapData, offset 0x18, size 0x8
  __declspec(property(get = __get__colorMapData, put = __set__colorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  constexpr ::System::Runtime::InteropServices::GCHandle& __get__colorMapDataHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get__colorMapDataHandle() const;

  constexpr void __set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__colorMapData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__colorMapData() const;

  constexpr void __set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_MapSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_MapSize();

  /// @brief Method get_IsValid, addr 0x27523cc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method .ctor, addr 0x27523d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2752404, size 0x4, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method ApplyStyleSettings, addr 0x2752408, size 0x68, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x2752470, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method AllocateColorMapData, addr 0x275247c, size 0x90, virtual true, abstract: false, final false
  /// @param size: uint32_t (default: static_cast<uint32_t>(0x900090u))
  inline void AllocateColorMapData(uint32_t size = static_cast<uint32_t>(0x900090u));

  /// @brief Method DeallocateColorMapData, addr 0x275250c, size 0x28, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  /// @brief Method WriteColorToColorMap, addr 0x2752534, size 0x188, virtual false, abstract: false, final false
  inline void WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color);

  /// @brief Method WriteFloatToColorMap, addr 0x27526bc, size 0x88, virtual false, abstract: false, final false
  inline void WriteFloatToColorMap(int32_t index, float_t value);

  /// @brief Method ComputeBrightnessContrastPosterizeMap, addr 0x2752744, size 0x174, virtual false, abstract: false, final false
  static inline void ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast, float_t posterize);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BaseGeneratedStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__BaseGeneratedStyleHandler(__OVRPassthroughLayer__BaseGeneratedStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BaseGeneratedStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__BaseGeneratedStyleHandler(__OVRPassthroughLayer__BaseGeneratedStyleHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__BaseGeneratedStyleHandler();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7670))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7671))
// CS Name: ::OVRPassthroughLayer::MonoToRgbaStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__MonoToRgbaStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  /// @brief Field _tmpColorMapData, offset 0x20, size 0x8
  __declspec(property(get = __get__tmpColorMapData, put = __set__tmpColorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpColorMapData;

  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__tmpColorMapData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__tmpColorMapData() const;

  constexpr void __set__tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_MapSize, addr 0x27528b8, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method .ctor, addr 0x2752178, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x27528c0, size 0xbc, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Update, addr 0x2752300, size 0x74, virtual false, abstract: false, final false
  inline void Update(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method AllocateColorMapData, addr 0x275297c, size 0x68, virtual true, abstract: false, final false
  /// @param size: uint32_t (default: static_cast<uint32_t>(0x63460090u))
  inline void AllocateColorMapData(uint32_t size = static_cast<uint32_t>(0x63460090u));

  /// @brief Method DeallocateColorMapData, addr 0x27529e4, size 0x2c, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToRgbaStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__MonoToRgbaStyleHandler(__OVRPassthroughLayer__MonoToRgbaStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToRgbaStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__MonoToRgbaStyleHandler(__OVRPassthroughLayer__MonoToRgbaStyleHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__MonoToRgbaStyleHandler();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7670))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7672))
// CS Name: ::OVRPassthroughLayer::MonoToMonoStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__MonoToMonoStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Method get_MapSize, addr 0x2752a10, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method .ctor, addr 0x2752148, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2752a18, size 0x38, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Update, addr 0x2752374, size 0x44, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToMonoStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__MonoToMonoStyleHandler(__OVRPassthroughLayer__MonoToMonoStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__MonoToMonoStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__MonoToMonoStyleHandler(__OVRPassthroughLayer__MonoToMonoStyleHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__MonoToMonoStyleHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BCSStyleHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7670))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7673))
// CS Name: ::OVRPassthroughLayer::BCSStyleHandler*
class CORDL_TYPE __OVRPassthroughLayer__BCSStyleHandler : public ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Method get_MapSize, addr 0x2752a50, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler* New_ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method .ctor, addr 0x27521a8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x2752a58, size 0x78, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BCSStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__BCSStyleHandler(__OVRPassthroughLayer__BCSStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__BCSStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__BCSStyleHandler(__OVRPassthroughLayer__BCSStyleHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__BCSStyleHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorLutHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7674))
// CS Name: ::OVRPassthroughLayer::ColorLutHandler*
class CORDL_TYPE __OVRPassthroughLayer__ColorLutHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentFlipLutY, offset 0x10, size 0x1
  __declspec(property(get = __get__currentFlipLutY, put = __set__currentFlipLutY)) bool _currentFlipLutY;

  /// @brief Field _currentColorLutSourceTexture, offset 0x18, size 0x8
  __declspec(property(get = __get__currentColorLutSourceTexture, put = __set__currentColorLutSourceTexture))::UnityEngine::Texture2D* _currentColorLutSourceTexture;

  /// @brief Field <Lut>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Lut_k__BackingField, put = __set__Lut_k__BackingField))::GlobalNamespace::OVRPassthroughColorLut* _Lut_k__BackingField;

  /// @brief Field <Weight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__Weight_k__BackingField, put = __set__Weight_k__BackingField)) float_t _Weight_k__BackingField;

  /// @brief Field <IsValid>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __get__IsValid_k__BackingField, put = __set__IsValid_k__BackingField)) bool _IsValid_k__BackingField;

  __declspec(property(get = get_Lut, put = set_Lut))::GlobalNamespace::OVRPassthroughColorLut* Lut;

  __declspec(property(get = get_Weight, put = set_Weight)) float_t Weight;

  __declspec(property(get = get_IsValid, put = set_IsValid)) bool IsValid;

  /// @brief Convert operator to "::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler"
  constexpr operator ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler*() noexcept;

  constexpr bool& __get__currentFlipLutY();

  constexpr bool const& __get__currentFlipLutY() const;

  constexpr void __set__currentFlipLutY(bool value);

  constexpr ::UnityEngine::Texture2D*& __get__currentColorLutSourceTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__currentColorLutSourceTexture() const;

  constexpr void __set__currentColorLutSourceTexture(::UnityEngine::Texture2D* value);

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __get__Lut_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const& __get__Lut_k__BackingField() const;

  constexpr void __set__Lut_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value);

  constexpr float_t& __get__Weight_k__BackingField();

  constexpr float_t const& __get__Weight_k__BackingField() const;

  constexpr void __set__Weight_k__BackingField(float_t value);

  constexpr bool& __get__IsValid_k__BackingField();

  constexpr bool const& __get__IsValid_k__BackingField() const;

  constexpr void __set__IsValid_k__BackingField(bool value);

  /// @brief Method get_Lut, addr 0x2752ad0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_Lut();

  /// @brief Method set_Lut, addr 0x2752ad8, size 0x8, virtual false, abstract: false, final false
  inline void set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value);

  /// @brief Method get_Weight, addr 0x2752ae0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Weight();

  /// @brief Method set_Weight, addr 0x2752ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_Weight(float_t value);

  /// @brief Method get_IsValid, addr 0x2752af0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method set_IsValid, addr 0x2752af8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsValid(bool value);

  /// @brief Method ApplyStyleSettings, addr 0x2752b04, size 0x28, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Update, addr 0x2752b2c, size 0x54, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method GetColorLutForTexture, addr 0x2752b80, size 0x160, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* GetColorLutForTexture(::UnityEngine::Texture2D* newTexture, ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                          ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY);

  /// @brief Method Update, addr 0x27522b8, size 0x20, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method Clear, addr 0x2752ce0, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2752138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__ColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__ColorLutHandler(__OVRPassthroughLayer__ColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__ColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__ColorLutHandler(__OVRPassthroughLayer__ColorLutHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__ColorLutHandler();

public:
  /// @brief Field _currentFlipLutY, offset: 0x10, size: 0x1, def value: None
  bool ____currentFlipLutY;

  /// @brief Field _currentColorLutSourceTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____currentColorLutSourceTexture;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7674))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7675))
// CS Name: ::OVRPassthroughLayer::InterpolatedColorLutHandler*
class CORDL_TYPE __OVRPassthroughLayer__InterpolatedColorLutHandler : public ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler {
public:
  // Declarations
  /// @brief Field _currentColorLutTargetTexture, offset 0x30, size 0x8
  __declspec(property(get = __get__currentColorLutTargetTexture, put = __set__currentColorLutTargetTexture))::UnityEngine::Texture2D* _currentColorLutTargetTexture;

  /// @brief Field <LutTarget>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__LutTarget_k__BackingField, put = __set__LutTarget_k__BackingField))::GlobalNamespace::OVRPassthroughColorLut* _LutTarget_k__BackingField;

  __declspec(property(get = get_LutTarget, put = set_LutTarget))::GlobalNamespace::OVRPassthroughColorLut* LutTarget;

  constexpr ::UnityEngine::Texture2D*& __get__currentColorLutTargetTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__currentColorLutTargetTexture() const;

  constexpr void __set__currentColorLutTargetTexture(::UnityEngine::Texture2D* value);

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __get__LutTarget_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughColorLut*> const& __get__LutTarget_k__BackingField() const;

  constexpr void __set__LutTarget_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value);

  /// @brief Method get_LutTarget, addr 0x2752ce8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_LutTarget();

  /// @brief Method set_LutTarget, addr 0x2752cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value);

  /// @brief Method ApplyStyleSettings, addr 0x2752cf8, size 0x38, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method Update, addr 0x2752d30, size 0x7c, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::__OVRPassthroughLayer__Settings settings);

  /// @brief Method Update, addr 0x27522d8, size 0x28, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method Clear, addr 0x2752dac, size 0xc, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler* New_ctor();

  /// @brief Method .ctor, addr 0x2752140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__InterpolatedColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer__InterpolatedColorLutHandler(__OVRPassthroughLayer__InterpolatedColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer__InterpolatedColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer__InterpolatedColorLutHandler(__OVRPassthroughLayer__InterpolatedColorLutHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__InterpolatedColorLutHandler();

public:
  /// @brief Field _currentColorLutTargetTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____currentColorLutTargetTexture;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7676))
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass9_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::UnityEngine::GameObject* obj;

  constexpr ::UnityEngine::GameObject*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_obj() const;

  constexpr void __set_obj(::UnityEngine::GameObject* value);

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0* New_ctor();

  /// @brief Method .ctor, addr 0x274ebd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RemoveSurfaceGeometry>b__0, addr 0x2752db8, size 0x6c, virtual false, abstract: false, final false
  inline bool _RemoveSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer____c__DisplayClass9_0(__OVRPassthroughLayer____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer____c__DisplayClass9_0(__OVRPassthroughLayer____c__DisplayClass9_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer____c__DisplayClass9_0();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___obj;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7677))
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass10_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::UnityEngine::GameObject* obj;

  constexpr ::UnityEngine::GameObject*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_obj() const;

  constexpr void __set_obj(::UnityEngine::GameObject* value);

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor, addr 0x274ee8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <IsSurfaceGeometry>b__0, addr 0x2752e24, size 0x6c, virtual false, abstract: false, final false
  inline bool _IsSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughLayer____c__DisplayClass10_0(__OVRPassthroughLayer____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughLayer____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughLayer____c__DisplayClass10_0(__OVRPassthroughLayer____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer____c__DisplayClass10_0();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___obj;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(7655)), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// TypeDefinitionIndex(TypeDefinitionIndex(7661)), TypeDefinitionIndex(TypeDefinitionIndex(7663)), TypeDefinitionIndex(TypeDefinitionIndex(7662)), TypeDefinitionIndex(TypeDefinitionIndex(10251)),
// TypeDefinitionIndex(TypeDefinitionIndex(7825))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7678)) CS Name: ::OVRPassthroughLayer*
class CORDL_TYPE OVRPassthroughLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0;

  using InterpolatedColorLutHandler = ::GlobalNamespace::__OVRPassthroughLayer__InterpolatedColorLutHandler;

  using ColorLutHandler = ::GlobalNamespace::__OVRPassthroughLayer__ColorLutHandler;

  using BCSStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__BCSStyleHandler;

  using MonoToMonoStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__MonoToMonoStyleHandler;

  using MonoToRgbaStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__MonoToRgbaStyleHandler;

  using BaseGeneratedStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__BaseGeneratedStyleHandler;

  using NoneStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__NoneStyleHandler;

  using StylesHandler = ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler;

  using IStyleHandler = ::GlobalNamespace::__OVRPassthroughLayer__IStyleHandler;

  using DeferredPassthroughMeshAddition = ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition;

  using SerializedSurfaceGeometry = ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry;

  using PassthroughMeshInstance = ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance;

  using Settings = ::GlobalNamespace::__OVRPassthroughLayer__Settings;

  using ColorMapEditorType = ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType;

  using ProjectionSurfaceType = ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType;

  /// @brief Field projectionSurfaceType, offset 0x18, size 0x4
  __declspec(property(get = __get_projectionSurfaceType, put = __set_projectionSurfaceType))::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType projectionSurfaceType;

  /// @brief Field overlayType, offset 0x1c, size 0x4
  __declspec(property(get = __get_overlayType, put = __set_overlayType))::GlobalNamespace::__OVROverlay__OverlayType overlayType;

  /// @brief Field compositionDepth, offset 0x20, size 0x4
  __declspec(property(get = __get_compositionDepth, put = __set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field hidden, offset 0x24, size 0x1
  __declspec(property(get = __get_hidden, put = __set_hidden)) bool hidden;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0x25, size 0x1
  __declspec(property(get = __get_overridePerLayerColorScaleAndOffset, put = __set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset 0x28, size 0x10
  __declspec(property(get = __get_colorScale, put = __set_colorScale))::UnityEngine::Vector4 colorScale;

  /// @brief Field colorOffset, offset 0x38, size 0x10
  __declspec(property(get = __get_colorOffset, put = __set_colorOffset))::UnityEngine::Vector4 colorOffset;

  /// @brief Field colorMapEditorType_, offset 0x48, size 0x4
  __declspec(property(get = __get_colorMapEditorType_, put = __set_colorMapEditorType_))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType_;

  /// @brief Field colorMapEditorGradient, offset 0x50, size 0x8
  __declspec(property(get = __get_colorMapEditorGradient, put = __set_colorMapEditorGradient))::UnityEngine::Gradient* colorMapEditorGradient;

  /// @brief Field colorMapEditorContrast, offset 0x58, size 0x4
  __declspec(property(get = __get_colorMapEditorContrast, put = __set_colorMapEditorContrast)) float_t colorMapEditorContrast;

  /// @brief Field colorMapEditorBrightness, offset 0x5c, size 0x4
  __declspec(property(get = __get_colorMapEditorBrightness, put = __set_colorMapEditorBrightness)) float_t colorMapEditorBrightness;

  /// @brief Field colorMapEditorPosterize, offset 0x60, size 0x4
  __declspec(property(get = __get_colorMapEditorPosterize, put = __set_colorMapEditorPosterize)) float_t colorMapEditorPosterize;

  /// @brief Field colorMapEditorSaturation, offset 0x64, size 0x4
  __declspec(property(get = __get_colorMapEditorSaturation, put = __set_colorMapEditorSaturation)) float_t colorMapEditorSaturation;

  /// @brief Field _colorLutSourceTexture, offset 0x68, size 0x8
  __declspec(property(get = __get__colorLutSourceTexture, put = __set__colorLutSourceTexture))::UnityEngine::Texture2D* _colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset 0x70, size 0x8
  __declspec(property(get = __get__colorLutTargetTexture, put = __set__colorLutTargetTexture))::UnityEngine::Texture2D* _colorLutTargetTexture;

  /// @brief Field _lutWeight, offset 0x78, size 0x4
  __declspec(property(get = __get__lutWeight, put = __set__lutWeight)) float_t _lutWeight;

  /// @brief Field _flipLutY, offset 0x7c, size 0x1
  __declspec(property(get = __get__flipLutY, put = __set__flipLutY)) bool _flipLutY;

  /// @brief Field _settings, offset 0x80, size 0x30
  __declspec(property(get = __get__settings, put = __set__settings))::GlobalNamespace::__OVRPassthroughLayer__Settings _settings;

  /// @brief Field cameraRig, offset 0xb0, size 0x8
  __declspec(property(get = __get_cameraRig, put = __set_cameraRig))::GlobalNamespace::OVRCameraRig* cameraRig;

  /// @brief Field cameraRigInitialized, offset 0xb8, size 0x1
  __declspec(property(get = __get_cameraRigInitialized, put = __set_cameraRigInitialized)) bool cameraRigInitialized;

  /// @brief Field auxGameObject, offset 0xc0, size 0x8
  __declspec(property(get = __get_auxGameObject, put = __set_auxGameObject))::UnityEngine::GameObject* auxGameObject;

  /// @brief Field passthroughOverlay, offset 0xc8, size 0x8
  __declspec(property(get = __get_passthroughOverlay, put = __set_passthroughOverlay))::GlobalNamespace::OVROverlay* passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset 0xd0, size 0x8
  __declspec(property(
      get = __get_surfaceGameObjects,
      put = __set_surfaceGameObjects))::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* surfaceGameObjects;

  /// @brief Field deferredSurfaceGameObjects, offset 0xd8, size 0x8
  __declspec(
      property(get = __get_deferredSurfaceGameObjects,
               put = __set_deferredSurfaceGameObjects))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* deferredSurfaceGameObjects;

  /// @brief Field serializedSurfaceGeometry, offset 0xe0, size 0x8
  __declspec(property(get = __get_serializedSurfaceGeometry,
                      put = __set_serializedSurfaceGeometry))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* serializedSurfaceGeometry;

  /// @brief Field textureOpacity_, offset 0xe8, size 0x4
  __declspec(property(get = __get_textureOpacity_, put = __set_textureOpacity_)) float_t textureOpacity_;

  /// @brief Field edgeRenderingEnabled_, offset 0xec, size 0x1
  __declspec(property(get = __get_edgeRenderingEnabled_, put = __set_edgeRenderingEnabled_)) bool edgeRenderingEnabled_;

  /// @brief Field edgeColor_, offset 0xf0, size 0x10
  __declspec(property(get = __get_edgeColor_, put = __set_edgeColor_))::UnityEngine::Color edgeColor_;

  /// @brief Field colorMapType, offset 0x100, size 0x4
  __declspec(property(get = __get_colorMapType, put = __set_colorMapType))::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType colorMapType;

  /// @brief Field styleDirty, offset 0x104, size 0x1
  __declspec(property(get = __get_styleDirty, put = __set_styleDirty)) bool styleDirty;

  /// @brief Field _stylesHandler, offset 0x108, size 0x8
  __declspec(property(get = __get__stylesHandler, put = __set__stylesHandler))::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* _stylesHandler;

  /// @brief Field _editorToColorMapType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__editorToColorMapType, put = setStaticF__editorToColorMapType))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>* _editorToColorMapType;

  /// @brief Field colorMapNeutralGradient, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_colorMapNeutralGradient, put = setStaticF_colorMapNeutralGradient))::UnityEngine::Gradient* colorMapNeutralGradient;

  __declspec(property(get = get_textureOpacity, put = set_textureOpacity)) float_t textureOpacity;

  __declspec(property(get = get_edgeRenderingEnabled, put = set_edgeRenderingEnabled)) bool edgeRenderingEnabled;

  __declspec(property(get = get_edgeColor, put = set_edgeColor))::UnityEngine::Color edgeColor;

  __declspec(property(get = get_colorMapEditorType, put = set_colorMapEditorType))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType;

  __declspec(property(get = get_overlayShape))::GlobalNamespace::__OVROverlay__OverlayShape overlayShape;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType& __get_projectionSurfaceType();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const& __get_projectionSurfaceType() const;

  constexpr void __set_projectionSurfaceType(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType value);

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType& __get_overlayType();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& __get_overlayType() const;

  constexpr void __set_overlayType(::GlobalNamespace::__OVROverlay__OverlayType value);

  constexpr int32_t& __get_compositionDepth();

  constexpr int32_t const& __get_compositionDepth() const;

  constexpr void __set_compositionDepth(int32_t value);

  constexpr bool& __get_hidden();

  constexpr bool const& __get_hidden() const;

  constexpr void __set_hidden(bool value);

  constexpr bool& __get_overridePerLayerColorScaleAndOffset();

  constexpr bool const& __get_overridePerLayerColorScaleAndOffset() const;

  constexpr void __set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr ::UnityEngine::Vector4& __get_colorScale();

  constexpr ::UnityEngine::Vector4 const& __get_colorScale() const;

  constexpr void __set_colorScale(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector4& __get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __get_colorOffset() const;

  constexpr void __set_colorOffset(::UnityEngine::Vector4 value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType& __get_colorMapEditorType_();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const& __get_colorMapEditorType_() const;

  constexpr void __set_colorMapEditorType_(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  constexpr ::UnityEngine::Gradient*& __get_colorMapEditorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __get_colorMapEditorGradient() const;

  constexpr void __set_colorMapEditorGradient(::UnityEngine::Gradient* value);

  constexpr float_t& __get_colorMapEditorContrast();

  constexpr float_t const& __get_colorMapEditorContrast() const;

  constexpr void __set_colorMapEditorContrast(float_t value);

  constexpr float_t& __get_colorMapEditorBrightness();

  constexpr float_t const& __get_colorMapEditorBrightness() const;

  constexpr void __set_colorMapEditorBrightness(float_t value);

  constexpr float_t& __get_colorMapEditorPosterize();

  constexpr float_t const& __get_colorMapEditorPosterize() const;

  constexpr void __set_colorMapEditorPosterize(float_t value);

  constexpr float_t& __get_colorMapEditorSaturation();

  constexpr float_t const& __get_colorMapEditorSaturation() const;

  constexpr void __set_colorMapEditorSaturation(float_t value);

  constexpr ::UnityEngine::Texture2D*& __get__colorLutSourceTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__colorLutSourceTexture() const;

  constexpr void __set__colorLutSourceTexture(::UnityEngine::Texture2D* value);

  constexpr ::UnityEngine::Texture2D*& __get__colorLutTargetTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__colorLutTargetTexture() const;

  constexpr void __set__colorLutTargetTexture(::UnityEngine::Texture2D* value);

  constexpr float_t& __get__lutWeight();

  constexpr float_t const& __get__lutWeight() const;

  constexpr void __set__lutWeight(float_t value);

  constexpr bool& __get__flipLutY();

  constexpr bool const& __get__flipLutY() const;

  constexpr void __set__flipLutY(bool value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings& __get__settings();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__Settings const& __get__settings() const;

  constexpr void __set__settings(::GlobalNamespace::__OVRPassthroughLayer__Settings value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get_cameraRig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get_cameraRig() const;

  constexpr void __set_cameraRig(::GlobalNamespace::OVRCameraRig* value);

  constexpr bool& __get_cameraRigInitialized();

  constexpr bool const& __get_cameraRigInitialized() const;

  constexpr void __set_cameraRigInitialized(bool value);

  constexpr ::UnityEngine::GameObject*& __get_auxGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_auxGameObject() const;

  constexpr void __set_auxGameObject(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::OVROverlay*& __get_passthroughOverlay();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> const& __get_passthroughOverlay() const;

  constexpr void __set_passthroughOverlay(::GlobalNamespace::OVROverlay* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*& __get_surfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*> const&
  __get_surfaceGameObjects() const;

  constexpr void __set_surfaceGameObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*& __get_deferredSurfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*> const&
  __get_deferredSurfaceGameObjects() const;

  constexpr void __set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*& __get_serializedSurfaceGeometry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*> const&
  __get_serializedSurfaceGeometry() const;

  constexpr void __set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* value);

  constexpr float_t& __get_textureOpacity_();

  constexpr float_t const& __get_textureOpacity_() const;

  constexpr void __set_textureOpacity_(float_t value);

  constexpr bool& __get_edgeRenderingEnabled_();

  constexpr bool const& __get_edgeRenderingEnabled_() const;

  constexpr void __set_edgeRenderingEnabled_(bool value);

  constexpr ::UnityEngine::Color& __get_edgeColor_();

  constexpr ::UnityEngine::Color const& __get_edgeColor_() const;

  constexpr void __set_edgeColor_(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType& __get_colorMapType();

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const& __get_colorMapType() const;

  constexpr void __set_colorMapType(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType value);

  constexpr bool& __get_styleDirty();

  constexpr bool const& __get_styleDirty() const;

  constexpr void __set_styleDirty(bool value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*& __get__stylesHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPassthroughLayer__StylesHandler*> const& __get__stylesHandler() const;

  constexpr void __set__stylesHandler(::GlobalNamespace::__OVRPassthroughLayer__StylesHandler* value);

  static inline void setStaticF__editorToColorMapType(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType>*
  getStaticF__editorToColorMapType();

  static inline void setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value);

  static inline ::UnityEngine::Gradient* getStaticF_colorMapNeutralGradient();

  /// @brief Method AddSurfaceGeometry, addr 0x274e7d0, size 0x1f0, virtual false, abstract: false, final false
  /// @param updateTransform: bool (default: false)
  inline void AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform = false);

  /// @brief Method RemoveSurfaceGeometry, addr 0x274e9c0, size 0x218, virtual false, abstract: false, final false
  inline void RemoveSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method IsSurfaceGeometry, addr 0x274ed70, size 0x11c, virtual false, abstract: false, final false
  inline bool IsSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method get_textureOpacity, addr 0x274ee94, size 0x8, virtual false, abstract: false, final false
  inline float_t get_textureOpacity();

  /// @brief Method set_textureOpacity, addr 0x274ee9c, size 0x1c, virtual false, abstract: false, final false
  inline void set_textureOpacity(float_t value);

  /// @brief Method get_edgeRenderingEnabled, addr 0x274eeb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_edgeRenderingEnabled();

  /// @brief Method set_edgeRenderingEnabled, addr 0x274eec0, size 0x20, virtual false, abstract: false, final false
  inline void set_edgeRenderingEnabled(bool value);

  /// @brief Method get_edgeColor, addr 0x274eee0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_edgeColor();

  /// @brief Method set_edgeColor, addr 0x274eeec, size 0x58, virtual false, abstract: false, final false
  inline void set_edgeColor(::UnityEngine::Color value);

  /// @brief Method SetColorMap, addr 0x274ef44, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorLut, addr 0x274f0f0, size 0xfc, virtual false, abstract: false, final false
  /// @param weight: float_t (default: 1.0)
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight = 1.0);

  /// @brief Method SetColorLut, addr 0x274f2e0, size 0x11c, virtual false, abstract: false, final false
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetColorMapControls, addr 0x274f460, size 0x190, virtual false, abstract: false, final false
  /// @param brightness: float_t (default: 0.0)
  /// @param posterize: float_t (default: 0.0)
  /// @param gradient: ::UnityEngine::Gradient* (default: nullptr)
  /// @param colorMapType: ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType (default: static_cast<int32_t>(0x1))
  inline void SetColorMapControls(float_t contrast, float_t brightness = 0.0, float_t posterize = 0.0, ::UnityEngine::Gradient* gradient = nullptr,
                                  ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapType = static_cast<int32_t>(0x1));

  /// @brief Method SetColorMapMonochromatic, addr 0x274f7c0, size 0xa4, virtual false, abstract: false, final false
  inline void SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetBrightnessContrastSaturation, addr 0x274f8c0, size 0x4c, virtual false, abstract: false, final false
  /// @param brightness: float_t (default: 0.0)
  /// @param contrast: float_t (default: 0.0)
  /// @param saturation: float_t (default: 0.0)
  inline void SetBrightnessContrastSaturation(float_t brightness = 0.0, float_t contrast = 0.0, float_t saturation = 0.0);

  /// @brief Method DisableColorMap, addr 0x274fb9c, size 0x8, virtual false, abstract: false, final false
  inline void DisableColorMap();

  /// @brief Method get_colorMapEditorType, addr 0x274fba4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType get_colorMapEditorType();

  /// @brief Method set_colorMapEditorType, addr 0x274efe4, size 0xd8, virtual false, abstract: false, final false
  inline void set_colorMapEditorType(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  /// @brief Method SetStyleDirty, addr 0x274fc70, size 0xc, virtual false, abstract: false, final false
  inline void SetStyleDirty();

  /// @brief Method AddDeferredSurfaceGeometries, addr 0x274fc7c, size 0x258, virtual false, abstract: false, final false
  inline void AddDeferredSurfaceGeometries();

  /// @brief Method GetTransformMatrixForPassthroughSurfaceObject, addr 0x2750184, size 0x354, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj);

  /// @brief Method CreateAndAddMesh, addr 0x274fed4, size 0x2b0, virtual false, abstract: false, final false
  inline bool CreateAndAddMesh(::UnityEngine::GameObject* obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle, ByRef<::UnityEngine::Matrix4x4> localToWorld);

  /// @brief Method DestroySurfaceGeometries, addr 0x27507a4, size 0x280, virtual false, abstract: false, final false
  /// @param addBackToDeferredQueue: bool (default: false)
  inline void DestroySurfaceGeometries(bool addBackToDeferredQueue = false);

  /// @brief Method UpdateSurfaceGeometryTransforms, addr 0x2750a24, size 0x31c, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransforms();

  /// @brief Method UpdateSurfaceGeometryTransform, addr 0x2750d40, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld);

  /// @brief Method CreateNeutralColorMapGradient, addr 0x274f5f0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* CreateNeutralColorMapGradient();

  /// @brief Method HasControlsBasedColorMap, addr 0x2751000, size 0x30, virtual false, abstract: false, final false
  inline bool HasControlsBasedColorMap();

  /// @brief Method UpdateColorMapFromControls, addr 0x274f90c, size 0x290, virtual false, abstract: false, final false
  /// @param forceUpdate: bool (default: false)
  inline void UpdateColorMapFromControls(bool forceUpdate = false);

  /// @brief Method SyncToOverlay, addr 0x2751030, size 0x274, virtual false, abstract: false, final false
  inline void SyncToOverlay();

  /// @brief Method ClampWeight, addr 0x274f1ec, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ClampWeight(float_t weight);

  /// @brief Method get_overlayShape, addr 0x27512a4, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVROverlay__OverlayShape get_overlayShape();

  /// @brief Method Awake, addr 0x27512b8, size 0x228, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x27514e0, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x27514e4, size 0x170, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method CreateOvrPluginStyleObject, addr 0x2751654, size 0x154, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2 CreateOvrPluginStyleObject();

  /// @brief Method OnEnable, addr 0x27519bc, size 0x18c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2751b48, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2751c18, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::OVRPassthroughLayer* New_ctor();

  /// @brief Method .ctor, addr 0x2751c20, size 0x240, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer(OVRPassthroughLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer(OVRPassthroughLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer();

public:
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
  ::UnityEngine::Texture2D* ____colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____colorLutTargetTexture;

  /// @brief Field _lutWeight, offset: 0x78, size: 0x4, def value: None
  float_t ____lutWeight;

  /// @brief Field _flipLutY, offset: 0x7c, size: 0x1, def value: None
  bool ____flipLutY;

  /// @brief Field _settings, offset: 0x80, size: 0x30, def value: None
  ::GlobalNamespace::__OVRPassthroughLayer__Settings ____settings;

  /// @brief Field cameraRig, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::OVRCameraRig* ___cameraRig;

  /// @brief Field cameraRigInitialized, offset: 0xb8, size: 0x1, def value: None
  bool ___cameraRigInitialized;

  /// @brief Field auxGameObject, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___auxGameObject;

  /// @brief Field passthroughOverlay, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::OVROverlay* ___passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* ___surfaceGameObjects;

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
