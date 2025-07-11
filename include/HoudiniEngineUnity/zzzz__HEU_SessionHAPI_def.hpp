#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionHAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
CORDL_MODULE_EXPORT(HEU_SessionHAPI)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionHAPI;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionHAPI);
// Dependencies HoudiniEngineUnity.HEU_SessionBase
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionHAPI
class CORDL_TYPE HEU_SessionHAPI : public ::HoudiniEngineUnity::HEU_SessionBase {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_SessionHAPI* New_ctor();

  /// @brief Method .ctor, addr 0x3a58e60, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionHAPI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionHAPI(HEU_SessionHAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionHAPI(HEU_SessionHAPI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11772 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionHAPI, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionHAPI);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionHAPI*, "HoudiniEngineUnity", "HEU_SessionHAPI");
