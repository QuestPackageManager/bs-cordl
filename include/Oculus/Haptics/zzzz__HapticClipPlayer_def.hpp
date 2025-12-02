#pragma once
// IWYU pragma private; include "Oculus/Haptics/HapticClipPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticClipPlayer)
namespace Oculus::Haptics {
struct Controller;
}
namespace Oculus::Haptics {
class HapticClip;
}
namespace Oculus::Haptics {
class Haptics;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Haptics {
class HapticClipPlayer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::HapticClipPlayer);
// Dependencies System.Object
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.HapticClipPlayer
class CORDL_TYPE HapticClipPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _clipId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__clipId, put = __cordl_internal_set__clipId)) int32_t _clipId;

  /// @brief Field _haptics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__haptics, put = __cordl_internal_set__haptics)) ::Oculus::Haptics::Haptics* _haptics;

  /// @brief Field _playerId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__playerId, put = __cordl_internal_set__playerId)) int32_t _playerId;

  __declspec(property(get = get_amplitude, put = set_amplitude)) float_t amplitude;

  __declspec(property(put = set_clip)) ::UnityW<::Oculus::Haptics::HapticClip> clip;

  __declspec(property(get = get_clipDuration)) float_t clipDuration;

  __declspec(property(get = get_frequencyShift, put = set_frequencyShift)) float_t frequencyShift;

  __declspec(property(get = get_isLooping, put = set_isLooping)) bool isLooping;

  __declspec(property(get = get_priority, put = set_priority)) uint32_t priority;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5b9c474, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5b9c4e4, size 0xbc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x5b9c5bc, size 0x50, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Haptics::HapticClipPlayer* New_ctor();

  static inline ::Oculus::Haptics::HapticClipPlayer* New_ctor(::Oculus::Haptics::HapticClip* clip);

  /// @brief Method Pause, addr 0x5b9b568, size 0x18, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x5b9b448, size 0x1c, virtual false, abstract: false, final false
  inline void Play(::Oculus::Haptics::Controller controller);

  /// @brief Method Resume, addr 0x5b9b674, size 0x18, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method Seek, addr 0x5b9b88c, size 0x18, virtual false, abstract: false, final false
  inline void Seek(float_t time);

  /// @brief Method SetHaptics, addr 0x5b9b388, size 0x18, virtual true, abstract: false, final false
  inline void SetHaptics();

  /// @brief Method Stop, addr 0x5b9b780, size 0x18, virtual false, abstract: false, final false
  inline void Stop();

  constexpr int32_t const& __cordl_internal_get__clipId() const;

  constexpr int32_t& __cordl_internal_get__clipId();

  constexpr ::Oculus::Haptics::Haptics* const& __cordl_internal_get__haptics() const;

  constexpr ::Oculus::Haptics::Haptics*& __cordl_internal_get__haptics();

  constexpr int32_t const& __cordl_internal_get__playerId() const;

  constexpr int32_t& __cordl_internal_get__playerId();

  constexpr void __cordl_internal_set__clipId(int32_t value);

  constexpr void __cordl_internal_set__haptics(::Oculus::Haptics::Haptics* value);

  constexpr void __cordl_internal_set__playerId(int32_t value);

  /// @brief Method .ctor, addr 0x5b9b23c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5b9b2b4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Haptics::HapticClip* clip);

  /// @brief Method get_amplitude, addr 0x5b9bc68, size 0x18, virtual false, abstract: false, final false
  inline float_t get_amplitude();

  /// @brief Method get_clipDuration, addr 0x5b9bbb0, size 0x18, virtual false, abstract: false, final false
  inline float_t get_clipDuration();

  /// @brief Method get_frequencyShift, addr 0x5b9be80, size 0x18, virtual false, abstract: false, final false
  inline float_t get_frequencyShift();

  /// @brief Method get_isLooping, addr 0x5b9ba40, size 0x18, virtual false, abstract: false, final false
  inline bool get_isLooping();

  /// @brief Method get_priority, addr 0x5b9c094, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_priority();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_amplitude, addr 0x5b9bd24, size 0x18, virtual false, abstract: false, final false
  inline void set_amplitude(float_t value);

  /// @brief Method set_clip, addr 0x5b9b31c, size 0x6c, virtual false, abstract: false, final false
  inline void set_clip(::Oculus::Haptics::HapticClip* value);

  /// @brief Method set_frequencyShift, addr 0x5b9bf38, size 0x18, virtual false, abstract: false, final false
  inline void set_frequencyShift(float_t value);

  /// @brief Method set_isLooping, addr 0x5b9baf8, size 0x20, virtual false, abstract: false, final false
  inline void set_isLooping(bool value);

  /// @brief Method set_priority, addr 0x5b9c164, size 0x1c, virtual false, abstract: false, final false
  inline void set_priority(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticClipPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticClipPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticClipPlayer(HapticClipPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticClipPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticClipPlayer(HapticClipPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22412 };

  /// @brief Field _clipId, offset: 0x10, size: 0x4, def value: None
  int32_t ____clipId;

  /// @brief Field _playerId, offset: 0x14, size: 0x4, def value: None
  int32_t ____playerId;

  /// @brief Field _haptics, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Haptics::Haptics* ____haptics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::HapticClipPlayer, ____clipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticClipPlayer, ____playerId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticClipPlayer, ____haptics) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::HapticClipPlayer, 0x20>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::HapticClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::HapticClipPlayer*, "Oculus.Haptics", "HapticClipPlayer");
