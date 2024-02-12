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
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
struct __OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__ColorMapEditorType;
}
namespace GlobalNamespace {
struct __OVRPassthroughLayer__DeferredPassthroughMeshAddition;
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
class __OVRPassthroughLayer____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class __OVRPassthroughLayer____c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughLayer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry);
// Type: ::ProjectionSurfaceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7725))
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7726))
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughMeshInstance
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8989))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7727))
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7728))
// CS Name: ::OVRPassthroughLayer::SerializedSurfaceGeometry
struct CORDL_TYPE __OVRPassthroughLayer__SerializedSurfaceGeometry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityW<::UnityEngine::MeshFilter>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityW<::UnityEngine::MeshFilter> meshFilter, bool updateTransform) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__SerializedSurfaceGeometry();

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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7729))
// CS Name: ::OVRPassthroughLayer::DeferredPassthroughMeshAddition
struct CORDL_TYPE __OVRPassthroughLayer__DeferredPassthroughMeshAddition {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityW<::UnityEngine::GameObject> gameObject, bool updateTransform) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughLayer__DeferredPassthroughMeshAddition();

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
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7730))
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass9_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0* New_ctor();

  /// @brief Method .ctor, addr 0x2773b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RemoveSurfaceGeometry>b__0, addr 0x2776cb8, size 0x6c, virtual false, abstract: false, final false
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7731))
// CS Name: ::OVRPassthroughLayer::<>c__DisplayClass10_0*
class CORDL_TYPE __OVRPassthroughLayer____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::UnityW<::UnityEngine::GameObject> obj;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

  constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject> value);

  static inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor, addr 0x2773df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <IsSurfaceGeometry>b__0, addr 0x2776d24, size 0x6c, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::GameObject> ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0, ___obj) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPassthroughLayer
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 241, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3333)), TypeDefinitionIndex(TypeDefinitionIndex(7719)), TypeDefinitionIndex(TypeDefinitionIndex(7725)),
// TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7861)), TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8990)),
// TypeDefinitionIndex(TypeDefinitionIndex(8995))] Self: TypeDefinitionIndex(TypeDefinitionIndex(7732)) CS Name: ::OVRPassthroughLayer*
class CORDL_TYPE OVRPassthroughLayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0;

  using DeferredPassthroughMeshAddition = ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition;

  using SerializedSurfaceGeometry = ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry;

  using PassthroughMeshInstance = ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance;

  using ColorMapEditorType = ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType;

  using ProjectionSurfaceType = ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType;

  /// @brief Field projectionSurfaceType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_projectionSurfaceType,
                      put = __cordl_internal_set_projectionSurfaceType))::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType projectionSurfaceType;

  /// @brief Field overlayType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_overlayType, put = __cordl_internal_set_overlayType))::GlobalNamespace::__OVROverlay__OverlayType overlayType;

  /// @brief Field compositionDepth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionDepth, put = __cordl_internal_set_compositionDepth)) int32_t compositionDepth;

  /// @brief Field hidden, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_hidden, put = __cordl_internal_set_hidden)) bool hidden;

  /// @brief Field overridePerLayerColorScaleAndOffset, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_overridePerLayerColorScaleAndOffset, put = __cordl_internal_set_overridePerLayerColorScaleAndOffset)) bool overridePerLayerColorScaleAndOffset;

  /// @brief Field colorScale, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_colorScale, put = __cordl_internal_set_colorScale))::UnityEngine::Vector4 colorScale;

  /// @brief Field colorOffset, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_colorOffset, put = __cordl_internal_set_colorOffset))::UnityEngine::Vector4 colorOffset;

  /// @brief Field colorMapEditorType_, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorType_, put = __cordl_internal_set_colorMapEditorType_))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType_;

  /// @brief Field colorMapEditorGradient, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapEditorGradient, put = __cordl_internal_set_colorMapEditorGradient))::UnityEngine::Gradient* colorMapEditorGradient;

  /// @brief Field colorMapEditorGradientOld, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapEditorGradientOld, put = __cordl_internal_set_colorMapEditorGradientOld))::UnityEngine::Gradient* colorMapEditorGradientOld;

  /// @brief Field colorMapEditorContrast, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorContrast, put = __cordl_internal_set_colorMapEditorContrast)) float_t colorMapEditorContrast;

  /// @brief Field colorMapEditorContrast_, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorContrast_, put = __cordl_internal_set_colorMapEditorContrast_)) float_t colorMapEditorContrast_;

  /// @brief Field colorMapEditorBrightness, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorBrightness, put = __cordl_internal_set_colorMapEditorBrightness)) float_t colorMapEditorBrightness;

  /// @brief Field colorMapEditorBrightness_, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorBrightness_, put = __cordl_internal_set_colorMapEditorBrightness_)) float_t colorMapEditorBrightness_;

  /// @brief Field colorMapEditorPosterize, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorPosterize, put = __cordl_internal_set_colorMapEditorPosterize)) float_t colorMapEditorPosterize;

  /// @brief Field colorMapEditorPosterize_, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorPosterize_, put = __cordl_internal_set_colorMapEditorPosterize_)) float_t colorMapEditorPosterize_;

  /// @brief Field colorMapEditorSaturation, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorSaturation, put = __cordl_internal_set_colorMapEditorSaturation)) float_t colorMapEditorSaturation;

  /// @brief Field colorMapEditorSaturation_, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapEditorSaturation_, put = __cordl_internal_set_colorMapEditorSaturation_)) float_t colorMapEditorSaturation_;

  /// @brief Field cameraRig, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig, put = __cordl_internal_set_cameraRig))::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig;

  /// @brief Field cameraRigInitialized, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_cameraRigInitialized, put = __cordl_internal_set_cameraRigInitialized)) bool cameraRigInitialized;

  /// @brief Field auxGameObject, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_auxGameObject, put = __cordl_internal_set_auxGameObject))::UnityW<::UnityEngine::GameObject> auxGameObject;

  /// @brief Field passthroughOverlay, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_passthroughOverlay, put = __cordl_internal_set_passthroughOverlay))::UnityW<::GlobalNamespace::OVROverlay> passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_surfaceGameObjects, put = __cordl_internal_set_surfaceGameObjects))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* surfaceGameObjects;

  /// @brief Field deferredSurfaceGameObjects, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_deferredSurfaceGameObjects, put = __cordl_internal_set_deferredSurfaceGameObjects))::System::Collections::Generic::List_1<
      ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* deferredSurfaceGameObjects;

  /// @brief Field serializedSurfaceGeometry, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_serializedSurfaceGeometry,
      put = __cordl_internal_set_serializedSurfaceGeometry))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* serializedSurfaceGeometry;

  /// @brief Field textureOpacity_, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_textureOpacity_, put = __cordl_internal_set_textureOpacity_)) float_t textureOpacity_;

  /// @brief Field edgeRenderingEnabled_, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get_edgeRenderingEnabled_, put = __cordl_internal_set_edgeRenderingEnabled_)) bool edgeRenderingEnabled_;

  /// @brief Field edgeColor_, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_edgeColor_, put = __cordl_internal_set_edgeColor_))::UnityEngine::Color edgeColor_;

  /// @brief Field colorMapType, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMapType, put = __cordl_internal_set_colorMapType))::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType colorMapType;

  /// @brief Field colorMapData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapData, put = __cordl_internal_set_colorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> colorMapData;

  /// @brief Field tmpColorMapData, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_tmpColorMapData, put = __cordl_internal_set_tmpColorMapData))::ArrayW<uint8_t, ::Array<uint8_t>*> tmpColorMapData;

  /// @brief Field colorMapDataHandle, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_colorMapDataHandle, put = __cordl_internal_set_colorMapDataHandle))::System::Runtime::InteropServices::GCHandle colorMapDataHandle;

  /// @brief Field styleDirty, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_styleDirty, put = __cordl_internal_set_styleDirty)) bool styleDirty;

  /// @brief Field colorMapNeutralGradient, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_colorMapNeutralGradient, put = setStaticF_colorMapNeutralGradient))::UnityEngine::Gradient* colorMapNeutralGradient;

  __declspec(property(get = get_textureOpacity, put = set_textureOpacity)) float_t textureOpacity;

  __declspec(property(get = get_edgeRenderingEnabled, put = set_edgeRenderingEnabled)) bool edgeRenderingEnabled;

  __declspec(property(get = get_edgeColor, put = set_edgeColor))::UnityEngine::Color edgeColor;

  __declspec(property(get = get_colorMapEditorType, put = set_colorMapEditorType))::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapEditorType;

  __declspec(property(get = get_overlayShape))::GlobalNamespace::__OVROverlay__OverlayShape overlayShape;

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType& __cordl_internal_get_projectionSurfaceType();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const& __cordl_internal_get_projectionSurfaceType() const;

  constexpr void __cordl_internal_set_projectionSurfaceType(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType value);

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType& __cordl_internal_get_overlayType();

  constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& __cordl_internal_get_overlayType() const;

  constexpr void __cordl_internal_set_overlayType(::GlobalNamespace::__OVROverlay__OverlayType value);

  constexpr int32_t& __cordl_internal_get_compositionDepth();

  constexpr int32_t const& __cordl_internal_get_compositionDepth() const;

  constexpr void __cordl_internal_set_compositionDepth(int32_t value);

  constexpr bool& __cordl_internal_get_hidden();

  constexpr bool const& __cordl_internal_get_hidden() const;

  constexpr void __cordl_internal_set_hidden(bool value);

  constexpr bool& __cordl_internal_get_overridePerLayerColorScaleAndOffset();

  constexpr bool const& __cordl_internal_get_overridePerLayerColorScaleAndOffset() const;

  constexpr void __cordl_internal_set_overridePerLayerColorScaleAndOffset(bool value);

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorScale();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorScale() const;

  constexpr void __cordl_internal_set_colorScale(::UnityEngine::Vector4 value);

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_colorOffset();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_colorOffset() const;

  constexpr void __cordl_internal_set_colorOffset(::UnityEngine::Vector4 value);

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType& __cordl_internal_get_colorMapEditorType_();

  constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const& __cordl_internal_get_colorMapEditorType_() const;

  constexpr void __cordl_internal_set_colorMapEditorType_(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorMapEditorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_colorMapEditorGradient() const;

  constexpr void __cordl_internal_set_colorMapEditorGradient(::UnityEngine::Gradient* value);

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorMapEditorGradientOld();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get_colorMapEditorGradientOld() const;

  constexpr void __cordl_internal_set_colorMapEditorGradientOld(::UnityEngine::Gradient* value);

  constexpr float_t& __cordl_internal_get_colorMapEditorContrast();

  constexpr float_t const& __cordl_internal_get_colorMapEditorContrast() const;

  constexpr void __cordl_internal_set_colorMapEditorContrast(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorContrast_();

  constexpr float_t const& __cordl_internal_get_colorMapEditorContrast_() const;

  constexpr void __cordl_internal_set_colorMapEditorContrast_(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorBrightness();

  constexpr float_t const& __cordl_internal_get_colorMapEditorBrightness() const;

  constexpr void __cordl_internal_set_colorMapEditorBrightness(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorBrightness_();

  constexpr float_t const& __cordl_internal_get_colorMapEditorBrightness_() const;

  constexpr void __cordl_internal_set_colorMapEditorBrightness_(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorPosterize();

  constexpr float_t const& __cordl_internal_get_colorMapEditorPosterize() const;

  constexpr void __cordl_internal_set_colorMapEditorPosterize(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorPosterize_();

  constexpr float_t const& __cordl_internal_get_colorMapEditorPosterize_() const;

  constexpr void __cordl_internal_set_colorMapEditorPosterize_(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorSaturation();

  constexpr float_t const& __cordl_internal_get_colorMapEditorSaturation() const;

  constexpr void __cordl_internal_set_colorMapEditorSaturation(float_t value);

  constexpr float_t& __cordl_internal_get_colorMapEditorSaturation_();

  constexpr float_t const& __cordl_internal_get_colorMapEditorSaturation_() const;

  constexpr void __cordl_internal_set_colorMapEditorSaturation_(float_t value);

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig() const;

  constexpr void __cordl_internal_set_cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr bool& __cordl_internal_get_cameraRigInitialized();

  constexpr bool const& __cordl_internal_get_cameraRigInitialized() const;

  constexpr void __cordl_internal_set_cameraRigInitialized(bool value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_auxGameObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_auxGameObject() const;

  constexpr void __cordl_internal_set_auxGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::OVROverlay>& __cordl_internal_get_passthroughOverlay();

  constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& __cordl_internal_get_passthroughOverlay() const;

  constexpr void __cordl_internal_set_passthroughOverlay(::UnityW<::GlobalNamespace::OVROverlay> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*&
  __cordl_internal_get_surfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*> const&
  __cordl_internal_get_surfaceGameObjects() const;

  constexpr void
  __cordl_internal_set_surfaceGameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*& __cordl_internal_get_deferredSurfaceGameObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*> const&
  __cordl_internal_get_deferredSurfaceGameObjects() const;

  constexpr void __cordl_internal_set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*& __cordl_internal_get_serializedSurfaceGeometry();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*> const&
  __cordl_internal_get_serializedSurfaceGeometry() const;

  constexpr void __cordl_internal_set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* value);

  constexpr float_t& __cordl_internal_get_textureOpacity_();

  constexpr float_t const& __cordl_internal_get_textureOpacity_() const;

  constexpr void __cordl_internal_set_textureOpacity_(float_t value);

  constexpr bool& __cordl_internal_get_edgeRenderingEnabled_();

  constexpr bool const& __cordl_internal_get_edgeRenderingEnabled_() const;

  constexpr void __cordl_internal_set_edgeRenderingEnabled_(bool value);

  constexpr ::UnityEngine::Color& __cordl_internal_get_edgeColor_();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_edgeColor_() const;

  constexpr void __cordl_internal_set_edgeColor_(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType& __cordl_internal_get_colorMapType();

  constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const& __cordl_internal_get_colorMapType() const;

  constexpr void __cordl_internal_set_colorMapType(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_colorMapData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_colorMapData() const;

  constexpr void __cordl_internal_set_colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_tmpColorMapData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_tmpColorMapData() const;

  constexpr void __cordl_internal_set_tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_colorMapDataHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_colorMapDataHandle() const;

  constexpr void __cordl_internal_set_colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr bool& __cordl_internal_get_styleDirty();

  constexpr bool const& __cordl_internal_get_styleDirty() const;

  constexpr void __cordl_internal_set_styleDirty(bool value);

  static inline void setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value);

  static inline ::UnityEngine::Gradient* getStaticF_colorMapNeutralGradient();

  /// @brief Method AddSurfaceGeometry, addr 0x2773738, size 0x1f0, virtual false, abstract: false, final false
  inline void AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform);

  /// @brief Method RemoveSurfaceGeometry, addr 0x2773928, size 0x218, virtual false, abstract: false, final false
  inline void RemoveSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method IsSurfaceGeometry, addr 0x2773cd8, size 0x11c, virtual false, abstract: false, final false
  inline bool IsSurfaceGeometry(::UnityEngine::GameObject* obj);

  /// @brief Method get_textureOpacity, addr 0x2773dfc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_textureOpacity();

  /// @brief Method set_textureOpacity, addr 0x2773e04, size 0x1c, virtual false, abstract: false, final false
  inline void set_textureOpacity(float_t value);

  /// @brief Method get_edgeRenderingEnabled, addr 0x2773e20, size 0x8, virtual false, abstract: false, final false
  inline bool get_edgeRenderingEnabled();

  /// @brief Method set_edgeRenderingEnabled, addr 0x2773e28, size 0x20, virtual false, abstract: false, final false
  inline void set_edgeRenderingEnabled(bool value);

  /// @brief Method get_edgeColor, addr 0x2773e48, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_edgeColor();

  /// @brief Method set_edgeColor, addr 0x2773e54, size 0x58, virtual false, abstract: false, final false
  inline void set_edgeColor(::UnityEngine::Color value);

  /// @brief Method SetColorMap, addr 0x2773eac, size 0xec, virtual false, abstract: false, final false
  inline void SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values);

  /// @brief Method SetColorMapControls, addr 0x2774294, size 0x194, virtual false, abstract: false, final false
  inline void SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                  ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapType);

  /// @brief Method SetColorMapMonochromatic, addr 0x27745f8, size 0xc4, virtual false, abstract: false, final false
  inline void SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values);

  /// @brief Method SetBrightnessContrastSaturation, addr 0x27746bc, size 0x74, virtual false, abstract: false, final false
  inline void SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation);

  /// @brief Method DisableColorMap, addr 0x2774974, size 0x2c, virtual false, abstract: false, final false
  inline void DisableColorMap();

  /// @brief Method get_colorMapEditorType, addr 0x27749a0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType get_colorMapEditorType();

  /// @brief Method set_colorMapEditorType, addr 0x2773f98, size 0x84, virtual false, abstract: false, final false
  inline void set_colorMapEditorType(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value);

  /// @brief Method SetStyleDirty, addr 0x2774a4c, size 0xc, virtual false, abstract: false, final false
  inline void SetStyleDirty();

  /// @brief Method AddDeferredSurfaceGeometries, addr 0x2774a58, size 0x258, virtual false, abstract: false, final false
  inline void AddDeferredSurfaceGeometries();

  /// @brief Method GetTransformMatrixForPassthroughSurfaceObject, addr 0x2774f60, size 0x354, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj);

  /// @brief Method CreateAndAddMesh, addr 0x2774cb0, size 0x2b0, virtual false, abstract: false, final false
  inline bool CreateAndAddMesh(::UnityEngine::GameObject* obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle, ByRef<::UnityEngine::Matrix4x4> localToWorld);

  /// @brief Method DestroySurfaceGeometries, addr 0x2775580, size 0x280, virtual false, abstract: false, final false
  inline void DestroySurfaceGeometries(bool addBackToDeferredQueue);

  /// @brief Method UpdateSurfaceGeometryTransforms, addr 0x2775800, size 0x31c, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransforms();

  /// @brief Method UpdateSurfaceGeometryTransform, addr 0x2775b1c, size 0x1b8, virtual false, abstract: false, final false
  inline void UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld);

  /// @brief Method AllocateColorMapData, addr 0x277401c, size 0xf0, virtual false, abstract: false, final false
  inline void AllocateColorMapData(uint32_t size);

  /// @brief Method DeallocateColorMapData, addr 0x27749a8, size 0xa4, virtual false, abstract: false, final false
  inline void DeallocateColorMapData();

  /// @brief Method CreateNeutralColorMapGradient, addr 0x2774428, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* CreateNeutralColorMapGradient();

  /// @brief Method HasControlsBasedColorMap, addr 0x2775ddc, size 0x2c, virtual false, abstract: false, final false
  inline bool HasControlsBasedColorMap();

  /// @brief Method UpdateColorMapFromControls, addr 0x2774730, size 0x244, virtual false, abstract: false, final false
  inline void UpdateColorMapFromControls(bool forceUpdate);

  /// @brief Method computeBrightnessContrastPosterizeMap, addr 0x2775e08, size 0x174, virtual false, abstract: false, final false
  static inline void computeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast, float_t posterize);

  /// @brief Method WriteColorToColorMap, addr 0x277410c, size 0x188, virtual false, abstract: false, final false
  inline void WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color);

  /// @brief Method WriteFloatToColorMap, addr 0x2775fd8, size 0x88, virtual false, abstract: false, final false
  inline void WriteFloatToColorMap(int32_t index, float_t value);

  /// @brief Method WriteBrightnessContrastSaturationColorMap, addr 0x2775f7c, size 0x5c, virtual false, abstract: false, final false
  inline void WriteBrightnessContrastSaturationColorMap(float_t brightness, float_t contrast, float_t saturation);

  /// @brief Method SyncToOverlay, addr 0x2776060, size 0x274, virtual false, abstract: false, final false
  inline void SyncToOverlay();

  /// @brief Method get_overlayShape, addr 0x27762d4, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVROverlay__OverlayShape get_overlayShape();

  /// @brief Method Awake, addr 0x27762e8, size 0x228, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x2776510, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x2776514, size 0x270, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnEnable, addr 0x2776884, size 0x124, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x27769a8, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2776a78, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::OVRPassthroughLayer* New_ctor();

  /// @brief Method .ctor, addr 0x2776a80, size 0x1ec, virtual false, abstract: false, final false
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

  /// @brief Field colorMapEditorGradientOld, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___colorMapEditorGradientOld;

  /// @brief Field colorMapEditorContrast, offset: 0x60, size: 0x4, def value: None
  float_t ___colorMapEditorContrast;

  /// @brief Field colorMapEditorContrast_, offset: 0x64, size: 0x4, def value: None
  float_t ___colorMapEditorContrast_;

  /// @brief Field colorMapEditorBrightness, offset: 0x68, size: 0x4, def value: None
  float_t ___colorMapEditorBrightness;

  /// @brief Field colorMapEditorBrightness_, offset: 0x6c, size: 0x4, def value: None
  float_t ___colorMapEditorBrightness_;

  /// @brief Field colorMapEditorPosterize, offset: 0x70, size: 0x4, def value: None
  float_t ___colorMapEditorPosterize;

  /// @brief Field colorMapEditorPosterize_, offset: 0x74, size: 0x4, def value: None
  float_t ___colorMapEditorPosterize_;

  /// @brief Field colorMapEditorSaturation, offset: 0x78, size: 0x4, def value: None
  float_t ___colorMapEditorSaturation;

  /// @brief Field colorMapEditorSaturation_, offset: 0x7c, size: 0x4, def value: None
  float_t ___colorMapEditorSaturation_;

  /// @brief Field cameraRig, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig;

  /// @brief Field cameraRigInitialized, offset: 0x88, size: 0x1, def value: None
  bool ___cameraRigInitialized;

  /// @brief Field auxGameObject, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___auxGameObject;

  /// @brief Field passthroughOverlay, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVROverlay> ___passthroughOverlay;

  /// @brief Field surfaceGameObjects, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* ___surfaceGameObjects;

  /// @brief Field deferredSurfaceGameObjects, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* ___deferredSurfaceGameObjects;

  /// @brief Field serializedSurfaceGeometry, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* ___serializedSurfaceGeometry;

  /// @brief Field textureOpacity_, offset: 0xb8, size: 0x4, def value: None
  float_t ___textureOpacity_;

  /// @brief Field edgeRenderingEnabled_, offset: 0xbc, size: 0x1, def value: None
  bool ___edgeRenderingEnabled_;

  /// @brief Field edgeColor_, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Color ___edgeColor_;

  /// @brief Field colorMapType, offset: 0xd0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType ___colorMapType;

  /// @brief Field colorMapData, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___colorMapData;

  /// @brief Field tmpColorMapData, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___tmpColorMapData;

  /// @brief Field colorMapDataHandle, offset: 0xe8, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___colorMapDataHandle;

  /// @brief Field styleDirty, offset: 0xf0, size: 0x1, def value: None
  bool ___styleDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughLayer, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___projectionSurfaceType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overlayType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___compositionDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___hidden) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___overridePerLayerColorScaleAndOffset) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorType_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorGradient) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorGradientOld) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorContrast) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorContrast_) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorBrightness) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorBrightness_) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorPosterize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorPosterize_) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorSaturation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapEditorSaturation_) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___cameraRigInitialized) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___auxGameObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___passthroughOverlay) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___surfaceGameObjects) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___deferredSurfaceGameObjects) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___serializedSurfaceGeometry) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___textureOpacity_) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeRenderingEnabled_) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___edgeColor_) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapType) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___tmpColorMapData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___colorMapDataHandle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer, ___styleDirty) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, "", "OVRPassthroughLayer/ColorMapEditorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType, "", "OVRPassthroughLayer/ProjectionSurfaceType");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer*, "", "OVRPassthroughLayer");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*, "", "OVRPassthroughLayer/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*, "", "OVRPassthroughLayer/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition, "", "OVRPassthroughLayer/DeferredPassthroughMeshAddition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance, "", "OVRPassthroughLayer/PassthroughMeshInstance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry, "", "OVRPassthroughLayer/SerializedSurfaceGeometry");
