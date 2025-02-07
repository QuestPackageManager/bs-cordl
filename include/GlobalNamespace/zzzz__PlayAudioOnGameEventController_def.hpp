#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayAudioOnGameEventController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayAudioOnGameEventController)
namespace GlobalNamespace {
class AudioClipQueue;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
namespace GlobalNamespace {
class PlayAudioOnGameEventController_EventAudioBinding;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class Signal;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayAudioOnGameEventController;
}
namespace GlobalNamespace {
class PlayAudioOnGameEventController_EventAudioBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayAudioOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayAudioOnGameEventController/EventAudioBinding
class CORDL_TYPE PlayAudioOnGameEventController_EventAudioBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioClipQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipQueue, put = __cordl_internal_set__audioClipQueue)) ::UnityW<::GlobalNamespace::AudioClipQueue> _audioClipQueue;

  /// @brief Field _delay, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay)) float_t _delay;

  /// @brief Field _localizedAudioClips, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedAudioClips,
                      put = __cordl_internal_set__localizedAudioClips)) ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*>
      _localizedAudioClips;

  /// @brief Field _randomObjectPicker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__randomObjectPicker,
                      put = __cordl_internal_set__randomObjectPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* _randomObjectPicker;

  /// @brief Field _signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signal, put = __cordl_internal_set__signal)) ::UnityW<::GlobalNamespace::Signal> _signal;

  /// @brief Method Deinit, addr 0x3ad8aa8, size 0x90, virtual false, abstract: false, final false
  inline void Deinit();

  /// @brief Method HandleGameEvent, addr 0x3ad8b40, size 0xc0, virtual false, abstract: false, final false
  inline void HandleGameEvent();

  /// @brief Method Init, addr 0x3ad895c, size 0xf0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::AudioClipQueue* audioClipQueue);

  static inline ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& __cordl_internal_get__audioClipQueue() const;

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& __cordl_internal_get__audioClipQueue();

  constexpr float_t const& __cordl_internal_get__delay() const;

  constexpr float_t& __cordl_internal_get__delay();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> const& __cordl_internal_get__localizedAudioClips() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*>& __cordl_internal_get__localizedAudioClips();

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* const& __cordl_internal_get__randomObjectPicker() const;

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*& __cordl_internal_get__randomObjectPicker();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__signal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__signal();

  constexpr void __cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value);

  constexpr void __cordl_internal_set__delay(float_t value);

  constexpr void __cordl_internal_set__localizedAudioClips(::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> value);

  constexpr void __cordl_internal_set__randomObjectPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* value);

  constexpr void __cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value);

  /// @brief Method .ctor, addr 0x3ad8c00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayAudioOnGameEventController_EventAudioBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController_EventAudioBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayAudioOnGameEventController_EventAudioBinding(PlayAudioOnGameEventController_EventAudioBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController_EventAudioBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayAudioOnGameEventController_EventAudioBinding(PlayAudioOnGameEventController_EventAudioBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4023 };

  /// @brief Field _signal, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____signal;

  /// @brief Field _delay, offset: 0x18, size: 0x4, def value: None
  float_t ____delay;

  /// @brief Field _localizedAudioClips, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> ____localizedAudioClips;

  /// @brief Field _audioClipQueue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioClipQueue> ____audioClipQueue;

  /// @brief Field _randomObjectPicker, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* ____randomObjectPicker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, ____signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, ____delay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, ____localizedAudioClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, ____audioClipQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, ____randomObjectPicker) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayAudioOnGameEventController
class CORDL_TYPE PlayAudioOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventAudioBinding = ::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding;

  /// @brief Field _audioClipQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipQueue, put = __cordl_internal_set__audioClipQueue)) ::UnityW<::GlobalNamespace::AudioClipQueue> _audioClipQueue;

  /// @brief Field _eventAudioBindings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventAudioBindings,
                      put = __cordl_internal_set__eventAudioBindings)) ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*,
                                                                                ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*>
      _eventAudioBindings;

  /// @brief Method Awake, addr 0x3ad88f8, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::PlayAudioOnGameEventController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad8a4c, size 0x5c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& __cordl_internal_get__audioClipQueue() const;

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& __cordl_internal_get__audioClipQueue();

  constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*> const&
  __cordl_internal_get__eventAudioBindings() const;

  constexpr ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*>&
  __cordl_internal_get__eventAudioBindings();

  constexpr void __cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value);

  constexpr void __cordl_internal_set__eventAudioBindings(
      ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*> value);

  /// @brief Method .ctor, addr 0x3ad8b38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayAudioOnGameEventController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayAudioOnGameEventController(PlayAudioOnGameEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayAudioOnGameEventController(PlayAudioOnGameEventController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4024 };

  /// @brief Field _audioClipQueue, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioClipQueue> ____audioClipQueue;

  /// @brief Field _eventAudioBindings, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, ::Array<::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*>*> ____eventAudioBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController, ____audioClipQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController, ____eventAudioBindings) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayAudioOnGameEventController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayAudioOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayAudioOnGameEventController*, "", "PlayAudioOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayAudioOnGameEventController_EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
