#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelRecording)
// Forward declare root types
namespace GlobalNamespace {
class LevelRecording;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelRecording);
// Type: ::LevelRecording
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelRecording*
class CORDL_TYPE LevelRecording : public ::System::Object {
public:
  // Declarations
  /// @brief Field frames, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_frames, put = __cordl_internal_set_frames))::BeatSaber::RecPlay::PlayerPoseFrames frames;

  /// @brief Field key, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::GlobalNamespace::BeatmapKey key;

  static inline ::GlobalNamespace::LevelRecording* New_ctor();

  constexpr ::BeatSaber::RecPlay::PlayerPoseFrames const& __cordl_internal_get_frames() const;

  constexpr ::BeatSaber::RecPlay::PlayerPoseFrames& __cordl_internal_get_frames();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_key() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_key();

  constexpr void __cordl_internal_set_frames(::BeatSaber::RecPlay::PlayerPoseFrames value);

  constexpr void __cordl_internal_set_key(::GlobalNamespace::BeatmapKey value);

  /// @brief Method .ctor, addr 0x2466df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelRecording();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelRecording", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelRecording(LevelRecording&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelRecording", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelRecording(LevelRecording const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___key;

  /// @brief Field frames, offset: 0x28, size: 0x18, def value: None
  ::BeatSaber::RecPlay::PlayerPoseFrames ___frames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelRecording, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelRecording, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelRecording, ___frames) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelRecording);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelRecording*, "", "LevelRecording");
