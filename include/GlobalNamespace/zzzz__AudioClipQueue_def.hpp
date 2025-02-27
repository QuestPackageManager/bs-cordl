#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClipQueue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioClipQueue)
namespace GlobalNamespace {
class AudioClipQueue_AudioClipWithDelay;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipQueue;
}
namespace GlobalNamespace {
class AudioClipQueue_AudioClipWithDelay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipQueue);
MARK_REF_PTR_T(::GlobalNamespace::AudioClipQueue_AudioClipWithDelay);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipQueue/AudioClipWithDelay
class CORDL_TYPE AudioClipQueue_AudioClipWithDelay : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioClip, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioClip, put = __cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  /// @brief Field delay, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  static inline ::GlobalNamespace::AudioClipQueue_AudioClipWithDelay* New_ctor(::UnityEngine::AudioClip* audioClip, float_t delay);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x3adc0c4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, float_t delay);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipQueue_AudioClipWithDelay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue_AudioClipWithDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipQueue_AudioClipWithDelay(AudioClipQueue_AudioClipWithDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue_AudioClipWithDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipQueue_AudioClipWithDelay(AudioClipQueue_AudioClipWithDelay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3989 };

  /// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___audioClip;

  /// @brief Field delay, offset: 0x18, size: 0x4, def value: None
  float_t ___delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipQueue_AudioClipWithDelay, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipQueue_AudioClipWithDelay, ___delay) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipQueue
class CORDL_TYPE AudioClipQueue : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AudioClipWithDelay = ::GlobalNamespace::AudioClipQueue_AudioClipWithDelay;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _queue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__queue, put = __cordl_internal_set__queue)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* _queue;

  /// @brief Method Awake, addr 0x3adbd80, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::AudioClipQueue* New_ctor();

  /// @brief Method PlayAudioClipWithDelay, addr 0x3adbfd0, size 0xf4, virtual false, abstract: false, final false
  inline void PlayAudioClipWithDelay(::UnityEngine::AudioClip* audioClip, float_t delay);

  /// @brief Method Update, addr 0x3adbda0, size 0x230, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* const& __cordl_internal_get__queue() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>*& __cordl_internal_get__queue();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__queue(::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* value);

  /// @brief Method .ctor, addr 0x3adc0fc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipQueue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipQueue(AudioClipQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipQueue(AudioClipQueue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3990 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _queue, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* ____queue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipQueue, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipQueue, ____queue) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipQueue, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
NEED_NO_BOX(::GlobalNamespace::AudioClipQueue_AudioClipWithDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*, "", "AudioClipQueue/AudioClipWithDelay");
