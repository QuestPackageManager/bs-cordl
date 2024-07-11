#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Defines.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Defines)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Defines;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Defines);
// Type: HoudiniEngineUnity::HEU_Defines
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Defines*
class CORDL_TYPE HEU_Defines : public ::System::Object {
public:
  // Declarations
  /// @brief Field DEFAULT_MATERIAL_KEY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DEFAULT_MATERIAL_KEY, put = setStaticF_DEFAULT_MATERIAL_KEY)) int32_t DEFAULT_MATERIAL_KEY;

  /// @brief Field EDITABLE_MATERIAL_KEY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_EDITABLE_MATERIAL_KEY, put = setStaticF_EDITABLE_MATERIAL_KEY)) int32_t EDITABLE_MATERIAL_KEY;

  /// @brief Field HEU_BAKED_ASSETS_PATH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEU_BAKED_ASSETS_PATH, put = setStaticF_HEU_BAKED_ASSETS_PATH))::StringW HEU_BAKED_ASSETS_PATH;

  /// @brief Field HEU_ENGINE_ASSETS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEU_ENGINE_ASSETS, put = setStaticF_HEU_ENGINE_ASSETS))::StringW HEU_ENGINE_ASSETS;

  /// @brief Field HEU_PLUGIN_PATH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEU_PLUGIN_PATH, put = setStaticF_HEU_PLUGIN_PATH))::StringW HEU_PLUGIN_PATH;

  /// @brief Field HEU_TEXTURES_PATH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEU_TEXTURES_PATH, put = setStaticF_HEU_TEXTURES_PATH))::StringW HEU_TEXTURES_PATH;

  static inline ::HoudiniEngineUnity::HEU_Defines* New_ctor();

  /// @brief Method .ctor, addr 0x25957c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_DEFAULT_MATERIAL_KEY();

  static inline int32_t getStaticF_EDITABLE_MATERIAL_KEY();

  static inline ::StringW getStaticF_HEU_BAKED_ASSETS_PATH();

  static inline ::StringW getStaticF_HEU_ENGINE_ASSETS();

  static inline ::StringW getStaticF_HEU_PLUGIN_PATH();

  static inline ::StringW getStaticF_HEU_TEXTURES_PATH();

  static inline void setStaticF_DEFAULT_MATERIAL_KEY(int32_t value);

  static inline void setStaticF_EDITABLE_MATERIAL_KEY(int32_t value);

  static inline void setStaticF_HEU_BAKED_ASSETS_PATH(::StringW value);

  static inline void setStaticF_HEU_ENGINE_ASSETS(::StringW value);

  static inline void setStaticF_HEU_PLUGIN_PATH(::StringW value);

  static inline void setStaticF_HEU_TEXTURES_PATH(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Defines();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Defines", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Defines(HEU_Defines&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Defines", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Defines(HEU_Defines const&) = delete;

  /// @brief Field COOK_LOGS_FILE offset 0xffffffff size 0x8
  static constexpr ::ConstString COOK_LOGS_FILE{ u"cook_logs_file.txt" };

  /// @brief Field CURVE_CLOSE_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString CURVE_CLOSE_PARAM{ u"close" };

  /// @brief Field CURVE_COORDS_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString CURVE_COORDS_PARAM{ u"coords" };

  /// @brief Field CURVE_METHOD_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString CURVE_METHOD_PARAM{ u"method" };

  /// @brief Field CURVE_REVERSE_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString CURVE_REVERSE_PARAM{ u"reverse" };

  /// @brief Field CURVE_TYPE_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString CURVE_TYPE_PARAM{ u"type" };

  /// @brief Field DEFAULT_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_COLLISION_GEO{ u"collision_geo" };

  /// @brief Field DEFAULT_COLLISION_TRIGGER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_COLLISION_TRIGGER{ u"trigger" };

  /// @brief Field DEFAULT_CONVEX_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_CONVEX_COLLISION_GEO{ u"convex" };

  /// @brief Field DEFAULT_CURVE_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_CURVE_SHADER{ u"LineShader" };

  /// @brief Field DEFAULT_CURVE_SHADER_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_CURVE_SHADER_HDRP{ u"HDRP/Color" };

  /// @brief Field DEFAULT_CURVE_SHADER_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_CURVE_SHADER_URP{ u"URP/Color" };

  /// @brief Field DEFAULT_INSTANCE_PREFIX_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_INSTANCE_PREFIX_ATTR{ u"instance_prefix" };

  /// @brief Field DEFAULT_MATERIAL offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_MATERIAL{ u"HEU_DEFAULT_MATERIAL" };

  /// @brief Field DEFAULT_RENDERED_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_RENDERED_COLLISION_GEO{ u"rendered_collision_geo" };

  /// @brief Field DEFAULT_RENDERED_CONVEX_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_RENDERED_CONVEX_COLLISION_GEO{ u"rendered_convex_collision_geo" };

  /// @brief Field DEFAULT_SIMPLE_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_SIMPLE_COLLISION_GEO{ u"collision_geo_simple" };

  /// @brief Field DEFAULT_SIMPLE_RENDERED_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_SIMPLE_RENDERED_COLLISION_GEO{ u"rendered_collision_geo_simple" };

  /// @brief Field DEFAULT_SIMPLE_RENDERED_CONVEX_COLLISION_GEO offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_SIMPLE_RENDERED_CONVEX_COLLISION_GEO{ u"rendered_convex_collision_geo_simple" };

  /// @brief Field DEFAULT_STANDARD_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER{ u"HoudiniStandard" };

  /// @brief Field DEFAULT_STANDARD_SHADER_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_HDRP{ u"HDRP/StandardLit" };

  /// @brief Field DEFAULT_STANDARD_SHADER_HDRP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_HDRP_SPECULAR{ u"HDRP/SpecularLit" };

  /// @brief Field DEFAULT_STANDARD_SHADER_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_SPECULAR{ u"HoudiniSpecular" };

  /// @brief Field DEFAULT_STANDARD_SHADER_SPECULAR_LEGACY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_SPECULAR_LEGACY{ u"Legacy/SpecularVertexColor" };

  /// @brief Field DEFAULT_STANDARD_SHADER_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_URP{ u"URP/StandardLit" };

  /// @brief Field DEFAULT_STANDARD_SHADER_URP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_STANDARD_SHADER_URP_SPECULAR{ u"URP/SpecularLit" };

  /// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_MATERIAL_PATH{ u"Resources/unity_builtin_extra::name::Default-Terrain-Standard" };

  /// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_MATERIAL_PATH_HDRP{ u"Packages/com.unity.render-pipelines.high-definition/Runtime/RenderPipelineResources/Material/DefaultHDTerrainMaterial.mat" };

  /// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_MATERIAL_PATH_URP{ u"Packages/com.unity.render-pipelines.universal/Runtime/Materials/TerrainLit.mat" };

  /// @brief Field DEFAULT_TERRAIN_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_SHADER{ u"Nature/Terrain/Standard" };

  /// @brief Field DEFAULT_TERRAIN_SHADER_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_SHADER_HDRP{ u"HDRP/TerrainLit" };

  /// @brief Field DEFAULT_TERRAIN_SHADER_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TERRAIN_SHADER_URP{ u"Universal Render Pipeline/Terrain/Lit" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER{ u"HoudiniStandardAlpha" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_HDRP{ u"HDRP/StandardLitAlpha" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_HDRP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_HDRP_SPECULAR{ u"HDRP/SpecularLitAlpha" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_SPECULAR{ u"HoudiniSpecularAlpha" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_SPECULAR_LEGACY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_SPECULAR_LEGACY{ u"Legacy/AlphaSpecularVertexColor" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_URP{ u"URP/StandardLitAlpha" };

  /// @brief Field DEFAULT_TRANSPARENT_SHADER_URP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_TRANSPARENT_SHADER_URP_SPECULAR{ u"URP/SpecularLitAlpha" };

  /// @brief Field DEFAULT_UNITY_BUILTIN_RESOURCES offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_BUILTIN_RESOURCES{ u"Resources/unity_builtin_extra" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_HEIGHT_RANGE offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_HEIGHT_RANGE{ u"unity_hf_height_range" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_METALLIC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_METALLIC_ATTR{ u"unity_hf_metallic" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_NORMAL_SCALE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_NORMAL_SCALE_ATTR{ u"unity_hf_normal_scale" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_SMOOTHNESS_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_SMOOTHNESS_ATTR{ u"unity_hf_smoothness" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_SPECULAR_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_SPECULAR_ATTR{ u"unity_hf_specular" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_FILE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_FILE_ATTR{ u"unity_hf_terraindata_export_file" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_PATH{ u"unity_hf_terraindata_export_path" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_FILE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_FILE_ATTR{ u"unity_hf_terraindata_file" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINLAYER_FILE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TERRAINLAYER_FILE_ATTR{ u"unity_hf_terrainlayer_file" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_DIFFUSE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_DIFFUSE_ATTR{ u"unity_hf_texture_diffuse" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_MASK_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_MASK_ATTR{ u"unity_hf_texture_mask" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_NORMAL_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_NORMAL_ATTR{ u"unity_hf_texture_normal" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TILE_OFFSET_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TILE_OFFSET_ATTR{ u"unity_hf_tile_offset" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TILE_SIZE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_TILE_SIZE_ATTR{ u"unity_hf_tile_size" };

  /// @brief Field DEFAULT_UNITY_HEIGHTFIELD_YPOS offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_HEIGHTFIELD_YPOS{ u"unity_hf_ypos" };

  /// @brief Field DEFAULT_UNITY_INPUT_MESH_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_INPUT_MESH_ATTR{ u"unity_input_mesh_name" };

  /// @brief Field DEFAULT_UNITY_INSTANCE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_INSTANCE_ATTR{ u"unity_instance" };

  /// @brief Field DEFAULT_UNITY_LAYER_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_LAYER_ATTR{ u"unity_layer" };

  /// @brief Field DEFAULT_UNITY_MATERIAL_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_MATERIAL_ATTR{ u"unity_material" };

  /// @brief Field DEFAULT_UNITY_MESH_READABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_MESH_READABLE{ u"unity_mesh_readable" };

  /// @brief Field DEFAULT_UNITY_SCRIPT_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_SCRIPT_ATTR{ u"unity_script" };

  /// @brief Field DEFAULT_UNITY_STATIC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_STATIC_ATTR{ u"unity_static" };

  /// @brief Field DEFAULT_UNITY_SUBMATERIAL_INDEX_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_SUBMATERIAL_INDEX_ATTR{ u"unity_sub_material_index" };

  /// @brief Field DEFAULT_UNITY_SUBMATERIAL_NAME_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_SUBMATERIAL_NAME_ATTR{ u"unity_sub_material_name" };

  /// @brief Field DEFAULT_UNITY_TAG_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_UNITY_TAG_ATTR{ u"unity_tag" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER{ u"HoudiniStandard" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_HDRP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_HDRP{ u"HDRP/StandardLit" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_HDRP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_HDRP_SPECULAR{ u"HDRP/SpecularLit" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_SPECULAR{ u"HoudiniSpecular" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_SPECULAR_LEGACY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_SPECULAR_LEGACY{ u"Legacy/SpecularVertexColor" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_URP offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_URP{ u"URP/StandardLit" };

  /// @brief Field DEFAULT_VERTEXCOLOR_SHADER_URP_SPECULAR offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_VERTEXCOLOR_SHADER_URP_SPECULAR{ u"URP/SpecularLit" };

  /// @brief Field EDITABLE_MATERIAL offset 0xffffffff size 0x8
  static constexpr ::ConstString EDITABLE_MATERIAL{ u"HEU_EDITABLE_MATERIAL" };

  /// @brief Field HAPI_ATTRIB_ALPHA offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_ALPHA{ u"Alpha" };

  /// @brief Field HAPI_ATTRIB_ORIENT offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_ORIENT{ u"orient" };

  /// @brief Field HAPI_ATTRIB_ROTATION offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_ROTATION{ u"rot" };

  /// @brief Field HAPI_ATTRIB_SCALE offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_SCALE{ u"scale" };

  /// @brief Field HAPI_CURVE_LOD offset 0xffffffff size 0x4
  static constexpr float_t HAPI_CURVE_LOD{ 8.0 };

  /// @brief Field HAPI_CURVE_REFINE_TO_LINEAR offset 0xffffffff size 0x1
  static constexpr bool HAPI_CURVE_REFINE_TO_LINEAR{ true };

  /// @brief Field HAPI_HANDLE_TRANSFORM offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_HANDLE_TRANSFORM{ u"xform" };

  /// @brief Field HAPI_HEIGHTFIELD_LAYERNAME_HEIGHT offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_HEIGHTFIELD_LAYERNAME_HEIGHT{ u"height" };

  /// @brief Field HAPI_HEIGHTFIELD_LAYERNAME_MASK offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_HEIGHTFIELD_LAYERNAME_MASK{ u"mask" };

  /// @brief Field HAPI_HEIGHTFIELD_TILE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_HEIGHTFIELD_TILE_ATTR{ u"tile" };

  /// @brief Field HAPI_MAX_PAGE_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_MAX_PAGE_SIZE{ static_cast<int32_t>(0x4e20) };

  /// @brief Field HAPI_MAX_UVS offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_MAX_UVS{ static_cast<int32_t>(0x8) };

  /// @brief Field HAPI_MAX_VERTICES_PER_FACE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_MAX_VERTICES_PER_FACE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_OBJMERGE_PACK_GEOMETRY offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_OBJMERGE_PACK_GEOMETRY{ u"pack" };

  /// @brief Field HAPI_OBJMERGE_TRANSFORM_PARAM offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_OBJMERGE_TRANSFORM_PARAM{ u"xformtype" };

  /// @brief Field HAPI_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_PATH{ u"HAPI_PATH" };

  /// @brief Field HAPI_SEC_BEFORE_PROGRESS_BAR_SHOW offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_SEC_BEFORE_PROGRESS_BAR_SHOW{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_VOLUME_POSITION_MULT offset 0xffffffff size 0x4
  static constexpr float_t HAPI_VOLUME_POSITION_MULT{ 2.0 };

  /// @brief Field HAPI_VOLUME_SURFACE_DELTA_MULT offset 0xffffffff size 0x4
  static constexpr float_t HAPI_VOLUME_SURFACE_DELTA_MULT{ 1.2 };

  /// @brief Field HAPI_VOLUME_SURFACE_MAX_PT_PER_C offset 0xffffffff size 0x4
  static constexpr float_t HAPI_VOLUME_SURFACE_MAX_PT_PER_C{ 64000.0 };

  /// @brief Field HAPI_VOLUME_SURFACE_PT_SIZE_MULT offset 0xffffffff size 0x4
  static constexpr float_t HAPI_VOLUME_SURFACE_PT_SIZE_MULT{ 1800.0 };

  /// @brief Field HEIGHTFIELD_DETAIL_DENSITY offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_DENSITY{ u"unity_hf_detail_density" };

  /// @brief Field HEIGHTFIELD_DETAIL_DISTANCE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_DISTANCE{ u"unity_hf_detail_distance" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_BENDFACTOR offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_BENDFACTOR{ u"unity_hf_detail_prototype_bendfactor" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_DRYCOLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_DRYCOLOR{ u"unity_hf_detail_prototype_drycolor" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_HEALTHYCOLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_HEALTHYCOLOR{ u"unity_hf_detail_prototype_healthycolor" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MAXHEIGHT offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_MAXHEIGHT{ u"unity_hf_detail_prototype_maxheight" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MAXWIDTH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_MAXWIDTH{ u"unity_hf_detail_prototype_maxwidth" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MINHEIGHT offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_MINHEIGHT{ u"unity_hf_detail_prototype_minheight" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MINWIDTH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_MINWIDTH{ u"unity_hf_detail_prototype_minwidth" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_NOISESPREAD offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_NOISESPREAD{ u"unity_hf_detail_prototype_noisespread" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_PREFAB offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_PREFAB{ u"unity_hf_detail_prototype_prefab" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_RENDERMODE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_RENDERMODE{ u"unity_hf_detail_prototype_rendermode" };

  /// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_TEXTURE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_PROTOTYPE_TEXTURE{ u"unity_hf_detail_prototype_texture" };

  /// @brief Field HEIGHTFIELD_DETAIL_RESOLUTION_PER_PATCH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_DETAIL_RESOLUTION_PER_PATCH{ u"unity_hf_detail_resolution_patch" };

  /// @brief Field HEIGHTFIELD_LAYER_ATTR_TYPE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_LAYER_ATTR_TYPE{ u"unity_hf_layer_type" };

  /// @brief Field HEIGHTFIELD_LAYER_TYPE_DETAIL offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_LAYER_TYPE_DETAIL{ u"detail" };

  /// @brief Field HEIGHTFIELD_TREEINSTANCE_HEIGHTSCALE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_TREEINSTANCE_HEIGHTSCALE{ u"unity_hf_treeinstance_heightscale" };

  /// @brief Field HEIGHTFIELD_TREEINSTANCE_LIGHTMAPCOLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_TREEINSTANCE_LIGHTMAPCOLOR{ u"unity_hf_treeinstance_lightmapcolor" };

  /// @brief Field HEIGHTFIELD_TREEINSTANCE_PROTOTYPEINDEX offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_TREEINSTANCE_PROTOTYPEINDEX{ u"unity_hf_treeinstance_prototypeindex" };

  /// @brief Field HEIGHTFIELD_TREEINSTANCE_WIDTHSCALE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_TREEINSTANCE_WIDTHSCALE{ u"unity_hf_treeinstance_widthscale" };

  /// @brief Field HEIGHTFIELD_TREEPROTOTYPE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_TREEPROTOTYPE{ u"unity_hf_tree_prototype" };

  /// @brief Field HEIGHTFIELD_UNITY_TILE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEIGHTFIELD_UNITY_TILE{ u"unity_hf_tile" };

  /// @brief Field HENGINE_STORE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString HENGINE_STORE_ATTR{ u"hengine_attr_store" };

  /// @brief Field HEU_ASSET_CACHE_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_ASSET_CACHE_PATH{ u"HoudiniEngineAssetCache" };

  /// @brief Field HEU_BAKED_CLONE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_BAKED_CLONE{ u"_bakedClone" };

  /// @brief Field HEU_BAKED_HDA offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_BAKED_HDA{ u"_bakedHDA" };

  /// @brief Field HEU_BAKED_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_BAKED_PATH{ u"Baked" };

  /// @brief Field HEU_DEFAULT_ASSET_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_DEFAULT_ASSET_NAME{ u"HoudiniAssetRoot" };

  /// @brief Field HEU_DEFAULT_GEO_GROUP_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_DEFAULT_GEO_GROUP_NAME{ u"main_geo" };

  /// @brief Field HEU_DEFAULT_LOD_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_DEFAULT_LOD_NAME{ u"lod" };

  /// @brief Field HEU_ENVPATH_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_ENVPATH_KEY{ u"$" };

  /// @brief Field HEU_ENVPATH_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_ENVPATH_PREFIX{ u"HEU_ENVPATH_" };

  /// @brief Field HEU_ERROR_TITLE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_ERROR_TITLE{ u"Houdini Engine Error" };

  /// @brief Field HEU_EXT_ASSET offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_EXT_ASSET{ u".asset" };

  /// @brief Field HEU_EXT_MAT offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_EXT_MAT{ u".mat" };

  /// @brief Field HEU_EXT_TERRAINDATA offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_EXT_TERRAINDATA{ u".terraindata" };

  /// @brief Field HEU_EXT_TERRAINLAYER offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_EXT_TERRAINLAYER{ u".terrainlayer" };

  /// @brief Field HEU_FOLDER_MATERIALS offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_FOLDER_MATERIALS{ u"Materials" };

  /// @brief Field HEU_FOLDER_MESHES offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_FOLDER_MESHES{ u"Meshes" };

  /// @brief Field HEU_FOLDER_TERRAIN offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_FOLDER_TERRAIN{ u"Terrain" };

  /// @brief Field HEU_FOLDER_TEXTURES offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_FOLDER_TEXTURES{ u"Textures" };

  /// @brief Field HEU_FOLDER_TILE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_FOLDER_TILE{ u"Tile" };

  /// @brief Field HEU_HENGINE_SHIPPED_SHELF offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_HENGINE_SHIPPED_SHELF{ u"Default" };

  /// @brief Field HEU_HENGINE_TOOLS_SHIPPED_FOLDER offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_HENGINE_TOOLS_SHIPPED_FOLDER{ u"<HFS>/engine/tools" };

  /// @brief Field HEU_INSTALL_INFO offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_INSTALL_INFO{ u"Houdini Engine Installation Info" };

  /// @brief Field HEU_INSTANCE offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_INSTANCE{ u"_Instance" };

  /// @brief Field HEU_INSTANCE_PATTERN offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_INSTANCE_PATTERN{ u"_Instance\\d*\\z" };

  /// @brief Field HEU_INVALID_MATERIAL offset 0xffffffff size 0x4
  static constexpr int32_t HEU_INVALID_MATERIAL{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field HEU_INVALID_NODE_ID offset 0xffffffff size 0x4
  static constexpr int32_t HEU_INVALID_NODE_ID{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field HEU_KEY_CTRL offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_KEY_CTRL{ u"Ctrl" };

  /// @brief Field HEU_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_NAME{ u"Houdini Engine" };

  /// @brief Field HEU_PATH_KEY_HFS offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_PATH_KEY_HFS{ u"<HFS>" };

  /// @brief Field HEU_PATH_KEY_PLUGIN offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_PATH_KEY_PLUGIN{ u"<PLUGIN_PATH>" };

  /// @brief Field HEU_PATH_KEY_PROJECT offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_PATH_KEY_PROJECT{ u"<PROJECT_PATH>" };

  /// @brief Field HEU_PATH_KEY_TOOL offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_PATH_KEY_TOOL{ u"HOUDINI_TOOL_PATH" };

  /// @brief Field HEU_PRODUCT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_PRODUCT_NAME{ u"HoudiniEngine" };

  /// @brief Field HEU_SESSION_AUTOCLOSE offset 0xffffffff size 0x1
  static constexpr bool HEU_SESSION_AUTOCLOSE{ true };

  /// @brief Field HEU_SESSION_LOCALHOST offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_SESSION_LOCALHOST{ u"localhost" };

  /// @brief Field HEU_SESSION_PIPENAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_SESSION_PIPENAME{ u"hapi" };

  /// @brief Field HEU_SESSION_PORT offset 0xffffffff size 0x4
  static constexpr int32_t HEU_SESSION_PORT{ static_cast<int32_t>(0x2382) };

  /// @brief Field HEU_SESSION_TIMEOUT offset 0xffffffff size 0x4
  static constexpr float_t HEU_SESSION_TIMEOUT{ 10000.0 };

  /// @brief Field HEU_SUBASSET offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_SUBASSET{ u"SUBASSET::" };

  /// @brief Field HEU_TERRAIN_SPLAT_DEFAULT offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_TERRAIN_SPLAT_DEFAULT{ u"Textures/heu_terrain_default_splat" };

  /// @brief Field HEU_UNITY_LOD_TRANSITION_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_UNITY_LOD_TRANSITION_ATTR{ u"lod_screensizes" };

  /// @brief Field HEU_USERMSG_NONEDITOR_NOT_SUPPORTED offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_USERMSG_NONEDITOR_NOT_SUPPORTED{ u"Houdini Engine does not support non-Editor asset creation at this time!" };

  /// @brief Field HEU_WORKING_PATH offset 0xffffffff size 0x8
  static constexpr ::ConstString HEU_WORKING_PATH{ u"Working" };

  /// @brief Field HOUDINI_SHADER_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString HOUDINI_SHADER_PREFIX{ u"Houdini/" };

  /// @brief Field MAT_ALPHA_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_ALPHA_ATTR{ u"opac" };

  /// @brief Field MAT_BASECOLOR_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_BASECOLOR_ATTR{ u"basecolor_texture" };

  /// @brief Field MAT_BASECOLOR_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_BASECOLOR_ATTR_ENABLED{ u"basecolor_useTexture" };

  /// @brief Field MAT_DIFF_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_DIFF_ATTR{ u"basecolor" };

  /// @brief Field MAT_EMISSIVE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_EMISSIVE_ATTR{ u"emitcolor" };

  /// @brief Field MAT_EMISSIVE_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_EMISSIVE_MAP_ATTR{ u"emitcolor_texture" };

  /// @brief Field MAT_EMISSIVE_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_EMISSIVE_MAP_ATTR_ENABLED{ u"emitcolor_useTexture" };

  /// @brief Field MAT_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_MAP_ATTR{ u"map" };

  /// @brief Field MAT_METALLIC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_METALLIC_ATTR{ u"metallic" };

  /// @brief Field MAT_METALLIC_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_METALLIC_MAP_ATTR{ u"metallic_texture" };

  /// @brief Field MAT_METALLIC_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_METALLIC_MAP_ATTR_ENABLED{ u"metallic_useTexture" };

  /// @brief Field MAT_NORMAL_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_NORMAL_ATTR{ u"baseNormal_texture" };

  /// @brief Field MAT_NORMAL_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_NORMAL_ATTR_ENABLED{ u"baseBumpAndNormal_enable" };

  /// @brief Field MAT_OGL_ALPHA_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_ALPHA_ATTR{ u"ogl_alpha" };

  /// @brief Field MAT_OGL_DIFF_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_DIFF_ATTR{ u"ogl_diff" };

  /// @brief Field MAT_OGL_EMISSIVE_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_EMISSIVE_ATTR{ u"ogl_emit" };

  /// @brief Field MAT_OGL_EMISSIVE_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_EMISSIVE_MAP_ATTR{ u"ogl_emissionmap" };

  /// @brief Field MAT_OGL_EMISSIVE_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_EMISSIVE_MAP_ATTR_ENABLED{ u"ogl_use_emissionmap" };

  /// @brief Field MAT_OGL_METALLIC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_METALLIC_ATTR{ u"ogl_metallic" };

  /// @brief Field MAT_OGL_METALLIC_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_METALLIC_MAP_ATTR{ u"ogl_metallicmap" };

  /// @brief Field MAT_OGL_METALLIC_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_METALLIC_MAP_ATTR_ENABLED{ u"ogl_use_metallicmap" };

  /// @brief Field MAT_OGL_NORMAL_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_NORMAL_ATTR{ u"ogl_normalmap" };

  /// @brief Field MAT_OGL_OCCLUSION_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_OCCLUSION_MAP_ATTR{ u"ogl_occlusionmap" };

  /// @brief Field MAT_OGL_OCCLUSION_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_OCCLUSION_MAP_ATTR_ENABLED{ u"ogl_use_occlusionmap" };

  /// @brief Field MAT_OGL_OPACITY_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_OPACITY_MAP_ATTR{ u"ogl_opacitymap" };

  /// @brief Field MAT_OGL_OPACITY_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_OPACITY_MAP_ATTR_ENABLED{ u"ogl_use_opacitymap" };

  /// @brief Field MAT_OGL_ROUGH_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_ROUGH_ATTR{ u"ogl_rough" };

  /// @brief Field MAT_OGL_ROUGH_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_ROUGH_MAP_ATTR{ u"ogl_roughmap" };

  /// @brief Field MAT_OGL_ROUGH_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_ROUGH_MAP_ATTR_ENABLED{ u"ogl_use_roughmap" };

  /// @brief Field MAT_OGL_SPEC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_SPEC_ATTR{ u"ogl_spec" };

  /// @brief Field MAT_OGL_SPEC_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_SPEC_MAP_ATTR{ u"ogl_specmap" };

  /// @brief Field MAT_OGL_SPEC_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_SPEC_MAP_ATTR_ENABLED{ u"ogl_use_specmap" };

  /// @brief Field MAT_OGL_TEX1_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_TEX1_ATTR{ u"ogl_tex1" };

  /// @brief Field MAT_OGL_TEX1_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_TEX1_ATTR_ENABLED{ u"ogl_use_tex1" };

  /// @brief Field MAT_OGL_TRANSPARENCY_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_TRANSPARENCY_ATTR{ u"ogl_transparency" };

  /// @brief Field MAT_OGL_TRANSPARENCY_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OGL_TRANSPARENCY_ATTR_ENABLED{ u"ogl_use_alpha_transparency" };

  /// @brief Field MAT_OPACITY_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OPACITY_MAP_ATTR{ u"opaccolor_texture" };

  /// @brief Field MAT_OPACITY_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_OPACITY_MAP_ATTR_ENABLED{ u"opaccolor_useTexture" };

  /// @brief Field MAT_ROUGH_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_ROUGH_ATTR{ u"rough" };

  /// @brief Field MAT_ROUGH_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_ROUGH_MAP_ATTR{ u"rough_texture" };

  /// @brief Field MAT_ROUGH_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_ROUGH_MAP_ATTR_ENABLED{ u"rough_useTexture" };

  /// @brief Field MAT_SPEC_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_SPEC_ATTR{ u"reflect" };

  /// @brief Field MAT_SPEC_MAP_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_SPEC_MAP_ATTR{ u"reflect_texture" };

  /// @brief Field MAT_SPEC_MAP_ATTR_ENABLED offset 0xffffffff size 0x8
  static constexpr ::ConstString MAT_SPEC_MAP_ATTR_ENABLED{ u"reflect_useTexture" };

  /// @brief Field NO_EXISTING_SESSION offset 0xffffffff size 0x8
  static constexpr ::ConstString NO_EXISTING_SESSION{ u"No existing session." };

  /// @brief Field PLUGIN_SESSION_DATA offset 0xffffffff size 0x8
  static constexpr ::ConstString PLUGIN_SESSION_DATA{ u"HoudiniEngineSession" };

  /// @brief Field PLUGIN_SESSION_FILE offset 0xffffffff size 0x8
  static constexpr ::ConstString PLUGIN_SESSION_FILE{ u"heu_session.txt" };

  /// @brief Field PLUGIN_SETTINGS_FILE offset 0xffffffff size 0x8
  static constexpr ::ConstString PLUGIN_SETTINGS_FILE{ u"heu_settings.ini" };

  /// @brief Field PLUGIN_STORE_DATA offset 0xffffffff size 0x8
  static constexpr ::ConstString PLUGIN_STORE_DATA{ u"HoudiniEnginePluginData" };

  /// @brief Field PLUGIN_STORE_KEYS offset 0xffffffff size 0x8
  static constexpr ::ConstString PLUGIN_STORE_KEYS{ u"HoudiniEnginePluginKeys" };

  /// @brief Field UNITY_EDITORONLY_TAG offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_EDITORONLY_TAG{ u"EditorOnly" };

  /// @brief Field UNITY_HDADATA_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_HDADATA_NAME{ u"HDA_Data" };

  /// @brief Field UNITY_SHADER_BUMP_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_BUMP_MAP{ u"_BumpMap" };

  /// @brief Field UNITY_SHADER_COLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_COLOR{ u"_Color" };

  /// @brief Field UNITY_SHADER_EMISSION_COLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_EMISSION_COLOR{ u"_EmissionColor" };

  /// @brief Field UNITY_SHADER_EMISSION_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_EMISSION_MAP{ u"_EmissionMap" };

  /// @brief Field UNITY_SHADER_METALLIC offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_METALLIC{ u"_Metallic" };

  /// @brief Field UNITY_SHADER_METALLIC_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_METALLIC_MAP{ u"_MetallicMap" };

  /// @brief Field UNITY_SHADER_OCCLUSION offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_OCCLUSION{ u"_Occlusion" };

  /// @brief Field UNITY_SHADER_OCCLUSION_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_OCCLUSION_MAP{ u"_OcclusionMap" };

  /// @brief Field UNITY_SHADER_OPACITY offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_OPACITY{ u"_Opacity" };

  /// @brief Field UNITY_SHADER_OPACITY_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_OPACITY_MAP{ u"_OpacityMap" };

  /// @brief Field UNITY_SHADER_SHININESS offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_SHININESS{ u"_Shininess" };

  /// @brief Field UNITY_SHADER_SMOOTHNESS offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_SMOOTHNESS{ u"_Smoothness" };

  /// @brief Field UNITY_SHADER_SMOOTHNESS_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_SMOOTHNESS_MAP{ u"_SmoothnessMap" };

  /// @brief Field UNITY_SHADER_SPEC_COLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_SPEC_COLOR{ u"_SpecColor" };

  /// @brief Field UNITY_SHADER_SPEC_MAP offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_SHADER_SPEC_MAP{ u"_SpecMap" };

  /// @brief Field UNITY_USE_INSTANCE_FLAGS_ATTR offset 0xffffffff size 0x8
  static constexpr ::ConstString UNITY_USE_INSTANCE_FLAGS_ATTR{ u"unity_use_instance_flags" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Defines, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Defines);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Defines*, "HoudiniEngineUnity", "HEU_Defines");
