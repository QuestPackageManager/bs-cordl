#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\IAvatarVisualDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAvatarVisualDataProvider)
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_T(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*);
DEFINE_IL2CPP_CLASS(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*, "BeatSaber.AvatarCore", "IAvatarVisualDataProvider");
// Dependencies
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.IAvatarVisualDataProvider
class CORDL_TYPE IAvatarVisualDataProvider {
public:
  // Declarations
  __declspec(property(get = get_avatarsData)) ::GlobalNamespace::MultiplayerAvatarsData avatarsData;

  /// @brief Method add_visualDataDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value);

  /// @brief Method get_avatarsData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData();

  /// @brief Method remove_visualDataDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_visualDataDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerAvatarsData>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarVisualDataProvider(IAvatarVisualDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
