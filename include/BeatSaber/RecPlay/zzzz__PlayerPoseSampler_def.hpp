#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseSampler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPoseSampler)
namespace BeatSaber::RecPlay {
struct PlayerPose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
class PlayerPoseSampler;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::RecPlay::PlayerPoseSampler);
// Type: BeatSaber.RecPlay::PlayerPoseSampler
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: false
// CS Name: ::BeatSaber.RecPlay::PlayerPoseSampler*
class CORDL_TYPE PlayerPoseSampler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _headNearestFrame, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__headNearestFrame, put = __cordl_internal_set__headNearestFrame)) int32_t _headNearestFrame;

  /// @brief Field _leftHandNearestFrame, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__leftHandNearestFrame, put = __cordl_internal_set__leftHandNearestFrame)) int32_t _leftHandNearestFrame;

  /// @brief Field _rightHandNearestFrame, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__rightHandNearestFrame, put = __cordl_internal_set__rightHandNearestFrame)) int32_t _rightHandNearestFrame;

  /// @brief Field frames, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get_frames, put = __cordl_internal_set_frames)) ::BeatSaber::RecPlay::PlayerPoseFrames frames;

  /// @brief Field offsets, offset 0x10, size 0x54
  __declspec(property(get = __cordl_internal_get_offsets, put = __cordl_internal_set_offsets)) ::BeatSaber::RecPlay::PoseOffsets offsets;

  static inline ::BeatSaber::RecPlay::PlayerPoseSampler* New_ctor();

  /// @brief Method Sample, addr 0x2247d50, size 0x168, virtual false, abstract: false, final false
  inline void Sample(float_t time, ByRef<::BeatSaber::RecPlay::PlayerPose> player);

  constexpr int32_t const& __cordl_internal_get__headNearestFrame() const;

  constexpr int32_t& __cordl_internal_get__headNearestFrame();

  constexpr int32_t const& __cordl_internal_get__leftHandNearestFrame() const;

  constexpr int32_t& __cordl_internal_get__leftHandNearestFrame();

  constexpr int32_t const& __cordl_internal_get__rightHandNearestFrame() const;

  constexpr int32_t& __cordl_internal_get__rightHandNearestFrame();

  constexpr ::BeatSaber::RecPlay::PlayerPoseFrames const& __cordl_internal_get_frames() const;

  constexpr ::BeatSaber::RecPlay::PlayerPoseFrames& __cordl_internal_get_frames();

  constexpr ::BeatSaber::RecPlay::PoseOffsets const& __cordl_internal_get_offsets() const;

  constexpr ::BeatSaber::RecPlay::PoseOffsets& __cordl_internal_get_offsets();

  constexpr void __cordl_internal_set__headNearestFrame(int32_t value);

  constexpr void __cordl_internal_set__leftHandNearestFrame(int32_t value);

  constexpr void __cordl_internal_set__rightHandNearestFrame(int32_t value);

  constexpr void __cordl_internal_set_frames(::BeatSaber::RecPlay::PlayerPoseFrames value);

  constexpr void __cordl_internal_set_offsets(::BeatSaber::RecPlay::PoseOffsets value);

  /// @brief Method .ctor, addr 0x22480b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPoseSampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseSampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPoseSampler(PlayerPoseSampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPoseSampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPoseSampler(PlayerPoseSampler const&) = delete;

  /// @brief Field offsets, offset: 0x10, size: 0x54, def value: None
  ::BeatSaber::RecPlay::PoseOffsets ___offsets;

  /// @brief Field frames, offset: 0x68, size: 0x18, def value: None
  ::BeatSaber::RecPlay::PlayerPoseFrames ___frames;

  /// @brief Field _headNearestFrame, offset: 0x80, size: 0x4, def value: None
  int32_t ____headNearestFrame;

  /// @brief Field _leftHandNearestFrame, offset: 0x84, size: 0x4, def value: None
  int32_t ____leftHandNearestFrame;

  /// @brief Field _rightHandNearestFrame, offset: 0x88, size: 0x4, def value: None
  int32_t ____rightHandNearestFrame;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPoseSampler, 0x90>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseSampler, ___offsets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseSampler, ___frames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseSampler, ____headNearestFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseSampler, ____leftHandNearestFrame) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseSampler, ____rightHandNearestFrame) == 0x88, "Offset mismatch!");

} // namespace BeatSaber::RecPlay
NEED_NO_BOX(::BeatSaber::RecPlay::PlayerPoseSampler);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPoseSampler*, "BeatSaber.RecPlay", "PlayerPoseSampler");
