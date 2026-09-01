#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEventNoColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlClip)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class ITimelineClipAsset;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
struct VisualEffectControlClip_ClipEvent;
}
namespace UnityEngine::VFX {
struct VisualEffectControlClip_PrewarmClipSettings;
}
namespace UnityEngine::VFX {
struct VisualEffectControlClip_ReinitMode;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VisualEffectControlClip_ReinitMode;
}
namespace UnityEngine::VFX {
class VisualEffectControlClip;
}
namespace UnityEngine::VFX {
struct VisualEffectControlClip_ClipEvent;
}
namespace UnityEngine::VFX {
struct VisualEffectControlClip_PrewarmClipSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlClip_ReinitMode);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlClip*);
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent);
MARK_VAL_T(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlClip_ReinitMode, "UnityEngine.VFX", "VisualEffectControlClip/ReinitMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlClip*, "UnityEngine.VFX", "VisualEffectControlClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent, "UnityEngine.VFX", "VisualEffectControlClip/ClipEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings, "UnityEngine.VFX", "VisualEffectControlClip/PrewarmClipSettings");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/ReinitMode
struct CORDL_TYPE VisualEffectControlClip_ReinitMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisualEffectControlClip_ReinitMode_Unwrapped
  enum struct __VisualEffectControlClip_ReinitMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OnExitClip = static_cast<int32_t>(0x1),
    __E_OnEnterClip = static_cast<int32_t>(0x2),
    __E_OnEnterOrExitClip = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisualEffectControlClip_ReinitMode_Unwrapped() const noexcept {
    return static_cast<__VisualEffectControlClip_ReinitMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlClip_ReinitMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualEffectControlClip_ReinitMode(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode const None;

  /// @brief Field OnEnterClip value: I32(2)
  static ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode const OnEnterClip;

  /// @brief Field OnEnterOrExitClip value: I32(3)
  static ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode const OnEnterOrExitClip;

  /// @brief Field OnExitClip value: I32(1)
  static ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode const OnExitClip;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19930 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_ReinitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlClip_ReinitMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/PrewarmClipSettings
struct CORDL_TYPE VisualEffectControlClip_PrewarmClipSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlClip_PrewarmClipSettings();

  // Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stepCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "deltaTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventName", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: None }]
  constexpr VisualEffectControlClip_PrewarmClipSettings(bool enable, uint32_t stepCount, float_t deltaTime, ::UnityEngine::VFX::Utility::ExposedProperty* eventName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19931 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field enable, offset: 0x0, size: 0x1, def value: None
  bool enable;

  /// @brief Field stepCount, offset: 0x4, size: 0x4, def value: None
  uint32_t stepCount;

  /// @brief Field deltaTime, offset: 0x8, size: 0x4, def value: None
  float_t deltaTime;

  /// @brief Field eventName, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* eventName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings, enable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings, stepCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings, deltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings, eventName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.Color, UnityEngine.VFX.VisualEffectPlayableSerializedEventNoColor
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/ClipEvent
struct CORDL_TYPE VisualEffectControlClip_ClipEvent {
public:
  // Declarations
  /// @brief Field defaultEditorColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_defaultEditorColor, put = setStaticF_defaultEditorColor)) ::UnityEngine::Color defaultEditorColor;

  static inline ::UnityEngine::Color getStaticF_defaultEditorColor();

  static inline void setStaticF_defaultEditorColor(::UnityEngine::Color value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlClip_ClipEvent();

  // Ctor Parameters [CppParam { name: "editorColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "enter", ty:
  // "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor", modifiers: "", def_value: None }, CppParam { name: "exit", ty: "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor",
  // modifiers: "", def_value: None }]
  constexpr VisualEffectControlClip_ClipEvent(::UnityEngine::Color editorColor, ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor enter,
                                              ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor exit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19932 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field editorColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color editorColor;

  /// @brief Field enter, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor enter;

  /// @brief Field exit, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor exit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent, editorColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent, enter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent, exit) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlClip_ClipEvent) == 0x50, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.Playables.PlayableAsset, UnityEngine.VFX.VisualEffectControlClip::PrewarmClipSettings, UnityEngine.VFX.VisualEffectControlClip::ReinitMode
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlClip
class CORDL_TYPE VisualEffectControlClip : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using ClipEvent = ::UnityEngine::VFX::VisualEffectControlClip_ClipEvent;

  using PrewarmClipSettings = ::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings;

  using ReinitMode = ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode;

  /// @brief Field <clipEnd>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__clipEnd_k__BackingField, put = __cordl_internal_set__clipEnd_k__BackingField)) double_t _clipEnd_k__BackingField;

  /// @brief Field <clipStart>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__clipStart_k__BackingField, put = __cordl_internal_set__clipStart_k__BackingField)) double_t _clipStart_k__BackingField;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_clipEnd, put = set_clipEnd)) double_t clipEnd;

  /// @brief Field clipEvents, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_clipEvents,
                      put = __cordl_internal_set_clipEvents)) ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>* clipEvents;

  __declspec(property(get = get_clipStart, put = set_clipStart)) double_t clipStart;

  /// @brief Field prewarm, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_prewarm, put = __cordl_internal_set_prewarm)) ::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings prewarm;

  /// @brief Field reinit, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_reinit, put = __cordl_internal_set_reinit)) ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode reinit;

  /// @brief Field scrubbing, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_scrubbing, put = __cordl_internal_set_scrubbing)) bool scrubbing;

  /// @brief Field singleEvents, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_singleEvents,
                      put = __cordl_internal_set_singleEvents)) ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* singleEvents;

  /// @brief Field startSeed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_startSeed, put = __cordl_internal_set_startSeed)) uint32_t startSeed;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x69d2288, size 0x604, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  static inline ::UnityEngine::VFX::VisualEffectControlClip* New_ctor();

  constexpr double_t const& __cordl_internal_get__clipEnd_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__clipEnd_k__BackingField();

  constexpr double_t const& __cordl_internal_get__clipStart_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__clipStart_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>* const& __cordl_internal_get_clipEvents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>*& __cordl_internal_get_clipEvents();

  constexpr ::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings const& __cordl_internal_get_prewarm() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings& __cordl_internal_get_prewarm();

  constexpr ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode const& __cordl_internal_get_reinit() const;

  constexpr ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode& __cordl_internal_get_reinit();

  constexpr bool const& __cordl_internal_get_scrubbing() const;

  constexpr bool& __cordl_internal_get_scrubbing();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get_singleEvents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get_singleEvents();

  constexpr uint32_t const& __cordl_internal_get_startSeed() const;

  constexpr uint32_t& __cordl_internal_get_startSeed();

  constexpr void __cordl_internal_set__clipEnd_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__clipStart_k__BackingField(double_t value);

  constexpr void __cordl_internal_set_clipEvents(::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>* value);

  constexpr void __cordl_internal_set_prewarm(::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings value);

  constexpr void __cordl_internal_set_reinit(::UnityEngine::VFX::VisualEffectControlClip_ReinitMode value);

  constexpr void __cordl_internal_set_scrubbing(bool value);

  constexpr void __cordl_internal_set_singleEvents(::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value);

  constexpr void __cordl_internal_set_startSeed(uint32_t value);

  /// @brief Method .ctor, addr 0x69d28ac, size 0x31c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x69d2260, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_clipEnd, addr 0x69d2278, size 0x8, virtual false, abstract: false, final false
  inline double_t get_clipEnd();

  /// @brief Method get_clipStart, addr 0x69d2268, size 0x8, virtual false, abstract: false, final false
  inline double_t get_clipStart();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  /// @brief Method set_clipEnd, addr 0x69d2280, size 0x8, virtual false, abstract: false, final false
  inline void set_clipEnd(double_t value);

  /// @brief Method set_clipStart, addr 0x69d2270, size 0x8, virtual false, abstract: false, final false
  inline void set_clipStart(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlClip(VisualEffectControlClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlClip(VisualEffectControlClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19933 };

  /// @brief Field <clipStart>k__BackingField, offset: 0x18, size: 0x8, def value: None
  double_t ____clipStart_k__BackingField;

  /// @brief Field <clipEnd>k__BackingField, offset: 0x20, size: 0x8, def value: None
  double_t ____clipEnd_k__BackingField;

  /// @brief Field scrubbing, offset: 0x28, size: 0x1, def value: None
  bool ___scrubbing;

  /// @brief Field startSeed, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___startSeed;

  /// @brief Field reinit, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::VFX::VisualEffectControlClip_ReinitMode ___reinit;

  /// @brief Field prewarm, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::VFX::VisualEffectControlClip_PrewarmClipSettings ___prewarm;

  /// @brief Field clipEvents, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectControlClip_ClipEvent>* ___clipEvents;

  /// @brief Field singleEvents, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* ___singleEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ____clipStart_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ____clipEnd_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___scrubbing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___startSeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___reinit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___prewarm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___clipEvents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlClip, ___singleEvents) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlClip) == 0x60, "Size mismatch!");

} // namespace UnityEngine::VFX
