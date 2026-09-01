#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VisualEffectControlPlayableBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlPlayableBehaviour)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectControlPlayableBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*, "UnityEngine.VFX", "VisualEffectControlPlayableBehaviour");
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.VFX.VisualEffectPlayableSerializedEvent
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlPlayableBehaviour
class CORDL_TYPE VisualEffectControlPlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field <clipEnd>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__clipEnd_k__BackingField, put = __cordl_internal_set__clipEnd_k__BackingField)) double_t _clipEnd_k__BackingField;

  /// @brief Field <clipEventsCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__clipEventsCount_k__BackingField, put = __cordl_internal_set__clipEventsCount_k__BackingField)) uint32_t _clipEventsCount_k__BackingField;

  /// @brief Field <clipStart>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__clipStart_k__BackingField, put = __cordl_internal_set__clipStart_k__BackingField)) double_t _clipStart_k__BackingField;

  /// @brief Field <events>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__events_k__BackingField, put = __cordl_internal_set__events_k__BackingField)) ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>
      _events_k__BackingField;

  /// @brief Field <prewarmDeltaTime>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__prewarmDeltaTime_k__BackingField, put = __cordl_internal_set__prewarmDeltaTime_k__BackingField)) float_t _prewarmDeltaTime_k__BackingField;

  /// @brief Field <prewarmEvent>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__prewarmEvent_k__BackingField,
                      put = __cordl_internal_set__prewarmEvent_k__BackingField)) ::UnityEngine::VFX::Utility::ExposedProperty* _prewarmEvent_k__BackingField;

  /// @brief Field <prewarmStepCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__prewarmStepCount_k__BackingField, put = __cordl_internal_set__prewarmStepCount_k__BackingField)) uint32_t _prewarmStepCount_k__BackingField;

  /// @brief Field <reinitEnter>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__reinitEnter_k__BackingField, put = __cordl_internal_set__reinitEnter_k__BackingField)) bool _reinitEnter_k__BackingField;

  /// @brief Field <reinitExit>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__reinitExit_k__BackingField, put = __cordl_internal_set__reinitExit_k__BackingField)) bool _reinitExit_k__BackingField;

  /// @brief Field <scrubbing>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__scrubbing_k__BackingField, put = __cordl_internal_set__scrubbing_k__BackingField)) bool _scrubbing_k__BackingField;

  /// @brief Field <startSeed>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__startSeed_k__BackingField, put = __cordl_internal_set__startSeed_k__BackingField)) uint32_t _startSeed_k__BackingField;

  __declspec(property(get = get_clipEnd, put = set_clipEnd)) double_t clipEnd;

  __declspec(property(get = get_clipEventsCount, put = set_clipEventsCount)) uint32_t clipEventsCount;

  __declspec(property(get = get_clipStart, put = set_clipStart)) double_t clipStart;

  __declspec(property(get = get_events, put = set_events)) ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> events;

  __declspec(property(get = get_prewarmDeltaTime, put = set_prewarmDeltaTime)) float_t prewarmDeltaTime;

  __declspec(property(get = get_prewarmEvent, put = set_prewarmEvent)) ::UnityEngine::VFX::Utility::ExposedProperty* prewarmEvent;

  __declspec(property(get = get_prewarmStepCount, put = set_prewarmStepCount)) uint32_t prewarmStepCount;

  __declspec(property(get = get_reinitEnter, put = set_reinitEnter)) bool reinitEnter;

  __declspec(property(get = get_reinitExit, put = set_reinitExit)) bool reinitExit;

  __declspec(property(get = get_scrubbing, put = set_scrubbing)) bool scrubbing;

  __declspec(property(get = get_startSeed, put = set_startSeed)) uint32_t startSeed;

  static inline ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* New_ctor();

  constexpr double_t const& __cordl_internal_get__clipEnd_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__clipEnd_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__clipEventsCount_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__clipEventsCount_k__BackingField();

  constexpr double_t const& __cordl_internal_get__clipStart_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__clipStart_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> const& __cordl_internal_get__events_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>& __cordl_internal_get__events_k__BackingField();

  constexpr float_t const& __cordl_internal_get__prewarmDeltaTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__prewarmDeltaTime_k__BackingField();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get__prewarmEvent_k__BackingField() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get__prewarmEvent_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__prewarmStepCount_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__prewarmStepCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__reinitEnter_k__BackingField() const;

  constexpr bool& __cordl_internal_get__reinitEnter_k__BackingField();

  constexpr bool const& __cordl_internal_get__reinitExit_k__BackingField() const;

  constexpr bool& __cordl_internal_get__reinitExit_k__BackingField();

  constexpr bool const& __cordl_internal_get__scrubbing_k__BackingField() const;

  constexpr bool& __cordl_internal_get__scrubbing_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__startSeed_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__startSeed_k__BackingField();

  constexpr void __cordl_internal_set__clipEnd_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__clipEventsCount_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__clipStart_k__BackingField(double_t value);

  constexpr void __cordl_internal_set__events_k__BackingField(::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> value);

  constexpr void __cordl_internal_set__prewarmDeltaTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__prewarmEvent_k__BackingField(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set__prewarmStepCount_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__reinitEnter_k__BackingField(bool value);

  constexpr void __cordl_internal_set__reinitExit_k__BackingField(bool value);

  constexpr void __cordl_internal_set__scrubbing_k__BackingField(bool value);

  constexpr void __cordl_internal_set__startSeed_k__BackingField(uint32_t value);

  /// @brief Method .ctor, addr 0x69d48b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipEnd, addr 0x69d4814, size 0x8, virtual false, abstract: false, final false
  inline double_t get_clipEnd();

  /// @brief Method get_clipEventsCount, addr 0x69d4874, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_clipEventsCount();

  /// @brief Method get_clipStart, addr 0x69d4804, size 0x8, virtual false, abstract: false, final false
  inline double_t get_clipStart();

  /// @brief Method get_events, addr 0x69d4864, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> get_events();

  /// @brief Method get_prewarmDeltaTime, addr 0x69d4894, size 0x8, virtual false, abstract: false, final false
  inline float_t get_prewarmDeltaTime();

  /// @brief Method get_prewarmEvent, addr 0x69d48a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::Utility::ExposedProperty* get_prewarmEvent();

  /// @brief Method get_prewarmStepCount, addr 0x69d4884, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_prewarmStepCount();

  /// @brief Method get_reinitEnter, addr 0x69d4834, size 0x8, virtual false, abstract: false, final false
  inline bool get_reinitEnter();

  /// @brief Method get_reinitExit, addr 0x69d4844, size 0x8, virtual false, abstract: false, final false
  inline bool get_reinitExit();

  /// @brief Method get_scrubbing, addr 0x69d4824, size 0x8, virtual false, abstract: false, final false
  inline bool get_scrubbing();

  /// @brief Method get_startSeed, addr 0x69d4854, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_startSeed();

  /// @brief Method set_clipEnd, addr 0x69d481c, size 0x8, virtual false, abstract: false, final false
  inline void set_clipEnd(double_t value);

  /// @brief Method set_clipEventsCount, addr 0x69d487c, size 0x8, virtual false, abstract: false, final false
  inline void set_clipEventsCount(uint32_t value);

  /// @brief Method set_clipStart, addr 0x69d480c, size 0x8, virtual false, abstract: false, final false
  inline void set_clipStart(double_t value);

  /// @brief Method set_events, addr 0x69d486c, size 0x8, virtual false, abstract: false, final false
  inline void set_events(::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> value);

  /// @brief Method set_prewarmDeltaTime, addr 0x69d489c, size 0x8, virtual false, abstract: false, final false
  inline void set_prewarmDeltaTime(float_t value);

  /// @brief Method set_prewarmEvent, addr 0x69d48ac, size 0x8, virtual false, abstract: false, final false
  inline void set_prewarmEvent(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method set_prewarmStepCount, addr 0x69d488c, size 0x8, virtual false, abstract: false, final false
  inline void set_prewarmStepCount(uint32_t value);

  /// @brief Method set_reinitEnter, addr 0x69d483c, size 0x8, virtual false, abstract: false, final false
  inline void set_reinitEnter(bool value);

  /// @brief Method set_reinitExit, addr 0x69d484c, size 0x8, virtual false, abstract: false, final false
  inline void set_reinitExit(bool value);

  /// @brief Method set_scrubbing, addr 0x69d482c, size 0x8, virtual false, abstract: false, final false
  inline void set_scrubbing(bool value);

  /// @brief Method set_startSeed, addr 0x69d485c, size 0x8, virtual false, abstract: false, final false
  inline void set_startSeed(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectControlPlayableBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlPlayableBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectControlPlayableBehaviour(VisualEffectControlPlayableBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlPlayableBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectControlPlayableBehaviour(VisualEffectControlPlayableBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19958 };

  /// @brief Field <clipStart>k__BackingField, offset: 0x10, size: 0x8, def value: None
  double_t ____clipStart_k__BackingField;

  /// @brief Field <clipEnd>k__BackingField, offset: 0x18, size: 0x8, def value: None
  double_t ____clipEnd_k__BackingField;

  /// @brief Field <scrubbing>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____scrubbing_k__BackingField;

  /// @brief Field <reinitEnter>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____reinitEnter_k__BackingField;

  /// @brief Field <reinitExit>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____reinitExit_k__BackingField;

  /// @brief Field <startSeed>k__BackingField, offset: 0x24, size: 0x4, def value: None
  uint32_t ____startSeed_k__BackingField;

  /// @brief Field <events>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent> ____events_k__BackingField;

  /// @brief Field <clipEventsCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  uint32_t ____clipEventsCount_k__BackingField;

  /// @brief Field <prewarmStepCount>k__BackingField, offset: 0x34, size: 0x4, def value: None
  uint32_t ____prewarmStepCount_k__BackingField;

  /// @brief Field <prewarmDeltaTime>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____prewarmDeltaTime_k__BackingField;

  /// @brief Field <prewarmEvent>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ____prewarmEvent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____clipStart_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____clipEnd_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____scrubbing_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____reinitEnter_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____reinitExit_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____startSeed_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____events_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____clipEventsCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____prewarmStepCount_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____prewarmDeltaTime_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour, ____prewarmEvent_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour) == 0x48, "Size mismatch!");

} // namespace UnityEngine::VFX
