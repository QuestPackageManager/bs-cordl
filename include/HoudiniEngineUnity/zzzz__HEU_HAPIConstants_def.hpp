#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HAPIConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HAPIConstants)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIConstants;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HAPIConstants);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HAPIConstants
class CORDL_TYPE HEU_HAPIConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HAPIConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HAPIConstants(HEU_HAPIConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HAPIConstants(HEU_HAPIConstants const&) = delete;

  /// @brief Field HAPI_ATTRIB_COLOR offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_COLOR{ u"Cd" };

  /// @brief Field HAPI_ATTRIB_INSTANCE offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_INSTANCE{ u"instance" };

  /// @brief Field HAPI_ATTRIB_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_NAME{ u"name" };

  /// @brief Field HAPI_ATTRIB_NORMAL offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_NORMAL{ u"N" };

  /// @brief Field HAPI_ATTRIB_POSITION offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_POSITION{ u"P" };

  /// @brief Field HAPI_ATTRIB_TANGENT offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_TANGENT{ u"tangentu" };

  /// @brief Field HAPI_ATTRIB_TANGENT2 offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_TANGENT2{ u"tangentv" };

  /// @brief Field HAPI_ATTRIB_UV offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_UV{ u"uv" };

  /// @brief Field HAPI_ATTRIB_UV2 offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ATTRIB_UV2{ u"uv2" };

  /// @brief Field HAPI_BMP_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_BMP_FORMAT_NAME{ u"Bitmap" };

  /// @brief Field HAPI_CACHE_COP_COOK offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_COP_COOK{ u"COP Cook Cache" };

  /// @brief Field HAPI_CACHE_COP_FLIPBOOK offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_COP_FLIPBOOK{ u"COP Flipbook Cache" };

  /// @brief Field HAPI_CACHE_GL_TEXTURE offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_GL_TEXTURE{ u"OpenGL Texture Cache" };

  /// @brief Field HAPI_CACHE_GL_VERTEX offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_GL_VERTEX{ u"OpenGL Vertex Cache" };

  /// @brief Field HAPI_CACHE_IMAGE offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_IMAGE{ u"Image Cache" };

  /// @brief Field HAPI_CACHE_OBJ offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_OBJ{ u"Object Transform Cache" };

  /// @brief Field HAPI_CACHE_SOP offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_SOP{ u"SOP Cache" };

  /// @brief Field HAPI_CACHE_VEX offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_CACHE_VEX{ u"VEX File Cache" };

  /// @brief Field HAPI_COLOR_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_COLOR_VECTOR_SIZE{ static_cast<int32_t>(0x4) };

  /// @brief Field HAPI_CV_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_CV_VECTOR_SIZE{ static_cast<int32_t>(0x4) };

  /// @brief Field HAPI_DEFAULT_IMAGE_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_DEFAULT_IMAGE_FORMAT_NAME{ u"PNG" };

  /// @brief Field HAPI_ENV_CLIENT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ENV_CLIENT_NAME{ u"HAPI_CLIENT_NAME" };

  /// @brief Field HAPI_ENV_HIP offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ENV_HIP{ u"HIP" };

  /// @brief Field HAPI_ENV_JOB offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_ENV_JOB{ u"JOB" };

  /// @brief Field HAPI_EULER_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_EULER_VECTOR_SIZE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_GLOBAL_NODES_NODE_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_GLOBAL_NODES_NODE_NAME{ u"GlobalNodes" };

  /// @brief Field HAPI_INVALID_PARM_ID offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_INVALID_PARM_ID{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field HAPI_JPEG_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_JPEG_FORMAT_NAME{ u"JPEG" };

  /// @brief Field HAPI_NORMAL_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_NORMAL_VECTOR_SIZE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_PNG_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_PNG_FORMAT_NAME{ u"PNG" };

  /// @brief Field HAPI_POSITION_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_POSITION_VECTOR_SIZE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_PRIM_MAX_VERTEX_COUNT offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_PRIM_MAX_VERTEX_COUNT{ static_cast<int32_t>(0x10) };

  /// @brief Field HAPI_PRIM_MIN_VERTEX_COUNT offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_PRIM_MIN_VERTEX_COUNT{ static_cast<int32_t>(0x1) };

  /// @brief Field HAPI_QUATERNION_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_QUATERNION_VECTOR_SIZE{ static_cast<int32_t>(0x4) };

  /// @brief Field HAPI_RAW_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_RAW_FORMAT_NAME{ u"HAPI_RAW" };

  /// @brief Field HAPI_SCALE_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_SCALE_VECTOR_SIZE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_SHEAR_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_SHEAR_VECTOR_SIZE{ static_cast<int32_t>(0x3) };

  /// @brief Field HAPI_TGA_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_TGA_FORMAT_NAME{ u"Targa" };

  /// @brief Field HAPI_TIFF_FORMAT_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_TIFF_FORMAT_NAME{ u"TIFF" };

  /// @brief Field HAPI_UNGROUPED_GROUP_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString HAPI_UNGROUPED_GROUP_NAME{ u"__ungrouped_group" };

  /// @brief Field HAPI_UV_VECTOR_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HAPI_UV_VECTOR_SIZE{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HAPIConstants, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIConstants);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIConstants*, "HoudiniEngineUnity", "HEU_HAPIConstants");
