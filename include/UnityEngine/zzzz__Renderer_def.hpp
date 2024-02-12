#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngineInternal {
struct LightmapType;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Renderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Renderer);
// Type: UnityEngine::Renderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8982))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8796))
// CS Name: ::UnityEngine::Renderer*
class CORDL_TYPE Renderer : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_bounds, put = set_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(put = set_localBounds))::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_isVisible)) bool isVisible;

  __declspec(property(put = set_shadowCastingMode))::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode;

  __declspec(property(put = set_receiveShadows)) bool receiveShadows;

  __declspec(property(put = set_motionVectorGenerationMode))::UnityEngine::MotionVectorGenerationMode motionVectorGenerationMode;

  __declspec(property(put = set_lightProbeUsage))::UnityEngine::Rendering::LightProbeUsage lightProbeUsage;

  __declspec(property(put = set_reflectionProbeUsage))::UnityEngine::Rendering::ReflectionProbeUsage reflectionProbeUsage;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  __declspec(property(put = set_allowOcclusionWhenDynamic)) bool allowOcclusionWhenDynamic;

  __declspec(property(get = get_isPartOfStaticBatch)) bool isPartOfStaticBatch;

  __declspec(property(get = get_lightmapScaleOffset))::UnityEngine::Vector4 lightmapScaleOffset;

  __declspec(property(get = get_materials, put = set_materials))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> materials;

  __declspec(property(get = get_material, put = set_material))::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial))::UnityW<::UnityEngine::Material> sharedMaterial;

  __declspec(property(get = get_sharedMaterials, put = set_sharedMaterials))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> sharedMaterials;

  /// @brief Method get_bounds, addr 0x2ca3458, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method set_bounds, addr 0x2ca3504, size 0x44, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds, addr 0x2ca358c, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method GetMaterial, addr 0x2ca3614, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial();

  /// @brief Method GetSharedMaterial, addr 0x2ca3650, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetSharedMaterial();

  /// @brief Method SetMaterial, addr 0x2ca368c, size 0x44, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* m);

  /// @brief Method GetMaterialArray, addr 0x2ca36d0, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterialArray();

  /// @brief Method CopySharedMaterialArray, addr 0x2ca370c, size 0x44, virtual false, abstract: false, final false
  inline void CopySharedMaterialArray(ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> m);

  /// @brief Method SetMaterialArray, addr 0x2ca3750, size 0x44, virtual false, abstract: false, final false
  inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m);

  /// @brief Method Internal_SetPropertyBlock, addr 0x2ca3794, size 0x44, virtual false, abstract: false, final false
  inline void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_GetPropertyBlock, addr 0x2ca37d8, size 0x44, virtual false, abstract: false, final false
  inline void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest);

  /// @brief Method Internal_SetPropertyBlockMaterialIndex, addr 0x2ca381c, size 0x54, virtual false, abstract: false, final false
  inline void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method Internal_GetPropertyBlockMaterialIndex, addr 0x2ca3870, size 0x54, virtual false, abstract: false, final false
  inline void Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* dest, int32_t materialIndex);

  /// @brief Method SetPropertyBlock, addr 0x2ca38c4, size 0x44, virtual false, abstract: false, final false
  inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method SetPropertyBlock, addr 0x2ca3908, size 0x54, virtual false, abstract: false, final false
  inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method GetPropertyBlock, addr 0x2ca395c, size 0x44, virtual false, abstract: false, final false
  inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method GetPropertyBlock, addr 0x2ca39a0, size 0x54, virtual false, abstract: false, final false
  inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method get_enabled, addr 0x2ca39f4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method set_enabled, addr 0x2ca3a30, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method get_isVisible, addr 0x2ca3a74, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isVisible();

  /// @brief Method set_shadowCastingMode, addr 0x2ca3ab0, size 0x44, virtual false, abstract: false, final false
  inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);

  /// @brief Method set_receiveShadows, addr 0x2ca3af4, size 0x44, virtual false, abstract: false, final false
  inline void set_receiveShadows(bool value);

  /// @brief Method set_motionVectorGenerationMode, addr 0x2ca3b38, size 0x44, virtual false, abstract: false, final false
  inline void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode value);

  /// @brief Method set_lightProbeUsage, addr 0x2ca3b7c, size 0x44, virtual false, abstract: false, final false
  inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value);

  /// @brief Method set_reflectionProbeUsage, addr 0x2ca3bc0, size 0x44, virtual false, abstract: false, final false
  inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value);

  /// @brief Method get_sortingLayerID, addr 0x2ca3c04, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method set_sortingLayerID, addr 0x2ca3c40, size 0x44, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method get_sortingOrder, addr 0x2ca3c84, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method set_sortingOrder, addr 0x2ca3cc0, size 0x44, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_allowOcclusionWhenDynamic, addr 0x2ca3d04, size 0x44, virtual false, abstract: false, final false
  inline void set_allowOcclusionWhenDynamic(bool value);

  /// @brief Method get_isPartOfStaticBatch, addr 0x2ca3d48, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPartOfStaticBatch();

  /// @brief Method GetLightmapST, addr 0x2ca3d84, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType lt);

  /// @brief Method get_lightmapScaleOffset, addr 0x2ca3e38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_lightmapScaleOffset();

  /// @brief Method GetMaterialCount, addr 0x2ca3e40, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetMaterialCount();

  /// @brief Method GetSharedMaterialArray, addr 0x2ca3e7c, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterialArray();

  /// @brief Method get_materials, addr 0x2ca3eb8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_materials();

  /// @brief Method set_materials, addr 0x2ca3ef4, size 0x44, virtual false, abstract: false, final false
  inline void set_materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method get_material, addr 0x2ca3f38, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method set_material, addr 0x2ca3f74, size 0x44, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterial, addr 0x2ca3fb8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  /// @brief Method set_sharedMaterial, addr 0x2ca3ff4, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterials, addr 0x2ca4038, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_sharedMaterials();

  /// @brief Method set_sharedMaterials, addr 0x2ca4074, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method GetSharedMaterials, addr 0x2ca40b8, size 0x134, virtual false, abstract: false, final false
  inline void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* m);

  static inline ::UnityEngine::Renderer* New_ctor();

  /// @brief Method .ctor, addr 0x2ca41ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bounds_Injected, addr 0x2ca34c0, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method set_bounds_Injected, addr 0x2ca3548, size 0x44, virtual false, abstract: false, final false
  inline void set_bounds_Injected(ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_localBounds_Injected, addr 0x2ca35d0, size 0x44, virtual false, abstract: false, final false
  inline void set_localBounds_Injected(ByRef<::UnityEngine::Bounds> value);

  /// @brief Method GetLightmapST_Injected, addr 0x2ca3de4, size 0x54, virtual false, abstract: false, final false
  inline void GetLightmapST_Injected(::UnityEngineInternal::LightmapType lt, ByRef<::UnityEngine::Vector4> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Renderer(Renderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Renderer(Renderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Renderer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Renderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
