#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughLayer)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct OVROverlay_OverlayShape;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_BCSStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_BaseGeneratedStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_ColorLutHandler;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_ColorMapEditorType;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_IStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_InterpolatedColorLutHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_MonoToMonoStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_MonoToRgbaStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_NoneStyleHandler;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_ProjectionSurfaceType;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_SerializedSurfaceGeometry;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_Settings;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_StylesHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class OVRPassthroughLayer___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyle2;
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
struct OVRPassthroughLayer_ColorMapEditorType;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_ProjectionSurfaceType;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_BCSStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_BaseGeneratedStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_ColorLutHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_IStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_InterpolatedColorLutHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_MonoToMonoStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_MonoToRgbaStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_NoneStyleHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer_StylesHandler;
}
namespace GlobalNamespace {
class OVRPassthroughLayer___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class OVRPassthroughLayer___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_DeferredPassthroughMeshAddition;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_PassthroughMeshInstance;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_SerializedSurfaceGeometry;
}
namespace GlobalNamespace {
struct OVRPassthroughLayer_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_IStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer_StylesHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_Settings);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/ProjectionSurfaceType
struct CORDL_TYPE OVRPassthroughLayer_ProjectionSurfaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped
  enum struct __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped : int32_t {
    __E_Reconstructed = static_cast<int32_t>(0x0),
    __E_UserDefined = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped() const noexcept {
    return static_cast<__OVRPassthroughLayer_ProjectionSurfaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_ProjectionSurfaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPassthroughLayer_ProjectionSurfaceType(int32_t value__) noexcept;

  /// @brief Field Reconstructed value: I32(0)
  static ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const Reconstructed;

  /// @brief Field UserDefined value: I32(1)
  static ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const UserDefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7976 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/ColorMapEditorType
struct CORDL_TYPE OVRPassthroughLayer_ColorMapEditorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPassthroughLayer_ColorMapEditorType_Unwrapped
  enum struct __OVRPassthroughLayer_ColorMapEditorType_Unwrapped : int32_t {
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
  constexpr operator __OVRPassthroughLayer_ColorMapEditorType_Unwrapped() const noexcept {
    return static_cast<__OVRPassthroughLayer_ColorMapEditorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_ColorMapEditorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPassthroughLayer_ColorMapEditorType(int32_t value__) noexcept;

  /// @brief Field ColorAdjustment value: I32(4)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const ColorAdjustment;

  /// @brief Field ColorLut value: I32(5)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const ColorLut;

  /// @brief Field Controls value: I32(1)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Controls;

  /// @brief Field Custom value: I32(2)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Custom;

  /// @brief Field Grayscale value: I32(3)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const Grayscale;

  /// @brief Field GrayscaleToColor value: I32(1)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const GrayscaleToColor;

  /// @brief Field InterpolatedColorLut value: I32(6)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const InterpolatedColorLut;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/Settings
struct CORDL_TYPE OVRPassthroughLayer_Settings {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3fdf634, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* colorLutTargetTexture, ::UnityEngine::Texture2D* colorLutSourceTexture, float_t saturation, float_t posterize, float_t brightness, float_t contrast,
                    ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_Settings();

  // Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "colorLutSourceTexture", ty:
  // "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "posterize", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "contrast", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "flipLutY", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRPassthroughLayer_Settings(::UnityW<::UnityEngine::Texture2D> colorLutTargetTexture, ::UnityW<::UnityEngine::Texture2D> colorLutSourceTexture, float_t saturation, float_t posterize,
                                         float_t brightness, float_t contrast, ::UnityEngine::Gradient* gradient, float_t lutWeight, bool flipLutY) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7978 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, colorLutTargetTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, colorLutSourceTexture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, saturation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, posterize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, brightness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, contrast) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, gradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, lutWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, flipLutY) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_Settings, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/PassthroughMeshInstance
struct CORDL_TYPE OVRPassthroughLayer_PassthroughMeshInstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_PassthroughMeshInstance();

  // Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "updateTransform", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
  constexpr OVRPassthroughLayer_PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform, ::UnityEngine::Matrix4x4 localToWorld) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field meshHandle, offset: 0x0, size: 0x8, def value: None
  uint64_t meshHandle;

  /// @brief Field instanceHandle, offset: 0x8, size: 0x8, def value: None
  uint64_t instanceHandle;

  /// @brief Field updateTransform, offset: 0x10, size: 0x1, def value: None
  bool updateTransform;

  /// @brief Field localToWorld, offset: 0x14, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorld;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, meshHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, instanceHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, updateTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, localToWorld) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/SerializedSurfaceGeometry
struct CORDL_TYPE OVRPassthroughLayer_SerializedSurfaceGeometry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_SerializedSurfaceGeometry();

  // Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr OVRPassthroughLayer_SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter> meshFilter, bool updateTransform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field meshFilter, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> meshFilter;

  /// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
  bool updateTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, meshFilter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, updateTransform) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/DeferredPassthroughMeshAddition
struct CORDL_TYPE OVRPassthroughLayer_DeferredPassthroughMeshAddition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_DeferredPassthroughMeshAddition();

  // Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr OVRPassthroughLayer_DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject> gameObject, bool updateTransform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field gameObject, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field updateTransform, offset: 0x8, size: 0x1, def value: None
  bool updateTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, gameObject) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, updateTransform) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/IStyleHandler
class CORDL_TYPE OVRPassthroughLayer_IStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method ApplyStyleSettings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method get_IsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsValid();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_IStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_IStyleHandler(OVRPassthroughLayer_IStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7982 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/StylesHandler
class CORDL_TYPE OVRPassthroughLayer_StylesHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field CurrentStyleHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_CurrentStyleHandler, put = __cordl_internal_set_CurrentStyleHandler)) ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* CurrentStyleHandler;

  /// @brief Field _bcsHandler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bcsHandler, put = __cordl_internal_set__bcsHandler)) ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* _bcsHandler;

  /// @brief Field _colorMapData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapData, put = __cordl_internal_set__colorMapData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  /// @brief Field _colorMapDataHandle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapDataHandle, put = __cordl_internal_set__colorMapDataHandle)) ::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Field _interpolatedLutHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__interpolatedLutHandler,
                      put = __cordl_internal_set__interpolatedLutHandler)) ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* _interpolatedLutHandler;

  /// @brief Field _lutHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lutHandler, put = __cordl_internal_set__lutHandler)) ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* _lutHandler;

  /// @brief Field _monoToMonoHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__monoToMonoHandler, put = __cordl_internal_set__monoToMonoHandler)) ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* _monoToMonoHandler;

  /// @brief Field _monoToRgbaHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__monoToRgbaHandler, put = __cordl_internal_set__monoToRgbaHandler)) ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* _monoToRgbaHandler;

  /// @brief Field _noneHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__noneHandler, put = __cordl_internal_set__noneHandler)) ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* _noneHandler;

  /// @brief Method GetStyleHandler, addr 0x3fdf9a0, size 0xd8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* GetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type);

  static inline ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* New_ctor();

  /// @brief Method SetColorLutHandler, addr 0x3fdcae8, size 0x58, virtual false, abstract: false, final false
  inline void SetColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method SetInterpolatedColorLutHandler, addr 0x3fdcc5c, size 0x64, virtual false, abstract: false, final false
  inline void SetInterpolatedColorLutHandler(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetMonoToMonoHandler, addr 0x3fdd0c8, size 0x5c, virtual false, abstract: false, final false
  inline void SetMonoToMonoHandler(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetMonoToRgbaHandler, addr 0x3fdc918, size 0x34, virtual false, abstract: false, final false
  inline void SetMonoToRgbaHandler(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetStyleHandler, addr 0x3fdd42c, size 0xc4, virtual false, abstract: false, final false
  inline void SetStyleHandler(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType type);

  constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* const& __cordl_internal_get_CurrentStyleHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*& __cordl_internal_get_CurrentStyleHandler();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* const& __cordl_internal_get__bcsHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*& __cordl_internal_get__bcsHandler();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorMapData();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__colorMapDataHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__colorMapDataHandle();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* const& __cordl_internal_get__interpolatedLutHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*& __cordl_internal_get__interpolatedLutHandler();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* const& __cordl_internal_get__lutHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*& __cordl_internal_get__lutHandler();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* const& __cordl_internal_get__monoToMonoHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*& __cordl_internal_get__monoToMonoHandler();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* const& __cordl_internal_get__monoToRgbaHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*& __cordl_internal_get__monoToRgbaHandler();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* const& __cordl_internal_get__noneHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*& __cordl_internal_get__noneHandler();

  constexpr void __cordl_internal_set_CurrentStyleHandler(::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* value);

  constexpr void __cordl_internal_set__bcsHandler(::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* value);

  constexpr void __cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set__interpolatedLutHandler(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* value);

  constexpr void __cordl_internal_set__lutHandler(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* value);

  constexpr void __cordl_internal_set__monoToMonoHandler(::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* value);

  constexpr void __cordl_internal_set__monoToRgbaHandler(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* value);

  constexpr void __cordl_internal_set__noneHandler(::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* value);

  /// @brief Method .ctor, addr 0x3fdf654, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_StylesHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_StylesHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_StylesHandler(OVRPassthroughLayer_StylesHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_StylesHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_StylesHandler(OVRPassthroughLayer_StylesHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7983 };

  /// @brief Field _noneHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* ____noneHandler;

  /// @brief Field _lutHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* ____lutHandler;

  /// @brief Field _interpolatedLutHandler, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* ____interpolatedLutHandler;

  /// @brief Field _monoToRgbaHandler, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* ____monoToRgbaHandler;

  /// @brief Field _monoToMonoHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* ____monoToMonoHandler;

  /// @brief Field _bcsHandler, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* ____bcsHandler;

  /// @brief Field _colorMapDataHandle, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____colorMapDataHandle;

  /// @brief Field _colorMapData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorMapData;

  /// @brief Field CurrentStyleHandler, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* ___CurrentStyleHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____noneHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____lutHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____interpolatedLutHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____monoToRgbaHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____monoToMonoHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____bcsHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____colorMapDataHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ____colorMapData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_StylesHandler, ___CurrentStyleHandler) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_StylesHandler, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::IStyleHandler, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/NoneStyleHandler
class CORDL_TYPE OVRPassthroughLayer_NoneStyleHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept;

  /// @brief Method ApplyStyleSettings, addr 0x3fdfb80, size 0x4, virtual true, abstract: false, final true
  inline void ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x3fdfb88, size 0x4, virtual true, abstract: false, final true
  inline void Clear();

  static inline ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler* New_ctor();

  /// @brief Method Update, addr 0x3fdfb84, size 0x4, virtual true, abstract: false, final true
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method .ctor, addr 0x3fdf8f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsValid, addr 0x3fdfb78, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_NoneStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_NoneStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_NoneStyleHandler(OVRPassthroughLayer_NoneStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_NoneStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_NoneStyleHandler(OVRPassthroughLayer_NoneStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::IStyleHandler, System.Object, System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/BaseGeneratedStyleHandler
class CORDL_TYPE OVRPassthroughLayer_BaseGeneratedStyleHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Field _colorMapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapData, put = __cordl_internal_set__colorMapData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _colorMapData;

  /// @brief Field _colorMapDataHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorMapDataHandle, put = __cordl_internal_set__colorMapDataHandle)) ::System::Runtime::InteropServices::GCHandle _colorMapDataHandle;

  /// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept;

  /// @brief Method AllocateColorMapData, addr 0x3fdfc3c, size 0x90, virtual true, abstract: false, final false
  inline void AllocateColorMapData(uint32_t size);

  /// @brief Method ApplyStyleSettings, addr 0x3fdfbc8, size 0x68, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x3fdfc30, size 0xc, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ComputeBrightnessContrastPosterizeMap, addr 0x3fdfd98, size 0x180, virtual false, abstract: false, final false
  static inline void ComputeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast, float_t posterize);

  /// @brief Method DeallocateColorMapData, addr 0x3fdfccc, size 0x28, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  static inline ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler* New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x3fdfbc4, size 0x4, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method WriteColorToColorMap, addr 0x3fdfcf4, size 0x6c, virtual false, abstract: false, final false
  inline void WriteColorToColorMap(int32_t colorIndex, ::ByRef<::UnityEngine::Color> color);

  /// @brief Method WriteFloatToColorMap, addr 0x3fdfd60, size 0x38, virtual false, abstract: false, final false
  inline void WriteFloatToColorMap(int32_t index, float_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorMapData();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__colorMapDataHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__colorMapDataHandle();

  constexpr void __cordl_internal_set__colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x3fdfb94, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_IsValid, addr 0x3fdfb8c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method get_MapSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

  /// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_BaseGeneratedStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_BaseGeneratedStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_BaseGeneratedStyleHandler(OVRPassthroughLayer_BaseGeneratedStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_BaseGeneratedStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_BaseGeneratedStyleHandler(OVRPassthroughLayer_BaseGeneratedStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7985 };

  /// @brief Field _colorMapDataHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____colorMapDataHandle;

  /// @brief Field _colorMapData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler, ____colorMapDataHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler, ____colorMapData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::BaseGeneratedStyleHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/MonoToRgbaStyleHandler
class CORDL_TYPE OVRPassthroughLayer_MonoToRgbaStyleHandler : public ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  /// @brief Field _tmpColorMapData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tmpColorMapData, put = __cordl_internal_set__tmpColorMapData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _tmpColorMapData;

  /// @brief Method AllocateColorMapData, addr 0x3fdffdc, size 0x68, virtual true, abstract: false, final false
  inline void AllocateColorMapData(uint32_t size);

  /// @brief Method DeallocateColorMapData, addr 0x3fe0044, size 0x2c, virtual true, abstract: false, final false
  inline void DeallocateColorMapData();

  static inline ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler* New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x3fdff20, size 0xbc, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method Update, addr 0x3fdfac0, size 0x74, virtual false, abstract: false, final false
  inline void Update(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__tmpColorMapData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__tmpColorMapData();

  constexpr void __cordl_internal_set__tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3fdf940, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x3fdff18, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_MonoToRgbaStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_MonoToRgbaStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_MonoToRgbaStyleHandler(OVRPassthroughLayer_MonoToRgbaStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_MonoToRgbaStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_MonoToRgbaStyleHandler(OVRPassthroughLayer_MonoToRgbaStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7986 };

  /// @brief Field _tmpColorMapData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____tmpColorMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler, ____tmpColorMapData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::BaseGeneratedStyleHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/MonoToMonoStyleHandler
class CORDL_TYPE OVRPassthroughLayer_MonoToMonoStyleHandler : public ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  static inline ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler* New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x3fe0078, size 0x38, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method Update, addr 0x3fdfb34, size 0x44, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method .ctor, addr 0x3fdf910, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x3fe0070, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_MonoToMonoStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_MonoToMonoStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_MonoToMonoStyleHandler(OVRPassthroughLayer_MonoToMonoStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_MonoToMonoStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_MonoToMonoStyleHandler(OVRPassthroughLayer_MonoToMonoStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::BaseGeneratedStyleHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/BCSStyleHandler
class CORDL_TYPE OVRPassthroughLayer_BCSStyleHandler : public ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler {
public:
  // Declarations
  __declspec(property(get = get_MapSize)) uint32_t MapSize;

  static inline ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler* New_ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method Update, addr 0x3fe00b8, size 0xb4, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  /// @brief Method .ctor, addr 0x3fdf970, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Runtime::InteropServices::GCHandle> colorMapDataHandler, ::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData);

  /// @brief Method get_MapSize, addr 0x3fe00b0, size 0x8, virtual true, abstract: false, final false
  inline uint32_t get_MapSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_BCSStyleHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_BCSStyleHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_BCSStyleHandler(OVRPassthroughLayer_BCSStyleHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_BCSStyleHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_BCSStyleHandler(OVRPassthroughLayer_BCSStyleHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::IStyleHandler, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/ColorLutHandler
class CORDL_TYPE OVRPassthroughLayer_ColorLutHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValid, put = set_IsValid)) bool IsValid;

  __declspec(property(get = get_Lut, put = set_Lut)) ::GlobalNamespace::OVRPassthroughColorLut* Lut;

  __declspec(property(get = get_Weight, put = set_Weight)) float_t Weight;

  /// @brief Field <IsValid>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__IsValid_k__BackingField, put = __cordl_internal_set__IsValid_k__BackingField)) bool _IsValid_k__BackingField;

  /// @brief Field <Lut>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Lut_k__BackingField, put = __cordl_internal_set__Lut_k__BackingField)) ::GlobalNamespace::OVRPassthroughColorLut* _Lut_k__BackingField;

  /// @brief Field <Weight>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Weight_k__BackingField, put = __cordl_internal_set__Weight_k__BackingField)) float_t _Weight_k__BackingField;

  /// @brief Field _currentColorLutSourceTexture, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__currentColorLutSourceTexture, put = __cordl_internal_set__currentColorLutSourceTexture)) ::UnityW<::UnityEngine::Texture2D>
      _currentColorLutSourceTexture;

  /// @brief Field _currentFlipLutY, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__currentFlipLutY, put = __cordl_internal_set__currentFlipLutY)) bool _currentFlipLutY;

  /// @brief Convert operator to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr operator ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*() noexcept;

  /// @brief Method ApplyStyleSettings, addr 0x3fe01a0, size 0x28, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x3fe0370, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method GetColorLutForTexture, addr 0x3fe021c, size 0x154, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* GetColorLutForTexture(::UnityEngine::Texture2D* newTexture, ::GlobalNamespace::OVRPassthroughColorLut* lut,
                                                                          ::ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY);

  static inline ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler* New_ctor();

  /// @brief Method Update, addr 0x3fdfa78, size 0x20, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method Update, addr 0x3fe01c8, size 0x54, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  constexpr bool const& __cordl_internal_get__IsValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsValid_k__BackingField();

  constexpr ::GlobalNamespace::OVRPassthroughColorLut* const& __cordl_internal_get__Lut_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __cordl_internal_get__Lut_k__BackingField();

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

  /// @brief Method .ctor, addr 0x3fdf900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsValid, addr 0x3fe018c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsValid();

  /// @brief Method get_Lut, addr 0x3fe016c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_Lut();

  /// @brief Method get_Weight, addr 0x3fe017c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Weight();

  /// @brief Convert to "::GlobalNamespace::OVRPassthroughLayer_IStyleHandler"
  constexpr ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler* i___GlobalNamespace__OVRPassthroughLayer_IStyleHandler() noexcept;

  /// @brief Method set_IsValid, addr 0x3fe0194, size 0xc, virtual false, abstract: false, final false
  inline void set_IsValid(bool value);

  /// @brief Method set_Lut, addr 0x3fe0174, size 0x8, virtual false, abstract: false, final false
  inline void set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value);

  /// @brief Method set_Weight, addr 0x3fe0184, size 0x8, virtual false, abstract: false, final false
  inline void set_Weight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_ColorLutHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_ColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_ColorLutHandler(OVRPassthroughLayer_ColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_ColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_ColorLutHandler(OVRPassthroughLayer_ColorLutHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7989 };

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
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, ____currentFlipLutY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, ____currentColorLutSourceTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, ____Lut_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, ____Weight_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, ____IsValid_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughLayer::ColorLutHandler
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/InterpolatedColorLutHandler
class CORDL_TYPE OVRPassthroughLayer_InterpolatedColorLutHandler : public ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler {
public:
  // Declarations
  __declspec(property(get = get_LutTarget, put = set_LutTarget)) ::GlobalNamespace::OVRPassthroughColorLut* LutTarget;

  /// @brief Field <LutTarget>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__LutTarget_k__BackingField,
                      put = __cordl_internal_set__LutTarget_k__BackingField)) ::GlobalNamespace::OVRPassthroughColorLut* _LutTarget_k__BackingField;

  /// @brief Field _currentColorLutTargetTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentColorLutTargetTexture, put = __cordl_internal_set__currentColorLutTargetTexture)) ::UnityW<::UnityEngine::Texture2D>
      _currentColorLutTargetTexture;

  /// @brief Method ApplyStyleSettings, addr 0x3fe0388, size 0x38, virtual true, abstract: false, final false
  inline void ApplyStyleSettings(::ByRef<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2> style);

  /// @brief Method Clear, addr 0x3fe043c, size 0xc, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler* New_ctor();

  /// @brief Method Update, addr 0x3fdfa98, size 0x28, virtual false, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method Update, addr 0x3fe03c0, size 0x7c, virtual true, abstract: false, final false
  inline void Update(::GlobalNamespace::OVRPassthroughLayer_Settings settings);

  constexpr ::GlobalNamespace::OVRPassthroughColorLut* const& __cordl_internal_get__LutTarget_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRPassthroughColorLut*& __cordl_internal_get__LutTarget_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__currentColorLutTargetTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__currentColorLutTargetTexture();

  constexpr void __cordl_internal_set__LutTarget_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut* value);

  constexpr void __cordl_internal_set__currentColorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x3fdf908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LutTarget, addr 0x3fe0378, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut* get_LutTarget();

  /// @brief Method set_LutTarget, addr 0x3fe0380, size 0x8, virtual false, abstract: false, final false
  inline void set_LutTarget(::GlobalNamespace::OVRPassthroughColorLut* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer_InterpolatedColorLutHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_InterpolatedColorLutHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer_InterpolatedColorLutHandler(OVRPassthroughLayer_InterpolatedColorLutHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer_InterpolatedColorLutHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer_InterpolatedColorLutHandler(OVRPassthroughLayer_InterpolatedColorLutHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7990 };

  /// @brief Field _currentColorLutTargetTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____currentColorLutTargetTexture;

  /// @brief Field <LutTarget>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughColorLut* ____LutTarget_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler, ____currentColorLutTargetTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler, ____LutTarget_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/<>c__DisplayClass10_0
class CORDL_TYPE OVRPassthroughLayer___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::UnityW<::UnityEngine::GameObject> obj;

  static inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0* New_ctor();

  /// @brief Method <IsSurfaceGeometry>b__0, addr 0x3fe0448, size 0x6c, virtual false, abstract: false, final false
  inline bool _IsSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3fdc6dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer___c__DisplayClass10_0(OVRPassthroughLayer___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer___c__DisplayClass10_0(OVRPassthroughLayer___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7991 };

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0, ___obj) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer/<>c__DisplayClass9_0
class CORDL_TYPE OVRPassthroughLayer___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::UnityW<::UnityEngine::GameObject> obj;

  static inline ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0* New_ctor();

  /// @brief Method <RemoveSurfaceGeometry>b__0, addr 0x3fe04b4, size 0x6c, virtual false, abstract: false, final false
  inline bool _RemoveSurfaceGeometry_b__0(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition x);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x3fdc42c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughLayer___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughLayer___c__DisplayClass9_0(OVRPassthroughLayer___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughLayer___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughLayer___c__DisplayClass9_0(OVRPassthroughLayer___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7992 };

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0, ___obj) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVROverlay::OverlayType, OVRPassthroughLayer::ColorMapEditorType, OVRPassthroughLayer::ProjectionSurfaceType, OVRPassthroughLayer::Settings, OVRPlugin::InsightPassthroughColorMapType,
// UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughLayer
class CORDL_TYPE OVRPassthroughLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BCSStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler;

  using BaseGeneratedStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler;

  using ColorLutHandler = ::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler;

  using ColorMapEditorType = ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType;

  using DeferredPassthroughMeshAddition = ::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition;

  using IStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_IStyleHandler;

  using InterpolatedColorLutHandler = ::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler;

  using MonoToMonoStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler;

  using MonoToRgbaStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler;

  using NoneStyleHandler = ::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler;

  using PassthroughMeshInstance = ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance;

  using ProjectionSurfaceType = ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType;

  using SerializedSurfaceGeometry = ::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry;

  using Settings = ::GlobalNamespace::OVRPassthroughLayer_Settings;

  using StylesHandler = ::GlobalNamespace::OVRPassthroughLayer_StylesHandler;

  using __c__DisplayClass10_0 = ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0;

  /// @brief Field _colorLutSourceTexture, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutSourceTexture, put = __cordl_internal_set__colorLutSourceTexture)) ::UnityW<::UnityEngine::Texture2D> _colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutTargetTexture, put = __cordl_internal_set__colorLutTargetTexture)) ::UnityW<::UnityEngine::Texture2D> _colorLutTargetTexture;

  /// @brief Field _editorToColorMapType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__editorToColorMapType,
                      put = setStaticF__editorToColorMapType)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType,
                                                                                                            ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>* _editorToColorMapType;

  /// @brief Field _flipLutY, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__flipLutY, put = __cordl_internal_set__flipLutY)) bool _flipLutY;

  /// @brief Field _lutWeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__lutWeight, put = __cordl_internal_set__lutWeight)) float_t _lutWeight;

  /// @brief Field _settings, offset 0x88, size 0x30
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::GlobalNamespace::OVRPassthroughLayer_Settings _settings;

  /// @brief Field _stylesHandler, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesHandler, put = __cordl_internal_set__stylesHandler)) ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* _stylesHandler;

  /// @brief Field auxGameObject, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_auxGameObject, put = __cordl_internal_set_auxGameObject)) ::UnityW<::UnityEngine::GameObject> auxGameObject;

  /// @brief Field cameraRig, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig, put = __cordl_internal_set_cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig;

  /// @brief Field cameraRigInitialized, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_cameraRigInitialized, put = __cordl_internal_set_cameraRigInitialized)) bool cameraRigInitialized;

  /// @brief Field colorMapEditorBrightness, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorBrightness, put = __cordl_internal_set_colorMapEditorBrightness)) float_t colorMapEditorBrightness;

  /// @brief Field colorMapEditorContrast, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorContrast, put = __cordl_internal_set_colorMapEditorContrast)) float_t colorMapEditorContrast;

  /// @brief Field colorMapEditorGradient, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapEditorGradient, put = __cordl_internal_set_colorMapEditorGradient)) ::UnityEngine::Gradient* colorMapEditorGradient;

  /// @brief Field colorMapEditorPosterize, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorPosterize, put = __cordl_internal_set_colorMapEditorPosterize)) float_t colorMapEditorPosterize;

  /// @brief Field colorMapEditorSaturation, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorSaturation, put = __cordl_internal_set_colorMapEditorSaturation)) float_t colorMapEditorSaturation;

  __declspec(property(get = get_colorMapEditorType, put = set_colorMapEditorType)) ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType colorMapEditorType;

  /// @brief Field colorMapEditorType_, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorType_, put = __cordl_internal_set_colorMapEditorType_)) ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType colorMapEditorType_;

  /// @brief Field colorMapNeutralGradient, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_colorMapNeutralGradient, put = setStaticF_colorMapNeutralGradient)) ::UnityEngine::Gradient* colorMapNeutralGradient;

  /// @brief Field colorMapType, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapType, put = __cordl_internal_set_colorMapType)) ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType colorMapType;

  /// @brief Field colorOffset, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_colorOffset, put = __cordl_internal_set_colorOffset)) ::UnityEngine::Vector4 colorOffset;

  /// @brief Field colorScale, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_colorScale, put = __cordl_internal_set_colorScale)) ::UnityEngine::Vector4 colorScale;

  /// @brief Field compositionDepth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionDepth, put = __cordl_internal_set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field deferredSurfaceGameObjects, offset 0xe0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_deferredSurfaceGameObjects,
      put =
          __cordl_internal_set_deferredSurfaceGameObjects)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* deferredSurfaceGameObjects;

  __declspec(property(get = get_edgeColor, put = set_edgeColor)) ::UnityEngine::Color edgeColor;

  /// @brief Field edgeColor_, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get_edgeColor_, put = __cordl_internal_set_edgeColor_)) ::UnityEngine::Color edgeColor_;

  __declspec(property(get = get_edgeRenderingEnabled, put = set_edgeRenderingEnabled)) bool edgeRenderingEnabled;

  /// @brief Field edgeRenderingEnabled_, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get_edgeRenderingEnabled_, put = __cordl_internal_set_edgeRenderingEnabled_)) bool edgeRenderingEnabled_;

  /// @brief Field hidden, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_hidden, put = __cordl_internal_set_hidden)) bool hidden;

  __declspec(property(get = get_overlayShape)) ::GlobalNamespace::OVROverlay_OverlayShape overlayShape;

  /// @brief Field overlayType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_overlayType, put = __cordl_internal_set_overlayType)) ::GlobalNamespace::OVROverlay_OverlayType overlayType;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_overridePerLayerColorScaleAndOffset, put = __cordl_internal_set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field passthroughOverlay, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_passthroughOverlay, put = __cordl_internal_set_passthroughOverlay)) ::UnityW<::GlobalNamespace::OVROverlay> passthroughOverlay;

  /// @brief Field projectionSurfaceType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_projectionSurfaceType,
                      put = __cordl_internal_set_projectionSurfaceType)) ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType projectionSurfaceType;

  /// @brief Field serializedSurfaceGeometry, offset 0xe8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedSurfaceGeometry,
      put = __cordl_internal_set_serializedSurfaceGeometry)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* serializedSurfaceGeometry;

  /// @brief Field styleDirty, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_styleDirty, put = __cordl_internal_set_styleDirty)) bool styleDirty;

  /// @brief Field surfaceGameObjects, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_surfaceGameObjects,
                      put = __cordl_internal_set_surfaceGameObjects)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,
                                                                                                                   ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* surfaceGameObjects;

  __declspec(property(get = get_textureOpacity, put = set_textureOpacity)) float_t textureOpacity;

  /// @brief Field textureOpacity_, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_textureOpacity_, put = __cordl_internal_set_textureOpacity_)) float_t textureOpacity_;

  /// @brief Method AddDeferredSurfaceGeometries, addr 0x3fdd4fc, size 0x248, virtual false, abstract: false, final false
  inline void AddDeferredSurfaceGeometries();

  /// @brief Method AddSurfaceGeometry, addr 0x3fdc014, size 0x1f8, virtual false, abstract: false, final false
  inline void AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform);

  /// @brief Method Awake, addr 0x3fdeac8, size 0x224, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClampWeight, addr 0x3fdca48, size 0xa0, virtual false, abstract: false, final false
  static inline float_t ClampWeight(float_t weight);

  /// @brief Method CreateAndAddMesh, addr 0x3fdd744, size 0x2bc, virtual false, abstract: false, final false
  inline bool CreateAndAddMesh(::UnityEngine::GameObject* obj, ::ByRef<uint64_t> meshHandle, ::ByRef<uint64_t> instanceHandle, ::ByRef<::UnityEngine::Matrix4x4> localToWorld);

  /// @brief Method CreateNeutralColorMapGradient, addr 0x3fdce58, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* CreateNeutralColorMapGradient();

  /// @brief Method CreateOvrPluginStyleObject, addr 0x3fdee58, size 0x128, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2 CreateOvrPluginStyleObject();

  /// @brief Method DestroySurfaceGeometries, addr 0x3fddfe4, size 0x27c, virtual false, abstract: false, final false
  inline void DestroySurfaceGeometries(bool addBackToDeferredQueue);

  /// @brief Method DisableColorMap, addr 0x3fdd41c, size 0x8, virtual false, abstract: false, final false
  inline void DisableColorMap();

  /// @brief Method GetTransformMatrixForPassthroughSurfaceObject, addr 0x3fdda00, size 0x320, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj);

  /// @brief Method HasControlsBasedColorMap, addr 0x3fde810, size 0x28, virtual false, abstract: false, final false
  inline bool HasControlsBasedColorMap();

  /// @brief Method IsSurfaceGeometry, addr 0x3fdc5c4, size 0x118, virtual false, abstract: false, final false
  inline bool IsSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method LateUpdate, addr 0x3fdecf0, size 0x168, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OVRPassthroughLayer* New_ctor();

  /// @brief Method OnDestroy, addr 0x3fdf3f0, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3fdf320, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3fdf194, size 0x18c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RemoveSurfaceGeometry, addr 0x3fdc20c, size 0x220, virtual false, abstract: false, final false
  inline void RemoveSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method SetBrightnessContrastSaturation, addr 0x3fdd124, size 0x4c, virtual false, abstract: false, final false
  inline void SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation);

  /// @brief Method SetColorLut, addr 0x3fdc94c, size 0xfc, virtual false, abstract: false, final false
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lut, float_t weight);

  /// @brief Method SetColorLut, addr 0x3fdcb40, size 0x11c, virtual false, abstract: false, final false
  inline void SetColorLut(::GlobalNamespace::OVRPassthroughColorLut* lutSource, ::GlobalNamespace::OVRPassthroughColorLut* lutTarget, float_t weight);

  /// @brief Method SetColorMap, addr 0x3fdc7a4, size 0x9c, virtual false, abstract: false, final false
  inline void SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorMapControls, addr 0x3fdccc0, size 0x198, virtual false, abstract: false, final false
  inline void SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient, ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType colorMapType);

  /// @brief Method SetColorMapMonochromatic, addr 0x3fdd028, size 0xa0, virtual false, abstract: false, final false
  inline void SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetStyleDirty, addr 0x3fdd4f0, size 0xc, virtual false, abstract: false, final false
  inline void SetStyleDirty();

  /// @brief Method SyncToOverlay, addr 0x3fde838, size 0x27c, virtual false, abstract: false, final false
  inline void SyncToOverlay();

  /// @brief Method Update, addr 0x3fdecec, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateColorMapFromControls, addr 0x3fdd170, size 0x2ac, virtual false, abstract: false, final false
  inline void UpdateColorMapFromControls(bool forceUpdate);

  /// @brief Method UpdateSurfaceGeometryTransform, addr 0x3fde560, size 0x1b0, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld);

  /// @brief Method UpdateSurfaceGeometryTransforms, addr 0x3fde260, size 0x300, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransforms();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__colorLutSourceTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__colorLutSourceTexture();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__colorLutTargetTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__colorLutTargetTexture();

  constexpr bool const& __cordl_internal_get__flipLutY() const;

  constexpr bool& __cordl_internal_get__flipLutY();

  constexpr float_t const& __cordl_internal_get__lutWeight() const;

  constexpr float_t& __cordl_internal_get__lutWeight();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings const& __cordl_internal_get__settings() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings& __cordl_internal_get__settings();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* const& __cordl_internal_get__stylesHandler() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_StylesHandler*& __cordl_internal_get__stylesHandler();

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

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_colorMapEditorGradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorMapEditorGradient();

  constexpr float_t const& __cordl_internal_get_colorMapEditorPosterize() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorPosterize();

  constexpr float_t const& __cordl_internal_get_colorMapEditorSaturation() const;

  constexpr float_t& __cordl_internal_get_colorMapEditorSaturation();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType const& __cordl_internal_get_colorMapEditorType_() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType& __cordl_internal_get_colorMapEditorType_();

  constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType const& __cordl_internal_get_colorMapType() const;

  constexpr ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType& __cordl_internal_get_colorMapType();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorScale() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorScale();

  constexpr int32_t const& __cordl_internal_get_compositionDepth() const;

  constexpr int32_t& __cordl_internal_get_compositionDepth();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* const& __cordl_internal_get_deferredSurfaceGameObjects() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>*& __cordl_internal_get_deferredSurfaceGameObjects();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_edgeColor_() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_edgeColor_();

  constexpr bool const& __cordl_internal_get_edgeRenderingEnabled_() const;

  constexpr bool& __cordl_internal_get_edgeRenderingEnabled_();

  constexpr bool const& __cordl_internal_get_hidden() const;

  constexpr bool& __cordl_internal_get_hidden();

  constexpr ::GlobalNamespace::OVROverlay_OverlayType const& __cordl_internal_get_overlayType() const;

  constexpr ::GlobalNamespace::OVROverlay_OverlayType& __cordl_internal_get_overlayType();

  constexpr bool const& __cordl_internal_get_overridePerLayerColorScaleAndOffset() const;

  constexpr bool& __cordl_internal_get_overridePerLayerColorScaleAndOffset();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_passthroughOverlay() const;

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_passthroughOverlay();

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType const& __cordl_internal_get_projectionSurfaceType() const;

  constexpr ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType& __cordl_internal_get_projectionSurfaceType();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* const& __cordl_internal_get_serializedSurfaceGeometry() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>*& __cordl_internal_get_serializedSurfaceGeometry();

  constexpr bool const& __cordl_internal_get_styleDirty() const;

  constexpr bool& __cordl_internal_get_styleDirty();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* const&
  __cordl_internal_get_surfaceGameObjects() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>*&
  __cordl_internal_get_surfaceGameObjects();

  constexpr float_t const& __cordl_internal_get_textureOpacity_() const;

  constexpr float_t& __cordl_internal_get_textureOpacity_();

  constexpr void __cordl_internal_set__colorLutSourceTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__colorLutTargetTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__flipLutY(bool value);

  constexpr void __cordl_internal_set__lutWeight(float_t value);

  constexpr void __cordl_internal_set__settings(::GlobalNamespace::OVRPassthroughLayer_Settings value);

  constexpr void __cordl_internal_set__stylesHandler(::GlobalNamespace::OVRPassthroughLayer_StylesHandler* value);

  constexpr void __cordl_internal_set_auxGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_cameraRigInitialized(bool value);

  constexpr void __cordl_internal_set_colorMapEditorBrightness(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorContrast(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_colorMapEditorPosterize(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorSaturation(float_t value);

  constexpr void __cordl_internal_set_colorMapEditorType_(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType value);

  constexpr void __cordl_internal_set_colorMapType(::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType value);

  constexpr void __cordl_internal_set_colorOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_colorScale(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_compositionDepth(int32_t value);

  constexpr void __cordl_internal_set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* value);

  constexpr void __cordl_internal_set_edgeColor_(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_edgeRenderingEnabled_(bool value);

  constexpr void __cordl_internal_set_hidden(bool value);

  constexpr void __cordl_internal_set_overlayType(::GlobalNamespace::OVROverlay_OverlayType value);

  constexpr void __cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr void __cordl_internal_set_passthroughOverlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr void __cordl_internal_set_projectionSurfaceType(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType value);

  constexpr void __cordl_internal_set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* value);

  constexpr void __cordl_internal_set_styleDirty(bool value);

  constexpr void
  __cordl_internal_set_surfaceGameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* value);

  constexpr void __cordl_internal_set_textureOpacity_(float_t value);

  /// @brief Method .ctor, addr 0x3fdf3f8, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>*
  getStaticF__editorToColorMapType();

  static inline ::UnityEngine::Gradient* getStaticF_colorMapNeutralGradient();

  /// @brief Method get_colorMapEditorType, addr 0x3fdd424, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType get_colorMapEditorType();

  /// @brief Method get_edgeColor, addr 0x3fdc734, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_edgeColor();

  /// @brief Method get_edgeRenderingEnabled, addr 0x3fdc70c, size 0x8, virtual false, abstract: false, final false
  inline bool get_edgeRenderingEnabled();

  /// @brief Method get_overlayShape, addr 0x3fdeab4, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVROverlay_OverlayShape get_overlayShape();

  /// @brief Method get_textureOpacity, addr 0x3fdc6e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_textureOpacity();

  static inline void setStaticF__editorToColorMapType(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType>* value);

  static inline void setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_colorMapEditorType, addr 0x3fdc840, size 0xd8, virtual false, abstract: false, final false
  inline void set_colorMapEditorType(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType value);

  /// @brief Method set_edgeColor, addr 0x3fdc744, size 0x60, virtual false, abstract: false, final false
  inline void set_edgeColor(::UnityEngine::Color value);

  /// @brief Method set_edgeRenderingEnabled, addr 0x3fdc714, size 0x20, virtual false, abstract: false, final false
  inline void set_edgeRenderingEnabled(bool value);

  /// @brief Method set_textureOpacity, addr 0x3fdc6ec, size 0x20, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7993 };

  /// @brief Field projectionSurfaceType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType ___projectionSurfaceType;

  /// @brief Field overlayType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVROverlay_OverlayType ___overlayType;

  /// @brief Field compositionDepth, offset: 0x28, size: 0x4, def value: None
  int32_t ___compositionDepth;

  /// @brief Field hidden, offset: 0x2c, size: 0x1, def value: None
  bool ___hidden;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset: 0x2d, size: 0x1, def value: None
  bool ___overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorScale;

  /// @brief Field colorOffset, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___colorOffset;

  /// @brief Field colorMapEditorType_, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType ___colorMapEditorType_;

  /// @brief Field colorMapEditorGradient, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___colorMapEditorGradient;

  /// @brief Field colorMapEditorContrast, offset: 0x60, size: 0x4, def value: None
  float_t ___colorMapEditorContrast;

  /// @brief Field colorMapEditorBrightness, offset: 0x64, size: 0x4, def value: None
  float_t ___colorMapEditorBrightness;

  /// @brief Field colorMapEditorPosterize, offset: 0x68, size: 0x4, def value: None
  float_t ___colorMapEditorPosterize;

  /// @brief Field colorMapEditorSaturation, offset: 0x6c, size: 0x4, def value: None
  float_t ___colorMapEditorSaturation;

  /// @brief Field _colorLutSourceTexture, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____colorLutSourceTexture;

  /// @brief Field _colorLutTargetTexture, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____colorLutTargetTexture;

  /// @brief Field _lutWeight, offset: 0x80, size: 0x4, def value: None
  float_t ____lutWeight;

  /// @brief Field _flipLutY, offset: 0x84, size: 0x1, def value: None
  bool ____flipLutY;

  /// @brief Field _settings, offset: 0x88, size: 0x30, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_Settings ____settings;

  /// @brief Field cameraRig, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig;

  /// @brief Field cameraRigInitialized, offset: 0xc0, size: 0x1, def value: None
  bool ___cameraRigInitialized;

  /// @brief Field auxGameObject, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___auxGameObject;

  /// @brief Field passthroughOverlay, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance>* ___surfaceGameObjects;

  /// @brief Field deferredSurfaceGameObjects, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition>* ___deferredSurfaceGameObjects;

  /// @brief Field serializedSurfaceGeometry, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry>* ___serializedSurfaceGeometry;

  /// @brief Field textureOpacity_, offset: 0xf0, size: 0x4, def value: None
  float_t ___textureOpacity_;

  /// @brief Field edgeRenderingEnabled_, offset: 0xf4, size: 0x1, def value: None
  bool ___edgeRenderingEnabled_;

  /// @brief Field edgeColor_, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Color ___edgeColor_;

  /// @brief Field colorMapType, offset: 0x108, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType ___colorMapType;

  /// @brief Field styleDirty, offset: 0x10c, size: 0x1, def value: None
  bool ___styleDirty;

  /// @brief Field _stylesHandler, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::OVRPassthroughLayer_StylesHandler* ____stylesHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___projectionSurfaceType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overlayType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___compositionDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___hidden) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overridePerLayerColorScaleAndOffset) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorType_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorGradient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorContrast) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorBrightness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorPosterize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorSaturation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____colorLutSourceTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____colorLutTargetTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____lutWeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____flipLutY) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____settings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRig) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRigInitialized) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___auxGameObject) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___passthroughOverlay) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___surfaceGameObjects) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___deferredSurfaceGameObjects) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___serializedSurfaceGeometry) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___textureOpacity_) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeRenderingEnabled_) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeColor_) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapType) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___styleDirty) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ____stylesHandler) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_ColorMapEditorType, "", "OVRPassthroughLayer/ColorMapEditorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_ProjectionSurfaceType, "", "OVRPassthroughLayer/ProjectionSurfaceType");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer*, "", "OVRPassthroughLayer");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_BCSStyleHandler*, "", "OVRPassthroughLayer/BCSStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_BaseGeneratedStyleHandler*, "", "OVRPassthroughLayer/BaseGeneratedStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_ColorLutHandler*, "", "OVRPassthroughLayer/ColorLutHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_IStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_IStyleHandler*, "", "OVRPassthroughLayer/IStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_InterpolatedColorLutHandler*, "", "OVRPassthroughLayer/InterpolatedColorLutHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_MonoToMonoStyleHandler*, "", "OVRPassthroughLayer/MonoToMonoStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_MonoToRgbaStyleHandler*, "", "OVRPassthroughLayer/MonoToRgbaStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_NoneStyleHandler*, "", "OVRPassthroughLayer/NoneStyleHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer_StylesHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_StylesHandler*, "", "OVRPassthroughLayer/StylesHandler");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass10_0*, "", "OVRPassthroughLayer/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer___c__DisplayClass9_0*, "", "OVRPassthroughLayer/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_DeferredPassthroughMeshAddition, "", "OVRPassthroughLayer/DeferredPassthroughMeshAddition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_PassthroughMeshInstance, "", "OVRPassthroughLayer/PassthroughMeshInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_SerializedSurfaceGeometry, "", "OVRPassthroughLayer/SerializedSurfaceGeometry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer_Settings, "", "OVRPassthroughLayer/Settings");
