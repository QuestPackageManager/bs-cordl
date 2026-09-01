#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXTimeSpaceHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXTimeSpaceHelper)
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
namespace UnityEngine::VFX {
struct PlayableTimeSpace;
}
namespace UnityEngine::VFX {
class VFXTimeSpaceHelper__CollectClipEvents_d__1;
}
namespace UnityEngine::VFX {
class VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3;
}
namespace UnityEngine::VFX {
class VisualEffectControlClip;
}
namespace UnityEngine::VFX {
class VisualEffectControlPlayableBehaviour;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXTimeSpaceHelper;
}
namespace UnityEngine::VFX {
class VFXTimeSpaceHelper__CollectClipEvents_d__1;
}
namespace UnityEngine::VFX {
class VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXTimeSpaceHelper*);
MARK_REF_T(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1*);
MARK_REF_T(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTimeSpaceHelper*, "UnityEngine.VFX", "VFXTimeSpaceHelper");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1*, "UnityEngine.VFX", "VFXTimeSpaceHelper/<CollectClipEvents>d__1");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3*, "UnityEngine.VFX", "VFXTimeSpaceHelper/<GetEventNormalizedSpace>d__3");
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object, UnityEngine.VFX.VisualEffectControlClip::ClipEvent, UnityEngine.VFX.VisualEffectPlayableSerializedEvent
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXTimeSpaceHelper/<CollectClipEvents>d__1
class CORDL_TYPE VFXTimeSpaceHelper__CollectClipEvents_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__get_Current)) ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent
      System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent __2__current;

  /// @brief Field <>3__source, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> __3__source;

  /// @brief Field <>7__wrap1, offset 0x60, size 0x60
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>
      __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <eventExit>5__3, offset 0xc0, size 0x30
  __declspec(property(get = __cordl_internal_get__eventExit_5__3, put = __cordl_internal_set__eventExit_5__3)) ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent _eventExit_5__3;

  /// @brief Field source, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x69d3e88, size 0x22c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.GetEnumerator, addr 0x69d41b8, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.get_Current, addr 0x69d40fc, size 0x18, virtual true, abstract: false, final true
  inline ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x69d4250, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x69d4114, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x69d414c, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x69d3e1c, size 0x6c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> const& __cordl_internal_get___3__source() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectControlClip>& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent const& __cordl_internal_get__eventExit_5__3() const;

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent& __cordl_internal_get__eventExit_5__3();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> const& __cordl_internal_get_source() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffectControlClip>& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent value);

  constexpr void __cordl_internal_set___3__source(::UnityW<::UnityEngine::VFX::VisualEffectControlClip> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__eventExit_5__3(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent value);

  constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::VFX::VisualEffectControlClip> value);

  /// @brief Method <>m__Finally1, addr 0x69d40b4, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x69d3bc4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__VFX__VisualEffectPlayableSerializedEvent_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__VFX__VisualEffectPlayableSerializedEvent_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTimeSpaceHelper__CollectClipEvents_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper__CollectClipEvents_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTimeSpaceHelper__CollectClipEvents_d__1(VFXTimeSpaceHelper__CollectClipEvents_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper__CollectClipEvents_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTimeSpaceHelper__CollectClipEvents_d__1(VFXTimeSpaceHelper__CollectClipEvents_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19952 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x48, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> ___source;

  /// @brief Field <>3__source, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffectControlClip> _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x60, size: 0x60, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent> _____7__wrap1;

  /// @brief Field <eventExit>5__3, offset: 0xc0, size: 0x30, def value: None
  ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent ____eventExit_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, _____l__initialThreadId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, ___source) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, _____3__source) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, _____7__wrap1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1, ____eventExit_5__3) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1) == 0xf0, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object, UnityEngine.VFX.PlayableTimeSpace, UnityEngine.VFX.VisualEffectPlayableSerializedEvent
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXTimeSpaceHelper/<GetEventNormalizedSpace>d__3
class CORDL_TYPE VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__get_Current)) ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent
      System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent __2__current;

  /// @brief Field <>3__clipEnd, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get___3__clipEnd, put = __cordl_internal_set___3__clipEnd)) double_t __3__clipEnd;

  /// @brief Field <>3__clipStart, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___3__clipStart, put = __cordl_internal_set___3__clipStart)) double_t __3__clipStart;

  /// @brief Field <>3__events, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___3__events,
                      put = __cordl_internal_set___3__events)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* __3__events;

  /// @brief Field <>3__space, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get___3__space, put = __cordl_internal_set___3__space)) ::UnityEngine::VFX::PlayableTimeSpace __3__space;

  /// @brief Field <>7__wrap1, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field clipEnd, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_clipEnd, put = __cordl_internal_set_clipEnd)) double_t clipEnd;

  /// @brief Field clipStart, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_clipStart, put = __cordl_internal_set_clipStart)) double_t clipStart;

  /// @brief Field events, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_events,
                      put = __cordl_internal_set_events)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* events;

  /// @brief Field space, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) ::UnityEngine::VFX::PlayableTimeSpace space;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x69d4270, size 0x370, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.GetEnumerator, addr 0x69d4750, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectPlayableSerializedEvent>.get_Current, addr 0x69d4694, size 0x18, virtual true, abstract: false, final true
  inline ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectPlayableSerializedEvent__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x69d4800, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x69d46ac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x69d46e4, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x69d4254, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent& __cordl_internal_get___2__current();

  constexpr double_t const& __cordl_internal_get___3__clipEnd() const;

  constexpr double_t& __cordl_internal_get___3__clipEnd();

  constexpr double_t const& __cordl_internal_get___3__clipStart() const;

  constexpr double_t& __cordl_internal_get___3__clipStart();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get___3__events() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get___3__events();

  constexpr ::UnityEngine::VFX::PlayableTimeSpace const& __cordl_internal_get___3__space() const;

  constexpr ::UnityEngine::VFX::PlayableTimeSpace& __cordl_internal_get___3__space();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr double_t const& __cordl_internal_get_clipEnd() const;

  constexpr double_t& __cordl_internal_get_clipEnd();

  constexpr double_t const& __cordl_internal_get_clipStart() const;

  constexpr double_t& __cordl_internal_get_clipStart();

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get_events() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get_events();

  constexpr ::UnityEngine::VFX::PlayableTimeSpace const& __cordl_internal_get_space() const;

  constexpr ::UnityEngine::VFX::PlayableTimeSpace& __cordl_internal_get_space();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent value);

  constexpr void __cordl_internal_set___3__clipEnd(double_t value);

  constexpr void __cordl_internal_set___3__clipStart(double_t value);

  constexpr void __cordl_internal_set___3__events(::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value);

  constexpr void __cordl_internal_set___3__space(::UnityEngine::VFX::PlayableTimeSpace value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_clipEnd(double_t value);

  constexpr void __cordl_internal_set_clipStart(double_t value);

  constexpr void __cordl_internal_set_events(::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value);

  constexpr void __cordl_internal_set_space(::UnityEngine::VFX::PlayableTimeSpace value);

  /// @brief Method <>m__Finally1, addr 0x69d45e0, size 0xb4, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x69d3c2c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__VFX__VisualEffectPlayableSerializedEvent_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__VFX__VisualEffectPlayableSerializedEvent_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3(VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3(VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19953 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x48, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field events, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* ___events;

  /// @brief Field <>3__events, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* _____3__events;

  /// @brief Field space, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::VFX::PlayableTimeSpace ___space;

  /// @brief Field <>3__space, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::VFX::PlayableTimeSpace _____3__space;

  /// @brief Field clipStart, offset: 0x68, size: 0x8, def value: None
  double_t ___clipStart;

  /// @brief Field <>3__clipStart, offset: 0x70, size: 0x8, def value: None
  double_t _____3__clipStart;

  /// @brief Field clipEnd, offset: 0x78, size: 0x8, def value: None
  double_t ___clipEnd;

  /// @brief Field <>3__clipEnd, offset: 0x80, size: 0x8, def value: None
  double_t _____3__clipEnd;

  /// @brief Field <>7__wrap1, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____l__initialThreadId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, ___events) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____3__events) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, ___space) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____3__space) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, ___clipStart) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____3__clipStart) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, ___clipEnd) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____3__clipEnd) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3, _____7__wrap1) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3) == 0x90, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXTimeSpaceHelper
class CORDL_TYPE VFXTimeSpaceHelper : public ::System::Object {
public:
  // Declarations
  using _CollectClipEvents_d__1 = ::UnityEngine::VFX::VFXTimeSpaceHelper__CollectClipEvents_d__1;

  using _GetEventNormalizedSpace_d__3 = ::UnityEngine::VFX::VFXTimeSpaceHelper__GetEventNormalizedSpace_d__3;

  /// @brief Method CollectClipEvents, addr 0x69d3b54, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* CollectClipEvents(::UnityEngine::VFX::VisualEffectControlClip* source);

  /// @brief Method GetEventNormalizedSpace, addr 0x69d3ac0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  GetEventNormalizedSpace(::UnityEngine::VFX::PlayableTimeSpace space, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* events,
                          double_t clipStart, double_t clipEnd);

  /// @brief Method GetEventNormalizedSpace, addr 0x69d3be4, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  GetEventNormalizedSpace(::UnityEngine::VFX::PlayableTimeSpace space, ::UnityEngine::VFX::VisualEffectControlClip* source, bool clipEvents);

  /// @brief Method GetEventNormalizedSpace, addr 0x69d3aa4, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*
  GetEventNormalizedSpace(::UnityEngine::VFX::PlayableTimeSpace space, ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* source);

  /// @brief Method GetTimeInSpace, addr 0x69d3c4c, size 0x1d0, virtual false, abstract: false, final false
  static inline double_t GetTimeInSpace(::UnityEngine::VFX::PlayableTimeSpace srcSpace, double_t srcTime, ::UnityEngine::VFX::PlayableTimeSpace dstSpace, double_t clipStart, double_t clipEnd);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXTimeSpaceHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXTimeSpaceHelper(VFXTimeSpaceHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXTimeSpaceHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXTimeSpaceHelper(VFXTimeSpaceHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19954 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXTimeSpaceHelper) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
