#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BSPlatform)
// Forward declare root types
namespace BeatSaber::Init {
class BSPlatform;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::BSPlatform);
// Type: BeatSaber.Init::BSPlatform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: false
// CS Name: ::BeatSaber.Init::BSPlatform*
class CORDL_TYPE BSPlatform : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_IsSteamPlatform, addr 0xf6f7b8, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsSteamPlatform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BSPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BSPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BSPlatform(BSPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BSPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BSPlatform(BSPlatform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::BSPlatform, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::BSPlatform);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::BSPlatform*, "BeatSaber.Init", "BSPlatform");
