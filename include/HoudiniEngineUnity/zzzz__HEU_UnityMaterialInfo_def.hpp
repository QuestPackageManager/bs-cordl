#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_UnityMaterialInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_UnityMaterialInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_UnityMaterialInfo);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_UnityMaterialInfo
class CORDL_TYPE HEU_UnityMaterialInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _substanceIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__substanceIndex, put = __cordl_internal_set__substanceIndex)) int32_t _substanceIndex;

  /// @brief Field _substancePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__substancePath, put = __cordl_internal_set__substancePath)) ::StringW _substancePath;

  /// @brief Field _unityMaterialPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unityMaterialPath, put = __cordl_internal_set__unityMaterialPath)) ::StringW _unityMaterialPath;

  static inline ::HoudiniEngineUnity::HEU_UnityMaterialInfo* New_ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex);

  constexpr int32_t const& __cordl_internal_get__substanceIndex() const;

  constexpr int32_t& __cordl_internal_get__substanceIndex();

  constexpr ::StringW const& __cordl_internal_get__substancePath() const;

  constexpr ::StringW& __cordl_internal_get__substancePath();

  constexpr ::StringW const& __cordl_internal_get__unityMaterialPath() const;

  constexpr ::StringW& __cordl_internal_get__unityMaterialPath();

  constexpr void __cordl_internal_set__substanceIndex(int32_t value);

  constexpr void __cordl_internal_set__substancePath(::StringW value);

  constexpr void __cordl_internal_set__unityMaterialPath(::StringW value);

  /// @brief Method .ctor, addr 0x3a5d66c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_UnityMaterialInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_UnityMaterialInfo(HEU_UnityMaterialInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_UnityMaterialInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_UnityMaterialInfo(HEU_UnityMaterialInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11766 };

  /// @brief Field _unityMaterialPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____unityMaterialPath;

  /// @brief Field _substancePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____substancePath;

  /// @brief Field _substanceIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____substanceIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_UnityMaterialInfo, ____unityMaterialPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_UnityMaterialInfo, ____substancePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_UnityMaterialInfo, ____substanceIndex) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_UnityMaterialInfo, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_UnityMaterialInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_UnityMaterialInfo*, "HoudiniEngineUnity", "HEU_UnityMaterialInfo");
