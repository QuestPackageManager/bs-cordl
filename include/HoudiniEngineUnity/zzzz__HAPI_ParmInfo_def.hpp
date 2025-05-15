#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ParmInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ChoiceListType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeFlags_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Permissions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PrmScriptType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RampType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmInfo);
// Dependencies HoudiniEngineUnity.HAPI_ChoiceListType, HoudiniEngineUnity.HAPI_NodeFlags, HoudiniEngineUnity.HAPI_NodeType, HoudiniEngineUnity.HAPI_ParmType, HoudiniEngineUnity.HAPI_Permissions,
// HoudiniEngineUnity.HAPI_PrmScriptType, HoudiniEngineUnity.HAPI_RampType
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ParmInfo
struct CORDL_TYPE HAPI_ParmInfo {
public:
  // Declarations
  /// @brief Method isFloat, addr 0x3a484c4, size 0x14, virtual false, abstract: false, final false
  inline bool isFloat();

  /// @brief Method isInt, addr 0x3a484a8, size 0x1c, virtual false, abstract: false, final false
  inline bool isInt();

  /// @brief Method isNode, addr 0x3a48524, size 0x10, virtual false, abstract: false, final false
  inline bool isNode();

  /// @brief Method isNonValue, addr 0x3a48534, size 0x14, virtual false, abstract: false, final false
  inline bool isNonValue();

  /// @brief Method isPath, addr 0x3a48504, size 0x20, virtual false, abstract: false, final false
  inline bool isPath();

  /// @brief Method isString, addr 0x3a484d8, size 0x2c, virtual false, abstract: false, final false
  inline bool isString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ParmInfo();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "childIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_ParmType", modifiers: "", def_value: None }, CppParam { name: "scriptType",
  // ty: "::HoudiniEngineUnity::HAPI_PrmScriptType", modifiers: "", def_value: None }, CppParam { name: "typeInfoSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "permissions",
  // ty: "::HoudiniEngineUnity::HAPI_Permissions", modifiers: "", def_value: None }, CppParam { name: "tagCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceListType", ty: "::HoudiniEngineUnity::HAPI_ChoiceListType", modifiers: "", def_value: None }, CppParam { name: "choiceCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "templateNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasMin",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasUIMin", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "hasUIMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "UIMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UIMax", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "invisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spare", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "joinNext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "labelNone", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "intValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValuesIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringValuesIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "choiceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inputNodeType", ty:
  // "::HoudiniEngineUnity::HAPI_NodeType", modifiers: "", def_value: None }, CppParam { name: "inputNodeFlag", ty: "::HoudiniEngineUnity::HAPI_NodeFlags", modifiers: "", def_value: None }, CppParam {
  // name: "isChildOfMultiParm", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instanceNum", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceLength", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceStartOffset", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "rampType", ty: "::HoudiniEngineUnity::HAPI_RampType", modifiers: "", def_value: None }, CppParam { name: "visibilityConditionSH", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "disabledConditionSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ParmInfo(int32_t id, int32_t parentId, int32_t childIndex, ::HoudiniEngineUnity::HAPI_ParmType type, ::HoudiniEngineUnity::HAPI_PrmScriptType scriptType, int32_t typeInfoSH,
                          ::HoudiniEngineUnity::HAPI_Permissions permissions, int32_t tagCount, int32_t size, ::HoudiniEngineUnity::HAPI_ChoiceListType choiceListType, int32_t choiceCount,
                          int32_t nameSH, int32_t labelSH, int32_t templateNameSH, int32_t helpSH, bool hasMin, bool hasMax, bool hasUIMin, bool hasUIMax, float_t min, float_t max, float_t UIMin,
                          float_t UIMax, bool invisible, bool disabled, bool spare, bool joinNext, bool labelNone, int32_t intValuesIndex, int32_t floatValuesIndex, int32_t stringValuesIndex,
                          int32_t choiceIndex, ::HoudiniEngineUnity::HAPI_NodeType inputNodeType, ::HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag, bool isChildOfMultiParm, int32_t instanceNum,
                          int32_t instanceLength, int32_t instanceCount, int32_t instanceStartOffset, ::HoudiniEngineUnity::HAPI_RampType rampType, int32_t visibilityConditionSH,
                          int32_t disabledConditionSH) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11721 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  /// @brief Field parentId, offset: 0x4, size: 0x4, def value: None
  int32_t parentId;

  /// @brief Field childIndex, offset: 0x8, size: 0x4, def value: None
  int32_t childIndex;

  /// @brief Field type, offset: 0xc, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_ParmType type;

  /// @brief Field scriptType, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_PrmScriptType scriptType;

  /// @brief Field typeInfoSH, offset: 0x14, size: 0x4, def value: None
  int32_t typeInfoSH;

  /// @brief Field permissions, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_Permissions permissions;

  /// @brief Field tagCount, offset: 0x1c, size: 0x4, def value: None
  int32_t tagCount;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t size;

  /// @brief Field choiceListType, offset: 0x24, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_ChoiceListType choiceListType;

  /// @brief Field choiceCount, offset: 0x28, size: 0x4, def value: None
  int32_t choiceCount;

  /// @brief Field nameSH, offset: 0x2c, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field labelSH, offset: 0x30, size: 0x4, def value: None
  int32_t labelSH;

  /// @brief Field templateNameSH, offset: 0x34, size: 0x4, def value: None
  int32_t templateNameSH;

  /// @brief Field helpSH, offset: 0x38, size: 0x4, def value: None
  int32_t helpSH;

  /// @brief Field hasMin, offset: 0x3c, size: 0x1, def value: None
  bool hasMin;

  /// @brief Field hasMax, offset: 0x3d, size: 0x1, def value: None
  bool hasMax;

  /// @brief Field hasUIMin, offset: 0x3e, size: 0x1, def value: None
  bool hasUIMin;

  /// @brief Field hasUIMax, offset: 0x3f, size: 0x1, def value: None
  bool hasUIMax;

  /// @brief Field min, offset: 0x40, size: 0x4, def value: None
  float_t min;

  /// @brief Field max, offset: 0x44, size: 0x4, def value: None
  float_t max;

  /// @brief Field UIMin, offset: 0x48, size: 0x4, def value: None
  float_t UIMin;

  /// @brief Field UIMax, offset: 0x4c, size: 0x4, def value: None
  float_t UIMax;

  /// @brief Field invisible, offset: 0x50, size: 0x1, def value: None
  bool invisible;

  /// @brief Field disabled, offset: 0x51, size: 0x1, def value: None
  bool disabled;

  /// @brief Field spare, offset: 0x52, size: 0x1, def value: None
  bool spare;

  /// @brief Field joinNext, offset: 0x53, size: 0x1, def value: None
  bool joinNext;

  /// @brief Field labelNone, offset: 0x54, size: 0x1, def value: None
  bool labelNone;

  /// @brief Field intValuesIndex, offset: 0x58, size: 0x4, def value: None
  int32_t intValuesIndex;

  /// @brief Field floatValuesIndex, offset: 0x5c, size: 0x4, def value: None
  int32_t floatValuesIndex;

  /// @brief Field stringValuesIndex, offset: 0x60, size: 0x4, def value: None
  int32_t stringValuesIndex;

  /// @brief Field choiceIndex, offset: 0x64, size: 0x4, def value: None
  int32_t choiceIndex;

  /// @brief Field inputNodeType, offset: 0x68, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_NodeType inputNodeType;

  /// @brief Field inputNodeFlag, offset: 0x6c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag;

  /// @brief Field isChildOfMultiParm, offset: 0x70, size: 0x1, def value: None
  bool isChildOfMultiParm;

  /// @brief Field instanceNum, offset: 0x74, size: 0x4, def value: None
  int32_t instanceNum;

  /// @brief Field instanceLength, offset: 0x78, size: 0x4, def value: None
  int32_t instanceLength;

  /// @brief Field instanceCount, offset: 0x7c, size: 0x4, def value: None
  int32_t instanceCount;

  /// @brief Field instanceStartOffset, offset: 0x80, size: 0x4, def value: None
  int32_t instanceStartOffset;

  /// @brief Field rampType, offset: 0x84, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_RampType rampType;

  /// @brief Field visibilityConditionSH, offset: 0x88, size: 0x4, def value: None
  int32_t visibilityConditionSH;

  /// @brief Field disabledConditionSH, offset: 0x8c, size: 0x4, def value: None
  int32_t disabledConditionSH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, parentId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, childIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, type) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, scriptType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, typeInfoSH) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, permissions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, tagCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, choiceListType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, choiceCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, nameSH) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, labelSH) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, templateNameSH) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, helpSH) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, hasMin) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, hasMax) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, hasUIMin) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, hasUIMax) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, min) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, max) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, UIMin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, UIMax) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, invisible) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, disabled) == 0x51, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, spare) == 0x52, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, joinNext) == 0x53, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, labelNone) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, intValuesIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, floatValuesIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, stringValuesIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, choiceIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, inputNodeType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, inputNodeFlag) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, isChildOfMultiParm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, instanceNum) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, instanceLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, instanceCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, instanceStartOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, rampType) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, visibilityConditionSH) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmInfo, disabledConditionSH) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmInfo, 0x90>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmInfo, "HoudiniEngineUnity", "HAPI_ParmInfo");
