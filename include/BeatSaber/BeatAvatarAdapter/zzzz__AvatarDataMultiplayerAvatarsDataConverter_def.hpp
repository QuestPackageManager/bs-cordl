#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AvatarDataMultiplayerAvatarsDataConverter)
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class AvatarDataMultiplayerAvatarsDataConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter);
// Type: BeatSaber.BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*
class CORDL_TYPE AvatarDataMultiplayerAvatarsDataConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateAvatarData, addr 0xe7fd60, size 0x5e8, virtual false, abstract: false, final false
  static inline ::BeatSaber::BeatAvatarSDK::AvatarData* CreateAvatarData(::GlobalNamespace::MultiplayerAvatarData multiplayerAvatarsData);

  /// @brief Method CreateMultiplayerAvatarsData, addr 0xe7f858, size 0x508, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MultiplayerAvatarData CreateMultiplayerAvatarsData(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDataMultiplayerAvatarsDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataMultiplayerAvatarsDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarDataMultiplayerAvatarsDataConverter(AvatarDataMultiplayerAvatarsDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarDataMultiplayerAvatarsDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarDataMultiplayerAvatarsDataConverter(AvatarDataMultiplayerAvatarsDataConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter, 0x10>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarDataMultiplayerAvatarsDataConverter*, "BeatSaber.BeatAvatarAdapter", "AvatarDataMultiplayerAvatarsDataConverter");
