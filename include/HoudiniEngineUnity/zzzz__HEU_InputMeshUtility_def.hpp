#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputMeshUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputMeshUtility)
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputMeshUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputMeshUtility);
// Type: HoudiniEngineUnity::HEU_InputMeshUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_InputMeshUtility*
class CORDL_TYPE HEU_InputMeshUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetMeshDetailAttribute, addr 0x3a188ec, size 0x1f8, virtual false, abstract: false, final false
  static inline bool SetMeshDetailAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::UnityEngine::Vector3 data,
                                            ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshPointAttribute, addr 0x3a18760, size 0x18c, virtual false, abstract: false, final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ArrayW<::StringW, ::Array<::StringW>*> data,
                                           ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshPointAttribute, addr 0x3a182c0, size 0x270, virtual false, abstract: false, final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo,
                                           bool bConvertToHoudiniCoordinateSystem);

  /// @brief Method SetMeshPointAttribute, addr 0x3a18530, size 0x230, virtual false, abstract: false, final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<::UnityEngine::Vector3Int, ::Array<::UnityEngine::Vector3Int>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshPointAttribute, addr 0x3a18ae4, size 0x1e4, virtual false, abstract: false, final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<float_t, ::Array<float_t>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshVertexAttribute, addr 0x3a18cd0, size 0x28c, virtual false, abstract: false, final false
  static inline bool SetMeshVertexAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                            ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> data, ::ArrayW<int32_t, ::Array<int32_t>*> indices,
                                            ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem);

  /// @brief Method SetMeshVertexFloatAttribute, addr 0x3a18f5c, size 0x210, virtual false, abstract: false, final false
  static inline bool SetMeshVertexFloatAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                                 ::ArrayW<float_t, ::Array<float_t>*> data, ::ArrayW<int32_t, ::Array<int32_t>*> indices, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method UploadMeshIntoHoudiniNode, addr 0x3a1916c, size 0x64c, virtual false, abstract: false, final false
  static inline bool UploadMeshIntoHoudiniNode(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetNodeID, int32_t objectID, int32_t geoID, ByRef<::UnityEngine::Mesh*> mesh);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputMeshUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputMeshUtility(HEU_InputMeshUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputMeshUtility(HEU_InputMeshUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11792 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputMeshUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputMeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputMeshUtility*, "HoudiniEngineUnity", "HEU_InputMeshUtility");
