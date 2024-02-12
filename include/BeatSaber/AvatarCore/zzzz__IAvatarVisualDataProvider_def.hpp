#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAvatarVisualDataProvider)
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IAvatarVisualDataProvider);
// Type: BeatSaber.AvatarCore::IAvatarVisualDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15275))
// CS Name: ::BeatSaber.AvatarCore::IAvatarVisualDataProvider*
class CORDL_TYPE IAvatarVisualDataProvider {
public:
  // Declarations
  __declspec(property(get = get_avatarsData))::GlobalNamespace::MultiplayerAvatarsData avatarsData;

  /// @brief Method get_avatarsData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData();

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarVisualDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAvatarVisualDataProvider(IAvatarVisualDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarVisualDataProvider(IAvatarVisualDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IAvatarVisualDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*, "BeatSaber.AvatarCore", "IAvatarVisualDataProvider");
