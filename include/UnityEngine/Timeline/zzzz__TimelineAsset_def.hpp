#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimelineAsset)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class MarkerTrack;
}
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace UnityEngine::Timeline {
struct TimelineAsset_DurationMode;
}
namespace UnityEngine::Timeline {
class TimelineAsset_EditorSettings;
}
namespace UnityEngine::Timeline {
struct TimelineAsset_MediaType;
}
namespace UnityEngine::Timeline {
class TimelineAsset_TimelineAssetUpgrade;
}
namespace UnityEngine::Timeline {
struct TimelineAsset_Versions;
}
namespace UnityEngine::Timeline {
class TimelineAsset__get_outputs_d__27;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct TimelineAsset_DurationMode;
}
namespace UnityEngine::Timeline {
struct TimelineAsset_MediaType;
}
namespace UnityEngine::Timeline {
struct TimelineAsset_Versions;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TimelineAsset_EditorSettings;
}
namespace UnityEngine::Timeline {
class TimelineAsset_TimelineAssetUpgrade;
}
namespace UnityEngine::Timeline {
class TimelineAsset__get_outputs_d__27;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TimelineAsset_DurationMode);
MARK_VAL_T(::UnityEngine::Timeline::TimelineAsset_MediaType);
MARK_VAL_T(::UnityEngine::Timeline::TimelineAsset_Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineAsset_EditorSettings);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineAsset_TimelineAssetUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineAsset/Versions
struct CORDL_TYPE TimelineAsset_Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineAsset_Versions_Unwrapped
  enum struct __TimelineAsset_Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineAsset_Versions_Unwrapped() const noexcept {
    return static_cast<__TimelineAsset_Versions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset_Versions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineAsset_Versions(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Timeline::TimelineAsset_Versions const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset_Versions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset_Versions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineAsset/TimelineAssetUpgrade
class CORDL_TYPE TimelineAsset_TimelineAssetUpgrade : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset_TimelineAssetUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset_TimelineAssetUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineAsset_TimelineAssetUpgrade(TimelineAsset_TimelineAssetUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset_TimelineAssetUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineAsset_TimelineAssetUpgrade(TimelineAsset_TimelineAssetUpgrade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset_TimelineAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineAsset/MediaType
struct CORDL_TYPE TimelineAsset_MediaType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineAsset_MediaType_Unwrapped
  enum struct __TimelineAsset_MediaType_Unwrapped : int32_t {
    __E_Animation = static_cast<int32_t>(0x0),
    __E_Audio = static_cast<int32_t>(0x1),
    __E_Texture = static_cast<int32_t>(0x2),
    __E_Video = static_cast<int32_t>(0x2),
    __E_Script = static_cast<int32_t>(0x3),
    __E_Hybrid = static_cast<int32_t>(0x4),
    __E_Group = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineAsset_MediaType_Unwrapped() const noexcept {
    return static_cast<__TimelineAsset_MediaType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset_MediaType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineAsset_MediaType(int32_t value__) noexcept;

  /// @brief Field Animation value: I32(0)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Animation;

  /// @brief Field Audio value: I32(1)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Audio;

  /// @brief Field Group value: I32(5)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Group;

  /// @brief Field Hybrid value: I32(4)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Hybrid;

  /// @brief Field Script value: I32(3)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Script;

  /// @brief Field Texture value: I32(2)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Texture;

  /// @brief Field Video value: I32(2)
  static ::UnityEngine::Timeline::TimelineAsset_MediaType const Video;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15819 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset_MediaType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset_MediaType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelineAsset/DurationMode
struct CORDL_TYPE TimelineAsset_DurationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimelineAsset_DurationMode_Unwrapped
  enum struct __TimelineAsset_DurationMode_Unwrapped : int32_t {
    __E_BasedOnClips = static_cast<int32_t>(0x0),
    __E_FixedLength = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimelineAsset_DurationMode_Unwrapped() const noexcept {
    return static_cast<__TimelineAsset_DurationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset_DurationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimelineAsset_DurationMode(int32_t value__) noexcept;

  /// @brief Field BasedOnClips value: I32(0)
  static ::UnityEngine::Timeline::TimelineAsset_DurationMode const BasedOnClips;

  /// @brief Field FixedLength value: I32(1)
  static ::UnityEngine::Timeline::TimelineAsset_DurationMode const FixedLength;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset_DurationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset_DurationMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineAsset/EditorSettings
class CORDL_TYPE TimelineAsset_EditorSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_fps, put = set_fps)) float_t fps;

  __declspec(property(get = get_frameRate, put = set_frameRate)) double_t frameRate;

  /// @brief Field kDefaultFrameRate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultFrameRate, put = setStaticF_kDefaultFrameRate)) double_t kDefaultFrameRate;

  /// @brief Field kMaxFrameRate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMaxFrameRate, put = setStaticF_kMaxFrameRate)) double_t kMaxFrameRate;

  /// @brief Field kMinFrameRate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMinFrameRate, put = setStaticF_kMinFrameRate)) double_t kMinFrameRate;

  /// @brief Field m_Framerate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Framerate, put = __cordl_internal_set_m_Framerate)) double_t m_Framerate;

  /// @brief Field m_ScenePreview, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ScenePreview, put = __cordl_internal_set_m_ScenePreview)) bool m_ScenePreview;

  __declspec(property(get = get_scenePreview, put = set_scenePreview)) bool scenePreview;

  static inline ::UnityEngine::Timeline::TimelineAsset_EditorSettings* New_ctor();

  /// @brief Method SetStandardFrameRate, addr 0x4818010, size 0x148, virtual false, abstract: false, final false
  inline void SetStandardFrameRate(::UnityEngine::Timeline::StandardFrameRates enumValue);

  constexpr double_t const& __cordl_internal_get_m_Framerate() const;

  constexpr double_t& __cordl_internal_get_m_Framerate();

  constexpr bool const& __cordl_internal_get_m_ScenePreview() const;

  constexpr bool& __cordl_internal_get_m_ScenePreview();

  constexpr void __cordl_internal_set_m_Framerate(double_t value);

  constexpr void __cordl_internal_set_m_ScenePreview(bool value);

  /// @brief Method .ctor, addr 0x4817f04, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline double_t getStaticF_kDefaultFrameRate();

  static inline double_t getStaticF_kMaxFrameRate();

  static inline double_t getStaticF_kMinFrameRate();

  /// @brief Method get_fps, addr 0x4817f74, size 0xc, virtual false, abstract: false, final false
  inline float_t get_fps();

  /// @brief Method get_frameRate, addr 0x4818008, size 0x8, virtual false, abstract: false, final false
  inline double_t get_frameRate();

  /// @brief Method get_scenePreview, addr 0x4818158, size 0x8, virtual false, abstract: false, final false
  inline bool get_scenePreview();

  static inline void setStaticF_kDefaultFrameRate(double_t value);

  static inline void setStaticF_kMaxFrameRate(double_t value);

  static inline void setStaticF_kMinFrameRate(double_t value);

  /// @brief Method set_fps, addr 0x4817f80, size 0x88, virtual false, abstract: false, final false
  inline void set_fps(float_t value);

  /// @brief Method set_frameRate, addr 0x4815924, size 0x18, virtual false, abstract: false, final false
  inline void set_frameRate(double_t value);

  /// @brief Method set_scenePreview, addr 0x4818160, size 0xc, virtual false, abstract: false, final false
  inline void set_scenePreview(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset_EditorSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset_EditorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineAsset_EditorSettings(TimelineAsset_EditorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset_EditorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineAsset_EditorSettings(TimelineAsset_EditorSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15821 };

  /// @brief Field m_Framerate, offset: 0x10, size: 0x8, def value: None
  double_t ___m_Framerate;

  /// @brief Field m_ScenePreview, offset: 0x18, size: 0x1, def value: None
  bool ___m_ScenePreview;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset_EditorSettings, ___m_Framerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset_EditorSettings, ___m_ScenePreview) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset_EditorSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object, UnityEngine.Playables.PlayableBinding
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineAsset/<get_outputs>d__27
class CORDL_TYPE TimelineAsset__get_outputs_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)) ::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Timeline::TimelineAsset> __4__this;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2,
                      put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x48182a0, size 0x45c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x4818904, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x481885c, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x48189a0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x481886c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x48188a4, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x48181f0, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Timeline::TimelineAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Timeline::TimelineAsset>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::TimelineAsset> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x48187ac, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x48186fc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x4814e9c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset__get_outputs_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset__get_outputs_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineAsset__get_outputs_d__27(TimelineAsset__get_outputs_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset__get_outputs_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineAsset__get_outputs_d__27(TimelineAsset__get_outputs_d__27 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15822 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::TimelineAsset> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, _____7__wrap2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.ISerializationCallbackReceiver, UnityEngine.Playables.PlayableAsset, UnityEngine.Timeline.IPropertyPreview, UnityEngine.Timeline.ITimelineClipAsset,
// UnityEngine.Timeline.TimelineAsset::DurationMode
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineAsset
class CORDL_TYPE TimelineAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using DurationMode = ::UnityEngine::Timeline::TimelineAsset_DurationMode;

  using EditorSettings = ::UnityEngine::Timeline::TimelineAsset_EditorSettings;

  using MediaType = ::UnityEngine::Timeline::TimelineAsset_MediaType;

  using TimelineAssetUpgrade = ::UnityEngine::Timeline::TimelineAsset_TimelineAssetUpgrade;

  using Versions = ::UnityEngine::Timeline::TimelineAsset_Versions;

  using _get_outputs_d__27 = ::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_durationMode, put = set_durationMode)) ::UnityEngine::Timeline::TimelineAsset_DurationMode durationMode;

  __declspec(property(get = get_editorSettings)) ::UnityEngine::Timeline::TimelineAsset_EditorSettings* editorSettings;

  __declspec(property(get = get_fixedDuration, put = set_fixedDuration)) double_t fixedDuration;

  __declspec(property(get = get_flattenedTracks)) ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> flattenedTracks;

  /// @brief Field m_CacheFlattenedTracks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheFlattenedTracks,
                      put = __cordl_internal_set_m_CacheFlattenedTracks)) ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>
      m_CacheFlattenedTracks;

  /// @brief Field m_CacheOutputTracks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheOutputTracks,
                      put = __cordl_internal_set_m_CacheOutputTracks)) ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>
      m_CacheOutputTracks;

  /// @brief Field m_CacheRootTracks, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CacheRootTracks,
                      put = __cordl_internal_set_m_CacheRootTracks)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* m_CacheRootTracks;

  /// @brief Field m_DurationMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DurationMode, put = __cordl_internal_set_m_DurationMode)) ::UnityEngine::Timeline::TimelineAsset_DurationMode m_DurationMode;

  /// @brief Field m_EditorSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EditorSettings, put = __cordl_internal_set_m_EditorSettings)) ::UnityEngine::Timeline::TimelineAsset_EditorSettings* m_EditorSettings;

  /// @brief Field m_FixedDuration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedDuration, put = __cordl_internal_set_m_FixedDuration)) double_t m_FixedDuration;

  /// @brief Field m_MarkerTrack, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MarkerTrack, put = __cordl_internal_set_m_MarkerTrack)) ::UnityW<::UnityEngine::Timeline::MarkerTrack> m_MarkerTrack;

  /// @brief Field m_Tracks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tracks, put = __cordl_internal_set_m_Tracks)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* m_Tracks;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_markerTrack)) ::UnityW<::UnityEngine::Timeline::MarkerTrack> markerTrack;

  __declspec(property(get = get_outputTrackCount)) int32_t outputTrackCount;

  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_rootTrackCount)) int32_t rootTrackCount;

  __declspec(property(get = get_trackObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* trackObjects;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method AddSubTracksRecursive, addr 0x4815b40, size 0x350, virtual false, abstract: false, final false
  static inline void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* track, ::ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> allTracks);

  /// @brief Method AddTrackInternal, addr 0x4815ea0, size 0xb0, virtual false, abstract: false, final false
  inline void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method AllocateTrack, addr 0x4816fa4, size 0x270, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> AllocateTrack(::UnityEngine::Timeline::TrackAsset* trackAssetParent, ::StringW trackName, ::System::Type* trackType);

  /// @brief Method CalculateItemsDuration, addr 0x4814af0, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime CalculateItemsDuration();

  /// @brief Method CreateMarkerTrack, addr 0x48168d8, size 0xcc, virtual false, abstract: false, final false
  inline void CreateMarkerTrack();

  /// @brief Method CreatePlayable, addr 0x48160dc, size 0x1c4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method CreateTrack, addr 0x4816b40, size 0x2f8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> CreateTrack(::System::Type* type, ::UnityEngine::Timeline::TrackAsset* parent, ::StringW name);

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack();

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack(::UnityEngine::Timeline::TrackAsset* parent, ::StringW trackName);

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack(::StringW trackName);

  /// @brief Method DeleteClip, addr 0x4817214, size 0x1cc, virtual false, abstract: false, final false
  inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteRecordedAnimation, addr 0x48173e0, size 0x158, virtual false, abstract: false, final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteRecordedAnimation, addr 0x4817a84, size 0x14c, virtual false, abstract: false, final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method DeleteTrack, addr 0x4817538, size 0x54c, virtual false, abstract: false, final false
  inline bool DeleteTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method GatherProperties, addr 0x481641c, size 0x318, virtual true, abstract: false, final true
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetOutputTrack, addr 0x481599c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetOutputTrack(int32_t index);

  /// @brief Method GetOutputTracks, addr 0x48159e0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetOutputTracks();

  /// @brief Method GetRootTrack, addr 0x481593c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetRootTrack(int32_t index);

  /// @brief Method GetRootTracks, addr 0x481521c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetRootTracks();

  /// @brief Method GetValidFrameRate, addr 0x4815878, size 0xac, virtual false, abstract: false, final false
  static inline double_t GetValidFrameRate(double_t frameRate);

  /// @brief Method Invalidate, addr 0x4815f50, size 0xc, virtual false, abstract: false, final false
  inline void Invalidate();

  /// @brief Method MoveLastTrackBefore, addr 0x4817bd0, size 0x1dc, virtual false, abstract: false, final false
  inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset);

  static inline ::UnityEngine::Timeline::TimelineAsset* New_ctor();

  /// @brief Method OnValidate, addr 0x4815850, size 0x28, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RemoveTrack, addr 0x4815f5c, size 0x108, virtual false, abstract: false, final false
  inline void RemoveTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x48162a8, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x48162a0, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpdateFixedDurationWithItemsDuration, addr 0x48169a4, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateFixedDurationWithItemsDuration();

  /// @brief Method UpdateOutputTrackCache, addr 0x4815258, size 0x228, virtual false, abstract: false, final false
  inline void UpdateOutputTrackCache();

  /// @brief Method UpdateRootTrackCache, addr 0x48154d0, size 0x380, virtual false, abstract: false, final false
  inline void UpdateRootTrackCache();

  /// @brief Method UpgradeToLatestVersion, addr 0x4814a34, size 0x4, virtual false, abstract: false, final false
  inline void UpgradeToLatestVersion();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_CacheFlattenedTracks() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>& __cordl_internal_get_m_CacheFlattenedTracks();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_CacheOutputTracks() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>& __cordl_internal_get_m_CacheOutputTracks();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* const& __cordl_internal_get_m_CacheRootTracks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get_m_CacheRootTracks();

  constexpr ::UnityEngine::Timeline::TimelineAsset_DurationMode const& __cordl_internal_get_m_DurationMode() const;

  constexpr ::UnityEngine::Timeline::TimelineAsset_DurationMode& __cordl_internal_get_m_DurationMode();

  constexpr ::UnityEngine::Timeline::TimelineAsset_EditorSettings* const& __cordl_internal_get_m_EditorSettings() const;

  constexpr ::UnityEngine::Timeline::TimelineAsset_EditorSettings*& __cordl_internal_get_m_EditorSettings();

  constexpr double_t const& __cordl_internal_get_m_FixedDuration() const;

  constexpr double_t& __cordl_internal_get_m_FixedDuration();

  constexpr ::UnityW<::UnityEngine::Timeline::MarkerTrack> const& __cordl_internal_get_m_MarkerTrack() const;

  constexpr ::UnityW<::UnityEngine::Timeline::MarkerTrack>& __cordl_internal_get_m_MarkerTrack();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* const& __cordl_internal_get_m_Tracks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*& __cordl_internal_get_m_Tracks();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_CacheFlattenedTracks(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> value);

  constexpr void __cordl_internal_set_m_CacheOutputTracks(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> value);

  constexpr void __cordl_internal_set_m_CacheRootTracks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value);

  constexpr void __cordl_internal_set_m_DurationMode(::UnityEngine::Timeline::TimelineAsset_DurationMode value);

  constexpr void __cordl_internal_set_m_EditorSettings(::UnityEngine::Timeline::TimelineAsset_EditorSettings* value);

  constexpr void __cordl_internal_set_m_FixedDuration(double_t value);

  constexpr void __cordl_internal_set_m_MarkerTrack(::UnityW<::UnityEngine::Timeline::MarkerTrack> value);

  constexpr void __cordl_internal_set_m_Tracks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method __internalAwake, addr 0x48162b4, size 0x168, virtual false, abstract: false, final false
  inline void __internalAwake();

  /// @brief Method .ctor, addr 0x4817ea8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x4814ed0, size 0x34c, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_duration, addr 0x4814a40, size 0xb0, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_durationMode, addr 0x4814e1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineAsset_DurationMode get_durationMode();

  /// @brief Method get_editorSettings, addr 0x4814a38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::TimelineAsset_EditorSettings* get_editorSettings();

  /// @brief Method get_fixedDuration, addr 0x4814cdc, size 0xb4, virtual false, abstract: false, final false
  inline double_t get_fixedDuration();

  /// @brief Method get_flattenedTracks, addr 0x48159f8, size 0x148, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> get_flattenedTracks();

  /// @brief Method get_markerTrack, addr 0x4815e90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::MarkerTrack> get_markerTrack();

  /// @brief Method get_outputTrackCount, addr 0x4815234, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_outputTrackCount();

  /// @brief Method get_outputs, addr 0x4814e2c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_rootTrackCount, addr 0x4815480, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_rootTrackCount();

  /// @brief Method get_trackObjects, addr 0x4815e98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* get_trackObjects();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  /// @brief Method set_durationMode, addr 0x4814e24, size 0x8, virtual false, abstract: false, final false
  inline void set_durationMode(::UnityEngine::Timeline::TimelineAsset_DurationMode value);

  /// @brief Method set_fixedDuration, addr 0x4814dac, size 0x70, virtual false, abstract: false, final false
  inline void set_fixedDuration(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineAsset(TimelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineAsset(TimelineAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15823 };

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x0) };

  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_Tracks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* ___m_Tracks;

  /// @brief Field m_FixedDuration, offset: 0x28, size: 0x8, def value: None
  double_t ___m_FixedDuration;

  /// @brief Field m_CacheOutputTracks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> ___m_CacheOutputTracks;

  /// @brief Field m_CacheRootTracks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* ___m_CacheRootTracks;

  /// @brief Field m_CacheFlattenedTracks, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> ___m_CacheFlattenedTracks;

  /// @brief Field m_EditorSettings, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Timeline::TimelineAsset_EditorSettings* ___m_EditorSettings;

  /// @brief Field m_DurationMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Timeline::TimelineAsset_DurationMode ___m_DurationMode;

  /// @brief Field m_MarkerTrack, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::MarkerTrack> ___m_MarkerTrack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_Tracks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_FixedDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheOutputTracks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheRootTracks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheFlattenedTracks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_EditorSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_DurationMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_MarkerTrack) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset_DurationMode, "UnityEngine.Timeline", "TimelineAsset/DurationMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset_MediaType, "UnityEngine.Timeline", "TimelineAsset/MediaType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset_Versions, "UnityEngine.Timeline", "TimelineAsset/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset*, "UnityEngine.Timeline", "TimelineAsset");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset_EditorSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset_EditorSettings*, "UnityEngine.Timeline", "TimelineAsset/EditorSettings");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset_TimelineAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset_TimelineAssetUpgrade*, "UnityEngine.Timeline", "TimelineAsset/TimelineAssetUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset__get_outputs_d__27*, "UnityEngine.Timeline", "TimelineAsset/<get_outputs>d__27");
