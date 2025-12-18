#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineEditorResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(UniversalRenderPipelineEditorResources)
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineEditorResources_MaterialResources;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineEditorResources_ShaderResources;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineEditorResources;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineEditorResources_MaterialResources;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineEditorResources_ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/ShaderResources
class CORDL_TYPE UniversalRenderPipelineEditorResources_ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field autodeskInteractiveMaskedPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_autodeskInteractiveMaskedPS, put = __cordl_internal_set_autodeskInteractiveMaskedPS)) ::UnityW<::UnityEngine::Shader> autodeskInteractiveMaskedPS;

  /// @brief Field autodeskInteractivePS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_autodeskInteractivePS, put = __cordl_internal_set_autodeskInteractivePS)) ::UnityW<::UnityEngine::Shader> autodeskInteractivePS;

  /// @brief Field autodeskInteractiveTransparentPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_autodeskInteractiveTransparentPS, put = __cordl_internal_set_autodeskInteractiveTransparentPS)) ::UnityW<::UnityEngine::Shader>
      autodeskInteractiveTransparentPS;

  /// @brief Field defaultSpeedTree7PS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultSpeedTree7PS, put = __cordl_internal_set_defaultSpeedTree7PS)) ::UnityW<::UnityEngine::Shader> defaultSpeedTree7PS;

  /// @brief Field defaultSpeedTree8PS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultSpeedTree8PS, put = __cordl_internal_set_defaultSpeedTree8PS)) ::UnityW<::UnityEngine::Shader> defaultSpeedTree8PS;

  /// @brief Field terrainDetailGrassBillboardPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_terrainDetailGrassBillboardPS, put = __cordl_internal_set_terrainDetailGrassBillboardPS)) ::UnityW<::UnityEngine::Shader>
      terrainDetailGrassBillboardPS;

  /// @brief Field terrainDetailGrassPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_terrainDetailGrassPS, put = __cordl_internal_set_terrainDetailGrassPS)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassPS;

  /// @brief Field terrainDetailLitPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_terrainDetailLitPS, put = __cordl_internal_set_terrainDetailLitPS)) ::UnityW<::UnityEngine::Shader> terrainDetailLitPS;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_autodeskInteractiveMaskedPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_autodeskInteractiveMaskedPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_autodeskInteractivePS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_autodeskInteractivePS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_autodeskInteractiveTransparentPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_autodeskInteractiveTransparentPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_defaultSpeedTree7PS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_defaultSpeedTree7PS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_defaultSpeedTree8PS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_defaultSpeedTree8PS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_terrainDetailGrassBillboardPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_terrainDetailGrassBillboardPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_terrainDetailGrassPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_terrainDetailGrassPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_terrainDetailLitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_terrainDetailLitPS();

  constexpr void __cordl_internal_set_autodeskInteractiveMaskedPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_autodeskInteractivePS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_autodeskInteractiveTransparentPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_defaultSpeedTree7PS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_defaultSpeedTree8PS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_terrainDetailGrassBillboardPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_terrainDetailGrassPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_terrainDetailLitPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66bc380, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineEditorResources_ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources_ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineEditorResources_ShaderResources(UniversalRenderPipelineEditorResources_ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources_ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineEditorResources_ShaderResources(UniversalRenderPipelineEditorResources_ShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12717 };

  /// @brief Field autodeskInteractivePS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___autodeskInteractivePS;

  /// @brief Field autodeskInteractiveTransparentPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___autodeskInteractiveTransparentPS;

  /// @brief Field autodeskInteractiveMaskedPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___autodeskInteractiveMaskedPS;

  /// @brief Field terrainDetailLitPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___terrainDetailLitPS;

  /// @brief Field terrainDetailGrassPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___terrainDetailGrassPS;

  /// @brief Field terrainDetailGrassBillboardPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___terrainDetailGrassBillboardPS;

  /// @brief Field defaultSpeedTree7PS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___defaultSpeedTree7PS;

  /// @brief Field defaultSpeedTree8PS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___defaultSpeedTree8PS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___autodeskInteractivePS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___autodeskInteractiveTransparentPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___autodeskInteractiveMaskedPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___terrainDetailLitPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___terrainDetailGrassPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___terrainDetailGrassBillboardPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___defaultSpeedTree7PS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, ___defaultSpeedTree8PS) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources/MaterialResources
class CORDL_TYPE UniversalRenderPipelineEditorResources_MaterialResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field decal, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_decal, put = __cordl_internal_set_decal)) ::UnityW<::UnityEngine::Material> decal;

  /// @brief Field lit, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lit, put = __cordl_internal_set_lit)) ::UnityW<::UnityEngine::Material> lit;

  /// @brief Field particleLit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_particleLit, put = __cordl_internal_set_particleLit)) ::UnityW<::UnityEngine::Material> particleLit;

  /// @brief Field terrainLit, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_terrainLit, put = __cordl_internal_set_terrainLit)) ::UnityW<::UnityEngine::Material> terrainLit;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_decal() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_decal();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lit() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lit();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_particleLit() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_particleLit();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_terrainLit() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_terrainLit();

  constexpr void __cordl_internal_set_decal(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lit(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_particleLit(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_terrainLit(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66bc384, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineEditorResources_MaterialResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources_MaterialResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineEditorResources_MaterialResources(UniversalRenderPipelineEditorResources_MaterialResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources_MaterialResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineEditorResources_MaterialResources(UniversalRenderPipelineEditorResources_MaterialResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12718 };

  /// @brief Field lit, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lit;

  /// @brief Field particleLit, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___particleLit;

  /// @brief Field terrainLit, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___terrainLit;

  /// @brief Field decal, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___decal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources, ___lit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources, ___particleLit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources, ___terrainLit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources, ___decal) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineEditorResources
class CORDL_TYPE UniversalRenderPipelineEditorResources : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using MaterialResources = ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources;

  using ShaderResources = ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources;

  /// @brief Field materials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_materials,
                      put = __cordl_internal_set_materials)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* materials;

  /// @brief Field shaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* shaders;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* const& __cordl_internal_get_materials() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources*& __cordl_internal_get_materials();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* const& __cordl_internal_get_shaders() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources*& __cordl_internal_get_shaders();

  constexpr void __cordl_internal_set_materials(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* value);

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* value);

  /// @brief Method .ctor, addr 0x66bc378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineEditorResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineEditorResources(UniversalRenderPipelineEditorResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineEditorResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineEditorResources(UniversalRenderPipelineEditorResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12719 };

  /// @brief Field shaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources* ___shaders;

  /// @brief Field materials, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources* ___materials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources, ___shaders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources, ___materials) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineEditorResources");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_MaterialResources*, "UnityEngine.Rendering.Universal",
                       "UniversalRenderPipelineEditorResources/MaterialResources");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineEditorResources_ShaderResources*, "UnityEngine.Rendering.Universal",
                       "UniversalRenderPipelineEditorResources/ShaderResources");
