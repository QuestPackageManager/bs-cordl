#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicUIAudioManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicUIAudioManager)
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicUIAudioManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicUIAudioManager);
// Type: ::BasicUIAudioManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasicUIAudioManager*
class CORDL_TYPE BasicUIAudioManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _buttonClickEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonClickEvents,
                      put = __cordl_internal_set__buttonClickEvents))::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> _buttonClickEvents;

  /// @brief Field _clickSounds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__clickSounds,
                      put = __cordl_internal_set__clickSounds))::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> _clickSounds;

  /// @brief Field _maxPitch, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPitch, put = __cordl_internal_set__maxPitch)) float_t _maxPitch;

  /// @brief Field _minPitch, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minPitch, put = __cordl_internal_set__minPitch)) float_t _minPitch;

  /// @brief Field _randomSoundPicker, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__randomSoundPicker,
                      put = __cordl_internal_set__randomSoundPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* _randomSoundPicker;

  /// @brief Method HandleButtonClickEvent, addr 0x2732e18, size 0xd0, virtual false, abstract: false, final false
  inline void HandleButtonClickEvent();

  static inline ::GlobalNamespace::BasicUIAudioManager* New_ctor();

  /// @brief Method OnDisable, addr 0x2732d44, size 0xd4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2732c70, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x2732bd8, size 0x98, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> const& __cordl_internal_get__buttonClickEvents() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>& __cordl_internal_get__buttonClickEvents();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__clickSounds() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__clickSounds();

  constexpr float_t const& __cordl_internal_get__maxPitch() const;

  constexpr float_t& __cordl_internal_get__maxPitch();

  constexpr float_t const& __cordl_internal_get__minPitch() const;

  constexpr float_t& __cordl_internal_get__minPitch();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__randomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__randomSoundPicker() const;

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__buttonClickEvents(::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> value);

  constexpr void __cordl_internal_set__clickSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__maxPitch(float_t value);

  constexpr void __cordl_internal_set__minPitch(float_t value);

  constexpr void __cordl_internal_set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* value);

  /// @brief Method .ctor, addr 0x2732ee8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicUIAudioManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicUIAudioManager(BasicUIAudioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicUIAudioManager(BasicUIAudioManager const&) = delete;

  /// @brief Field _buttonClickEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> ____buttonClickEvents;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _clickSounds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____clickSounds;

  /// @brief Field _minPitch, offset: 0x30, size: 0x4, def value: None
  float_t ____minPitch;

  /// @brief Field _maxPitch, offset: 0x34, size: 0x4, def value: None
  float_t ____maxPitch;

  /// @brief Field _randomSoundPicker, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::UnityEngine::AudioClip>>* ____randomSoundPicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicUIAudioManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____buttonClickEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____clickSounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____minPitch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____maxPitch) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicUIAudioManager, ____randomSoundPicker) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicUIAudioManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicUIAudioManager*, "", "BasicUIAudioManager");
