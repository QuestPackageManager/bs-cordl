#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeoSync.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_GeoSync)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoSync;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeoSync);
// Dependencies HoudiniEngineUnity.HEU_BaseSync
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_GeoSync
class CORDL_TYPE HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  static inline ::HoudiniEngineUnity::HEU_GeoSync* New_ctor();

  /// @brief Method SetupLoadTask, addr 0x3a60250, size 0x98, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x3a602fc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeoSync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeoSync(HEU_GeoSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeoSync(HEU_GeoSync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11782 };

  /// @brief Field _filePath, offset: 0x88, size: 0x8, def value: None
  ::StringW ____filePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoSync, ____filePath) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoSync, 0x90>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoSync*, "HoudiniEngineUnity", "HEU_GeoSync");
