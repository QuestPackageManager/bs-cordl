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
class RenderTexture;
}
namespace UnityEngine {
class Material;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5857))
// CS Name: ::CubemapTest*
class CORDL_TYPE CubemapTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _cubemapMaterial, offset 0x20, size 0x8
  __declspec(property(get = __get__cubemapMaterial, put = __set__cubemapMaterial))::UnityEngine::Material* _cubemapMaterial;

  /// @brief Field _flatMaterial, offset 0x28, size 0x8
  __declspec(property(get = __get__flatMaterial, put = __set__flatMaterial))::UnityEngine::Material* _flatMaterial;

  /// @brief Field _cubemapRenderTexture, offset 0x30, size 0x8
  __declspec(property(get = __get__cubemapRenderTexture, put = __set__cubemapRenderTexture))::UnityEngine::RenderTexture* _cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset 0x38, size 0x8
  __declspec(property(get = __get__downsampledCubemapRenderTexture, put = __set__downsampledCubemapRenderTexture))::UnityEngine::RenderTexture* _downsampledCubemapRenderTexture;

  /// @brief Field _cubemapFlatTexture, offset 0x40, size 0x8
  __declspec(property(get = __get__cubemapFlatTexture, put = __set__cubemapFlatTexture))::UnityEngine::RenderTexture* _cubemapFlatTexture;

  /// @brief Field _cubePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cubePropertyId, put = setStaticF__cubePropertyId)) int32_t _cubePropertyId;

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Material*& __get__cubemapMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__cubemapMaterial() const;

  constexpr void __set__cubemapMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__flatMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__flatMaterial() const;

  constexpr void __set__flatMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::RenderTexture*& __get__cubemapRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__cubemapRenderTexture() const;

  constexpr void __set__cubemapRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTexture*& __get__downsampledCubemapRenderTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__downsampledCubemapRenderTexture() const;

  constexpr void __set__downsampledCubemapRenderTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTexture*& __get__cubemapFlatTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__cubemapFlatTexture() const;

  constexpr void __set__cubemapFlatTexture(::UnityEngine::RenderTexture* value);

  static inline void setStaticF__cubePropertyId(int32_t value);

  static inline int32_t getStaticF__cubePropertyId();

  /// @brief Method Start, addr 0x22f7500, size 0x7c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x22f757c, size 0x210, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::CubemapTest* New_ctor();

  /// @brief Method .ctor, addr 0x22f778c, size 0x8, virtual false, abstract: false, final false
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
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _cubemapMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____cubemapMaterial;

  /// @brief Field _flatMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ____flatMaterial;

  /// @brief Field _cubemapRenderTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____cubemapRenderTexture;

  /// @brief Field _downsampledCubemapRenderTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____downsampledCubemapRenderTexture;

  /// @brief Field _cubemapFlatTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____cubemapFlatTexture;

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
