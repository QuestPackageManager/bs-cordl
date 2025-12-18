#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/IAvatarPart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAvatarPart)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class IAvatarPart;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::IAvatarPart);
// Dependencies
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.IAvatarPart
class CORDL_TYPE IAvatarPart {
public:
  // Declarations
  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_localizationKey)) ::StringW localizationKey;

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_localizationKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_localizationKey();

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarPart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarPart(IAvatarPart const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::IAvatarPart);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::IAvatarPart*, "BeatSaber.BeatAvatarSDK", "IAvatarPart");
