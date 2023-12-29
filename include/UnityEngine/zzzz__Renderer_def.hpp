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
struct ReflectionProbeUsage;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9992))
// CS Name: ::UnityEngine::Renderer*
class CORDL_TYPE Renderer : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

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

  __declspec(property(get = get_materials, put = set_materials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial))::UnityEngine::Material* sharedMaterial;

  __declspec(property(get = get_sharedMaterials, put = set_sharedMaterials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> sharedMaterials;

  /// @brief Method get_bounds addr 0x2b3dd98 size 0x68 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method GetMaterial addr 0x2b3de44 size 0x3c virtual false final false
  inline ::UnityEngine::Material* GetMaterial();

  /// @brief Method GetSharedMaterial addr 0x2b3de80 size 0x3c virtual false final false
  inline ::UnityEngine::Material* GetSharedMaterial();

  /// @brief Method SetMaterial addr 0x2b3debc size 0x44 virtual false final false
  inline void SetMaterial(::UnityEngine::Material* m);

  /// @brief Method GetMaterialArray addr 0x2b3df00 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> GetMaterialArray();

  /// @brief Method CopySharedMaterialArray addr 0x2b3df3c size 0x44 virtual false final false
  inline void CopySharedMaterialArray(ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> m);

  /// @brief Method SetMaterialArray addr 0x2b3df80 size 0x44 virtual false final false
  inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> m);

  /// @brief Method Internal_SetPropertyBlock addr 0x2b3dfc4 size 0x44 virtual false final false
  inline void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_SetPropertyBlockMaterialIndex addr 0x2b3e008 size 0x54 virtual false final false
  inline void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method Internal_GetPropertyBlockMaterialIndex addr 0x2b3e05c size 0x54 virtual false final false
  inline void Internal_GetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* dest, int32_t materialIndex);

  /// @brief Method SetPropertyBlock addr 0x2b3e0b0 size 0x44 virtual false final false
  inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method SetPropertyBlock addr 0x2b3e0f4 size 0x54 virtual false final false
  inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method GetPropertyBlock addr 0x2b3e148 size 0x54 virtual false final false
  inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int32_t materialIndex);

  /// @brief Method get_enabled addr 0x2b3e19c size 0x3c virtual false final false
  inline bool get_enabled();

  /// @brief Method set_enabled addr 0x2b3e1d8 size 0x44 virtual false final false
  inline void set_enabled(bool value);

  /// @brief Method get_isVisible addr 0x2b3e21c size 0x3c virtual false final false
  inline bool get_isVisible();

  /// @brief Method set_shadowCastingMode addr 0x2b3e258 size 0x44 virtual false final false
  inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);

  /// @brief Method set_receiveShadows addr 0x2b3e29c size 0x44 virtual false final false
  inline void set_receiveShadows(bool value);

  /// @brief Method set_motionVectorGenerationMode addr 0x2b3e2e0 size 0x44 virtual false final false
  inline void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode value);

  /// @brief Method set_lightProbeUsage addr 0x2b3e324 size 0x44 virtual false final false
  inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value);

  /// @brief Method set_reflectionProbeUsage addr 0x2b3e368 size 0x44 virtual false final false
  inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value);

  /// @brief Method get_sortingLayerID addr 0x2b3e3ac size 0x3c virtual false final false
  inline int32_t get_sortingLayerID();

  /// @brief Method set_sortingLayerID addr 0x2b3e3e8 size 0x44 virtual false final false
  inline void set_sortingLayerID(int32_t value);

  /// @brief Method get_sortingOrder addr 0x2b3e42c size 0x3c virtual false final false
  inline int32_t get_sortingOrder();

  /// @brief Method set_sortingOrder addr 0x2b3e468 size 0x44 virtual false final false
  inline void set_sortingOrder(int32_t value);

  /// @brief Method set_allowOcclusionWhenDynamic addr 0x2b3e4ac size 0x44 virtual false final false
  inline void set_allowOcclusionWhenDynamic(bool value);

  /// @brief Method get_isPartOfStaticBatch addr 0x2b3e4f0 size 0x3c virtual false final false
  inline bool get_isPartOfStaticBatch();

  /// @brief Method GetMaterialCount addr 0x2b3e52c size 0x3c virtual false final false
  inline int32_t GetMaterialCount();

  /// @brief Method GetSharedMaterialArray addr 0x2b3e568 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> GetSharedMaterialArray();

  /// @brief Method get_materials addr 0x2b3e5a4 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> get_materials();

  /// @brief Method set_materials addr 0x2b3e5e0 size 0x44 virtual false final false
  inline void set_materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method get_material addr 0x2b3e624 size 0x3c virtual false final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2b3e660 size 0x44 virtual false final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterial addr 0x2b3e6a4 size 0x3c virtual false final false
  inline ::UnityEngine::Material* get_sharedMaterial();

  /// @brief Method set_sharedMaterial addr 0x2b3e6e0 size 0x44 virtual false final false
  inline void set_sharedMaterial(::UnityEngine::Material* value);

  /// @brief Method get_sharedMaterials addr 0x2b3e724 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> get_sharedMaterials();

  /// @brief Method set_sharedMaterials addr 0x2b3e760 size 0x44 virtual false final false
  inline void set_sharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method GetSharedMaterials addr 0x2b3e7a4 size 0x134 virtual false final false
  inline void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m);

  static inline ::UnityEngine::Renderer* New_ctor();

  /// @brief Method .ctor addr 0x2b3e8d8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_bounds_Injected addr 0x2b3de00 size 0x44 virtual false final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

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
