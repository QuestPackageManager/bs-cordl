#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseCapturer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPoseCapturer)
namespace BeatSaber::RecPlay {
struct PlayerPoseFrame;
}
namespace BeatSaber::RecPlay {
struct PlayerPoseFrames;
}
namespace BeatSaber::RecPlay {
struct PlayerPose;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
class PlayerPoseCapturer;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::RecPlay::PlayerPoseCapturer);
// Dependencies System.Object
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: BeatSaber.RecPlay.PlayerPoseCapturer
class CORDL_TYPE PlayerPoseCapturer : public ::System::Object {
public:
  // Declarations
  /// @brief Field frames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_frames, put = __cordl_internal_set_frames)) ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* frames;

  /// @brief Method Capture, addr 0x227a848, size 0x120, virtual false, abstract: false, final false
  inline void Capture(float_t time, ::BeatSaber::RecPlay::PlayerPose pose);

  /// @brief Method CreatePlayerPoseFrames, addr 0x227a968, size 0x24c, virtual false, abstract: false, final false
  inline ::BeatSaber::RecPlay::PlayerPoseFrames CreatePlayerPoseFrames();

  static inline ::BeatSaber::RecPlay::PlayerPoseCapturer* New_ctor(int32_t capacity);

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* const& __cordl_internal_get_frames() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>*& __cordl_internal_get_frames();

  constexpr void __cordl_internal_set_frames(::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* value);

  /// @brief Method .ctor, addr 0x227a7c0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPoseCapturer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseCapturer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPoseCapturer(PlayerPoseCapturer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseCapturer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPoseCapturer(PlayerPoseCapturer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18904 };

  /// @brief Field frames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::RecPlay::PlayerPoseFrame>* ___frames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseCapturer, ___frames) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPoseCapturer, 0x18>, "Size mismatch!");

} // namespace BeatSaber::RecPlay
NEED_NO_BOX(::BeatSaber::RecPlay::PlayerPoseCapturer);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPoseCapturer*, "BeatSaber.RecPlay", "PlayerPoseCapturer");
