#pragma once
// IWYU pragma private; include "GlobalNamespace\NoPostProcessMainEffectSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoPostProcessMainEffectSO)
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPostProcessMainEffectSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoPostProcessMainEffectSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoPostProcessMainEffectSO*, "", "NoPostProcessMainEffectSO");
// Dependencies MainEffectSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoPostProcessMainEffectSO
class CORDL_TYPE NoPostProcessMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
  // Declarations
  /// @brief Field _baseColorBoost, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoost, put = __cordl_internal_set__baseColorBoost)) float_t _baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__baseColorBoostThreshold, put = __cordl_internal_set__baseColorBoostThreshold)) float_t _baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeMaterial, put = __cordl_internal_set__fadeMaterial)) ::UnityW<::UnityEngine::Material> _fadeMaterial;

  /// @brief Field _fadeShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeShader, put = __cordl_internal_set__fadeShader)) ::UnityW<::UnityEngine::Shader> _fadeShader;

  /// @brief Field _propertyBlock, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyBlock, put = __cordl_internal_set__propertyBlock)) ::UnityEngine::MaterialPropertyBlock* _propertyBlock;

  /// @brief Field _setAlphaMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__setAlphaMaterial, put = __cordl_internal_set__setAlphaMaterial)) ::UnityW<::UnityEngine::Material> _setAlphaMaterial;

  /// @brief Field _setAlphaShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__setAlphaShader, put = __cordl_internal_set__setAlphaShader)) ::UnityW<::UnityEngine::Shader> _setAlphaShader;

  /// @brief Field _triangleMesh, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__triangleMesh, put = __cordl_internal_set__triangleMesh)) ::UnityW<::UnityEngine::Mesh> _triangleMesh;

  /// @brief Field clearScreenAlpha, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_clearScreenAlpha, put = __cordl_internal_set_clearScreenAlpha)) bool clearScreenAlpha;

  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  /// @brief Method CreateFullScreenTriangleVertexPosition, addr 0x5f46010, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3> CreateFullScreenTriangleVertexPosition(float_t z);

  /// @brief Method InitTriangleMeshIfNeeded, addr 0x5f45c3c, size 0x1c4, virtual false, abstract: false, final false
  inline void InitTriangleMeshIfNeeded();

  static inline ::GlobalNamespace::NoPostProcessMainEffectSO* New_ctor();

  /// @brief Method OnDisable, addr 0x5f45e00, size 0x30, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5f45b08, size 0x134, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PostRender, addr 0x5f45ea8, size 0x168, virtual true, abstract: false, final false
  inline void PostRender(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t fade);

  /// @brief Method PreRender, addr 0x5f45e30, size 0x78, virtual true, abstract: false, final false
  inline void PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd);

  constexpr float_t const& __cordl_internal_get__baseColorBoost() const;

  constexpr float_t& __cordl_internal_get__baseColorBoost();

  constexpr float_t const& __cordl_internal_get__baseColorBoostThreshold() const;

  constexpr float_t& __cordl_internal_get__baseColorBoostThreshold();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__fadeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__fadeMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__fadeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__fadeShader();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propertyBlock();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__setAlphaMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__setAlphaMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__setAlphaShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__setAlphaShader();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__triangleMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__triangleMesh();

  constexpr bool const& __cordl_internal_get_clearScreenAlpha() const;

  constexpr bool& __cordl_internal_get_clearScreenAlpha();

  constexpr void __cordl_internal_set__baseColorBoost(float_t value);

  constexpr void __cordl_internal_set__baseColorBoostThreshold(float_t value);

  constexpr void __cordl_internal_set__fadeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__fadeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__setAlphaMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__setAlphaShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set__triangleMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_clearScreenAlpha(bool value);

  /// @brief Method .ctor, addr 0x5f460c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasPostProcessEffect, addr 0x5f45b00, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPostProcessMainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPostProcessMainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPostProcessMainEffectSO(NoPostProcessMainEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20647 };

  /// @brief Field _fadeShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____fadeShader;

  /// @brief Field _setAlphaShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____setAlphaShader;

  /// @brief Field _baseColorBoost, offset: 0x28, size: 0x4, def value: None
  float_t ____baseColorBoost;

  /// @brief Field _baseColorBoostThreshold, offset: 0x2c, size: 0x4, def value: None
  float_t ____baseColorBoostThreshold;

  /// @brief Field _fadeMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____fadeMaterial;

  /// @brief Field _setAlphaMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____setAlphaMaterial;

  /// @brief Field clearScreenAlpha, offset: 0x40, size: 0x1, def value: None
  bool ___clearScreenAlpha;

  /// @brief Field _propertyBlock, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____propertyBlock;

  /// @brief Field _triangleMesh, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____triangleMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____fadeShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____setAlphaShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____baseColorBoost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____baseColorBoostThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____fadeMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____setAlphaMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ___clearScreenAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____propertyBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPostProcessMainEffectSO, ____triangleMesh) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NoPostProcessMainEffectSO) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
