#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseIO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerPoseIO)
namespace BeatSaber::RecPlay {
struct PlayerPoseFrames;
}
namespace BeatSaber::RecPlay {
struct PoseFrame;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
class PlayerPoseIO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::RecPlay::PlayerPoseIO);
// Dependencies System.Object
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: BeatSaber.RecPlay.PlayerPoseIO
class CORDL_TYPE PlayerPoseIO : public ::System::Object {
public:
  // Declarations
  /// @brief Method Clamp, addr 0x227ff7c, size 0x14c, virtual false, abstract: false, final false
  static inline bool Clamp(::ByRef<::System::ReadOnlySpan_1<char16_t>> s, char16_t start, char16_t end);

  /// @brief Method DeserializeFromText, addr 0x227f748, size 0x68c, virtual false, abstract: false, final false
  static inline bool DeserializeFromText(::StringW text, ::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames> playerPoseFrames, ::ByRef<::StringW> log);

  /// @brief Method NextToken, addr 0x227fdd4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> NextToken(::ByRef<::System::ReadOnlySpan_1<char16_t>> s);

  /// @brief Method SerializeAsText, addr 0x227efb4, size 0x388, virtual false, abstract: false, final false
  static inline ::StringW SerializeAsText(::BeatSaber::RecPlay::PlayerPoseFrames frames);

  /// @brief Method <SerializeAsText>g__WriteFrames|0_0, addr 0x227f33c, size 0x40c, virtual false, abstract: false, final false
  static inline void _SerializeAsText_g__WriteFrames_0_0(::System::Text::StringBuilder* sb, ::StringW name,
                                                         ::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPoseIO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseIO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPoseIO(PlayerPoseIO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseIO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPoseIO(PlayerPoseIO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPoseIO, 0x10>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
NEED_NO_BOX(::BeatSaber::RecPlay::PlayerPoseIO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPoseIO*, "BeatSaber.RecPlay", "PlayerPoseIO");
