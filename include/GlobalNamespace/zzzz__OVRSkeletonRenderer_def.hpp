#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeletonRenderer)
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__BoneVisualization;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__CapsuleVisualization;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SystemGestureBehavior;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__BoneVisualization;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__CapsuleVisualization;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior);
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider);
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData);
// Type: ::IOVRSkeletonRendererDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*
class CORDL_TYPE __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider {
public:
  // Declarations
  /// @brief Method GetSkeletonRendererData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData GetSkeletonRendererData();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider(__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider(__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::SkeletonRendererData
// SizeInfo { instance_size: 8, native_size: 16, calculated_instance_size: 8, calculated_native_size: 23, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSkeletonRenderer::SkeletonRendererData
struct CORDL_TYPE __OVRSkeletonRenderer__SkeletonRendererData {
public:
  // Declarations
  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_RootScale, put = set_RootScale)) float_t RootScale;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Method get_IsDataHighConfidence, addr 0x2a99d48, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x2a99d34, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_RootScale, addr 0x2a99d24, size 0x8, virtual false, abstract: false, final false
  inline float_t get_RootScale();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x2a99d5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_IsDataHighConfidence, addr 0x2a99d50, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x2a99d3c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_RootScale, addr 0x2a99d2c, size 0x8, virtual false, abstract: false, final false
  inline void set_RootScale(float_t value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x2a99d64, size 0xc, virtual false, abstract: false, final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeletonRenderer__SkeletonRendererData();

  // Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr __OVRSkeletonRenderer__SkeletonRendererData(float_t _RootScale_k__BackingField, bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField,
                                                        bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

  /// @brief Field <RootScale>k__BackingField, offset: 0x0, size: 0x4, def value: None
  float_t _RootScale_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x4, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x5, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x6, size: 0x1, def value: None
  bool _ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, _RootScale_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, _IsDataValid_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, _IsDataHighConfidence_k__BackingField) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x6, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConfidenceBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSkeletonRenderer::ConfidenceBehavior
struct CORDL_TYPE __OVRSkeletonRenderer__ConfidenceBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped
  enum struct ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ToggleRenderer = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped() const noexcept {
    return static_cast<____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeletonRenderer__ConfidenceBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSkeletonRenderer__ConfidenceBehavior(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const None;

  /// @brief Field ToggleRenderer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const ToggleRenderer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SystemGestureBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSkeletonRenderer::SystemGestureBehavior
struct CORDL_TYPE __OVRSkeletonRenderer__SystemGestureBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped
  enum struct ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SwapMaterial = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped() const noexcept {
    return static_cast<____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeletonRenderer__SystemGestureBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSkeletonRenderer__SystemGestureBehavior(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const None;

  /// @brief Field SwapMaterial value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const SwapMaterial;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BoneVisualization
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSkeletonRenderer::BoneVisualization*
class CORDL_TYPE __OVRSkeletonRenderer__BoneVisualization : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneBegin, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneBegin, put = __cordl_internal_set_BoneBegin))::UnityW<::UnityEngine::Transform> BoneBegin;

  /// @brief Field BoneEnd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneEnd, put = __cordl_internal_set_BoneEnd))::UnityW<::UnityEngine::Transform> BoneEnd;

  /// @brief Field BoneGO, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneGO, put = __cordl_internal_set_BoneGO))::UnityW<::UnityEngine::GameObject> BoneGO;

  /// @brief Field Line, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Line, put = __cordl_internal_set_Line))::UnityW<::UnityEngine::LineRenderer> Line;

  /// @brief Field RenderMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RenderMaterial, put = __cordl_internal_set_RenderMaterial))::UnityW<::UnityEngine::Material> RenderMaterial;

  /// @brief Field SystemGestureMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_SystemGestureMaterial, put = __cordl_internal_set_SystemGestureMaterial))::UnityW<::UnityEngine::Material> SystemGestureMaterial;

  static inline ::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization* New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat,
                                                                                      float_t scale, ::UnityEngine::Transform* begin, ::UnityEngine::Transform* end);

  /// @brief Method Update, addr 0x2a996a4, size 0x1d0, virtual false, abstract: false, final false
  inline void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior confidenceBehavior,
                     ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior systemGestureBehavior);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_BoneBegin() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_BoneBegin();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_BoneEnd() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_BoneEnd();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_BoneGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_BoneGO();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_Line() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_Line();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_RenderMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_RenderMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_SystemGestureMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_SystemGestureMaterial();

  constexpr void __cordl_internal_set_BoneBegin(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_BoneEnd(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_BoneGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_Line(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_RenderMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_SystemGestureMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x2a99144, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat, float_t scale, ::UnityEngine::Transform* begin,
                    ::UnityEngine::Transform* end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeletonRenderer__BoneVisualization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__BoneVisualization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSkeletonRenderer__BoneVisualization(__OVRSkeletonRenderer__BoneVisualization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__BoneVisualization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSkeletonRenderer__BoneVisualization(__OVRSkeletonRenderer__BoneVisualization const&) = delete;

  /// @brief Field BoneGO, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___BoneGO;

  /// @brief Field BoneBegin, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___BoneBegin;

  /// @brief Field BoneEnd, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___BoneEnd;

  /// @brief Field Line, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___Line;

  /// @brief Field RenderMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___RenderMaterial;

  /// @brief Field SystemGestureMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___SystemGestureMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___BoneGO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___BoneBegin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___BoneEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___Line) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___RenderMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, ___SystemGestureMaterial) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CapsuleVisualization
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSkeletonRenderer::CapsuleVisualization*
class CORDL_TYPE __OVRSkeletonRenderer__CapsuleVisualization : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneCapsule, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneCapsule, put = __cordl_internal_set_BoneCapsule))::GlobalNamespace::OVRBoneCapsule* BoneCapsule;

  /// @brief Field CapsuleGO, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_CapsuleGO, put = __cordl_internal_set_CapsuleGO))::UnityW<::UnityEngine::GameObject> CapsuleGO;

  /// @brief Field RenderMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_RenderMaterial, put = __cordl_internal_set_RenderMaterial))::UnityW<::UnityEngine::Material> RenderMaterial;

  /// @brief Field Renderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Renderer, put = __cordl_internal_set_Renderer))::UnityW<::UnityEngine::MeshRenderer> Renderer;

  /// @brief Field SystemGestureMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_SystemGestureMaterial, put = __cordl_internal_set_SystemGestureMaterial))::UnityW<::UnityEngine::Material> SystemGestureMaterial;

  /// @brief Field capsuleScale, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_capsuleScale, put = __cordl_internal_set_capsuleScale))::UnityEngine::Vector3 capsuleScale;

  static inline ::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization* New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat,
                                                                                         ::UnityEngine::Material* systemGestureMat, float_t scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule);

  /// @brief Method Update, addr 0x2a99874, size 0x310, virtual false, abstract: false, final false
  inline void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior confidenceBehavior,
                     ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior systemGestureBehavior);

  constexpr ::GlobalNamespace::OVRBoneCapsule*& __cordl_internal_get_BoneCapsule();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRBoneCapsule*> const& __cordl_internal_get_BoneCapsule() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_CapsuleGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_CapsuleGO();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_RenderMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_RenderMaterial();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_Renderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_Renderer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_SystemGestureMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_SystemGestureMaterial();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_capsuleScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_capsuleScale();

  constexpr void __cordl_internal_set_BoneCapsule(::GlobalNamespace::OVRBoneCapsule* value);

  constexpr void __cordl_internal_set_CapsuleGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_RenderMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_Renderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_SystemGestureMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_capsuleScale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2a9931c, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat, float_t scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSkeletonRenderer__CapsuleVisualization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__CapsuleVisualization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSkeletonRenderer__CapsuleVisualization(__OVRSkeletonRenderer__CapsuleVisualization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__CapsuleVisualization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSkeletonRenderer__CapsuleVisualization(__OVRSkeletonRenderer__CapsuleVisualization const&) = delete;

  /// @brief Field CapsuleGO, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___CapsuleGO;

  /// @brief Field BoneCapsule, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRBoneCapsule* ___BoneCapsule;

  /// @brief Field capsuleScale, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___capsuleScale;

  /// @brief Field Renderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___Renderer;

  /// @brief Field RenderMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___RenderMaterial;

  /// @brief Field SystemGestureMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___SystemGestureMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___CapsuleGO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___BoneCapsule) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___capsuleScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___Renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___RenderMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, ___SystemGestureMaterial) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSkeletonRenderer
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSkeletonRenderer*
class CORDL_TYPE OVRSkeletonRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoneVisualization = ::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization;

  using CapsuleVisualization = ::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization;

  using ConfidenceBehavior = ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior;

  using IOVRSkeletonRendererDataProvider = ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;

  using SkeletonRendererData = ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData;

  using SystemGestureBehavior = ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x86, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset 0x87, size 0x1
  __declspec(property(get = __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField,
                      put = __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField)) bool _ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief Field _boneVisualizations, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__boneVisualizations,
                      put = __cordl_internal_set__boneVisualizations))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>* _boneVisualizations;

  /// @brief Field _capsuleDefaultMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__capsuleDefaultMaterial, put = __cordl_internal_set__capsuleDefaultMaterial))::UnityW<::UnityEngine::Material> _capsuleDefaultMaterial;

  /// @brief Field _capsuleMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__capsuleMaterial, put = __cordl_internal_set__capsuleMaterial))::UnityW<::UnityEngine::Material> _capsuleMaterial;

  /// @brief Field _capsuleRotationOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__capsuleRotationOffset, put = setStaticF__capsuleRotationOffset))::UnityEngine::Quaternion _capsuleRotationOffset;

  /// @brief Field _capsuleVisualizations, offset 0x68, size 0x8
  __declspec(
      property(get = __cordl_internal_get__capsuleVisualizations,
               put = __cordl_internal_set__capsuleVisualizations))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>* _capsuleVisualizations;

  /// @brief Field _confidenceBehavior, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__confidenceBehavior, put = __cordl_internal_set__confidenceBehavior))::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior _confidenceBehavior;

  /// @brief Field _dataProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider))::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider* _dataProvider;

  /// @brief Field _ovrSkeleton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrSkeleton, put = __cordl_internal_set__ovrSkeleton))::UnityW<::GlobalNamespace::OVRSkeleton> _ovrSkeleton;

  /// @brief Field _renderPhysicsCapsules, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__renderPhysicsCapsules, put = __cordl_internal_set__renderPhysicsCapsules)) bool _renderPhysicsCapsules;

  /// @brief Field _scale, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__scale, put = __cordl_internal_set__scale)) float_t _scale;

  /// @brief Field _skeletonDefaultMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonDefaultMaterial, put = __cordl_internal_set__skeletonDefaultMaterial))::UnityW<::UnityEngine::Material> _skeletonDefaultMaterial;

  /// @brief Field _skeletonGO, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonGO, put = __cordl_internal_set__skeletonGO))::UnityW<::UnityEngine::GameObject> _skeletonGO;

  /// @brief Field _skeletonMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonMaterial, put = __cordl_internal_set__skeletonMaterial))::UnityW<::UnityEngine::Material> _skeletonMaterial;

  /// @brief Field _systemGestureBehavior, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__systemGestureBehavior,
                      put = __cordl_internal_set__systemGestureBehavior))::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior _systemGestureBehavior;

  /// @brief Field _systemGestureDefaultMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__systemGestureDefaultMaterial,
                      put = __cordl_internal_set__systemGestureDefaultMaterial))::UnityW<::UnityEngine::Material> _systemGestureDefaultMaterial;

  /// @brief Field _systemGestureMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__systemGestureMaterial, put = __cordl_internal_set__systemGestureMaterial))::UnityW<::UnityEngine::Material> _systemGestureMaterial;

  /// @brief Method Awake, addr 0x2a98860, size 0xb8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x2a989f8, size 0x74c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OVRSkeletonRenderer* New_ctor();

  /// @brief Method OnDestroy, addr 0x2a99b84, size 0x12c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShouldInitialize, addr 0x2a989c4, size 0x34, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method Start, addr 0x2a98918, size 0xac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2a994dc, size 0x1c8, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr bool const& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>*& __cordl_internal_get__boneVisualizations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>*> const&
  __cordl_internal_get__boneVisualizations() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__capsuleDefaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__capsuleDefaultMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__capsuleMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__capsuleMaterial();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>*& __cordl_internal_get__capsuleVisualizations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>*> const&
  __cordl_internal_get__capsuleVisualizations() const;

  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const& __cordl_internal_get__confidenceBehavior() const;

  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior& __cordl_internal_get__confidenceBehavior();

  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*& __cordl_internal_get__dataProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*> const& __cordl_internal_get__dataProvider() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get__ovrSkeleton() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get__ovrSkeleton();

  constexpr bool const& __cordl_internal_get__renderPhysicsCapsules() const;

  constexpr bool& __cordl_internal_get__renderPhysicsCapsules();

  constexpr float_t const& __cordl_internal_get__scale() const;

  constexpr float_t& __cordl_internal_get__scale();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__skeletonDefaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__skeletonDefaultMaterial();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__skeletonGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__skeletonGO();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__skeletonMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__skeletonMaterial();

  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const& __cordl_internal_get__systemGestureBehavior() const;

  constexpr ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior& __cordl_internal_get__systemGestureBehavior();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__systemGestureDefaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__systemGestureDefaultMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__systemGestureMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__systemGestureMaterial();

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField(bool value);

  constexpr void __cordl_internal_set__boneVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>* value);

  constexpr void __cordl_internal_set__capsuleDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__capsuleMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__capsuleVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>* value);

  constexpr void __cordl_internal_set__confidenceBehavior(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider* value);

  constexpr void __cordl_internal_set__ovrSkeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  constexpr void __cordl_internal_set__renderPhysicsCapsules(bool value);

  constexpr void __cordl_internal_set__scale(float_t value);

  constexpr void __cordl_internal_set__skeletonDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__skeletonGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__skeletonMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__systemGestureBehavior(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior value);

  constexpr void __cordl_internal_set__systemGestureDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__systemGestureMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x2a99cb0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF__capsuleRotationOffset();

  /// @brief Method get_IsDataHighConfidence, addr 0x2a98838, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x2a98824, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsInitialized, addr 0x2a98810, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x2a9884c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  static inline void setStaticF__capsuleRotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method set_IsDataHighConfidence, addr 0x2a98840, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x2a9882c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsInitialized, addr 0x2a98818, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x2a98854, size 0xc, virtual false, abstract: false, final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeletonRenderer(OVRSkeletonRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeletonRenderer(OVRSkeletonRenderer const&) = delete;

  /// @brief Field _dataProvider, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider* ____dataProvider;

  /// @brief Field _confidenceBehavior, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior ____confidenceBehavior;

  /// @brief Field _systemGestureBehavior, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior ____systemGestureBehavior;

  /// @brief Field _renderPhysicsCapsules, offset: 0x28, size: 0x1, def value: None
  bool ____renderPhysicsCapsules;

  /// @brief Field _skeletonMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____skeletonMaterial;

  /// @brief Field _skeletonDefaultMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____skeletonDefaultMaterial;

  /// @brief Field _capsuleMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____capsuleMaterial;

  /// @brief Field _capsuleDefaultMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____capsuleDefaultMaterial;

  /// @brief Field _systemGestureMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____systemGestureMaterial;

  /// @brief Field _systemGestureDefaultMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____systemGestureDefaultMaterial;

  /// @brief Field _boneVisualizations, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>* ____boneVisualizations;

  /// @brief Field _capsuleVisualizations, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>* ____capsuleVisualizations;

  /// @brief Field _ovrSkeleton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____ovrSkeleton;

  /// @brief Field _skeletonGO, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____skeletonGO;

  /// @brief Field _scale, offset: 0x80, size: 0x4, def value: None
  float_t ____scale;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x84, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x85, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x86, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x87, size: 0x1, def value: None
  bool ____ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief Field LINE_RENDERER_WIDTH offset 0xffffffff size 0x4
  static constexpr float_t LINE_RENDERER_WIDTH{ 0.005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____dataProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____confidenceBehavior) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureBehavior) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____renderPhysicsCapsules) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonDefaultMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleDefaultMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureDefaultMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____boneVisualizations) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleVisualizations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____ovrSkeleton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonGO) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____scale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsInitialized_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsDataValid_k__BackingField) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsDataHighConfidence_k__BackingField) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____ShouldUseSystemGestureMaterial_k__BackingField) == 0x87, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer*, "", "OVRSkeletonRenderer");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*, "", "OVRSkeletonRenderer/BoneVisualization");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*, "", "OVRSkeletonRenderer/CapsuleVisualization");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*, "", "OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
