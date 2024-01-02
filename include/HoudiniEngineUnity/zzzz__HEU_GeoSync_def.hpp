#pragma once
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
// Type: HoudiniEngineUnity::HEU_GeoSync
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9793))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9795))
// CS Name: ::HoudiniEngineUnity::HEU_GeoSync*
class CORDL_TYPE HEU_GeoSync : public ::HoudiniEngineUnity::HEU_BaseSync {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x80, size 0x8
  __declspec(property(get = __get__filePath, put = __set__filePath))::StringW _filePath;

  constexpr ::StringW& __get__filePath();

  constexpr ::StringW const& __get__filePath() const;

  constexpr void __set__filePath(::StringW value);

  /// @brief Method SetupLoadTask, addr 0x21a9f68, size 0x98, virtual true, abstract: false, final false
  inline void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);

  static inline ::HoudiniEngineUnity::HEU_GeoSync* New_ctor();

  /// @brief Method .ctor, addr 0x21aa014, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_GeoSync(HEU_GeoSync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_GeoSync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_GeoSync(HEU_GeoSync const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GeoSync();

public:
  /// @brief Field _filePath, offset: 0x80, size: 0x8, def value: None
  ::StringW ____filePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeoSync, 0x88>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeoSync, ____filePath) == 0x80, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeoSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeoSync*, "HoudiniEngineUnity", "HEU_GeoSync");
