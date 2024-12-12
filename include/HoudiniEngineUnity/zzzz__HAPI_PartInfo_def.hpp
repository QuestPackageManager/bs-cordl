#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PartInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PartInfo)
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PartInfo);
// Dependencies HoudiniEngineUnity.HAPI_PartType
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PartInfo
struct CORDL_TYPE HAPI_PartInfo {
public:
  // Declarations
  __declspec(property(get = get_detailAttributeCount, put = set_detailAttributeCount)) int32_t detailAttributeCount;

  __declspec(property(get = get_pointAttributeCount, put = set_pointAttributeCount)) int32_t pointAttributeCount;

  __declspec(property(get = get_primitiveAttributeCount, put = set_primitiveAttributeCount)) int32_t primitiveAttributeCount;

  __declspec(property(get = get_vertexAttributeCount, put = set_vertexAttributeCount)) int32_t vertexAttributeCount;

  /// @brief Method getElementCountByAttributeOwner, addr 0x3a48d88, size 0x4c, virtual false, abstract: false, final false
  inline int32_t getElementCountByAttributeOwner(::HoudiniEngineUnity::HAPI_AttributeOwner owner);

  /// @brief Method getElementCountByGroupType, addr 0x3a48dd4, size 0x28, virtual false, abstract: false, final false
  inline int32_t getElementCountByGroupType(::HoudiniEngineUnity::HAPI_GroupType type);

  /// @brief Method get_detailAttributeCount, addr 0x3a48f50, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_detailAttributeCount();

  /// @brief Method get_pointAttributeCount, addr 0x3a48dfc, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_pointAttributeCount();

  /// @brief Method get_primitiveAttributeCount, addr 0x3a48e70, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_primitiveAttributeCount();

  /// @brief Method get_vertexAttributeCount, addr 0x3a48ee4, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_vertexAttributeCount();

  /// @brief Method init, addr 0x3a3defc, size 0x58, virtual false, abstract: false, final false
  inline void init();

  /// @brief Method set_detailAttributeCount, addr 0x3a48f84, size 0x40, virtual false, abstract: false, final false
  inline void set_detailAttributeCount(int32_t value);

  /// @brief Method set_pointAttributeCount, addr 0x3a48e30, size 0x40, virtual false, abstract: false, final false
  inline void set_pointAttributeCount(int32_t value);

  /// @brief Method set_primitiveAttributeCount, addr 0x3a48ea4, size 0x40, virtual false, abstract: false, final false
  inline void set_primitiveAttributeCount(int32_t value);

  /// @brief Method set_vertexAttributeCount, addr 0x3a48f14, size 0x3c, virtual false, abstract: false, final false
  inline void set_vertexAttributeCount(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PartInfo();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty:
  // "::HoudiniEngineUnity::HAPI_PartType", modifiers: "", def_value: None }, CppParam { name: "faceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "attributeCounts", ty:
  // "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instancedPartCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hasChanged", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr HAPI_PartInfo(int32_t id, int32_t nameSH, ::HoudiniEngineUnity::HAPI_PartType type, int32_t faceCount, int32_t vertexCount, int32_t pointCount,
                          ::ArrayW<int32_t, ::Array<int32_t>*> attributeCounts, bool isInstanced, int32_t instancedPartCount, int32_t instanceCount, bool hasChanged) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  /// @brief Field nameSH, offset: 0x4, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_PartType type;

  /// @brief Field faceCount, offset: 0xc, size: 0x4, def value: None
  int32_t faceCount;

  /// @brief Field vertexCount, offset: 0x10, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field pointCount, offset: 0x14, size: 0x4, def value: None
  int32_t pointCount;

  /// @brief Field attributeCounts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> attributeCounts;

  /// @brief Field isInstanced, offset: 0x20, size: 0x1, def value: None
  bool isInstanced;

  /// @brief Field instancedPartCount, offset: 0x24, size: 0x4, def value: None
  int32_t instancedPartCount;

  /// @brief Field instanceCount, offset: 0x28, size: 0x4, def value: None
  int32_t instanceCount;

  /// @brief Field hasChanged, offset: 0x2c, size: 0x1, def value: None
  bool hasChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, nameSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, faceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, vertexCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, pointCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, attributeCounts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, isInstanced) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, instancedPartCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, instanceCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PartInfo, hasChanged) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PartInfo, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartInfo, "HoudiniEngineUnity", "HAPI_PartInfo");
