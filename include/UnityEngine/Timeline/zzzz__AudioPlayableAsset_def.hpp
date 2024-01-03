#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPlayableAsset)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class AudioClipProperties;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
class __AudioPlayableAsset___get_outputs_d__16;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioPlayableAsset;
}
namespace UnityEngine::Timeline {
class __AudioPlayableAsset___get_outputs_d__16;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioPlayableAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16);
// Type: ::<get_outputs>d__16
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10431))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13867))
// CS Name: ::AudioPlayableAsset::<get_outputs>d__16*
class CORDL_TYPE __AudioPlayableAsset___get_outputs_d__16 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::Timeline::AudioPlayableAsset* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Playables::PlayableBinding& __get___2__current();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Timeline::AudioPlayableAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AudioPlayableAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::Timeline::AudioPlayableAsset* value);

  static inline ::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c61e74, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c6204c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c62050, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x2c620e0, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c620f0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c62130, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x2c62190, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2c62234, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioPlayableAsset___get_outputs_d__16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioPlayableAsset___get_outputs_d__16(__AudioPlayableAsset___get_outputs_d__16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioPlayableAsset___get_outputs_d__16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioPlayableAsset___get_outputs_d__16(__AudioPlayableAsset___get_outputs_d__16 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioPlayableAsset___get_outputs_d__16();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Timeline::AudioPlayableAsset* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16, _____4__this) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::AudioPlayableAsset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13868))
// CS Name: ::UnityEngine.Timeline::AudioPlayableAsset*
class CORDL_TYPE AudioPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using _get_outputs_d__16 = ::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16;

  /// @brief Field m_Clip, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Clip, put = __set_m_Clip))::UnityEngine::AudioClip* m_Clip;

  /// @brief Field m_Loop, offset 0x20, size 0x1
  __declspec(property(get = __get_m_Loop, put = __set_m_Loop)) bool m_Loop;

  /// @brief Field m_bufferingTime, offset 0x24, size 0x4
  __declspec(property(get = __get_m_bufferingTime, put = __set_m_bufferingTime)) float_t m_bufferingTime;

  /// @brief Field m_ClipProperties, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ClipProperties, put = __set_m_ClipProperties))::UnityEngine::Timeline::AudioClipProperties* m_ClipProperties;

  __declspec(property(get = get_bufferingTime, put = set_bufferingTime)) float_t bufferingTime;

  __declspec(property(get = get_clip, put = set_clip))::UnityEngine::AudioClip* clip;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  constexpr ::UnityEngine::AudioClip*& __get_m_Clip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get_m_Clip() const;

  constexpr void __set_m_Clip(::UnityEngine::AudioClip* value);

  constexpr bool& __get_m_Loop();

  constexpr bool const& __get_m_Loop() const;

  constexpr void __set_m_Loop(bool value);

  constexpr float_t& __get_m_bufferingTime();

  constexpr float_t const& __get_m_bufferingTime() const;

  constexpr void __set_m_bufferingTime(float_t value);

  constexpr ::UnityEngine::Timeline::AudioClipProperties*& __get_m_ClipProperties();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AudioClipProperties*> const& __get_m_ClipProperties() const;

  constexpr void __set_m_ClipProperties(::UnityEngine::Timeline::AudioClipProperties* value);

  /// @brief Method get_bufferingTime, addr 0x2c61d14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bufferingTime();

  /// @brief Method set_bufferingTime, addr 0x2c61d1c, size 0x8, virtual false, abstract: false, final false
  inline void set_bufferingTime(float_t value);

  /// @brief Method get_clip, addr 0x2c61d24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClip* get_clip();

  /// @brief Method set_clip, addr 0x2c61d2c, size 0x8, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::AudioClip* value);

  /// @brief Method get_loop, addr 0x2c61d34, size 0x8, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method set_loop, addr 0x2c61d3c, size 0xc, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method get_duration, addr 0x2c61d48, size 0xb4, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_outputs, addr 0x2c61dfc, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method CreatePlayable, addr 0x2c61ea8, size 0x11c, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method get_clipCaps, addr 0x2c61fc4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  static inline ::UnityEngine::Timeline::AudioPlayableAsset* New_ctor();

  /// @brief Method .ctor, addr 0x2c61fd0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPlayableAsset(AudioPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPlayableAsset(AudioPlayableAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayableAsset();

public:
  /// @brief Field m_Clip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ___m_Clip;

  /// @brief Field m_Loop, offset: 0x20, size: 0x1, def value: None
  bool ___m_Loop;

  /// @brief Field m_bufferingTime, offset: 0x24, size: 0x4, def value: None
  float_t ___m_bufferingTime;

  /// @brief Field m_ClipProperties, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Timeline::AudioClipProperties* ___m_ClipProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioPlayableAsset, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioPlayableAsset, ___m_Clip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioPlayableAsset, ___m_Loop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioPlayableAsset, ___m_bufferingTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioPlayableAsset, ___m_ClipProperties) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioPlayableAsset*, "UnityEngine.Timeline", "AudioPlayableAsset");
NEED_NO_BOX(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AudioPlayableAsset___get_outputs_d__16*, "UnityEngine.Timeline", "AudioPlayableAsset/<get_outputs>d__16");
