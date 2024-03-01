#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_NodeInfo)
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_NodeInfo);
// Type: HoudiniEngineUnity::HAPI_NodeInfo
// SizeInfo { instance_size: 68, native_size: 68, calculated_instance_size: 68, calculated_native_size: 82, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_NodeInfo
struct CORDL_TYPE HAPI_NodeInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_NodeInfo();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "totalCookCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uniqueHoudiniNodeId", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "internalNodePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "parmIntValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmFloatValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "parmStringValueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parmChoiceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childNodeCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "createdPostAssetLoad", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTimeDependent", ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_NodeInfo(int32_t id, int32_t parentId, int32_t nameSH, ::HoudiniEngineUnity::HAPI_NodeType type, bool isValid, int32_t totalCookCount, int32_t uniqueHoudiniNodeId,
                          int32_t internalNodePathSH, int32_t parmCount, int32_t parmIntValueCount, int32_t parmFloatValueCount, int32_t parmStringValueCount, int32_t parmChoiceCount,
                          int32_t childNodeCount, int32_t inputCount, int32_t outputCount, bool createdPostAssetLoad, bool isTimeDependent) noexcept;

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  /// @brief Field parentId, offset: 0x4, size: 0x4, def value: None
  int32_t parentId;

  /// @brief Field nameSH, offset: 0x8, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field type, offset: 0xc, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_NodeType type;

  /// @brief Field isValid, offset: 0x10, size: 0x1, def value: None
  bool isValid;

  /// @brief Field totalCookCount, offset: 0x14, size: 0x4, def value: None
  int32_t totalCookCount;

  /// @brief Field uniqueHoudiniNodeId, offset: 0x18, size: 0x4, def value: None
  int32_t uniqueHoudiniNodeId;

  /// @brief Field internalNodePathSH, offset: 0x1c, size: 0x4, def value: None
  int32_t internalNodePathSH;

  /// @brief Field parmCount, offset: 0x20, size: 0x4, def value: None
  int32_t parmCount;

  /// @brief Field parmIntValueCount, offset: 0x24, size: 0x4, def value: None
  int32_t parmIntValueCount;

  /// @brief Field parmFloatValueCount, offset: 0x28, size: 0x4, def value: None
  int32_t parmFloatValueCount;

  /// @brief Field parmStringValueCount, offset: 0x2c, size: 0x4, def value: None
  int32_t parmStringValueCount;

  /// @brief Field parmChoiceCount, offset: 0x30, size: 0x4, def value: None
  int32_t parmChoiceCount;

  /// @brief Field childNodeCount, offset: 0x34, size: 0x4, def value: None
  int32_t childNodeCount;

  /// @brief Field inputCount, offset: 0x38, size: 0x4, def value: None
  int32_t inputCount;

  /// @brief Field outputCount, offset: 0x3c, size: 0x4, def value: None
  int32_t outputCount;

  /// @brief Field createdPostAssetLoad, offset: 0x40, size: 0x1, def value: None
  bool createdPostAssetLoad;

  /// @brief Field isTimeDependent, offset: 0x41, size: 0x1, def value: None
  bool isTimeDependent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_NodeInfo, 0x44>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, nameSH) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, type) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, isValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, totalCookCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, uniqueHoudiniNodeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, internalNodePathSH) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parmCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parmIntValueCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parmFloatValueCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parmStringValueCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, parmChoiceCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, childNodeCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, inputCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, outputCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, createdPostAssetLoad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_NodeInfo, isTimeDependent) == 0x41, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_NodeInfo, "HoudiniEngineUnity", "HAPI_NodeInfo");
