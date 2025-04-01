#pragma once
// IWYU pragma private; include "BeatSaber/Init/BSRuntimePlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BSRuntimePlatform)
namespace BeatSaber::Init {
struct RuntimePlatformType;
}
// Forward declare root types
namespace BeatSaber::Init {
class BSRuntimePlatform;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::BSRuntimePlatform);
// Dependencies System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.BSRuntimePlatform
class CORDL_TYPE BSRuntimePlatform : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPlatformType, addr 0x226e480, size 0x8, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::RuntimePlatformType GetPlatformType();

  /// @brief Method get_IsSteam, addr 0x226e488, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSteam();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSRuntimePlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSRuntimePlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSRuntimePlatform(BSRuntimePlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSRuntimePlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSRuntimePlatform(BSRuntimePlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::BSRuntimePlatform, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::BSRuntimePlatform);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::BSRuntimePlatform*, "BeatSaber.Init", "BSRuntimePlatform");
