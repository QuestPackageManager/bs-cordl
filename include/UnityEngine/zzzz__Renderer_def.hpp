#pragma once
// IWYU pragma private; include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
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
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Renderer
class CORDL_TYPE Renderer : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(put = set_allowGPUDrivenRendering)) bool allowGPUDrivenRendering;

  __declspec(property(put = set_allowOcclusionWhenDynamic)) bool allowOcclusionWhenDynamic;

  __declspec(property(get = get_bounds, put = set_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_isPartOfStaticBatch)) bool isPartOfStaticBatch;

  __declspec(property(put = set_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage;

  __declspec(property(get = get_lightmapScaleOffset)) ::UnityEngine::Vector4 lightmapScaleOffset;

  __declspec(property(put = set_localBounds)) ::UnityEngine::Bounds localBounds;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_materials, put = set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> materials;

  __declspec(property(put = set_motionVectorGenerationMode)) ::UnityEngine::MotionVectorGenerationMode motionVectorGenerationMode;

  __declspec(property(put = set_receiveShadows)) bool receiveShadows;

  __declspec(property(put = set_reflectionProbeUsage)) ::UnityEngine::Rendering::ReflectionProbeUsage reflectionProbeUsage;

  __declspec(property(put = set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial)) ::UnityW<::UnityEngine::Material> sharedMaterial;

  __declspec(property(get = get_sharedMaterials, put = set_sharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> sharedMaterials;

  __declspec(property(put = set_smallMeshCulling)) bool smallMeshCulling;

  __declspec(property(get = get_sortingGroupID)) int32_t sortingGroupID;

  __declspec(property(get = get_sortingGroupOrder)) int32_t sortingGroupOrder;

  __declspec(property(get = get_sortingLayerID, put = set_sortingLayerID)) int32_t sortingLayerID;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) int32_t sortingOrder;

  /// @brief Method CopySharedMaterialArray, addr 0x68c42bc, size 0x90, virtual false, abstract: false, final false
  inline void CopySharedMaterialArray(::ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> m);

  /// @brief Method CopySharedMaterialArray_Injected, addr 0x68c434c, size 0x44, virtual false, abstract: false, final false
  static inline void CopySharedMaterialArray_Injected(::System::IntPtr _unity_self, ::ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> m);

  /// @brief Method GetLightmapST, addr 0x68c5444, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType lt);

  /// @brief Method GetLightmapST_Injected, addr 0x68c54f0, size 0x54, virtual false, abstract: false, final false
  static inline void GetLightmapST_Injected(::System::IntPtr _unity_self, ::UnityEngineInternal::LightmapType lt, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetMaterial, addr 0x68c3de4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial();

  /// @brief Method GetMaterialArray, addr 0x68c4200, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterialArray();

  /// @brief Method GetMaterialArray_Injected, addr 0x68c4280, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetMaterialArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetMaterialCount, addr 0x68c554c, size 0x80, virtual false, abstract: false, final false
  inline int32_t GetMaterialCount();

  /// @brief Method GetMaterialCount_Injected, addr 0x68c55cc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMaterialCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetMaterial_Injected, addr 0x68c3f34, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPropertyBlock, addr 0x68c46bc, size 0x4, virtual false, abstract: false, final false
  inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method GetSharedMaterial, addr 0x68c3f70, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetSharedMaterial();

  /// @brief Method GetSharedMaterialArray, addr 0x68c5608, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterialArray();

  /// @brief Method GetSharedMaterialArray_Injected, addr 0x68c5688, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> GetSharedMaterialArray_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSharedMaterial_Injected, addr 0x68c40c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSharedMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetSharedMaterials, addr 0x68c56e4, size 0xf8, virtual false, abstract: false, final false
  inline void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* m);

  /// @brief Method Internal_GetPropertyBlock, addr 0x68c45a4, size 0xd0, virtual false, abstract: false, final false
  inline void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest);

  /// @brief Method Internal_GetPropertyBlock_Injected, addr 0x68c4674, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_GetPropertyBlock_Injected(::System::IntPtr _unity_self, ::System::IntPtr dest);

  /// @brief Method Internal_SetPropertyBlock, addr 0x68c44c8, size 0x98, virtual false, abstract: false, final false
  inline void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_SetPropertyBlock_Injected, addr 0x68c4560, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_SetPropertyBlock_Injected(::System::IntPtr _unity_self, ::System::IntPtr properties);

  static inline ::UnityEngine::Renderer* New_ctor();

  /// @brief Method SetMaterial, addr 0x68c40fc, size 0xc0, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* m);

  /// @brief Method SetMaterialArray, addr 0x68c44a8, size 0x20, virtual false, abstract: false, final false
  inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m);

  /// @brief Method SetMaterialArray, addr 0x68c4390, size 0xc4, virtual false, abstract: false, final false
  inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m, int32_t length);

  /// @brief Method SetMaterialArray_Injected, addr 0x68c4454, size 0x54, virtual false, abstract: false, final false
  static inline void SetMaterialArray_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m, int32_t length);

  /// @brief Method SetMaterial_Injected, addr 0x68c41bc, size 0x44, virtual false, abstract: false, final false
  static inline void SetMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr m);

  /// @brief Method SetPropertyBlock, addr 0x68c46b8, size 0x4, virtual false, abstract: false, final false
  inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method .ctor, addr 0x68c22d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bounds, addr 0x68c3b48, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x68c3bf8, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_enabled, addr 0x68c46c0, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x68c4740, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPartOfStaticBatch, addr 0x68c5388, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPartOfStaticBatch();

  /// @brief Method get_isPartOfStaticBatch_Injected, addr 0x68c5408, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPartOfStaticBatch_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lightmapScaleOffset, addr 0x68c5544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_lightmapScaleOffset();

  /// @brief Method get_material, addr 0x68c56cc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_materials, addr 0x68c56c4, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_materials();

  /// @brief Method get_sharedMaterial, addr 0x68c56d4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_sharedMaterial();

  /// @brief Method get_sharedMaterials, addr 0x68c56dc, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> get_sharedMaterials();

  /// @brief Method get_sortingGroupID, addr 0x68c513c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupID();

  /// @brief Method get_sortingGroupID_Injected, addr 0x68c51bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingGroupOrder, addr 0x68c51f8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingGroupOrder();

  /// @brief Method get_sortingGroupOrder_Injected, addr 0x68c5278, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingGroupOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingLayerID, addr 0x68c4e1c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingLayerID();

  /// @brief Method get_sortingLayerID_Injected, addr 0x68c4e9c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingLayerID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingOrder, addr 0x68c4fac, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_sortingOrder();

  /// @brief Method get_sortingOrder_Injected, addr 0x68c502c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sortingOrder_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_allowGPUDrivenRendering, addr 0x68c49f8, size 0x90, virtual false, abstract: false, final false
  inline void set_allowGPUDrivenRendering(bool value);

  /// @brief Method set_allowGPUDrivenRendering_Injected, addr 0x68c4a88, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowGPUDrivenRendering_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_allowOcclusionWhenDynamic, addr 0x68c52b4, size 0x90, virtual false, abstract: false, final false
  inline void set_allowOcclusionWhenDynamic(bool value);

  /// @brief Method set_allowOcclusionWhenDynamic_Injected, addr 0x68c5344, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowOcclusionWhenDynamic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_bounds, addr 0x68c3c3c, size 0x90, virtual false, abstract: false, final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method set_bounds_Injected, addr 0x68c3ccc, size 0x44, virtual false, abstract: false, final false
  static inline void set_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_enabled, addr 0x68c477c, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x68c480c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lightProbeUsage, addr 0x68c4c74, size 0x90, virtual false, abstract: false, final false
  inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value);

  /// @brief Method set_lightProbeUsage_Injected, addr 0x68c4d04, size 0x44, virtual false, abstract: false, final false
  static inline void set_lightProbeUsage_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::LightProbeUsage value);

  /// @brief Method set_localBounds, addr 0x68c3d10, size 0x90, virtual false, abstract: false, final false
  inline void set_localBounds(::UnityEngine::Bounds value);

  /// @brief Method set_localBounds_Injected, addr 0x68c3da0, size 0x44, virtual false, abstract: false, final false
  static inline void set_localBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> value);

  /// @brief Method set_material, addr 0x68c56d0, size 0x4, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_materials, addr 0x68c56c8, size 0x4, virtual false, abstract: false, final false
  inline void set_materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_motionVectorGenerationMode, addr 0x68c4ba0, size 0x90, virtual false, abstract: false, final false
  inline void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode value);

  /// @brief Method set_motionVectorGenerationMode_Injected, addr 0x68c4c30, size 0x44, virtual false, abstract: false, final false
  static inline void set_motionVectorGenerationMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::MotionVectorGenerationMode value);

  /// @brief Method set_receiveShadows, addr 0x68c4924, size 0x90, virtual false, abstract: false, final false
  inline void set_receiveShadows(bool value);

  /// @brief Method set_receiveShadows_Injected, addr 0x68c49b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_receiveShadows_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_reflectionProbeUsage, addr 0x68c4d48, size 0x90, virtual false, abstract: false, final false
  inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value);

  /// @brief Method set_reflectionProbeUsage_Injected, addr 0x68c4dd8, size 0x44, virtual false, abstract: false, final false
  static inline void set_reflectionProbeUsage_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeUsage value);

  /// @brief Method set_shadowCastingMode, addr 0x68c4850, size 0x90, virtual false, abstract: false, final false
  inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);

  /// @brief Method set_shadowCastingMode_Injected, addr 0x68c48e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_shadowCastingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadowCastingMode value);

  /// @brief Method set_sharedMaterial, addr 0x68c56d8, size 0x4, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method set_sharedMaterials, addr 0x68c56e0, size 0x4, virtual false, abstract: false, final false
  inline void set_sharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method set_smallMeshCulling, addr 0x68c4acc, size 0x90, virtual false, abstract: false, final false
  inline void set_smallMeshCulling(bool value);

  /// @brief Method set_smallMeshCulling_Injected, addr 0x68c4b5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_smallMeshCulling_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sortingLayerID, addr 0x68c4ed8, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method set_sortingLayerID_Injected, addr 0x68c4f68, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingLayerID_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_sortingOrder, addr 0x68c5068, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_sortingOrder_Injected, addr 0x68c50f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortingOrder_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Renderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Renderer(Renderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Renderer(Renderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Renderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
