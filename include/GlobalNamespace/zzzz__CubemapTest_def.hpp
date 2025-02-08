#pragma once
// IWYU pragma private; include "GlobalNamespace/CubemapTest.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CubemapTest
class CORDL_TYPE CubemapTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cubePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__cubePropertyId, put = setStaticF__cubePropertyId)) int32_t _cubePropertyId;

  /// @brief Field _cubemapFlatTexture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapFlatTexture, put = __cordl_internal_set__cubemapFlatTexture)) ::UnityW<::UnityEngine::RenderTexture> _cubemapFlatTexture;

  /// @brief Field _cubemapMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapMaterial, put = __cordl_internal_set__cubemapMaterial)) ::UnityW<::UnityEngine::Material> _cubemapMaterial;

  /// @brief Field _cubemapRenderTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapRenderTexture, put = __cordl_internal_set__cubemapRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__downsampledCubemapRenderTexture, put = __cordl_internal_set__downsampledCubemapRenderTexture)) ::UnityW<::UnityEngine::RenderTexture>
      _downsampledCubemapRenderTexture;

  /// @brief Field _flatMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__flatMaterial, put = __cordl_internal_set__flatMaterial)) ::UnityW<::UnityEngine::Material> _flatMaterial;

  static inline ::GlobalNamespace::CubemapTest* New_ctor();

  /// @brief Method Start, addr 0x3b1b14c, size 0x7c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b1b1c8, size 0x210, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapFlatTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapFlatTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__cubemapMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__cubemapMaterial();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapRenderTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__downsampledCubemapRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__downsampledCubemapRenderTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__flatMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__flatMaterial();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cubemapFlatTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__cubemapMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__cubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__downsampledCubemapRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__flatMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x3b1b3d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__cubePropertyId();

  static inline void setStaticF__cubePropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapTest(CubemapTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapTest(CubemapTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5055 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _cubemapMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____cubemapMaterial;

  /// @brief Field _flatMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____flatMaterial;

  /// @brief Field _cubemapRenderTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____downsampledCubemapRenderTexture;

  /// @brief Field _cubemapFlatTexture, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapFlatTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CubemapTest, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____flatMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapRenderTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____downsampledCubemapRenderTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapTest, ____cubemapFlatTexture) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapTest, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CubemapTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapTest*, "", "CubemapTest");
