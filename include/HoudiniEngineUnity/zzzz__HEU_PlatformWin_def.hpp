#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PlatformWin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_PlatformWin)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PlatformWin;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PlatformWin);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PlatformWin
class CORDL_TYPE HEU_PlatformWin : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PlatformWin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PlatformWin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PlatformWin(HEU_PlatformWin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PlatformWin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PlatformWin(HEU_PlatformWin const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PlatformWin, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PlatformWin);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PlatformWin*, "HoudiniEngineUnity", "HEU_PlatformWin");
