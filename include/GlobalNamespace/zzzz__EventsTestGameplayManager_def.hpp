#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventsTestGameplayManager)
namespace GlobalNamespace {
class __EventsTestGameplayManager__MockBeatToTimeConvertor;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass18_0;
}
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestGameplayManager;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager__MockBeatToTimeConvertor;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __EventsTestGameplayManager____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventsTestGameplayManager);
MARK_REF_PTR_T(::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor);
MARK_REF_PTR_T(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0);
MARK_REF_PTR_T(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0);
// Type: ::MockBeatToTimeConvertor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5115))
// CS Name: ::EventsTestGameplayManager::MockBeatToTimeConvertor*
class CORDL_TYPE __EventsTestGameplayManager__MockBeatToTimeConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bpm, offset 0x10, size 0x4
  __declspec(property(get = __get__bpm, put = __set__bpm)) float_t _bpm;

  /// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConvertor"
  constexpr operator ::GlobalNamespace::IBeatToTimeConvertor*() noexcept;

  constexpr float_t& __get__bpm();

  constexpr float_t const& __get__bpm() const;

  constexpr void __set__bpm(float_t value);

  static inline ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor* New_ctor(float_t bpm);

  /// @brief Method .ctor addr 0x227fcb8 size 0x28 virtual false final false
  inline void _ctor(float_t bpm);

  /// @brief Method ConvertBeatToTime addr 0x2282950 size 0x18 virtual true final true
  inline float_t ConvertBeatToTime(float_t beat);

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager__MockBeatToTimeConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventsTestGameplayManager__MockBeatToTimeConvertor(__EventsTestGameplayManager__MockBeatToTimeConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager__MockBeatToTimeConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventsTestGameplayManager__MockBeatToTimeConvertor(__EventsTestGameplayManager__MockBeatToTimeConvertor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventsTestGameplayManager__MockBeatToTimeConvertor();

public:
  /// @brief Field _bpm, offset: 0x10, size: 0x4, def value: None
  float_t ____bpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor, ____bpm) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5116))
// CS Name: ::EventsTestGameplayManager::<>c__DisplayClass18_0*
class CORDL_TYPE __EventsTestGameplayManager____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __get_lightGroupId, put = __set_lightGroupId)) int32_t lightGroupId;

  constexpr int32_t& __get_lightGroupId();

  constexpr int32_t const& __get_lightGroupId() const;

  constexpr void __set_lightGroupId(int32_t value);

  static inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor addr 0x22822dc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AddEventsForLightGroup>b__0 addr 0x2282968 size 0x30 virtual false final false
  inline bool _AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventsTestGameplayManager____c__DisplayClass18_0(__EventsTestGameplayManager____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventsTestGameplayManager____c__DisplayClass18_0(__EventsTestGameplayManager____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventsTestGameplayManager____c__DisplayClass18_0();

public:
  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0, ___lightGroupId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5117))
// CS Name: ::EventsTestGameplayManager::<>c__DisplayClass19_0*
class CORDL_TYPE __EventsTestGameplayManager____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __get_lightGroupId, put = __set_lightGroupId)) int32_t lightGroupId;

  constexpr int32_t& __get_lightGroupId();

  constexpr int32_t const& __get_lightGroupId() const;

  constexpr void __set_lightGroupId(int32_t value);

  static inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0* New_ctor();

  /// @brief Method .ctor addr 0x22822e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AddInstantToggleEventsForLightGroup>b__0 addr 0x2282998 size 0x30 virtual false final false
  inline bool _AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventsTestGameplayManager____c__DisplayClass19_0(__EventsTestGameplayManager____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventsTestGameplayManager____c__DisplayClass19_0(__EventsTestGameplayManager____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventsTestGameplayManager____c__DisplayClass19_0();

public:
  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0, ___lightGroupId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5118))
// CS Name: ::EventsTestGameplayManager::<>c__DisplayClass20_0*
class CORDL_TYPE __EventsTestGameplayManager____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightGroupId, offset 0x10, size 0x4
  __declspec(property(get = __get_lightGroupId, put = __set_lightGroupId)) int32_t lightGroupId;

  constexpr int32_t& __get_lightGroupId();

  constexpr int32_t const& __get_lightGroupId() const;

  constexpr void __set_lightGroupId(int32_t value);

  static inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0* New_ctor();

  /// @brief Method .ctor addr 0x22822ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AddToggleEventsForLightGroup>b__0 addr 0x22829c8 size 0x30 virtual false final false
  inline bool _AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x);

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventsTestGameplayManager____c__DisplayClass20_0(__EventsTestGameplayManager____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventsTestGameplayManager____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventsTestGameplayManager____c__DisplayClass20_0(__EventsTestGameplayManager____c__DisplayClass20_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventsTestGameplayManager____c__DisplayClass20_0();

public:
  /// @brief Field lightGroupId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightGroupId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0, ___lightGroupId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EventsTestGameplayManager
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(14941))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5119))
// CS Name: ::EventsTestGameplayManager*
class CORDL_TYPE EventsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass20_0 = ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0;

  using __c__DisplayClass19_0 = ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0;

  using __c__DisplayClass18_0 = ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0;

  using MockBeatToTimeConvertor = ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor;

  /// @brief Field _moveTime, offset 0x18, size 0x1
  __declspec(property(get = __get__moveTime, put = __set__moveTime)) bool _moveTime;

  /// @brief Field _spawnTestBox, offset 0x19, size 0x1
  __declspec(property(get = __get__spawnTestBox, put = __set__spawnTestBox)) bool _spawnTestBox;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _basicBeatmapEventType, offset 0x38, size 0x4
  __declspec(property(get = __get__basicBeatmapEventType, put = __set__basicBeatmapEventType))::GlobalNamespace::BasicBeatmapEventType _basicBeatmapEventType;

  /// @brief Field _floatValue, offset 0x3c, size 0x4
  __declspec(property(get = __get__floatValue, put = __set__floatValue)) float_t _floatValue;

  /// @brief Field _beatmapEventDataBoxGroupLists, offset 0x40, size 0x8
  __declspec(property(
      get = __get__beatmapEventDataBoxGroupLists,
      put = __set__beatmapEventDataBoxGroupLists))::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> _beatmapEventDataBoxGroupLists;

  /// @brief Field groupState, offset 0x48, size 0x8
  __declspec(property(get = __get_groupState, put = __set_groupState))::ArrayW<bool, ::Array<bool>*> groupState;

  /// @brief Field _beatmapEventTypeBindings, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapEventTypeBindings,
                      put = __set__beatmapEventTypeBindings))::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* _beatmapEventTypeBindings;

  /// @brief Field _intBindings, offset 0x58, size 0x8
  __declspec(property(get = __get__intBindings, put = __set__intBindings))::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* _intBindings;

  /// @brief Field _beatmapValuesBindings, offset 0x60, size 0x8
  __declspec(property(get = __get__beatmapValuesBindings, put = __set__beatmapValuesBindings))::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* _beatmapValuesBindings;

  /// @brief Field _floatValuesBindings, offset 0x68, size 0x8
  __declspec(property(get = __get__floatValuesBindings, put = __set__floatValuesBindings))::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* _floatValuesBindings;

  /// @brief Field _rotatingLasers, offset 0x70, size 0x1
  __declspec(property(get = __get__rotatingLasers, put = __set__rotatingLasers)) bool _rotatingLasers;

  constexpr bool& __get__moveTime();

  constexpr bool const& __get__moveTime() const;

  constexpr void __set__moveTime(bool value);

  constexpr bool& __get__spawnTestBox();

  constexpr bool const& __get__spawnTestBox() const;

  constexpr void __set__spawnTestBox(bool value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__basicBeatmapEventType();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__basicBeatmapEventType() const;

  constexpr void __set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr float_t& __get__floatValue();

  constexpr float_t const& __get__floatValue() const;

  constexpr void __set__floatValue(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*>& __get__beatmapEventDataBoxGroupLists();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const& __get__beatmapEventDataBoxGroupLists() const;

  constexpr void __set__beatmapEventDataBoxGroupLists(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_groupState();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_groupState() const;

  constexpr void __set_groupState(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*& __get__beatmapEventTypeBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*> const&
  __get__beatmapEventTypeBindings() const;

  constexpr void __set__beatmapEventTypeBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& __get__intBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*> const& __get__intBindings() const;

  constexpr void __set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& __get__beatmapValuesBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*> const& __get__beatmapValuesBindings() const;

  constexpr void __set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*& __get__floatValuesBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*> const& __get__floatValuesBindings() const;

  constexpr void __set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* value);

  constexpr bool& __get__rotatingLasers();

  constexpr bool const& __get__rotatingLasers() const;

  constexpr void __set__rotatingLasers(bool value);

  /// @brief Method Start addr 0x227fba0 size 0x118 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x227fce0 size 0x87c virtual false final false
  inline void Update();

  /// @brief Method AddEventsForLightGroup addr 0x228055c size 0x930 virtual false final false
  inline void AddEventsForLightGroup(int32_t lightGroupId);

  /// @brief Method AddInstantToggleEventsForLightGroup addr 0x2281428 size 0x470 virtual false final false
  inline void AddInstantToggleEventsForLightGroup(int32_t lightGroupId);

  /// @brief Method AddToggleEventsForLightGroup addr 0x2280e8c size 0x59c virtual false final false
  inline void AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color);

  /// @brief Method AddTestBox addr 0x2281898 size 0xa44 virtual false final false
  inline void AddTestBox();

  static inline ::GlobalNamespace::EventsTestGameplayManager* New_ctor();

  /// @brief Method .ctor addr 0x22822f4 size 0x65c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventsTestGameplayManager(EventsTestGameplayManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventsTestGameplayManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventsTestGameplayManager(EventsTestGameplayManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventsTestGameplayManager();

public:
  /// @brief Field _moveTime, offset: 0x18, size: 0x1, def value: None
  bool ____moveTime;

  /// @brief Field _spawnTestBox, offset: 0x19, size: 0x1, def value: None
  bool ____spawnTestBox;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _basicBeatmapEventType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____basicBeatmapEventType;

  /// @brief Field _floatValue, offset: 0x3c, size: 0x4, def value: None
  float_t ____floatValue;

  /// @brief Field _beatmapEventDataBoxGroupLists, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> ____beatmapEventDataBoxGroupLists;

  /// @brief Field groupState, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___groupState;

  /// @brief Field _beatmapEventTypeBindings, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* ____beatmapEventTypeBindings;

  /// @brief Field _intBindings, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* ____intBindings;

  /// @brief Field _beatmapValuesBindings, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* ____beatmapValuesBindings;

  /// @brief Field _floatValuesBindings, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* ____floatValuesBindings;

  /// @brief Field _rotatingLasers, offset: 0x70, size: 0x1, def value: None
  bool ____rotatingLasers;

  /// @brief Field kNumberOfLightGroups offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfLightGroups{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventsTestGameplayManager, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____moveTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____spawnTestBox) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____basicBeatmapEventType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____floatValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapEventDataBoxGroupLists) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ___groupState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapEventTypeBindings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____intBindings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____beatmapValuesBindings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____floatValuesBindings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventsTestGameplayManager, ____rotatingLasers) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
NEED_NO_BOX(::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*, "", "EventsTestGameplayManager/MockBeatToTimeConvertor");
NEED_NO_BOX(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*, "", "EventsTestGameplayManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*, "", "EventsTestGameplayManager/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*, "", "EventsTestGameplayManager/<>c__DisplayClass20_0");
