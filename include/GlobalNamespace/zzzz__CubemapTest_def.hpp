#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapTest)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class CubemapTest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CubemapTest);
// Type: ::CubemapTest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5147))
// CS Name: ::CubemapTest*
class CORDL_TYPE CubemapTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cubemapMaterial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapMaterial, put = __cordl_internal_set__cubemapMaterial))::UnityW<::UnityEngine::Material> _cubemapMaterial;

  /// @brief Field _flatMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__flatMaterial, put = __cordl_internal_set__flatMaterial))::UnityW<::UnityEngine::Material> _flatMaterial;

  /// @brief Field _cubemapRenderTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapRenderTexture, put = __cordl_internal_set__cubemapRenderTexture))::UnityW<::UnityEngine::RenderTexture> _cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__downsampledCubemapRenderTexture,
                      put = __cordl_internal_set__downsampledCubemapRenderTexture))::UnityW<::UnityEngine::RenderTexture> _downsampledCubemapRenderTexture;

  /// @brief Field _cubemapFlatTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapFlatTexture, put = __cordl_internal_set__cubemapFlatTexture))::UnityW<::UnityEngine::RenderTexture> _cubemapFlatTexture;

  /// @brief Field _cubePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cubePropertyId, put = setStaticF__cubePropertyId)) int32_t _cubePropertyId;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__cubemapMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__cubemapMaterial() const;

  constexpr void __cordl_internal_set__cubemapMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__flatMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__flatMaterial() const;

  constexpr void __cordl_internal_set__flatMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapRenderTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapRenderTexture() const;

  constexpr void __cordl_internal_set__cubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__downsampledCubemapRenderTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__downsampledCubemapRenderTexture() const;

  constexpr void __cordl_internal_set__downsampledCubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapFlatTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapFlatTexture() const;

  constexpr void __cordl_internal_set__cubemapFlatTexture(::UnityW<::UnityEngine::RenderTexture> value);

  static inline void setStaticF__cubePropertyId(int32_t value);

  static inline int32_t getStaticF__cubePropertyId();

  /// @brief Method Start, addr 0x2323e08, size 0x7c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2323e84, size 0x210, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::CubemapTest* New_ctor();

  /// @brief Method .ctor, addr 0x2324094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapTest(CubemapTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapTest(CubemapTest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapTest();

public:
  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _cubemapMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____cubemapMaterial;

  /// @brief Field _flatMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____flatMaterial;

  /// @brief Field _cubemapRenderTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____downsampledCubemapRenderTexture;

  /// @brief Field _cubemapFlatTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapFlatTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapTest, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____flatMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapRenderTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____downsampledCubemapRenderTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapFlatTexture) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CubemapTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapTest*, "", "CubemapTest");
