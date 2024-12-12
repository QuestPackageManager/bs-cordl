#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventsTestGameplayManager)
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class EventsTestGameplayManager_MockBeatToTimeConverter;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass19_0;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass20_0;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestGameplayManager;
}
namespace GlobalNamespace {
class EventsTestGameplayManager_MockBeatToTimeConverter;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass19_0;
}
namespace GlobalNamespace {
class EventsTestGameplayManager___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter);
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0);
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0);
// Dependencies IBeatToTimeConverter, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestGameplayManager/MockBeatToTimeConverter
class CORDL_TYPE EventsTestGameplayManager_MockBeatToTimeConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpm, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__bpm, put = __cordl_internal_set__bpm)) float_t _bpm;

  /// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
  constexpr operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept;

  /// @brief Method ConvertBeatToTime, addr 0x3b9f82c, size 0x18, virtual true, abstract: false, final true
  inline float_t ConvertBeatToTime(float_t beat);

  static inline ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter* New_ctor(float_t bpm);

  constexpr float_t const& __cordl_internal_get__bpm() const;

  constexpr float_t& __cordl_internal_get__bpm();

  constexpr void __cordl_internal_set__bpm(float_t value);

  /// @brief Method .ctor, addr 0x3b9cb9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t bpm);

  /// @brief Convert to "::GlobalNamespace::IBeatToTimeConverter"
  constexpr ::GlobalNamespace::IBeatToTimeConverter* i___GlobalNamespace__IBeatToTimeConverter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager_MockBeatToTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager_MockBeatToTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager_MockBeatToTimeConverter(EventsTestGameplayManager_MockBeatToTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager_MockBeatToTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager_MockBeatToTimeConverter(EventsTestGameplayManager_MockBeatToTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4383 };

  /// @brief Field _bpm, offset: 0x10, size: 0x4, def value: None
  float_t ____bpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter, ____bpm) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestGameplayManager/<>c__DisplayClass18_0
class CORDL_TYPE EventsTestGameplayManager___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightGroupId, put = __cordl_internal_set_lightGroupId)) int32_t lightGroupId;

  static inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0* New_ctor();

  /// @brief Method <AddEventsForLightGroup>b__0, addr 0x3b9f844, size 0x30, virtual false, abstract: false, final false
  inline bool _AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  constexpr int32_t const& __cordl_internal_get_lightGroupId() const;

  constexpr int32_t& __cordl_internal_get_lightGroupId();

  constexpr void __cordl_internal_set_lightGroupId(int32_t value);

  /// @brief Method .ctor, addr 0x3b9f1b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager___c__DisplayClass18_0(EventsTestGameplayManager___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager___c__DisplayClass18_0(EventsTestGameplayManager___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4384 };

  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0, ___lightGroupId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestGameplayManager/<>c__DisplayClass19_0
class CORDL_TYPE EventsTestGameplayManager___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightGroupId, put = __cordl_internal_set_lightGroupId)) int32_t lightGroupId;

  static inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0* New_ctor();

  /// @brief Method <AddInstantToggleEventsForLightGroup>b__0, addr 0x3b9f874, size 0x30, virtual false, abstract: false, final false
  inline bool _AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  constexpr int32_t const& __cordl_internal_get_lightGroupId() const;

  constexpr int32_t& __cordl_internal_get_lightGroupId();

  constexpr void __cordl_internal_set_lightGroupId(int32_t value);

  /// @brief Method .ctor, addr 0x3b9f1b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager___c__DisplayClass19_0(EventsTestGameplayManager___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager___c__DisplayClass19_0(EventsTestGameplayManager___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4385 };

  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0, ___lightGroupId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestGameplayManager/<>c__DisplayClass20_0
class CORDL_TYPE EventsTestGameplayManager___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightGroupId, put = __cordl_internal_set_lightGroupId)) int32_t lightGroupId;

  static inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0* New_ctor();

  /// @brief Method <AddToggleEventsForLightGroup>b__0, addr 0x3b9f8a4, size 0x30, virtual false, abstract: false, final false
  inline bool _AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  constexpr int32_t const& __cordl_internal_get_lightGroupId() const;

  constexpr int32_t& __cordl_internal_get_lightGroupId();

  constexpr void __cordl_internal_set_lightGroupId(int32_t value);

  /// @brief Method .ctor, addr 0x3b9f1c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager___c__DisplayClass20_0(EventsTestGameplayManager___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager___c__DisplayClass20_0(EventsTestGameplayManager___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4386 };

  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0, ___lightGroupId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BasicBeatmapEventType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventsTestGameplayManager
class CORDL_TYPE EventsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MockBeatToTimeConverter = ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter;

  using __c__DisplayClass18_0 = ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0;

  /// @brief Field _audioTimeSource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _basicBeatmapEventType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__basicBeatmapEventType, put = __cordl_internal_set__basicBeatmapEventType)) ::GlobalNamespace::BasicBeatmapEventType _basicBeatmapEventType;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatmapEventDataBoxGroupLists, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventDataBoxGroupLists,
                      put = __cordl_internal_set__beatmapEventDataBoxGroupLists)) ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*>
      _beatmapEventDataBoxGroupLists;

  /// @brief Field _beatmapEventTypeBindings, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapEventTypeBindings,
      put = __cordl_internal_set__beatmapEventTypeBindings)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* _beatmapEventTypeBindings;

  /// @brief Field _beatmapValuesBindings, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapValuesBindings,
                      put = __cordl_internal_set__beatmapValuesBindings)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* _beatmapValuesBindings;

  /// @brief Field _floatValue, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__floatValue, put = __cordl_internal_set__floatValue)) float_t _floatValue;

  /// @brief Field _floatValuesBindings, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValuesBindings,
                      put = __cordl_internal_set__floatValuesBindings)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* _floatValuesBindings;

  /// @brief Field _intBindings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__intBindings, put = __cordl_internal_set__intBindings)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* _intBindings;

  /// @brief Field _moveTime, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__moveTime, put = __cordl_internal_set__moveTime)) bool _moveTime;

  /// @brief Field _rotatingLasers, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__rotatingLasers, put = __cordl_internal_set__rotatingLasers)) bool _rotatingLasers;

  /// @brief Field _spawnTestBox, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnTestBox, put = __cordl_internal_set__spawnTestBox)) bool _spawnTestBox;

  /// @brief Field groupState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_groupState, put = __cordl_internal_set_groupState)) ::ArrayW<bool, ::Array<bool>*> groupState;

  /// @brief Method AddEventsForLightGroup, addr 0x3b9d4a4, size 0x948, virtual false, abstract: false, final false
  inline void AddEventsForLightGroup(int32_t lightGroupId);

  /// @brief Method AddInstantToggleEventsForLightGroup, addr 0x3b9e37c, size 0x460, virtual false, abstract: false, final false
  inline void AddInstantToggleEventsForLightGroup(int32_t lightGroupId);

  /// @brief Method AddTestBox, addr 0x3b9e7dc, size 0x9d4, virtual false, abstract: false, final false
  inline void AddTestBox();

  /// @brief Method AddToggleEventsForLightGroup, addr 0x3b9ddec, size 0x590, virtual false, abstract: false, final false
  inline void AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color);

  static inline ::GlobalNamespace::EventsTestGameplayManager* New_ctor();

  /// @brief Method Start, addr 0x3b9ca5c, size 0x140, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b9cbc4, size 0x8e0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__basicBeatmapEventType() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__basicBeatmapEventType();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const& __cordl_internal_get__beatmapEventDataBoxGroupLists() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*>& __cordl_internal_get__beatmapEventDataBoxGroupLists();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* const& __cordl_internal_get__beatmapEventTypeBindings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*& __cordl_internal_get__beatmapEventTypeBindings();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& __cordl_internal_get__beatmapValuesBindings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& __cordl_internal_get__beatmapValuesBindings();

  constexpr float_t const& __cordl_internal_get__floatValue() const;

  constexpr float_t& __cordl_internal_get__floatValue();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* const& __cordl_internal_get__floatValuesBindings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*& __cordl_internal_get__floatValuesBindings();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& __cordl_internal_get__intBindings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& __cordl_internal_get__intBindings();

  constexpr bool const& __cordl_internal_get__moveTime() const;

  constexpr bool& __cordl_internal_get__moveTime();

  constexpr bool const& __cordl_internal_get__rotatingLasers() const;

  constexpr bool& __cordl_internal_get__rotatingLasers();

  constexpr bool const& __cordl_internal_get__spawnTestBox() const;

  constexpr bool& __cordl_internal_get__spawnTestBox();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_groupState() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_groupState();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set__beatmapEventDataBoxGroupLists(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> value);

  constexpr void __cordl_internal_set__beatmapEventTypeBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* value);

  constexpr void __cordl_internal_set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value);

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* value);

  constexpr void __cordl_internal_set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value);

  constexpr void __cordl_internal_set__moveTime(bool value);

  constexpr void __cordl_internal_set__rotatingLasers(bool value);

  constexpr void __cordl_internal_set__spawnTestBox(bool value);

  constexpr void __cordl_internal_set_groupState(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x3b9f1c8, size 0x664, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager(EventsTestGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager(EventsTestGameplayManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4387 };

  /// @brief Field kNumberOfLightGroups offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfLightGroups{ static_cast<int32_t>(0x14) };

  /// @brief Field _moveTime, offset: 0x20, size: 0x1, def value: None
  bool ____moveTime;

  /// @brief Field _spawnTestBox, offset: 0x21, size: 0x1, def value: None
  bool ____spawnTestBox;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _audioTimeSource, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _basicBeatmapEventType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____basicBeatmapEventType;

  /// @brief Field _floatValue, offset: 0x44, size: 0x4, def value: None
  float_t ____floatValue;

  /// @brief Field _beatmapEventDataBoxGroupLists, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> ____beatmapEventDataBoxGroupLists;

  /// @brief Field groupState, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___groupState;

  /// @brief Field _beatmapEventTypeBindings, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* ____beatmapEventTypeBindings;

  /// @brief Field _intBindings, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* ____intBindings;

  /// @brief Field _beatmapValuesBindings, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* ____beatmapValuesBindings;

  /// @brief Field _floatValuesBindings, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* ____floatValuesBindings;

  /// @brief Field _rotatingLasers, offset: 0x78, size: 0x1, def value: None
  bool ____rotatingLasers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____moveTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____spawnTestBox) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____audioTimeSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____basicBeatmapEventType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____floatValue) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapEventDataBoxGroupLists) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ___groupState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapEventTypeBindings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____intBindings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapValuesBindings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____floatValuesBindings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____rotatingLasers) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*, "", "EventsTestGameplayManager/MockBeatToTimeConverter");
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*, "", "EventsTestGameplayManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*, "", "EventsTestGameplayManager/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*, "", "EventsTestGameplayManager/<>c__DisplayClass20_0");
