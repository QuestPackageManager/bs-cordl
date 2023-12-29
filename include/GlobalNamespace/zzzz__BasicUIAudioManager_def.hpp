#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicUIAudioManager)
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5496))
// CS Name: ::BasicUIAudioManager*
class CORDL_TYPE BasicUIAudioManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonClickEvents, offset 0x18, size 0x8
  __declspec(property(get = __get__buttonClickEvents, put = __set__buttonClickEvents))::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> _buttonClickEvents;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _clickSounds, offset 0x28, size 0x8
  __declspec(property(get = __get__clickSounds, put = __set__clickSounds))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _clickSounds;

  /// @brief Field _minPitch, offset 0x30, size 0x4
  __declspec(property(get = __get__minPitch, put = __set__minPitch)) float_t _minPitch;

  /// @brief Field _maxPitch, offset 0x34, size 0x4
  __declspec(property(get = __get__maxPitch, put = __set__maxPitch)) float_t _maxPitch;

  /// @brief Field _randomSoundPicker, offset 0x38, size 0x8
  __declspec(property(get = __get__randomSoundPicker, put = __set__randomSoundPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* _randomSoundPicker;

  constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*>& __get__buttonClickEvents();

  constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> const& __get__buttonClickEvents() const;

  constexpr void __set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__clickSounds();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__clickSounds() const;

  constexpr void __set__clickSounds(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr float_t& __get__minPitch();

  constexpr float_t const& __get__minPitch() const;

  constexpr void __set__minPitch(float_t value);

  constexpr float_t& __get__maxPitch();

  constexpr float_t const& __get__maxPitch() const;

  constexpr void __set__maxPitch(float_t value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& __get__randomSoundPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> const& __get__randomSoundPicker() const;

  constexpr void __set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* value);

  /// @brief Method Start addr 0x212ec88 size 0x98 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x212ed20 size 0xd4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x212edf4 size 0xd4 virtual false final false
  inline void OnDisable();

  /// @brief Method HandleButtonClickEvent addr 0x212eec8 size 0xd0 virtual false final false
  inline void HandleButtonClickEvent();

  static inline ::GlobalNamespace::BasicUIAudioManager* New_ctor();

  /// @brief Method .ctor addr 0x212ef98 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicUIAudioManager(BasicUIAudioManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicUIAudioManager(BasicUIAudioManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicUIAudioManager();

public:
  /// @brief Field _buttonClickEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> ____buttonClickEvents;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _clickSounds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____clickSounds;

  /// @brief Field _minPitch, offset: 0x30, size: 0x4, def value: None
  float_t ____minPitch;

  /// @brief Field _maxPitch, offset: 0x34, size: 0x4, def value: None
  float_t ____maxPitch;

  /// @brief Field _randomSoundPicker, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* ____randomSoundPicker;

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
