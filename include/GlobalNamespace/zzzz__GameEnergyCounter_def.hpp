#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEnergyCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEnergyCounter)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace GlobalNamespace {
class __GameEnergyCounter__InitData;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnergyType;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class __GameEnergyCounter__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameEnergyCounter);
MARK_REF_PTR_T(::GlobalNamespace::__GameEnergyCounter__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 23, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameEnergyCounter::InitData*
class CORDL_TYPE __GameEnergyCounter__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_energyType, put = __cordl_internal_set_energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType energyType;

  /// @brief Field failOnSaberClash, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_failOnSaberClash, put = __cordl_internal_set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field instaFail, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_instaFail, put = __cordl_internal_set_instaFail)) bool instaFail;

  /// @brief Field noFail, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noFail, put = __cordl_internal_set_noFail)) bool noFail;

  static inline ::GlobalNamespace::__GameEnergyCounter__InitData* New_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash);

  constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& __cordl_internal_get_energyType() const;

  constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& __cordl_internal_get_energyType();

  constexpr bool const& __cordl_internal_get_failOnSaberClash() const;

  constexpr bool& __cordl_internal_get_failOnSaberClash();

  constexpr bool const& __cordl_internal_get_instaFail() const;

  constexpr bool& __cordl_internal_get_instaFail();

  constexpr bool const& __cordl_internal_get_noFail() const;

  constexpr bool& __cordl_internal_get_noFail();

  constexpr void __cordl_internal_set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType value);

  constexpr void __cordl_internal_set_failOnSaberClash(bool value);

  constexpr void __cordl_internal_set_instaFail(bool value);

  constexpr void __cordl_internal_set_noFail(bool value);

  /// @brief Method .ctor, addr 0x3b815e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameEnergyCounter__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameEnergyCounter__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameEnergyCounter__InitData(__GameEnergyCounter__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameEnergyCounter__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameEnergyCounter__InitData(__GameEnergyCounter__InitData const&) = delete;

  /// @brief Field energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__GameplayModifiers__EnergyType ___energyType;

  /// @brief Field noFail, offset: 0x14, size: 0x1, def value: None
  bool ___noFail;

  /// @brief Field instaFail, offset: 0x15, size: 0x1, def value: None
  bool ___instaFail;

  /// @brief Field failOnSaberClash, offset: 0x16, size: 0x1, def value: None
  bool ___failOnSaberClash;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameEnergyCounter__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameEnergyCounter__InitData, ___energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameEnergyCounter__InitData, ___noFail) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameEnergyCounter__InitData, ___instaFail) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameEnergyCounter__InitData, ___failOnSaberClash) == 0x16, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameEnergyCounter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameEnergyCounter*
class CORDL_TYPE GameEnergyCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__GameEnergyCounter__InitData;

  /// @brief Field _batteryLives, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__batteryLives, put = __cordl_internal_set__batteryLives)) int32_t _batteryLives;

  /// @brief Field _beatmapObjectManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _didReach0Energy, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get__didReach0Energy, put = __cordl_internal_set__didReach0Energy)) bool _didReach0Energy;

  /// @brief Field <energyType>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__energyType_k__BackingField,
                      put = __cordl_internal_set__energyType_k__BackingField)) ::GlobalNamespace::__GameplayModifiers__EnergyType _energyType_k__BackingField;

  /// @brief Field <energy>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__energy_k__BackingField, put = __cordl_internal_set__energy_k__BackingField)) float_t _energy_k__BackingField;

  /// @brief Field <failOnSaberClash>k__BackingField, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get__failOnSaberClash_k__BackingField, put = __cordl_internal_set__failOnSaberClash_k__BackingField)) bool _failOnSaberClash_k__BackingField;

  /// @brief Field _initData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__GameEnergyCounter__InitData* _initData;

  /// @brief Field <instaFail>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__instaFail_k__BackingField, put = __cordl_internal_set__instaFail_k__BackingField)) bool _instaFail_k__BackingField;

  /// @brief Field _isInitialized, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _nextFrameEnergyChange, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__nextFrameEnergyChange, put = __cordl_internal_set__nextFrameEnergyChange)) float_t _nextFrameEnergyChange;

  /// @brief Field <noFail>k__BackingField, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__noFail_k__BackingField, put = __cordl_internal_set__noFail_k__BackingField)) bool _noFail_k__BackingField;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction)) ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>
      _playerHeadAndObstacleInteraction;

  /// @brief Field _saberClashChecker, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__saberClashChecker, put = __cordl_internal_set__saberClashChecker)) ::GlobalNamespace::SaberClashChecker* _saberClashChecker;

  __declspec(property(get = get_batteryEnergy)) int32_t batteryEnergy;

  __declspec(property(get = get_batteryLives)) int32_t batteryLives;

  /// @brief Field didInitEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent)) ::System::Action* didInitEvent;

  __declspec(property(get = get_energy, put = set_energy)) float_t energy;

  __declspec(property(get = get_energyType, put = set_energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType energyType;

  __declspec(property(get = get_failOnSaberClash, put = set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field gameEnergyDidChangeEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_gameEnergyDidChangeEvent, put = __cordl_internal_set_gameEnergyDidChangeEvent)) ::System::Action_1<float_t>* gameEnergyDidChangeEvent;

  /// @brief Field gameEnergyDidReach0Event, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameEnergyDidReach0Event, put = __cordl_internal_set_gameEnergyDidReach0Event)) ::System::Action* gameEnergyDidReach0Event;

  __declspec(property(get = get_instaFail, put = set_instaFail)) bool instaFail;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_noFail, put = set_noFail)) bool noFail;

  /// @brief Convert operator to "::GlobalNamespace::IGameEnergyCounter"
  constexpr operator ::GlobalNamespace::IGameEnergyCounter*() noexcept;

  /// @brief Method HandleNoteWasCut, addr 0x3b81494, size 0xd0, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x3b81564, size 0x64, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method LateUpdate, addr 0x3b8124c, size 0x10c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::GameEnergyCounter* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b81150, size 0xfc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ProcessEnergyChange, addr 0x3b813a8, size 0xec, virtual false, abstract: false, final false
  inline void ProcessEnergyChange(float_t energyChange);

  /// @brief Method Start, addr 0x3b80fc4, size 0x18c, virtual false, abstract: false, final false
  inline void Start();

  constexpr int32_t const& __cordl_internal_get__batteryLives() const;

  constexpr int32_t& __cordl_internal_get__batteryLives();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr bool const& __cordl_internal_get__didReach0Energy() const;

  constexpr bool& __cordl_internal_get__didReach0Energy();

  constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& __cordl_internal_get__energyType_k__BackingField() const;

  constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& __cordl_internal_get__energyType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__energy_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__energy_k__BackingField();

  constexpr bool const& __cordl_internal_get__failOnSaberClash_k__BackingField() const;

  constexpr bool& __cordl_internal_get__failOnSaberClash_k__BackingField();

  constexpr ::GlobalNamespace::__GameEnergyCounter__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameEnergyCounter__InitData*> const& __cordl_internal_get__initData() const;

  constexpr bool const& __cordl_internal_get__instaFail_k__BackingField() const;

  constexpr bool& __cordl_internal_get__instaFail_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr float_t const& __cordl_internal_get__nextFrameEnergyChange() const;

  constexpr float_t& __cordl_internal_get__nextFrameEnergyChange();

  constexpr bool const& __cordl_internal_get__noFail_k__BackingField() const;

  constexpr bool& __cordl_internal_get__noFail_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr ::GlobalNamespace::SaberClashChecker*& __cordl_internal_get__saberClashChecker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& __cordl_internal_get__saberClashChecker() const;

  constexpr ::System::Action*& __cordl_internal_get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_gameEnergyDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_gameEnergyDidChangeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_gameEnergyDidReach0Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_gameEnergyDidReach0Event() const;

  constexpr void __cordl_internal_set__batteryLives(int32_t value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__didReach0Energy(bool value);

  constexpr void __cordl_internal_set__energyType_k__BackingField(::GlobalNamespace::__GameplayModifiers__EnergyType value);

  constexpr void __cordl_internal_set__energy_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__failOnSaberClash_k__BackingField(bool value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__GameEnergyCounter__InitData* value);

  constexpr void __cordl_internal_set__instaFail_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__nextFrameEnergyChange(float_t value);

  constexpr void __cordl_internal_set__noFail_k__BackingField(bool value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  constexpr void __cordl_internal_set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value);

  constexpr void __cordl_internal_set_didInitEvent(::System::Action* value);

  constexpr void __cordl_internal_set_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value);

  constexpr void __cordl_internal_set_gameEnergyDidReach0Event(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b815c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x3b80b00, size 0x9c, virtual true, abstract: false, final true
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method add_gameEnergyDidChangeEvent, addr 0x3b80d70, size 0xb0, virtual true, abstract: false, final true
  inline void add_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_gameEnergyDidReach0Event, addr 0x3b80c38, size 0x9c, virtual true, abstract: false, final true
  inline void add_gameEnergyDidReach0Event(::System::Action* value);

  /// @brief Method get_batteryEnergy, addr 0x3b80ee8, size 0x88, virtual true, abstract: false, final true
  inline int32_t get_batteryEnergy();

  /// @brief Method get_batteryLives, addr 0x3b80f70, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_batteryLives();

  /// @brief Method get_energy, addr 0x3b80ed8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_energy();

  /// @brief Method get_energyType, addr 0x3b80f78, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__GameplayModifiers__EnergyType get_energyType();

  /// @brief Method get_failOnSaberClash, addr 0x3b80fb0, size 0x8, virtual true, abstract: false, final true
  inline bool get_failOnSaberClash();

  /// @brief Method get_instaFail, addr 0x3b80f88, size 0x8, virtual true, abstract: false, final true
  inline bool get_instaFail();

  /// @brief Method get_isInitialized, addr 0x3b80ed0, size 0x8, virtual true, abstract: false, final true
  inline bool get_isInitialized();

  /// @brief Method get_noFail, addr 0x3b80f9c, size 0x8, virtual true, abstract: false, final true
  inline bool get_noFail();

  /// @brief Convert to "::GlobalNamespace::IGameEnergyCounter"
  constexpr ::GlobalNamespace::IGameEnergyCounter* i___GlobalNamespace__IGameEnergyCounter() noexcept;

  /// @brief Method remove_didInitEvent, addr 0x3b80b9c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method remove_gameEnergyDidChangeEvent, addr 0x3b80e20, size 0xb0, virtual true, abstract: false, final true
  inline void remove_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_gameEnergyDidReach0Event, addr 0x3b80cd4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_gameEnergyDidReach0Event(::System::Action* value);

  /// @brief Method set_energy, addr 0x3b80ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_energy(float_t value);

  /// @brief Method set_energyType, addr 0x3b80f80, size 0x8, virtual false, abstract: false, final false
  inline void set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType value);

  /// @brief Method set_failOnSaberClash, addr 0x3b80fb8, size 0xc, virtual false, abstract: false, final false
  inline void set_failOnSaberClash(bool value);

  /// @brief Method set_instaFail, addr 0x3b80f90, size 0xc, virtual false, abstract: false, final false
  inline void set_instaFail(bool value);

  /// @brief Method set_noFail, addr 0x3b80fa4, size 0xc, virtual false, abstract: false, final false
  inline void set_noFail(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameEnergyCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameEnergyCounter(GameEnergyCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameEnergyCounter(GameEnergyCounter const&) = delete;

  /// @brief Field _batteryLives, offset: 0x20, size: 0x4, def value: None
  int32_t ____batteryLives;

  /// @brief Field _initData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__GameEnergyCounter__InitData* ____initData;

  /// @brief Field _beatmapObjectManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field _saberClashChecker, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SaberClashChecker* ____saberClashChecker;

  /// @brief Field didInitEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___didInitEvent;

  /// @brief Field gameEnergyDidReach0Event, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___gameEnergyDidReach0Event;

  /// @brief Field gameEnergyDidChangeEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___gameEnergyDidChangeEvent;

  /// @brief Field <energy>k__BackingField, offset: 0x60, size: 0x4, def value: None
  float_t ____energy_k__BackingField;

  /// @brief Field <energyType>k__BackingField, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::__GameplayModifiers__EnergyType ____energyType_k__BackingField;

  /// @brief Field <instaFail>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____instaFail_k__BackingField;

  /// @brief Field <noFail>k__BackingField, offset: 0x69, size: 0x1, def value: None
  bool ____noFail_k__BackingField;

  /// @brief Field <failOnSaberClash>k__BackingField, offset: 0x6a, size: 0x1, def value: None
  bool ____failOnSaberClash_k__BackingField;

  /// @brief Field _isInitialized, offset: 0x6b, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _didReach0Energy, offset: 0x6c, size: 0x1, def value: None
  bool ____didReach0Energy;

  /// @brief Field _nextFrameEnergyChange, offset: 0x70, size: 0x4, def value: None
  float_t ____nextFrameEnergyChange;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4615 };

  /// @brief Field kBadBurstSliderElementEnergyDrain offset 0xffffffff size 0x4
  static constexpr float_t kBadBurstSliderElementEnergyDrain{ 0.025 };

  /// @brief Field kBadNoteEnergyDrain offset 0xffffffff size 0x4
  static constexpr float_t kBadNoteEnergyDrain{ 0.1 };

  /// @brief Field kGoodBurstSliderElementCharge offset 0xffffffff size 0x4
  static constexpr float_t kGoodBurstSliderElementCharge{ 0.002 };

  /// @brief Field kGoodNoteEnergyCharge offset 0xffffffff size 0x4
  static constexpr float_t kGoodNoteEnergyCharge{ 0.01 };

  /// @brief Field kHitBombEnergyDrain offset 0xffffffff size 0x4
  static constexpr float_t kHitBombEnergyDrain{ 0.15 };

  /// @brief Field kMissBurstSliderElementEnergyDrain offset 0xffffffff size 0x4
  static constexpr float_t kMissBurstSliderElementEnergyDrain{ 0.03 };

  /// @brief Field kMissNoteEnergyDrain offset 0xffffffff size 0x4
  static constexpr float_t kMissNoteEnergyDrain{ 0.15 };

  /// @brief Field kObstacleEnergyDrainPerSecond offset 0xffffffff size 0x4
  static constexpr float_t kObstacleEnergyDrainPerSecond{ 1.3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameEnergyCounter, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____batteryLives) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____initData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____beatmapObjectManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____playerHeadAndObstacleInteraction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____saberClashChecker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ___didInitEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ___gameEnergyDidReach0Event) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ___gameEnergyDidChangeEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____energy_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____energyType_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____instaFail_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____noFail_k__BackingField) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____failOnSaberClash_k__BackingField) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____isInitialized) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____didReach0Energy) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEnergyCounter, ____nextFrameEnergyChange) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyCounter*, "", "GameEnergyCounter");
NEED_NO_BOX(::GlobalNamespace::__GameEnergyCounter__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameEnergyCounter__InitData*, "", "GameEnergyCounter/InitData");
