#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRVignette_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVignette)
namespace GlobalNamespace {
struct __OVRVignette__FalloffType;
}
namespace GlobalNamespace {
struct __OVRVignette__MeshComplexityLevel;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRVignette__FalloffType;
}
namespace GlobalNamespace {
struct __OVRVignette__MeshComplexityLevel;
}
namespace GlobalNamespace {
class OVRVignette;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRVignette__FalloffType);
MARK_VAL_T(::GlobalNamespace::__OVRVignette__MeshComplexityLevel);
MARK_REF_PTR_T(::GlobalNamespace::OVRVignette);
// Type: ::MeshComplexityLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVignette::MeshComplexityLevel
struct CORDL_TYPE __OVRVignette__MeshComplexityLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRVignette__MeshComplexityLevel_Unwrapped
  enum struct ____OVRVignette__MeshComplexityLevel_Unwrapped : int32_t {
    __E_VerySimple = static_cast<int32_t>(0x0),
    __E_Simple = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Detailed = static_cast<int32_t>(0x3),
    __E_VeryDetailed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRVignette__MeshComplexityLevel_Unwrapped() const noexcept {
    return static_cast<____OVRVignette__MeshComplexityLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVignette__MeshComplexityLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVignette__MeshComplexityLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Detailed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Detailed;

  /// @brief Field Normal value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Normal;

  /// @brief Field Simple value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Simple;

  /// @brief Field VeryDetailed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const VeryDetailed;

  /// @brief Field VerySimple value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const VerySimple;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVignette__MeshComplexityLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVignette__MeshComplexityLevel, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FalloffType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVignette::FalloffType
struct CORDL_TYPE __OVRVignette__FalloffType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRVignette__FalloffType_Unwrapped
  enum struct ____OVRVignette__FalloffType_Unwrapped : int32_t {
    __E_Linear = static_cast<int32_t>(0x0),
    __E_Quadratic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRVignette__FalloffType_Unwrapped() const noexcept {
    return static_cast<____OVRVignette__FalloffType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVignette__FalloffType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRVignette__FalloffType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Linear value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRVignette__FalloffType const Linear;

  /// @brief Field Quadratic value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRVignette__FalloffType const Quadratic;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVignette__FalloffType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVignette__FalloffType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRVignette
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 186, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVignette*
class CORDL_TYPE OVRVignette : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FalloffType = ::GlobalNamespace::__OVRVignette__FalloffType;

  using MeshComplexityLevel = ::GlobalNamespace::__OVRVignette__MeshComplexityLevel;

  /// @brief Field Falloff, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_Falloff, put = __cordl_internal_set_Falloff))::GlobalNamespace::__OVRVignette__FalloffType Falloff;

  /// @brief Field MeshComplexity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_MeshComplexity, put = __cordl_internal_set_MeshComplexity))::GlobalNamespace::__OVRVignette__MeshComplexityLevel MeshComplexity;

  /// @brief Field QUADRATIC_FALLOFF, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_QUADRATIC_FALLOFF, put = setStaticF_QUADRATIC_FALLOFF))::StringW QUADRATIC_FALLOFF;

  /// @brief Field VignetteAspectRatio, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_VignetteAspectRatio, put = __cordl_internal_set_VignetteAspectRatio)) float_t VignetteAspectRatio;

  /// @brief Field VignetteColor, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_VignetteColor, put = __cordl_internal_set_VignetteColor))::UnityEngine::Color VignetteColor;

  /// @brief Field VignetteFalloffDegrees, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_VignetteFalloffDegrees, put = __cordl_internal_set_VignetteFalloffDegrees)) float_t VignetteFalloffDegrees;

  /// @brief Field VignetteFieldOfView, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_VignetteFieldOfView, put = __cordl_internal_set_VignetteFieldOfView)) float_t VignetteFieldOfView;

  /// @brief Field VignetteShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_VignetteShader, put = __cordl_internal_set_VignetteShader))::UnityW<::UnityEngine::Shader> VignetteShader;

  /// @brief Field _Camera, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Camera, put = __cordl_internal_set__Camera))::UnityW<::UnityEngine::Camera> _Camera;

  /// @brief Field _OpaqueMaterial, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueMaterial, put = __cordl_internal_set__OpaqueMaterial))::UnityW<::UnityEngine::Material> _OpaqueMaterial;

  /// @brief Field _OpaqueMesh, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueMesh, put = __cordl_internal_set__OpaqueMesh))::UnityW<::UnityEngine::Mesh> _OpaqueMesh;

  /// @brief Field _OpaqueMeshFilter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueMeshFilter, put = __cordl_internal_set__OpaqueMeshFilter))::UnityW<::UnityEngine::MeshFilter> _OpaqueMeshFilter;

  /// @brief Field _OpaqueMeshRenderer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueMeshRenderer, put = __cordl_internal_set__OpaqueMeshRenderer))::UnityW<::UnityEngine::MeshRenderer> _OpaqueMeshRenderer;

  /// @brief Field _OpaqueScaleAndOffset0, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueScaleAndOffset0,
                      put = __cordl_internal_set__OpaqueScaleAndOffset0))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _OpaqueScaleAndOffset0;

  /// @brief Field _OpaqueScaleAndOffset1, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__OpaqueScaleAndOffset1,
                      put = __cordl_internal_set__OpaqueScaleAndOffset1))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _OpaqueScaleAndOffset1;

  /// @brief Field _OpaqueVignetteVisible, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__OpaqueVignetteVisible, put = __cordl_internal_set__OpaqueVignetteVisible)) bool _OpaqueVignetteVisible;

  /// @brief Field _ShaderScaleAndOffset0Property, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__ShaderScaleAndOffset0Property, put = __cordl_internal_set__ShaderScaleAndOffset0Property)) int32_t _ShaderScaleAndOffset0Property;

  /// @brief Field _ShaderScaleAndOffset1Property, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__ShaderScaleAndOffset1Property, put = __cordl_internal_set__ShaderScaleAndOffset1Property)) int32_t _ShaderScaleAndOffset1Property;

  /// @brief Field _TransparentMaterial, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentMaterial, put = __cordl_internal_set__TransparentMaterial))::UnityW<::UnityEngine::Material> _TransparentMaterial;

  /// @brief Field _TransparentMesh, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentMesh, put = __cordl_internal_set__TransparentMesh))::UnityW<::UnityEngine::Mesh> _TransparentMesh;

  /// @brief Field _TransparentMeshFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentMeshFilter, put = __cordl_internal_set__TransparentMeshFilter))::UnityW<::UnityEngine::MeshFilter> _TransparentMeshFilter;

  /// @brief Field _TransparentMeshRenderer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentMeshRenderer, put = __cordl_internal_set__TransparentMeshRenderer))::UnityW<::UnityEngine::MeshRenderer> _TransparentMeshRenderer;

  /// @brief Field _TransparentScaleAndOffset0, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentScaleAndOffset0,
                      put = __cordl_internal_set__TransparentScaleAndOffset0))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _TransparentScaleAndOffset0;

  /// @brief Field _TransparentScaleAndOffset1, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__TransparentScaleAndOffset1,
                      put = __cordl_internal_set__TransparentScaleAndOffset1))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _TransparentScaleAndOffset1;

  /// @brief Field _TransparentVignetteVisible, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get__TransparentVignetteVisible, put = __cordl_internal_set__TransparentVignetteVisible)) bool _TransparentVignetteVisible;

  /// @brief Method Awake, addr 0x2918138, size 0x314, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BuildMaterials, addr 0x2917c08, size 0x3a8, virtual false, abstract: false, final false
  inline void BuildMaterials();

  /// @brief Method BuildMeshes, addr 0x2917580, size 0x688, virtual false, abstract: false, final false
  inline void BuildMeshes();

  /// @brief Method DisableRenderers, addr 0x2918100, size 0x38, virtual false, abstract: false, final false
  inline void DisableRenderers();

  /// @brief Method EnableRenderers, addr 0x2918a74, size 0x38, virtual false, abstract: false, final false
  inline void EnableRenderers();

  /// @brief Method GetTanFovAndOffsetForMonoEye, addr 0x2918644, size 0x8c, virtual false, abstract: false, final false
  inline void GetTanFovAndOffsetForMonoEye(ByRef<float_t> tanFovX, ByRef<float_t> tanFovY, ByRef<float_t> offsetX, ByRef<float_t> offsetY);

  /// @brief Method GetTanFovAndOffsetForStereoEye, addr 0x291844c, size 0x1f8, virtual false, abstract: false, final false
  inline void GetTanFovAndOffsetForStereoEye(::UnityEngine::__Camera__StereoscopicEye eye, ByRef<float_t> tanFovX, ByRef<float_t> tanFovY, ByRef<float_t> offsetX, ByRef<float_t> offsetY);

  /// @brief Method GetTriangleCount, addr 0x291755c, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetTriangleCount();

  static inline ::GlobalNamespace::OVRVignette* New_ctor();

  /// @brief Method OnBeginCameraRendering, addr 0x2918ab4, size 0x8c, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method OnDisable, addr 0x2918054, size 0xac, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2917fb0, size 0xa4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPostRender, addr 0x2918ab0, size 0x4, virtual false, abstract: false, final false
  inline void OnPostRender();

  /// @brief Method OnPreCull, addr 0x2918aac, size 0x4, virtual false, abstract: false, final false
  inline void OnPreCull();

  /// @brief Method Update, addr 0x2918704, size 0x370, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method VisibilityTest, addr 0x29186d0, size 0x34, virtual false, abstract: false, final false
  inline bool VisibilityTest(float_t scaleX, float_t scaleY, float_t offsetX, float_t offsetY);

  constexpr ::GlobalNamespace::__OVRVignette__FalloffType const& __cordl_internal_get_Falloff() const;

  constexpr ::GlobalNamespace::__OVRVignette__FalloffType& __cordl_internal_get_Falloff();

  constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const& __cordl_internal_get_MeshComplexity() const;

  constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel& __cordl_internal_get_MeshComplexity();

  constexpr float_t const& __cordl_internal_get_VignetteAspectRatio() const;

  constexpr float_t& __cordl_internal_get_VignetteAspectRatio();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_VignetteColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_VignetteColor();

  constexpr float_t const& __cordl_internal_get_VignetteFalloffDegrees() const;

  constexpr float_t& __cordl_internal_get_VignetteFalloffDegrees();

  constexpr float_t const& __cordl_internal_get_VignetteFieldOfView() const;

  constexpr float_t& __cordl_internal_get_VignetteFieldOfView();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_VignetteShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_VignetteShader();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__Camera();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__OpaqueMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__OpaqueMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__OpaqueMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__OpaqueMesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__OpaqueMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__OpaqueMeshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__OpaqueMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__OpaqueMeshRenderer();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__OpaqueScaleAndOffset0() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__OpaqueScaleAndOffset0();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__OpaqueScaleAndOffset1() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__OpaqueScaleAndOffset1();

  constexpr bool const& __cordl_internal_get__OpaqueVignetteVisible() const;

  constexpr bool& __cordl_internal_get__OpaqueVignetteVisible();

  constexpr int32_t const& __cordl_internal_get__ShaderScaleAndOffset0Property() const;

  constexpr int32_t& __cordl_internal_get__ShaderScaleAndOffset0Property();

  constexpr int32_t const& __cordl_internal_get__ShaderScaleAndOffset1Property() const;

  constexpr int32_t& __cordl_internal_get__ShaderScaleAndOffset1Property();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__TransparentMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__TransparentMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__TransparentMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__TransparentMesh();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__TransparentMeshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__TransparentMeshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__TransparentMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__TransparentMeshRenderer();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__TransparentScaleAndOffset0() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__TransparentScaleAndOffset0();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__TransparentScaleAndOffset1() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__TransparentScaleAndOffset1();

  constexpr bool const& __cordl_internal_get__TransparentVignetteVisible() const;

  constexpr bool& __cordl_internal_get__TransparentVignetteVisible();

  constexpr void __cordl_internal_set_Falloff(::GlobalNamespace::__OVRVignette__FalloffType value);

  constexpr void __cordl_internal_set_MeshComplexity(::GlobalNamespace::__OVRVignette__MeshComplexityLevel value);

  constexpr void __cordl_internal_set_VignetteAspectRatio(float_t value);

  constexpr void __cordl_internal_set_VignetteColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_VignetteFalloffDegrees(float_t value);

  constexpr void __cordl_internal_set_VignetteFieldOfView(float_t value);

  constexpr void __cordl_internal_set_VignetteShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__OpaqueMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__OpaqueMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__OpaqueMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__OpaqueMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__OpaqueScaleAndOffset0(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__OpaqueScaleAndOffset1(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__OpaqueVignetteVisible(bool value);

  constexpr void __cordl_internal_set__ShaderScaleAndOffset0Property(int32_t value);

  constexpr void __cordl_internal_set__ShaderScaleAndOffset1Property(int32_t value);

  constexpr void __cordl_internal_set__TransparentMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__TransparentMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__TransparentMeshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__TransparentMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__TransparentScaleAndOffset0(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__TransparentScaleAndOffset1(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__TransparentVignetteVisible(bool value);

  /// @brief Method .ctor, addr 0x2918b40, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_QUADRATIC_FALLOFF();

  static inline void setStaticF_QUADRATIC_FALLOFF(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVignette();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVignette(OVRVignette&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVignette(OVRVignette const&) = delete;

  /// @brief Field VignetteShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___VignetteShader;

  /// @brief Field MeshComplexity, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVignette__MeshComplexityLevel ___MeshComplexity;

  /// @brief Field Falloff, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRVignette__FalloffType ___Falloff;

  /// @brief Field VignetteFieldOfView, offset: 0x28, size: 0x4, def value: None
  float_t ___VignetteFieldOfView;

  /// @brief Field VignetteAspectRatio, offset: 0x2c, size: 0x4, def value: None
  float_t ___VignetteAspectRatio;

  /// @brief Field VignetteFalloffDegrees, offset: 0x30, size: 0x4, def value: None
  float_t ___VignetteFalloffDegrees;

  /// @brief Field VignetteColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ___VignetteColor;

  /// @brief Field _Camera, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____Camera;

  /// @brief Field _OpaqueMeshFilter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____OpaqueMeshFilter;

  /// @brief Field _TransparentMeshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____TransparentMeshFilter;

  /// @brief Field _OpaqueMeshRenderer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____OpaqueMeshRenderer;

  /// @brief Field _TransparentMeshRenderer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____TransparentMeshRenderer;

  /// @brief Field _OpaqueMesh, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____OpaqueMesh;

  /// @brief Field _TransparentMesh, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____TransparentMesh;

  /// @brief Field _OpaqueMaterial, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____OpaqueMaterial;

  /// @brief Field _TransparentMaterial, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____TransparentMaterial;

  /// @brief Field _ShaderScaleAndOffset0Property, offset: 0x90, size: 0x4, def value: None
  int32_t ____ShaderScaleAndOffset0Property;

  /// @brief Field _ShaderScaleAndOffset1Property, offset: 0x94, size: 0x4, def value: None
  int32_t ____ShaderScaleAndOffset1Property;

  /// @brief Field _TransparentScaleAndOffset0, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____TransparentScaleAndOffset0;

  /// @brief Field _TransparentScaleAndOffset1, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____TransparentScaleAndOffset1;

  /// @brief Field _OpaqueScaleAndOffset0, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____OpaqueScaleAndOffset0;

  /// @brief Field _OpaqueScaleAndOffset1, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____OpaqueScaleAndOffset1;

  /// @brief Field _OpaqueVignetteVisible, offset: 0xb8, size: 0x1, def value: None
  bool ____OpaqueVignetteVisible;

  /// @brief Field _TransparentVignetteVisible, offset: 0xb9, size: 0x1, def value: None
  bool ____TransparentVignetteVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVignette, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___VignetteShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___MeshComplexity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___Falloff) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___VignetteFieldOfView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___VignetteAspectRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___VignetteFalloffDegrees) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ___VignetteColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____Camera) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueMeshFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentMeshFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueMeshRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentMeshRenderer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueMesh) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentMesh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____ShaderScaleAndOffset0Property) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____ShaderScaleAndOffset1Property) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentScaleAndOffset0) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentScaleAndOffset1) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueScaleAndOffset0) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueScaleAndOffset1) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____OpaqueVignetteVisible) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVignette, ____TransparentVignetteVisible) == 0xb9, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVignette__FalloffType, "", "OVRVignette/FalloffType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVignette__MeshComplexityLevel, "", "OVRVignette/MeshComplexityLevel");
NEED_NO_BOX(::GlobalNamespace::OVRVignette);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVignette*, "", "OVRVignette");
