#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrack)
namespace System {
template <typename T, typename TResult> class Func_2;
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
class IPropertyCollector;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::VFX {
struct VisualEffectControlTrack_ReinitMode;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack___c;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VisualEffectControlTrack_ReinitMode;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrack*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrack___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode, "UnityEngine.VFX", "VisualEffectControlTrack/ReinitMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrack*, "UnityEngine.VFX", "VisualEffectControlTrack");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrack___c*, "UnityEngine.VFX", "VisualEffectControlTrack/<>c");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrack/ReinitMode
struct CORDL_TYPE VisualEffectControlTrack_ReinitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualEffectControlTrack_ReinitMode_Unwrapped
  enum struct __VisualEffectControlTrack_ReinitMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OnBindingEnable = static_cast<int32_t>(0x1),
    __E_OnBindingDisable = static_cast<int32_t>(0x2),
    __E_OnBindingEnableOrDisable = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualEffectControlTrack_ReinitMode_Unwrapped() const noexcept {
    return static_cast<__VisualEffectControlTrack_ReinitMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrack_ReinitMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualEffectControlTrack_ReinitMode(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const None;

  /// @brief Field OnBindingDisable value: I32(2)
  static ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const OnBindingDisable;

  /// @brief Field OnBindingEnable value: I32(1)
  static ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const OnBindingEnable;

  /// @brief Field OnBindingEnableOrDisable value: I32(3)
  static ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const OnBindingEnableOrDisable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19959 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrack/<>c
class CORDL_TYPE VisualEffectControlTrack___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::VisualEffectControlTrack___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>* __9__5_0;

  static inline ::UnityEngine::VFX::VisualEffectControlTrack___c* New_ctor();

  /// @brief Method <OnBeforeTrackSerialize>b__5_0, addr 0x69d4fa4, size 0x88, virtual false, abstract: false, final false
  inline bool _OnBeforeTrackSerialize_b__5_0(::UnityEngine::Timeline::TimelineClip* x);

  /// @brief Method .ctor, addr 0x69d4fa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::VisualEffectControlTrack___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrack___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::Timeline::TimelineClip*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrack___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrack___c(VisualEffectControlTrack___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrack___c(VisualEffectControlTrack___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrack___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.Timeline.TrackAsset, UnityEngine.VFX.VisualEffectControlTrack::ReinitMode
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrack
class CORDL_TYPE VisualEffectControlTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  using ReinitMode = ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode;

  using __c = ::UnityEngine::VFX::VisualEffectControlTrack___c;

  /// @brief Field m_VFXVersion, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VFXVersion, put = __cordl_internal_set_m_VFXVersion)) int32_t m_VFXVersion;

  /// @brief Field reinit, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_reinit, put = __cordl_internal_set_reinit)) ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode reinit;

  /// @brief Method CreateTrackMixer, addr 0x69d49ec, size 0x434, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  /// @brief Method GatherProperties, addr 0x69d4e2c, size 0xbc, virtual true, abstract: false, final false
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method IsUpToDate, addr 0x69d48b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsUpToDate();

  static inline ::UnityEngine::VFX::VisualEffectControlTrack* New_ctor();

  /// @brief Method OnBeforeTrackSerialize, addr 0x69d48c8, size 0x124, virtual true, abstract: false, final false
  inline void OnBeforeTrackSerialize();

  constexpr int32_t const& __cordl_internal_get_m_VFXVersion() const;

  constexpr int32_t& __cordl_internal_get_m_VFXVersion();

  constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode const& __cordl_internal_get_reinit() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode& __cordl_internal_get_reinit();

  constexpr void __cordl_internal_set_m_VFXVersion(int32_t value);

  constexpr void __cordl_internal_set_reinit(::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode value);

  /// @brief Method .ctor, addr 0x69d4ee8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlTrack(VisualEffectControlTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlTrack(VisualEffectControlTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19961 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field m_VFXVersion, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_VFXVersion;

  /// @brief Field reinit, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::VFX::VisualEffectControlTrack_ReinitMode ___reinit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrack, ___m_VFXVersion) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrack, ___reinit) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrack) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::VFX
