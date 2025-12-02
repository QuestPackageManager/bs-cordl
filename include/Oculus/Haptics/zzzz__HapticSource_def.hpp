#pragma once
// IWYU pragma private; include "Oculus/Haptics/HapticSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticSource)
namespace Oculus::Haptics {
struct Controller;
}
namespace Oculus::Haptics {
class HapticClipPlayer;
}
namespace Oculus::Haptics {
class HapticClip;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Oculus::Haptics {
class HapticSource;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::HapticSource);
// Dependencies Oculus.Haptics.Controller, UnityEngine.MonoBehaviour
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.HapticSource
class CORDL_TYPE HapticSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _amplitude, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__amplitude, put = __cordl_internal_set__amplitude)) float_t _amplitude;

  /// @brief Field _clip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__clip, put = __cordl_internal_set__clip)) ::UnityW<::Oculus::Haptics::HapticClip> _clip;

  /// @brief Field _controller, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__controller, put = __cordl_internal_set__controller)) ::Oculus::Haptics::Controller _controller;

  /// @brief Field _frequencyShift, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__frequencyShift, put = __cordl_internal_set__frequencyShift)) float_t _frequencyShift;

  /// @brief Field _loop, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__loop, put = __cordl_internal_set__loop)) bool _loop;

  /// @brief Field _player, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__player, put = __cordl_internal_set__player)) ::Oculus::Haptics::HapticClipPlayer* _player;

  /// @brief Field _priority, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) uint32_t _priority;

  __declspec(property(get = get_amplitude, put = set_amplitude)) float_t amplitude;

  __declspec(property(put = set_clip)) ::UnityW<::Oculus::Haptics::HapticClip> clip;

  __declspec(property(get = get_clipDuration)) float_t clipDuration;

  __declspec(property(put = set_controller)) ::Oculus::Haptics::Controller controller;

  __declspec(property(get = get_frequencyShift, put = set_frequencyShift)) float_t frequencyShift;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_priority, put = set_priority)) uint32_t priority;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Awake, addr 0x5b9dc50, size 0x70, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Oculus::Haptics::HapticSource* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x5b9de6c, size 0x10, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x5b9de68, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDestroy, addr 0x5b9de7c, size 0x14, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0x5b9dd50, size 0x14, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x5b9dd18, size 0x1c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play, addr 0x5b9dd34, size 0x1c, virtual false, abstract: false, final false
  inline void Play(::Oculus::Haptics::Controller controller);

  /// @brief Method Resume, addr 0x5b9dd64, size 0x14, virtual false, abstract: false, final false
  inline void Resume();

  /// @brief Method Seek, addr 0x5b9dd8c, size 0x14, virtual false, abstract: false, final false
  inline void Seek(float_t time);

  /// @brief Method Stop, addr 0x5b9dd78, size 0x14, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method SyncSerializedFieldsToPlayer, addr 0x5b9dcc0, size 0x58, virtual false, abstract: false, final false
  inline void SyncSerializedFieldsToPlayer();

  constexpr float_t const& __cordl_internal_get__amplitude() const;

  constexpr float_t& __cordl_internal_get__amplitude();

  constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& __cordl_internal_get__clip() const;

  constexpr ::UnityW<::Oculus::Haptics::HapticClip>& __cordl_internal_get__clip();

  constexpr ::Oculus::Haptics::Controller const& __cordl_internal_get__controller() const;

  constexpr ::Oculus::Haptics::Controller& __cordl_internal_get__controller();

  constexpr float_t const& __cordl_internal_get__frequencyShift() const;

  constexpr float_t& __cordl_internal_get__frequencyShift();

  constexpr bool const& __cordl_internal_get__loop() const;

  constexpr bool& __cordl_internal_get__loop();

  constexpr ::Oculus::Haptics::HapticClipPlayer* const& __cordl_internal_get__player() const;

  constexpr ::Oculus::Haptics::HapticClipPlayer*& __cordl_internal_get__player();

  constexpr uint32_t const& __cordl_internal_get__priority() const;

  constexpr uint32_t& __cordl_internal_get__priority();

  constexpr void __cordl_internal_set__amplitude(float_t value);

  constexpr void __cordl_internal_set__clip(::UnityW<::Oculus::Haptics::HapticClip> value);

  constexpr void __cordl_internal_set__controller(::Oculus::Haptics::Controller value);

  constexpr void __cordl_internal_set__frequencyShift(float_t value);

  constexpr void __cordl_internal_set__loop(bool value);

  constexpr void __cordl_internal_set__player(::Oculus::Haptics::HapticClipPlayer* value);

  constexpr void __cordl_internal_set__priority(uint32_t value);

  /// @brief Method .ctor, addr 0x5b9de90, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_amplitude, addr 0x5b9ddfc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_amplitude();

  /// @brief Method get_clipDuration, addr 0x5b9ddb8, size 0x14, virtual false, abstract: false, final false
  inline float_t get_clipDuration();

  /// @brief Method get_frequencyShift, addr 0x5b9de20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_frequencyShift();

  /// @brief Method get_loop, addr 0x5b9ddd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_priority, addr 0x5b9de44, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_priority();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_amplitude, addr 0x5b9de04, size 0x1c, virtual false, abstract: false, final false
  inline void set_amplitude(float_t value);

  /// @brief Method set_clip, addr 0x5b9dda0, size 0x18, virtual false, abstract: false, final false
  inline void set_clip(::Oculus::Haptics::HapticClip* value);

  /// @brief Method set_controller, addr 0x5b9ddcc, size 0x8, virtual false, abstract: false, final false
  inline void set_controller(::Oculus::Haptics::Controller value);

  /// @brief Method set_frequencyShift, addr 0x5b9de28, size 0x1c, virtual false, abstract: false, final false
  inline void set_frequencyShift(float_t value);

  /// @brief Method set_loop, addr 0x5b9dddc, size 0x20, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_priority, addr 0x5b9de4c, size 0x1c, virtual false, abstract: false, final false
  inline void set_priority(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticSource(HapticSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticSource(HapticSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22414 };

  /// @brief Field _player, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Haptics::HapticClipPlayer* ____player;

  /// @brief Field _clip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Oculus::Haptics::HapticClip> ____clip;

  /// @brief Field _controller, offset: 0x30, size: 0x4, def value: None
  ::Oculus::Haptics::Controller ____controller;

  /// @brief Field _loop, offset: 0x34, size: 0x1, def value: None
  bool ____loop;

  /// @brief Field _amplitude, offset: 0x38, size: 0x4, def value: None
  float_t ____amplitude;

  /// @brief Field _frequencyShift, offset: 0x3c, size: 0x4, def value: None
  float_t ____frequencyShift;

  /// @brief Field _priority, offset: 0x40, size: 0x4, def value: None
  uint32_t ____priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::HapticSource, ____player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____clip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____controller) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____loop) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____amplitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____frequencyShift) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::HapticSource, ____priority) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::HapticSource, 0x48>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::HapticSource);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::HapticSource*, "Oculus.Haptics", "HapticSource");
