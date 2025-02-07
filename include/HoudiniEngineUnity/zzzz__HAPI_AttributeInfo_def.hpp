#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_AttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AttributeInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AttributeInfo);
// Dependencies HoudiniEngineUnity.HAPI_AttributeOwner, HoudiniEngineUnity.HAPI_AttributeTypeInfo, HoudiniEngineUnity.HAPI_StorageType
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_AttributeInfo
struct CORDL_TYPE HAPI_AttributeInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3a4dcb4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW ignored);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_AttributeInfo();

  // Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None
  // }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "originalOwner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner",
  // modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "typeInfo", ty: "::HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value:
  // None }]
  constexpr HAPI_AttributeInfo(bool exists, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::HoudiniEngineUnity::HAPI_StorageType storage, ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner,
                               int32_t count, int32_t tupleSize, int64_t totalArrayElements, ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field exists, offset: 0x0, size: 0x1, def value: None
  bool exists;

  /// @brief Field owner, offset: 0x4, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeOwner owner;

  /// @brief Field storage, offset: 0x8, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_StorageType storage;

  /// @brief Field originalOwner, offset: 0xc, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner;

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t count;

  /// @brief Field tupleSize, offset: 0x14, size: 0x4, def value: None
  int32_t tupleSize;

  /// @brief Field totalArrayElements, offset: 0x18, size: 0x8, def value: None
  int64_t totalArrayElements;

  /// @brief Field typeInfo, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, exists) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, owner) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, storage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, originalOwner) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, tupleSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, totalArrayElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AttributeInfo, typeInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeInfo, "HoudiniEngineUnity", "HAPI_AttributeInfo");
