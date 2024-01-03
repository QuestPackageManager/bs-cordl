#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioClipQueue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipQueue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipQueue);
// Type: ::AudioClipQueue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4044))
// CS Name: ::AudioClipQueue*
class CORDL_TYPE AudioClipQueue : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _queue, offset 0x20, size 0x8
  __declspec(property(get = __get__queue, put = __set__queue))::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* _queue;

  /// @brief Field _delay, offset 0x28, size 0x4
  __declspec(property(get = __get__delay, put = __set__delay)) float_t _delay;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*& __get__queue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*> const& __get__queue() const;

  constexpr void __set__queue(::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* value);

  constexpr float_t& __get__delay();

  constexpr float_t const& __get__delay() const;

  constexpr void __set__delay(float_t value);

  /// @brief Method Awake, addr 0x222abb8, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x222abd8, size 0x140, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method PlayAudioClipWithDelay, addr 0x222ad18, size 0xcc, virtual false, abstract: false, final false
  inline void PlayAudioClipWithDelay(::UnityEngine::AudioClip* audioClip, float_t delay);

  static inline ::GlobalNamespace::AudioClipQueue* New_ctor();

  /// @brief Method .ctor, addr 0x222ade4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipQueue(AudioClipQueue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipQueue(AudioClipQueue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipQueue();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _queue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* ____queue;

  /// @brief Field _delay, offset: 0x28, size: 0x4, def value: None
  float_t ____delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipQueue, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipQueue, ____audioSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipQueue, ____queue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipQueue, ____delay) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
