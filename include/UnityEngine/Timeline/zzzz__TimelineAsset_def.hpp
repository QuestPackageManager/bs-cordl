#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IPropertyPreview;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
class MarkerTrack;
}
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__DurationMode;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__EditorSettings;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__MediaType;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__TimelineAssetUpgrade;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__Versions;
}
namespace UnityEngine::Timeline {
class __TimelineAsset___get_outputs_d__27;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TimelineAsset__DurationMode;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__MediaType;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__Versions;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__EditorSettings;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__TimelineAssetUpgrade;
}
namespace UnityEngine::Timeline {
class __TimelineAsset___get_outputs_d__27;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TimelineAsset__DurationMode);
MARK_VAL_T(::UnityEngine::Timeline::__TimelineAsset__MediaType);
MARK_VAL_T(::UnityEngine::Timeline::__TimelineAsset__Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineAsset__EditorSettings);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27);
// Type: ::Versions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TimelineAsset::Versions
struct CORDL_TYPE __TimelineAsset__Versions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineAsset__Versions_Unwrapped
  enum struct ____TimelineAsset__Versions_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineAsset__Versions_Unwrapped() const noexcept {
    return static_cast<____TimelineAsset__Versions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__Versions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__Versions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__Versions const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15765 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__Versions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset__Versions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::TimelineAssetUpgrade
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimelineAsset::TimelineAssetUpgrade*
class CORDL_TYPE __TimelineAsset__TimelineAssetUpgrade : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__TimelineAssetUpgrade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__TimelineAssetUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset__TimelineAssetUpgrade(__TimelineAsset__TimelineAssetUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__TimelineAssetUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset__TimelineAssetUpgrade(__TimelineAsset__TimelineAssetUpgrade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::MediaType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TimelineAsset::MediaType
struct CORDL_TYPE __TimelineAsset__MediaType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineAsset__MediaType_Unwrapped
  enum struct ____TimelineAsset__MediaType_Unwrapped : int32_t {
    __E_Animation = static_cast<int32_t>(0x0),
    __E_Audio = static_cast<int32_t>(0x1),
    __E_Texture = static_cast<int32_t>(0x2),
    __E_Video = static_cast<int32_t>(0x2),
    __E_Script = static_cast<int32_t>(0x3),
    __E_Hybrid = static_cast<int32_t>(0x4),
    __E_Group = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineAsset__MediaType_Unwrapped() const noexcept {
    return static_cast<____TimelineAsset__MediaType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__MediaType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__MediaType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Animation value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Animation;

  /// @brief Field Audio value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Audio;

  /// @brief Field Group value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Group;

  /// @brief Field Hybrid value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Hybrid;

  /// @brief Field Script value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Script;

  /// @brief Field Texture value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Texture;

  /// @brief Field Video value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Video;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__MediaType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset__MediaType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::DurationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::TimelineAsset::DurationMode
struct CORDL_TYPE __TimelineAsset__DurationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimelineAsset__DurationMode_Unwrapped
  enum struct ____TimelineAsset__DurationMode_Unwrapped : int32_t {
    __E_BasedOnClips = static_cast<int32_t>(0x0),
    __E_FixedLength = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimelineAsset__DurationMode_Unwrapped() const noexcept {
    return static_cast<____TimelineAsset__DurationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__DurationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__DurationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BasedOnClips value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__DurationMode const BasedOnClips;

  /// @brief Field FixedLength value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineAsset__DurationMode const FixedLength;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__DurationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset__DurationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::EditorSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimelineAsset::EditorSettings*
class CORDL_TYPE __TimelineAsset__EditorSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_fps, put = set_fps)) float_t fps;

  __declspec(property(get = get_frameRate, put = set_frameRate)) double_t frameRate;

  /// @brief Field kDefaultFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kDefaultFrameRate, put = setStaticF_kDefaultFrameRate)) double_t kDefaultFrameRate;

  /// @brief Field kMaxFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMaxFrameRate, put = setStaticF_kMaxFrameRate)) double_t kMaxFrameRate;

  /// @brief Field kMinFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMinFrameRate, put = setStaticF_kMinFrameRate)) double_t kMinFrameRate;

  /// @brief Field m_Framerate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Framerate, put = __cordl_internal_set_m_Framerate)) double_t m_Framerate;

  /// @brief Field m_ScenePreview, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ScenePreview, put = __cordl_internal_set_m_ScenePreview)) bool m_ScenePreview;

  __declspec(property(get = get_scenePreview, put = set_scenePreview)) bool scenePreview;

  static inline ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* New_ctor();

  /// @brief Method SetStandardFrameRate, addr 0x47a0c1c, size 0x148, virtual false, abstract: false, final false
  inline void SetStandardFrameRate(::UnityEngine::Timeline::StandardFrameRates enumValue);

  constexpr double_t const& __cordl_internal_get_m_Framerate() const;

  constexpr double_t& __cordl_internal_get_m_Framerate();

  constexpr bool const& __cordl_internal_get_m_ScenePreview() const;

  constexpr bool& __cordl_internal_get_m_ScenePreview();

  constexpr void __cordl_internal_set_m_Framerate(double_t value);

  constexpr void __cordl_internal_set_m_ScenePreview(bool value);

  /// @brief Method .ctor, addr 0x47a0b10, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline double_t getStaticF_kDefaultFrameRate();

  static inline double_t getStaticF_kMaxFrameRate();

  static inline double_t getStaticF_kMinFrameRate();

  /// @brief Method get_fps, addr 0x47a0b80, size 0xc, virtual false, abstract: false, final false
  inline float_t get_fps();

  /// @brief Method get_frameRate, addr 0x47a0c14, size 0x8, virtual false, abstract: false, final false
  inline double_t get_frameRate();

  /// @brief Method get_scenePreview, addr 0x47a0d64, size 0x8, virtual false, abstract: false, final false
  inline bool get_scenePreview();

  static inline void setStaticF_kDefaultFrameRate(double_t value);

  static inline void setStaticF_kMaxFrameRate(double_t value);

  static inline void setStaticF_kMinFrameRate(double_t value);

  /// @brief Method set_fps, addr 0x47a0b8c, size 0x88, virtual false, abstract: false, final false
  inline void set_fps(float_t value);

  /// @brief Method set_frameRate, addr 0x479e530, size 0x18, virtual false, abstract: false, final false
  inline void set_frameRate(double_t value);

  /// @brief Method set_scenePreview, addr 0x47a0d6c, size 0xc, virtual false, abstract: false, final false
  inline void set_scenePreview(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__EditorSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__EditorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset__EditorSettings(__TimelineAsset__EditorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__EditorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset__EditorSettings(__TimelineAsset__EditorSettings const&) = delete;

  /// @brief Field m_Framerate, offset: 0x10, size: 0x8, def value: None
  double_t ___m_Framerate;

  /// @brief Field m_ScenePreview, offset: 0x18, size: 0x1, def value: None
  bool ___m_ScenePreview;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15769 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__EditorSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset__EditorSettings, ___m_Framerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset__EditorSettings, ___m_ScenePreview) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<get_outputs>d__27
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimelineAsset::<get_outputs>d__27*
class CORDL_TYPE __TimelineAsset___get_outputs_d__27 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x47a0eac, size 0x45c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator, addr 0x47a1510, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current, addr 0x47a1468, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x47a15ac, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x47a1478, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x47a14b0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x47a0dfc, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::Playables::PlayableBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::Timeline::TimelineAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::Timeline::TimelineAsset>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::TimelineAsset> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x47a13b8, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x47a1308, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x479daa8, size 0x34, virtual false, abstract: false, final false
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
  constexpr __TimelineAsset___get_outputs_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset___get_outputs_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset___get_outputs_d__27(__TimelineAsset___get_outputs_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset___get_outputs_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset___get_outputs_d__27(__TimelineAsset___get_outputs_d__27 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, _____7__wrap2) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineAsset
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TimelineAsset*
class CORDL_TYPE TimelineAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using DurationMode = ::UnityEngine::Timeline::__TimelineAsset__DurationMode;

  using EditorSettings = ::UnityEngine::Timeline::__TimelineAsset__EditorSettings;

  using MediaType = ::UnityEngine::Timeline::__TimelineAsset__MediaType;

  using TimelineAssetUpgrade = ::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade;

  using Versions = ::UnityEngine::Timeline::__TimelineAsset__Versions;

  using _get_outputs_d__27 = ::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_durationMode, put = set_durationMode)) ::UnityEngine::Timeline::__TimelineAsset__DurationMode durationMode;

  __declspec(property(get = get_editorSettings)) ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* editorSettings;

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
  __declspec(property(get = __cordl_internal_get_m_DurationMode, put = __cordl_internal_set_m_DurationMode)) ::UnityEngine::Timeline::__TimelineAsset__DurationMode m_DurationMode;

  /// @brief Field m_EditorSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EditorSettings, put = __cordl_internal_set_m_EditorSettings)) ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* m_EditorSettings;

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

  /// @brief Method AddSubTracksRecursive, addr 0x479e74c, size 0x350, virtual false, abstract: false, final false
  static inline void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* track, ByRef<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> allTracks);

  /// @brief Method AddTrackInternal, addr 0x479eaac, size 0xb0, virtual false, abstract: false, final false
  inline void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method AllocateTrack, addr 0x479fbb0, size 0x270, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> AllocateTrack(::UnityEngine::Timeline::TrackAsset* trackAssetParent, ::StringW trackName, ::System::Type* trackType);

  /// @brief Method CalculateItemsDuration, addr 0x479d6fc, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime CalculateItemsDuration();

  /// @brief Method CreateMarkerTrack, addr 0x479f4e4, size 0xcc, virtual false, abstract: false, final false
  inline void CreateMarkerTrack();

  /// @brief Method CreatePlayable, addr 0x479ece8, size 0x1c4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method CreateTrack, addr 0x479f74c, size 0x2f8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> CreateTrack(::System::Type* type, ::UnityEngine::Timeline::TrackAsset* parent, ::StringW name);

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack();

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack(::UnityEngine::Timeline::TrackAsset* parent, ::StringW trackName);

  /// @brief Method CreateTrack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateTrack(::StringW trackName);

  /// @brief Method DeleteClip, addr 0x479fe20, size 0x1cc, virtual false, abstract: false, final false
  inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteRecordedAnimation, addr 0x479ffec, size 0x158, virtual false, abstract: false, final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteRecordedAnimation, addr 0x47a0690, size 0x14c, virtual false, abstract: false, final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method DeleteTrack, addr 0x47a0144, size 0x54c, virtual false, abstract: false, final false
  inline bool DeleteTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method GatherProperties, addr 0x479f028, size 0x318, virtual true, abstract: false, final true
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetOutputTrack, addr 0x479e5a8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetOutputTrack(int32_t index);

  /// @brief Method GetOutputTracks, addr 0x479e5ec, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetOutputTracks();

  /// @brief Method GetRootTrack, addr 0x479e548, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GetRootTrack(int32_t index);

  /// @brief Method GetRootTracks, addr 0x479de28, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* GetRootTracks();

  /// @brief Method GetValidFrameRate, addr 0x479e484, size 0xac, virtual false, abstract: false, final false
  static inline double_t GetValidFrameRate(double_t frameRate);

  /// @brief Method Invalidate, addr 0x479eb5c, size 0xc, virtual false, abstract: false, final false
  inline void Invalidate();

  /// @brief Method MoveLastTrackBefore, addr 0x47a07dc, size 0x1dc, virtual false, abstract: false, final false
  inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset);

  static inline ::UnityEngine::Timeline::TimelineAsset* New_ctor();

  /// @brief Method OnValidate, addr 0x479e45c, size 0x28, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RemoveTrack, addr 0x479eb68, size 0x108, virtual false, abstract: false, final false
  inline void RemoveTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x479eeb4, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x479eeac, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpdateFixedDurationWithItemsDuration, addr 0x479f5b0, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateFixedDurationWithItemsDuration();

  /// @brief Method UpdateOutputTrackCache, addr 0x479de64, size 0x228, virtual false, abstract: false, final false
  inline void UpdateOutputTrackCache();

  /// @brief Method UpdateRootTrackCache, addr 0x479e0dc, size 0x380, virtual false, abstract: false, final false
  inline void UpdateRootTrackCache();

  /// @brief Method UpgradeToLatestVersion, addr 0x479d640, size 0x4, virtual false, abstract: false, final false
  inline void UpgradeToLatestVersion();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_CacheFlattenedTracks() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>& __cordl_internal_get_m_CacheFlattenedTracks();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_CacheOutputTracks() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>& __cordl_internal_get_m_CacheOutputTracks();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& __cordl_internal_get_m_CacheRootTracks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> const& __cordl_internal_get_m_CacheRootTracks() const;

  constexpr ::UnityEngine::Timeline::__TimelineAsset__DurationMode const& __cordl_internal_get_m_DurationMode() const;

  constexpr ::UnityEngine::Timeline::__TimelineAsset__DurationMode& __cordl_internal_get_m_DurationMode();

  constexpr ::UnityEngine::Timeline::__TimelineAsset__EditorSettings*& __cordl_internal_get_m_EditorSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::__TimelineAsset__EditorSettings*> const& __cordl_internal_get_m_EditorSettings() const;

  constexpr double_t const& __cordl_internal_get_m_FixedDuration() const;

  constexpr double_t& __cordl_internal_get_m_FixedDuration();

  constexpr ::UnityW<::UnityEngine::Timeline::MarkerTrack> const& __cordl_internal_get_m_MarkerTrack() const;

  constexpr ::UnityW<::UnityEngine::Timeline::MarkerTrack>& __cordl_internal_get_m_MarkerTrack();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*& __cordl_internal_get_m_Tracks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*> const& __cordl_internal_get_m_Tracks() const;

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_CacheFlattenedTracks(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> value);

  constexpr void __cordl_internal_set_m_CacheOutputTracks(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> value);

  constexpr void __cordl_internal_set_m_CacheRootTracks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value);

  constexpr void __cordl_internal_set_m_DurationMode(::UnityEngine::Timeline::__TimelineAsset__DurationMode value);

  constexpr void __cordl_internal_set_m_EditorSettings(::UnityEngine::Timeline::__TimelineAsset__EditorSettings* value);

  constexpr void __cordl_internal_set_m_FixedDuration(double_t value);

  constexpr void __cordl_internal_set_m_MarkerTrack(::UnityW<::UnityEngine::Timeline::MarkerTrack> value);

  constexpr void __cordl_internal_set_m_Tracks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method __internalAwake, addr 0x479eec0, size 0x168, virtual false, abstract: false, final false
  inline void __internalAwake();

  /// @brief Method .ctor, addr 0x47a0ab4, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x479dadc, size 0x34c, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_duration, addr 0x479d64c, size 0xb0, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_durationMode, addr 0x479da28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::__TimelineAsset__DurationMode get_durationMode();

  /// @brief Method get_editorSettings, addr 0x479d644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* get_editorSettings();

  /// @brief Method get_fixedDuration, addr 0x479d8e8, size 0xb4, virtual false, abstract: false, final false
  inline double_t get_fixedDuration();

  /// @brief Method get_flattenedTracks, addr 0x479e604, size 0x148, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::Array<::UnityW<::UnityEngine::Timeline::TrackAsset>>*> get_flattenedTracks();

  /// @brief Method get_markerTrack, addr 0x479ea9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Timeline::MarkerTrack> get_markerTrack();

  /// @brief Method get_outputTrackCount, addr 0x479de40, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_outputTrackCount();

  /// @brief Method get_outputs, addr 0x479da38, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_rootTrackCount, addr 0x479e08c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_rootTrackCount();

  /// @brief Method get_trackObjects, addr 0x479eaa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* get_trackObjects();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  /// @brief Method set_durationMode, addr 0x479da30, size 0x8, virtual false, abstract: false, final false
  inline void set_durationMode(::UnityEngine::Timeline::__TimelineAsset__DurationMode value);

  /// @brief Method set_fixedDuration, addr 0x479d9b8, size 0x70, virtual false, abstract: false, final false
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
  ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* ___m_EditorSettings;

  /// @brief Field m_DurationMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineAsset__DurationMode ___m_DurationMode;

  /// @brief Field m_MarkerTrack, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Timeline::MarkerTrack> ___m_MarkerTrack;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15771 };

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_Tracks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_FixedDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheOutputTracks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheRootTracks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_CacheFlattenedTracks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_EditorSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_DurationMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TimelineAsset, ___m_MarkerTrack) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset__DurationMode, "UnityEngine.Timeline", "TimelineAsset/DurationMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset__MediaType, "UnityEngine.Timeline", "TimelineAsset/MediaType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset__Versions, "UnityEngine.Timeline", "TimelineAsset/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset*, "UnityEngine.Timeline", "TimelineAsset");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineAsset__EditorSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset__EditorSettings*, "UnityEngine.Timeline", "TimelineAsset/EditorSettings");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade*, "UnityEngine.Timeline", "TimelineAsset/TimelineAssetUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27*, "UnityEngine.Timeline", "TimelineAsset/<get_outputs>d__27");
