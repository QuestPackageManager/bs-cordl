#pragma once
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
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__DurationMode;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
class MarkerTrack;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__Versions;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
struct __TimelineAsset__MediaType;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__TimelineAssetUpgrade;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
class __TimelineAsset___get_outputs_d__27;
}
namespace UnityEngine::Timeline {
class __TimelineAsset__EditorSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13850))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__Versions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__Versions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Initial value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__Versions const Initial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__Versions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::TimelineAssetUpgrade
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13851))
// CS Name: ::TimelineAsset::TimelineAssetUpgrade*
class CORDL_TYPE __TimelineAsset__TimelineAssetUpgrade : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__TimelineAssetUpgrade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset__TimelineAssetUpgrade(__TimelineAsset__TimelineAssetUpgrade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__TimelineAssetUpgrade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset__TimelineAssetUpgrade(__TimelineAsset__TimelineAssetUpgrade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__TimelineAssetUpgrade();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::MediaType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13852))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__MediaType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__MediaType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Animation value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Animation;

  /// @brief Field Audio value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Audio;

  /// @brief Field Texture value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Texture;

  /// @brief Field Video value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Video;

  /// @brief Field Script value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Script;

  /// @brief Field Hybrid value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Hybrid;

  /// @brief Field Group value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Timeline::__TimelineAsset__MediaType const Group;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__MediaType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::DurationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13853))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimelineAsset__DurationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__DurationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BasedOnClips value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Timeline::__TimelineAsset__DurationMode const BasedOnClips;

  /// @brief Field FixedLength value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Timeline::__TimelineAsset__DurationMode const FixedLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__DurationMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::EditorSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13854))
// CS Name: ::TimelineAsset::EditorSettings*
class CORDL_TYPE __TimelineAsset__EditorSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Framerate, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Framerate, put = __set_m_Framerate)) double_t m_Framerate;

  /// @brief Field m_ScenePreview, offset 0x18, size 0x1
  __declspec(property(get = __get_m_ScenePreview, put = __set_m_ScenePreview)) bool m_ScenePreview;

  /// @brief Field kMinFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMinFrameRate, put = setStaticF_kMinFrameRate)) double_t kMinFrameRate;

  /// @brief Field kMaxFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMaxFrameRate, put = setStaticF_kMaxFrameRate)) double_t kMaxFrameRate;

  /// @brief Field kDefaultFrameRate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kDefaultFrameRate, put = setStaticF_kDefaultFrameRate)) double_t kDefaultFrameRate;

  __declspec(property(get = get_fps, put = set_fps)) float_t fps;

  __declspec(property(get = get_frameRate, put = set_frameRate)) double_t frameRate;

  __declspec(property(get = get_scenePreview, put = set_scenePreview)) bool scenePreview;

  constexpr double_t& __get_m_Framerate();

  constexpr double_t const& __get_m_Framerate() const;

  constexpr void __set_m_Framerate(double_t value);

  constexpr bool& __get_m_ScenePreview();

  constexpr bool const& __get_m_ScenePreview() const;

  constexpr void __set_m_ScenePreview(bool value);

  static inline void setStaticF_kMinFrameRate(double_t value);

  static inline double_t getStaticF_kMinFrameRate();

  static inline void setStaticF_kMaxFrameRate(double_t value);

  static inline double_t getStaticF_kMaxFrameRate();

  static inline void setStaticF_kDefaultFrameRate(double_t value);

  static inline double_t getStaticF_kDefaultFrameRate();

  /// @brief Method get_fps addr 0x2c5a8f8 size 0xc virtual false final false
  inline float_t get_fps();

  /// @brief Method set_fps addr 0x2c5a904 size 0x88 virtual false final false
  inline void set_fps(float_t value);

  /// @brief Method get_frameRate addr 0x2c5a98c size 0x8 virtual false final false
  inline double_t get_frameRate();

  /// @brief Method set_frameRate addr 0x2c5828c size 0x18 virtual false final false
  inline void set_frameRate(double_t value);

  /// @brief Method SetStandardFrameRate addr 0x2c5a994 size 0x11c virtual false final false
  inline void SetStandardFrameRate(::UnityEngine::Timeline::StandardFrameRates enumValue);

  /// @brief Method get_scenePreview addr 0x2c5aab0 size 0x8 virtual false final false
  inline bool get_scenePreview();

  /// @brief Method set_scenePreview addr 0x2c5aab8 size 0xc virtual false final false
  inline void set_scenePreview(bool value);

  static inline ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* New_ctor();

  /// @brief Method .ctor addr 0x2c5a888 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__EditorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset__EditorSettings(__TimelineAsset__EditorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset__EditorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset__EditorSettings(__TimelineAsset__EditorSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset__EditorSettings();

public:
  /// @brief Field m_Framerate, offset: 0x10, size: 0x8, def value: None
  double_t ___m_Framerate;

  /// @brief Field m_ScenePreview, offset: 0x18, size: 0x1, def value: None
  bool ___m_ScenePreview;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset__EditorSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: ::<get_outputs>d__27
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10431))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13855))
// CS Name: ::TimelineAsset::<get_outputs>d__27*
class CORDL_TYPE __TimelineAsset___get_outputs_d__27 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::Timeline::TimelineAsset* __4__this;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* __7__wrap2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Playables::PlayableBinding& __get___2__current();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Timeline::TimelineAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TimelineAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::Timeline::TimelineAsset* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*& __get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*> const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* value);

  static inline ::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2c57810 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2c5ab48 size 0xb8 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2c5ac00 size 0x468 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2c5b118 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x2c5b068 size 0xb0 virtual false final false
  inline void __m__Finally2();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2c5b1c8 size 0x10 virtual true final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2c5b1d8 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c5b218 size 0x60 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2c5b278 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c5b31c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset___get_outputs_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimelineAsset___get_outputs_d__27(__TimelineAsset___get_outputs_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimelineAsset___get_outputs_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimelineAsset___get_outputs_d__27(__TimelineAsset___get_outputs_d__27 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimelineAsset___get_outputs_d__27();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Timeline::TimelineAsset* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Timeline::TrackAsset*>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimelineAsset
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422)), TypeDefinitionIndex(TypeDefinitionIndex(13853))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13856))
// CS Name: ::UnityEngine.Timeline::TimelineAsset*
class CORDL_TYPE TimelineAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using _get_outputs_d__27 = ::UnityEngine::Timeline::__TimelineAsset___get_outputs_d__27;

  using EditorSettings = ::UnityEngine::Timeline::__TimelineAsset__EditorSettings;

  using DurationMode = ::UnityEngine::Timeline::__TimelineAsset__DurationMode;

  using MediaType = ::UnityEngine::Timeline::__TimelineAsset__MediaType;

  using TimelineAssetUpgrade = ::UnityEngine::Timeline::__TimelineAsset__TimelineAssetUpgrade;

  using Versions = ::UnityEngine::Timeline::__TimelineAsset__Versions;

  /// @brief Field m_Version, offset 0x18, size 0x4
  __declspec(property(get = __get_m_Version, put = __set_m_Version)) int32_t m_Version;

  /// @brief Field m_Tracks, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Tracks, put = __set_m_Tracks))::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Tracks;

  /// @brief Field m_FixedDuration, offset 0x28, size 0x8
  __declspec(property(get = __get_m_FixedDuration, put = __set_m_FixedDuration)) double_t m_FixedDuration;

  /// @brief Field m_CacheOutputTracks, offset 0x30, size 0x8
  __declspec(property(get = __get_m_CacheOutputTracks,
                      put = __set_m_CacheOutputTracks))::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> m_CacheOutputTracks;

  /// @brief Field m_CacheRootTracks, offset 0x38, size 0x8
  __declspec(property(get = __get_m_CacheRootTracks, put = __set_m_CacheRootTracks))::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* m_CacheRootTracks;

  /// @brief Field m_CacheFlattenedTracks, offset 0x40, size 0x8
  __declspec(property(get = __get_m_CacheFlattenedTracks,
                      put = __set_m_CacheFlattenedTracks))::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> m_CacheFlattenedTracks;

  /// @brief Field m_EditorSettings, offset 0x48, size 0x8
  __declspec(property(get = __get_m_EditorSettings, put = __set_m_EditorSettings))::UnityEngine::Timeline::__TimelineAsset__EditorSettings* m_EditorSettings;

  /// @brief Field m_DurationMode, offset 0x50, size 0x4
  __declspec(property(get = __get_m_DurationMode, put = __set_m_DurationMode))::UnityEngine::Timeline::__TimelineAsset__DurationMode m_DurationMode;

  /// @brief Field m_MarkerTrack, offset 0x58, size 0x8
  __declspec(property(get = __get_m_MarkerTrack, put = __set_m_MarkerTrack))::UnityEngine::Timeline::MarkerTrack* m_MarkerTrack;

  __declspec(property(get = get_editorSettings))::UnityEngine::Timeline::__TimelineAsset__EditorSettings* editorSettings;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_fixedDuration, put = set_fixedDuration)) double_t fixedDuration;

  __declspec(property(get = get_durationMode, put = set_durationMode))::UnityEngine::Timeline::__TimelineAsset__DurationMode durationMode;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_outputTrackCount)) int32_t outputTrackCount;

  __declspec(property(get = get_rootTrackCount)) int32_t rootTrackCount;

  __declspec(property(get = get_flattenedTracks))::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> flattenedTracks;

  __declspec(property(get = get_markerTrack))::UnityEngine::Timeline::MarkerTrack* markerTrack;

  __declspec(property(get = get_trackObjects))::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* trackObjects;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

  constexpr int32_t& __get_m_Version();

  constexpr int32_t const& __get_m_Version() const;

  constexpr void __set_m_Version(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*& __get_m_Tracks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*> const& __get_m_Tracks() const;

  constexpr void __set_m_Tracks(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* value);

  constexpr double_t& __get_m_FixedDuration();

  constexpr double_t const& __get_m_FixedDuration() const;

  constexpr void __set_m_FixedDuration(double_t value);

  constexpr ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*>& __get_m_CacheOutputTracks();

  constexpr ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> const& __get_m_CacheOutputTracks() const;

  constexpr void __set_m_CacheOutputTracks(::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*& __get_m_CacheRootTracks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*> const& __get_m_CacheRootTracks() const;

  constexpr void __set_m_CacheRootTracks(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* value);

  constexpr ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*>& __get_m_CacheFlattenedTracks();

  constexpr ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> const& __get_m_CacheFlattenedTracks() const;

  constexpr void __set_m_CacheFlattenedTracks(::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> value);

  constexpr ::UnityEngine::Timeline::__TimelineAsset__EditorSettings*& __get_m_EditorSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::__TimelineAsset__EditorSettings*> const& __get_m_EditorSettings() const;

  constexpr void __set_m_EditorSettings(::UnityEngine::Timeline::__TimelineAsset__EditorSettings* value);

  constexpr ::UnityEngine::Timeline::__TimelineAsset__DurationMode& __get_m_DurationMode();

  constexpr ::UnityEngine::Timeline::__TimelineAsset__DurationMode const& __get_m_DurationMode() const;

  constexpr void __set_m_DurationMode(::UnityEngine::Timeline::__TimelineAsset__DurationMode value);

  constexpr ::UnityEngine::Timeline::MarkerTrack*& __get_m_MarkerTrack();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::MarkerTrack*> const& __get_m_MarkerTrack() const;

  constexpr void __set_m_MarkerTrack(::UnityEngine::Timeline::MarkerTrack* value);

  /// @brief Method UpgradeToLatestVersion addr 0x2c573a4 size 0x4 virtual false final false
  inline void UpgradeToLatestVersion();

  /// @brief Method get_editorSettings addr 0x2c573a8 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* get_editorSettings();

  /// @brief Method get_duration addr 0x2c573b0 size 0xb4 virtual true final false
  inline double_t get_duration();

  /// @brief Method get_fixedDuration addr 0x2c57644 size 0xb8 virtual false final false
  inline double_t get_fixedDuration();

  /// @brief Method set_fixedDuration addr 0x2c57718 size 0x70 virtual false final false
  inline void set_fixedDuration(double_t value);

  /// @brief Method get_durationMode addr 0x2c57788 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::__TimelineAsset__DurationMode get_durationMode();

  /// @brief Method set_durationMode addr 0x2c57790 size 0x8 virtual false final false
  inline void set_durationMode(::UnityEngine::Timeline::__TimelineAsset__DurationMode value);

  /// @brief Method get_outputs addr 0x2c57798 size 0x78 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method get_clipCaps addr 0x2c57844 size 0x350 virtual true final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_outputTrackCount addr 0x2c57bac size 0x24 virtual false final false
  inline int32_t get_outputTrackCount();

  /// @brief Method get_rootTrackCount addr 0x2c57df8 size 0x50 virtual false final false
  inline int32_t get_rootTrackCount();

  /// @brief Method OnValidate addr 0x2c581b8 size 0x28 virtual false final false
  inline void OnValidate();

  /// @brief Method GetRootTrack addr 0x2c582a4 size 0x60 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* GetRootTrack(int32_t index);

  /// @brief Method GetRootTracks addr 0x2c57b94 size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetRootTracks();

  /// @brief Method GetOutputTrack addr 0x2c58304 size 0x44 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* GetOutputTrack(int32_t index);

  /// @brief Method GetOutputTracks addr 0x2c58348 size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetOutputTracks();

  /// @brief Method GetValidFrameRate addr 0x2c581e0 size 0xac virtual false final false
  static inline double_t GetValidFrameRate(double_t frameRate);

  /// @brief Method UpdateRootTrackCache addr 0x2c57e48 size 0x370 virtual false final false
  inline void UpdateRootTrackCache();

  /// @brief Method UpdateOutputTrackCache addr 0x2c57bd0 size 0x228 virtual false final false
  inline void UpdateOutputTrackCache();

  /// @brief Method get_flattenedTracks addr 0x2c58360 size 0x154 virtual false final false
  inline ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> get_flattenedTracks();

  /// @brief Method get_markerTrack addr 0x2c58800 size 0x8 virtual false final false
  inline ::UnityEngine::Timeline::MarkerTrack* get_markerTrack();

  /// @brief Method get_trackObjects addr 0x2c58808 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* get_trackObjects();

  /// @brief Method AddTrackInternal addr 0x2c58810 size 0xb8 virtual false final false
  inline void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method RemoveTrack addr 0x2c588d4 size 0x108 virtual false final false
  inline void RemoveTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method CreatePlayable addr 0x2c58a58 size 0x1c4 virtual true final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2c58c1c size 0x8 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2c58c24 size 0xc virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method __internalAwake addr 0x2c58c30 size 0x168 virtual false final false
  inline void __internalAwake();

  /// @brief Method GatherProperties addr 0x2c58d98 size 0x31c virtual true final true
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method CreateMarkerTrack addr 0x2c59240 size 0xcc virtual false final false
  inline void CreateMarkerTrack();

  /// @brief Method Invalidate addr 0x2c588c8 size 0xc virtual false final false
  inline void Invalidate();

  /// @brief Method UpdateFixedDurationWithItemsDuration addr 0x2c5930c size 0x6c virtual false final false
  inline void UpdateFixedDurationWithItemsDuration();

  /// @brief Method CalculateItemsDuration addr 0x2c57464 size 0x148 virtual false final false
  inline ::UnityEngine::Timeline::DiscreteTime CalculateItemsDuration();

  /// @brief Method AddSubTracksRecursive addr 0x2c584b4 size 0x34c virtual false final false
  static inline void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* track, ByRef<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*> allTracks);

  /// @brief Method CreateTrack addr 0x2c594a8 size 0x308 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* CreateTrack(::System::Type* type, ::UnityEngine::Timeline::TrackAsset* parent, ::StringW name);

  /// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T CreateTrack(::UnityEngine::Timeline::TrackAsset* parent, ::StringW trackName);

  /// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T CreateTrack(::StringW trackName);

  /// @brief Method CreateTrack addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T CreateTrack();

  /// @brief Method DeleteClip addr 0x2c59b94 size 0x1cc virtual false final false
  inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method DeleteTrack addr 0x2c59eb8 size 0x540 virtual false final false
  inline bool DeleteTrack(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method MoveLastTrackBefore addr 0x2c5a544 size 0x1dc virtual false final false
  inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset);

  /// @brief Method AllocateTrack addr 0x2c5991c size 0x278 virtual false final false
  inline ::UnityEngine::Timeline::TrackAsset* AllocateTrack(::UnityEngine::Timeline::TrackAsset* trackAssetParent, ::StringW trackName, ::System::Type* trackType);

  /// @brief Method DeleteRecordedAnimation addr 0x2c5a3f8 size 0x14c virtual false final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* track);

  /// @brief Method DeleteRecordedAnimation addr 0x2c59d60 size 0x158 virtual false final false
  inline void DeleteRecordedAnimation(::UnityEngine::Timeline::TimelineClip* clip);

  static inline ::UnityEngine::Timeline::TimelineAsset* New_ctor();

  /// @brief Method .ctor addr 0x2c5a824 size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineAsset(TimelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineAsset(TimelineAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineAsset();

public:
  /// @brief Field m_Version, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_Tracks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* ___m_Tracks;

  /// @brief Field m_FixedDuration, offset: 0x28, size: 0x8, def value: None
  double_t ___m_FixedDuration;

  /// @brief Field m_CacheOutputTracks, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> ___m_CacheOutputTracks;

  /// @brief Field m_CacheRootTracks, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* ___m_CacheRootTracks;

  /// @brief Field m_CacheFlattenedTracks, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> ___m_CacheFlattenedTracks;

  /// @brief Field m_EditorSettings, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Timeline::__TimelineAsset__EditorSettings* ___m_EditorSettings;

  /// @brief Field m_DurationMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineAsset__DurationMode ___m_DurationMode;

  /// @brief Field m_MarkerTrack, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Timeline::MarkerTrack* ___m_MarkerTrack;

  /// @brief Field k_LatestVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestVersion{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineAsset, 0x60>, "Size mismatch!");

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
