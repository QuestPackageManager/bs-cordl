#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayAudioOnGameEventController)
namespace GlobalNamespace {
class AudioClipQueue;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class __PlayAudioOnGameEventController__EventAudioBinding;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayAudioOnGameEventController;
}
namespace GlobalNamespace {
class __PlayAudioOnGameEventController__EventAudioBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayAudioOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding);
// Type: ::EventAudioBinding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4074))
// CS Name: ::PlayAudioOnGameEventController::EventAudioBinding*
class CORDL_TYPE __PlayAudioOnGameEventController__EventAudioBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field _signal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__signal, put = __cordl_internal_set__signal))::UnityW<::GlobalNamespace::Signal> _signal;

  /// @brief Field _delay, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay)) float_t _delay;

  /// @brief Field _localizedAudioClips, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__localizedAudioClips,
      put = __cordl_internal_set__localizedAudioClips))::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> _localizedAudioClips;

  /// @brief Field _audioClipQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipQueue, put = __cordl_internal_set__audioClipQueue))::UnityW<::GlobalNamespace::AudioClipQueue> _audioClipQueue;

  /// @brief Field _randomObjectPicker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__randomObjectPicker,
                      put = __cordl_internal_set__randomObjectPicker))::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* _randomObjectPicker;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__signal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__signal() const;

  constexpr void __cordl_internal_set__signal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr float_t& __cordl_internal_get__delay();

  constexpr float_t const& __cordl_internal_get__delay() const;

  constexpr void __cordl_internal_set__delay(float_t value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*>& __cordl_internal_get__localizedAudioClips();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> const& __cordl_internal_get__localizedAudioClips() const;

  constexpr void __cordl_internal_set__localizedAudioClips(::ArrayW<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>, ::Array<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> value);

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& __cordl_internal_get__audioClipQueue();

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& __cordl_internal_get__audioClipQueue() const;

  constexpr void __cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value);

  constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*& __cordl_internal_get__randomObjectPicker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>*> const& __cordl_internal_get__randomObjectPicker() const;

  constexpr void __cordl_internal_set__randomObjectPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityW<::GlobalNamespace::LocalizedAudioClipSO>>* value);

  /// @brief Method Init, addr 0x222fcb0, size 0xf0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::AudioClipQueue* audioClipQueue);

  /// @brief Method Deinit, addr 0x222fdfc, size 0x8c, virtual false, abstract: false, final false
  inline void Deinit();

  /// @brief Method HandleGameEvent, addr 0x222fe90, size 0xc4, virtual false, abstract: false, final false
  inline void HandleGameEvent();

  static inline ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding* New_ctor();

  /// @brief Method .ctor, addr 0x222ff54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayAudioOnGameEventController__EventAudioBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayAudioOnGameEventController__EventAudioBinding(__PlayAudioOnGameEventController__EventAudioBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayAudioOnGameEventController__EventAudioBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayAudioOnGameEventController__EventAudioBinding(__PlayAudioOnGameEventController__EventAudioBinding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayAudioOnGameEventController__EventAudioBinding();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, ____signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, ____delay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, ____localizedAudioClips) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, ____audioClipQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, ____randomObjectPicker) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayAudioOnGameEventController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4075))
// CS Name: ::PlayAudioOnGameEventController*
class CORDL_TYPE PlayAudioOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using EventAudioBinding = ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding;

  /// @brief Field _audioClipQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipQueue, put = __cordl_internal_set__audioClipQueue))::UnityW<::GlobalNamespace::AudioClipQueue> _audioClipQueue;

  /// @brief Field _eventAudioBindings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventAudioBindings,
                      put = __cordl_internal_set__eventAudioBindings))::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*,
                                                                               ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> _eventAudioBindings;

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue>& __cordl_internal_get__audioClipQueue();

  constexpr ::UnityW<::GlobalNamespace::AudioClipQueue> const& __cordl_internal_get__audioClipQueue() const;

  constexpr void __cordl_internal_set__audioClipQueue(::UnityW<::GlobalNamespace::AudioClipQueue> value);

  constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*>&
  __cordl_internal_get__eventAudioBindings();

  constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> const&
  __cordl_internal_get__eventAudioBindings() const;

  constexpr void __cordl_internal_set__eventAudioBindings(
      ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> value);

  /// @brief Method Awake, addr 0x222fc4c, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x222fda0, size 0x5c, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::PlayAudioOnGameEventController* New_ctor();

  /// @brief Method .ctor, addr 0x222fe88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayAudioOnGameEventController(PlayAudioOnGameEventController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayAudioOnGameEventController(PlayAudioOnGameEventController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayAudioOnGameEventController();

public:
  /// @brief Field _audioClipQueue, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioClipQueue> ____audioClipQueue;

  /// @brief Field _eventAudioBindings, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, ::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> ____eventAudioBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayAudioOnGameEventController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController, ____audioClipQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayAudioOnGameEventController, ____eventAudioBindings) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayAudioOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayAudioOnGameEventController*, "", "PlayAudioOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
