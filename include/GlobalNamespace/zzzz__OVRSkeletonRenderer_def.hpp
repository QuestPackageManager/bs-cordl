#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeletonRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class OVRSkeletonRenderer_BoneVisualization;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_CapsuleVisualization;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_ConfidenceBehavior;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeleton;
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
struct OVRSkeletonRenderer_ConfidenceBehavior;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_BoneVisualization;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_CapsuleVisualization;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior);
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider);
MARK_VAL_T(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
class CORDL_TYPE OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider {
public:
  // Declarations
  /// @brief Method GetSkeletonRendererData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData GetSkeletonRendererData();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider(OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8489 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/SkeletonRendererData
struct CORDL_TYPE OVRSkeletonRenderer_SkeletonRendererData {
public:
  // Declarations
  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_RootScale, put = set_RootScale)) float_t RootScale;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Method get_IsDataHighConfidence, addr 0x4047524, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4047510, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_RootScale, addr 0x4047500, size 0x8, virtual false, abstract: false, final false
  inline float_t get_RootScale();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x4047538, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_IsDataHighConfidence, addr 0x404752c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4047518, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_RootScale, addr 0x4047508, size 0x8, virtual false, abstract: false, final false
  inline void set_RootScale(float_t value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x4047540, size 0xc, virtual false, abstract: false, final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer_SkeletonRendererData();

  // Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr OVRSkeletonRenderer_SkeletonRendererData(float_t _RootScale_k__BackingField, bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField,
                                                     bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8490 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <RootScale>k__BackingField, offset: 0x0, size: 0x4, def value: None
  float_t _RootScale_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x4, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x5, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x6, size: 0x1, def value: None
  bool _ShouldUseSystemGestureMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _RootScale_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _IsDataValid_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _IsDataHighConfidence_k__BackingField) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x6, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/ConfidenceBehavior
struct CORDL_TYPE OVRSkeletonRenderer_ConfidenceBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped
  enum struct __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ToggleRenderer = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped() const noexcept {
    return static_cast<__OVRSkeletonRenderer_ConfidenceBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer_ConfidenceBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSkeletonRenderer_ConfidenceBehavior(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const None;

  /// @brief Field ToggleRenderer value: I32(1)
  static ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const ToggleRenderer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8491 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeletonRenderer/SystemGestureBehavior
struct CORDL_TYPE OVRSkeletonRenderer_SystemGestureBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped
  enum struct __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SwapMaterial = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped() const noexcept {
    return static_cast<__OVRSkeletonRenderer_SystemGestureBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer_SystemGestureBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSkeletonRenderer_SystemGestureBehavior(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const None;

  /// @brief Field SwapMaterial value: I32(1)
  static ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const SwapMaterial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8492 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeletonRenderer/BoneVisualization
class CORDL_TYPE OVRSkeletonRenderer_BoneVisualization : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneBegin, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneBegin, put = __cordl_internal_set_BoneBegin)) ::UnityW<::UnityEngine::Transform> BoneBegin;

  /// @brief Field BoneEnd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneEnd, put = __cordl_internal_set_BoneEnd)) ::UnityW<::UnityEngine::Transform> BoneEnd;

  /// @brief Field BoneGO, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneGO, put = __cordl_internal_set_BoneGO)) ::UnityW<::UnityEngine::GameObject> BoneGO;

  /// @brief Field Line, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Line, put = __cordl_internal_set_Line)) ::UnityW<::UnityEngine::LineRenderer> Line;

  /// @brief Field RenderMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_RenderMaterial, put = __cordl_internal_set_RenderMaterial)) ::UnityW<::UnityEngine::Material> RenderMaterial;

  /// @brief Field SystemGestureMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_SystemGestureMaterial, put = __cordl_internal_set_SystemGestureMaterial)) ::UnityW<::UnityEngine::Material> SystemGestureMaterial;

  static inline ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization* New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat,
                                                                                   float_t scale, ::UnityEngine::Transform* begin, ::UnityEngine::Transform* end);

  /// @brief Method Update, addr 0x4046e68, size 0x1d8, virtual false, abstract: false, final false
  inline void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior confidenceBehavior,
                     ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior systemGestureBehavior);

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

  /// @brief Method .ctor, addr 0x404690c, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat, float_t scale, ::UnityEngine::Transform* begin,
                    ::UnityEngine::Transform* end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer_BoneVisualization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer_BoneVisualization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeletonRenderer_BoneVisualization(OVRSkeletonRenderer_BoneVisualization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer_BoneVisualization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeletonRenderer_BoneVisualization(OVRSkeletonRenderer_BoneVisualization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8493 };

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
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___BoneGO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___BoneBegin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___BoneEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___Line) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___RenderMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, ___SystemGestureMaterial) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeletonRenderer/CapsuleVisualization
class CORDL_TYPE OVRSkeletonRenderer_CapsuleVisualization : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoneCapsule, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BoneCapsule, put = __cordl_internal_set_BoneCapsule)) ::GlobalNamespace::OVRBoneCapsule* BoneCapsule;

  /// @brief Field CapsuleGO, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_CapsuleGO, put = __cordl_internal_set_CapsuleGO)) ::UnityW<::UnityEngine::GameObject> CapsuleGO;

  /// @brief Field RenderMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_RenderMaterial, put = __cordl_internal_set_RenderMaterial)) ::UnityW<::UnityEngine::Material> RenderMaterial;

  /// @brief Field Renderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Renderer, put = __cordl_internal_set_Renderer)) ::UnityW<::UnityEngine::MeshRenderer> Renderer;

  /// @brief Field SystemGestureMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_SystemGestureMaterial, put = __cordl_internal_set_SystemGestureMaterial)) ::UnityW<::UnityEngine::Material> SystemGestureMaterial;

  /// @brief Field capsuleScale, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_capsuleScale, put = __cordl_internal_set_capsuleScale)) ::UnityEngine::Vector3 capsuleScale;

  static inline ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization* New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat,
                                                                                      float_t scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule);

  /// @brief Method Update, addr 0x4047040, size 0x320, virtual false, abstract: false, final false
  inline void Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior confidenceBehavior,
                     ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior systemGestureBehavior);

  constexpr ::GlobalNamespace::OVRBoneCapsule* const& __cordl_internal_get_BoneCapsule() const;

  constexpr ::GlobalNamespace::OVRBoneCapsule*& __cordl_internal_get_BoneCapsule();

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

  /// @brief Method .ctor, addr 0x4046ae4, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat, float_t scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSkeletonRenderer_CapsuleVisualization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer_CapsuleVisualization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSkeletonRenderer_CapsuleVisualization(OVRSkeletonRenderer_CapsuleVisualization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer_CapsuleVisualization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSkeletonRenderer_CapsuleVisualization(OVRSkeletonRenderer_CapsuleVisualization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8494 };

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
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___CapsuleGO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___BoneCapsule) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___capsuleScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___Renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___RenderMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, ___SystemGestureMaterial) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSkeletonRenderer::ConfidenceBehavior, OVRSkeletonRenderer::SystemGestureBehavior, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeletonRenderer
class CORDL_TYPE OVRSkeletonRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoneVisualization = ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization;

  using CapsuleVisualization = ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization;

  using ConfidenceBehavior = ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior;

  using IOVRSkeletonRendererDataProvider = ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider;

  using SkeletonRendererData = ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData;

  using SystemGestureBehavior = ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x8e, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset 0x8f, size 0x1
  __declspec(property(get = __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField,
                      put = __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField)) bool _ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief Field _boneVisualizations, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__boneVisualizations,
                      put = __cordl_internal_set__boneVisualizations)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* _boneVisualizations;

  /// @brief Field _capsuleDefaultMaterial, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__capsuleDefaultMaterial, put = __cordl_internal_set__capsuleDefaultMaterial)) ::UnityW<::UnityEngine::Material> _capsuleDefaultMaterial;

  /// @brief Field _capsuleMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__capsuleMaterial, put = __cordl_internal_set__capsuleMaterial)) ::UnityW<::UnityEngine::Material> _capsuleMaterial;

  /// @brief Field _capsuleRotationOffset, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__capsuleRotationOffset, put = setStaticF__capsuleRotationOffset)) ::UnityEngine::Quaternion _capsuleRotationOffset;

  /// @brief Field _capsuleVisualizations, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__capsuleVisualizations,
                      put = __cordl_internal_set__capsuleVisualizations)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* _capsuleVisualizations;

  /// @brief Field _confidenceBehavior, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__confidenceBehavior, put = __cordl_internal_set__confidenceBehavior)) ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior _confidenceBehavior;

  /// @brief Field _dataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* _dataProvider;

  /// @brief Field _ovrSkeleton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrSkeleton, put = __cordl_internal_set__ovrSkeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton> _ovrSkeleton;

  /// @brief Field _renderPhysicsCapsules, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__renderPhysicsCapsules, put = __cordl_internal_set__renderPhysicsCapsules)) bool _renderPhysicsCapsules;

  /// @brief Field _scale, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__scale, put = __cordl_internal_set__scale)) float_t _scale;

  /// @brief Field _skeletonDefaultMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonDefaultMaterial, put = __cordl_internal_set__skeletonDefaultMaterial)) ::UnityW<::UnityEngine::Material> _skeletonDefaultMaterial;

  /// @brief Field _skeletonGO, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonGO, put = __cordl_internal_set__skeletonGO)) ::UnityW<::UnityEngine::GameObject> _skeletonGO;

  /// @brief Field _skeletonMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__skeletonMaterial, put = __cordl_internal_set__skeletonMaterial)) ::UnityW<::UnityEngine::Material> _skeletonMaterial;

  /// @brief Field _systemGestureBehavior, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__systemGestureBehavior,
                      put = __cordl_internal_set__systemGestureBehavior)) ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior _systemGestureBehavior;

  /// @brief Field _systemGestureDefaultMaterial, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__systemGestureDefaultMaterial, put = __cordl_internal_set__systemGestureDefaultMaterial)) ::UnityW<::UnityEngine::Material>
      _systemGestureDefaultMaterial;

  /// @brief Field _systemGestureMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__systemGestureMaterial, put = __cordl_internal_set__systemGestureMaterial)) ::UnityW<::UnityEngine::Material> _systemGestureMaterial;

  /// @brief Method Awake, addr 0x4046028, size 0xb8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x40461c0, size 0x74c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OVRSkeletonRenderer* New_ctor();

  /// @brief Method OnDestroy, addr 0x4047360, size 0x12c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShouldInitialize, addr 0x404618c, size 0x34, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method Start, addr 0x40460e0, size 0xac, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x4046ca4, size 0x1c4, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr bool const& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* const& __cordl_internal_get__boneVisualizations() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>*& __cordl_internal_get__boneVisualizations();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__capsuleDefaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__capsuleDefaultMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__capsuleMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__capsuleMaterial();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* const& __cordl_internal_get__capsuleVisualizations() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>*& __cordl_internal_get__capsuleVisualizations();

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const& __cordl_internal_get__confidenceBehavior() const;

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior& __cordl_internal_get__confidenceBehavior();

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* const& __cordl_internal_get__dataProvider() const;

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*& __cordl_internal_get__dataProvider();

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

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const& __cordl_internal_get__systemGestureBehavior() const;

  constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior& __cordl_internal_get__systemGestureBehavior();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__systemGestureDefaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__systemGestureDefaultMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__systemGestureMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__systemGestureMaterial();

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField(bool value);

  constexpr void __cordl_internal_set__boneVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* value);

  constexpr void __cordl_internal_set__capsuleDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__capsuleMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__capsuleVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* value);

  constexpr void __cordl_internal_set__confidenceBehavior(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* value);

  constexpr void __cordl_internal_set__ovrSkeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  constexpr void __cordl_internal_set__renderPhysicsCapsules(bool value);

  constexpr void __cordl_internal_set__scale(float_t value);

  constexpr void __cordl_internal_set__skeletonDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__skeletonGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__skeletonMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__systemGestureBehavior(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior value);

  constexpr void __cordl_internal_set__systemGestureDefaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__systemGestureMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x404748c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF__capsuleRotationOffset();

  /// @brief Method get_IsDataHighConfidence, addr 0x4046000, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4045fec, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsInitialized, addr 0x4045fd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x4046014, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  static inline void setStaticF__capsuleRotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method set_IsDataHighConfidence, addr 0x4046008, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4045ff4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsInitialized, addr 0x4045fe0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x404601c, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field LINE_RENDERER_WIDTH offset 0xffffffff size 0x4
  static constexpr float_t LINE_RENDERER_WIDTH{ static_cast<float_t>(0.005f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8495 };

  /// @brief Field _dataProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* ____dataProvider;

  /// @brief Field _confidenceBehavior, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior ____confidenceBehavior;

  /// @brief Field _systemGestureBehavior, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior ____systemGestureBehavior;

  /// @brief Field _renderPhysicsCapsules, offset: 0x30, size: 0x1, def value: None
  bool ____renderPhysicsCapsules;

  /// @brief Field _skeletonMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____skeletonMaterial;

  /// @brief Field _skeletonDefaultMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____skeletonDefaultMaterial;

  /// @brief Field _capsuleMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____capsuleMaterial;

  /// @brief Field _capsuleDefaultMaterial, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____capsuleDefaultMaterial;

  /// @brief Field _systemGestureMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____systemGestureMaterial;

  /// @brief Field _systemGestureDefaultMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____systemGestureDefaultMaterial;

  /// @brief Field _boneVisualizations, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* ____boneVisualizations;

  /// @brief Field _capsuleVisualizations, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* ____capsuleVisualizations;

  /// @brief Field _ovrSkeleton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____ovrSkeleton;

  /// @brief Field _skeletonGO, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____skeletonGO;

  /// @brief Field _scale, offset: 0x88, size: 0x4, def value: None
  float_t ____scale;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x8c, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x8d, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x8e, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x8f, size: 0x1, def value: None
  bool ____ShouldUseSystemGestureMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____dataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____confidenceBehavior) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureBehavior) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____renderPhysicsCapsules) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonDefaultMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleDefaultMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____systemGestureDefaultMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____boneVisualizations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____capsuleVisualizations) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____ovrSkeleton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____skeletonGO) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____scale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsInitialized_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsDataValid_k__BackingField) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____IsDataHighConfidence_k__BackingField) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonRenderer, ____ShouldUseSystemGestureMaterial_k__BackingField) == 0x8f, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer*, "", "OVRSkeletonRenderer");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*, "", "OVRSkeletonRenderer/BoneVisualization");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*, "", "OVRSkeletonRenderer/CapsuleVisualization");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*, "", "OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
