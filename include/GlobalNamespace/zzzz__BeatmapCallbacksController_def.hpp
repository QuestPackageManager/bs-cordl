#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCallbacksController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCallbacksController)
namespace GlobalNamespace {
class BeatmapCallbacksController_CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_CallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_InitData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class CallbacksInTime;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_CallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapCallbacksController_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCallbacksController/InitData
class CORDL_TYPE BeatmapCallbacksController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapData, put = __cordl_internal_set_beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  /// @brief Field shouldKeepReplayState, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldKeepReplayState, put = __cordl_internal_set_shouldKeepReplayState)) bool shouldKeepReplayState;

  /// @brief Field startFilterTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startFilterTime, put = __cordl_internal_set_startFilterTime)) float_t startFilterTime;

  static inline ::GlobalNamespace::BeatmapCallbacksController_InitData* New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get_beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get_beatmapData();

  constexpr bool const& __cordl_internal_get_shouldKeepReplayState() const;

  constexpr bool& __cordl_internal_get_shouldKeepReplayState();

  constexpr float_t const& __cordl_internal_get_startFilterTime() const;

  constexpr float_t& __cordl_internal_get_startFilterTime();

  constexpr void __cordl_internal_set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set_shouldKeepReplayState(bool value);

  constexpr void __cordl_internal_set_startFilterTime(float_t value);

  /// @brief Method .ctor, addr 0x57181b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksController_InitData(BeatmapCallbacksController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController_InitData(BeatmapCallbacksController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5620 };

  /// @brief Field beatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  /// @brief Field startFilterTime, offset: 0x18, size: 0x4, def value: None
  float_t ___startFilterTime;

  /// @brief Field shouldKeepReplayState, offset: 0x1c, size: 0x1, def value: None
  bool ___shouldKeepReplayState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController_InitData, ___beatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController_InitData, ___startFilterTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController_InitData, ___shouldKeepReplayState) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCallbacksController/ICallCallbacksBehavior
class CORDL_TYPE BeatmapCallbacksController_ICallCallbacksBehavior {
public:
  // Declarations
  /// @brief Method CallCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method Replay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_ICallCallbacksBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController_ICallCallbacksBehavior(BeatmapCallbacksController_ICallCallbacksBehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCallbacksController/CallCallbacksBehavior
class CORDL_TYPE BeatmapCallbacksController_CallCallbacksBehavior : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
  constexpr operator ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*() noexcept;

  /// @brief Method CallCallbacks, addr 0x57181c8, size 0x18, virtual true, abstract: false, final true
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  static inline ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior* New_ctor();

  /// @brief Method Replay, addr 0x571827c, size 0x4, virtual true, abstract: false, final true
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  /// @brief Method .ctor, addr 0x5718280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
  constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* i___GlobalNamespace__BeatmapCallbacksController_ICallCallbacksBehavior() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksController_CallCallbacksBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_CallCallbacksBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksController_CallCallbacksBehavior(BeatmapCallbacksController_CallCallbacksBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_CallCallbacksBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController_CallCallbacksBehavior(BeatmapCallbacksController_CallCallbacksBehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5622 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCallbacksController/CallCallbacksBehaviorWithLastState
class CORDL_TYPE BeatmapCallbacksController_CallCallbacksBehaviorWithLastState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _replayState, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__replayState,
      put = __cordl_internal_set__replayState)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* _replayState;

  /// @brief Convert operator to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
  constexpr operator ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*() noexcept;

  /// @brief Method CallCallbacks, addr 0x5718284, size 0xb8, virtual true, abstract: false, final true
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  static inline ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState* New_ctor();

  /// @brief Method Replay, addr 0x571833c, size 0x2b8, virtual true, abstract: false, final true
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get__replayState() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get__replayState();

  constexpr void __cordl_internal_set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method .ctor, addr 0x57185f4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior"
  constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* i___GlobalNamespace__BeatmapCallbacksController_ICallCallbacksBehavior() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksController_CallCallbacksBehaviorWithLastState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_CallCallbacksBehaviorWithLastState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksController_CallCallbacksBehaviorWithLastState(BeatmapCallbacksController_CallCallbacksBehaviorWithLastState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController_CallCallbacksBehaviorWithLastState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController_CallCallbacksBehaviorWithLastState(BeatmapCallbacksController_CallCallbacksBehaviorWithLastState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5623 };

  /// @brief Field _replayState, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* ____replayState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState, ____replayState) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCallbacksController
class CORDL_TYPE BeatmapCallbacksController : public ::System::Object {
public:
  // Declarations
  using CallCallbacksBehavior = ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior;

  using CallCallbacksBehaviorWithLastState = ::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState;

  using ICallCallbacksBehavior = ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior;

  using InitData = ::GlobalNamespace::BeatmapCallbacksController_InitData;

  /// @brief Field _beatmapData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _callCallbacksBehavior, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__callCallbacksBehavior,
                      put = __cordl_internal_set__callCallbacksBehavior)) ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* _callCallbacksBehavior;

  /// @brief Field _callbacksInTimes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacksInTimes,
                      put = __cordl_internal_set__callbacksInTimes)) ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* _callbacksInTimes;

  /// @brief Field _prevSongTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSongTime, put = __cordl_internal_set__prevSongTime)) float_t _prevSongTime;

  /// @brief Field _processingCallbacks, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__processingCallbacks, put = __cordl_internal_set__processingCallbacks)) bool _processingCallbacks;

  /// @brief Field _sendCallbacksOnBeatmapDataChangeChange, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange,
                      put = __cordl_internal_set__sendCallbacksOnBeatmapDataChangeChange)) bool _sendCallbacksOnBeatmapDataChangeChange;

  /// @brief Field _songTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__songTime, put = __cordl_internal_set__songTime)) float_t _songTime;

  /// @brief Field _startFilterTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startFilterTime, put = __cordl_internal_set__startFilterTime)) float_t _startFilterTime;

  /// @brief Field didProcessAllCallbacksThisFrameEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didProcessAllCallbacksThisFrameEvent,
                      put = __cordl_internal_set_didProcessAllCallbacksThisFrameEvent)) ::System::Action* didProcessAllCallbacksThisFrameEvent;

  __declspec(property(get = get_sendCallbacksOnBeatmapDataChange, put = set_sendCallbacksOnBeatmapDataChange)) bool sendCallbacksOnBeatmapDataChange;

  __declspec(property(get = get_songTime)) float_t songTime;

  /// @brief Field willStartProcessingCallbacksThisFrameEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_willStartProcessingCallbacksThisFrameEvent,
                      put = __cordl_internal_set_willStartProcessingCallbacksThisFrameEvent)) ::System::Action_1<float_t>* willStartProcessingCallbacksThisFrameEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                           ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers);

  /// @brief Method Dispose, addr 0x57169b4, size 0x260, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleBeatmapEventDataWasInserted, addr 0x5717580, size 0x6bc, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData* beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  /// @brief Method HandleBeatmapEventDataWasRemoved, addr 0x5717f34, size 0x284, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method HandleBeatmapEventDataWillBeRemoved, addr 0x5717c3c, size 0x2f8, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventDataToRemove,
                                                  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToRemove);

  /// @brief Method ManualUpdate, addr 0x5716cc4, size 0x780, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t songTime);

  static inline ::GlobalNamespace::BeatmapCallbacksController* New_ctor(::GlobalNamespace::BeatmapCallbacksController_InitData* initData);

  /// @brief Method RemoveBeatmapCallback, addr 0x5713f8c, size 0xf4, virtual false, abstract: false, final false
  inline void RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  /// @brief Method ReplayState, addr 0x5716c14, size 0xb0, virtual false, abstract: false, final false
  inline void ReplayState();

  /// @brief Method TriggerBeatmapEvent, addr 0x5717444, size 0x13c, virtual false, abstract: false, final false
  inline void TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* const& __cordl_internal_get__callCallbacksBehavior() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*& __cordl_internal_get__callCallbacksBehavior();

  constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* const& __cordl_internal_get__callbacksInTimes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*& __cordl_internal_get__callbacksInTimes();

  constexpr float_t const& __cordl_internal_get__prevSongTime() const;

  constexpr float_t& __cordl_internal_get__prevSongTime();

  constexpr bool const& __cordl_internal_get__processingCallbacks() const;

  constexpr bool& __cordl_internal_get__processingCallbacks();

  constexpr bool const& __cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange() const;

  constexpr bool& __cordl_internal_get__sendCallbacksOnBeatmapDataChangeChange();

  constexpr float_t const& __cordl_internal_get__songTime() const;

  constexpr float_t& __cordl_internal_get__songTime();

  constexpr float_t const& __cordl_internal_get__startFilterTime() const;

  constexpr float_t& __cordl_internal_get__startFilterTime();

  constexpr ::System::Action* const& __cordl_internal_get_didProcessAllCallbacksThisFrameEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didProcessAllCallbacksThisFrameEvent();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_willStartProcessingCallbacksThisFrameEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_willStartProcessingCallbacksThisFrameEvent();

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__callCallbacksBehavior(::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* value);

  constexpr void __cordl_internal_set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* value);

  constexpr void __cordl_internal_set__prevSongTime(float_t value);

  constexpr void __cordl_internal_set__processingCallbacks(bool value);

  constexpr void __cordl_internal_set__sendCallbacksOnBeatmapDataChangeChange(bool value);

  constexpr void __cordl_internal_set__songTime(float_t value);

  constexpr void __cordl_internal_set__startFilterTime(float_t value);

  constexpr void __cordl_internal_set_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  constexpr void __cordl_internal_set_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x571666c, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCallbacksController_InitData* initData);

  /// @brief Method add_didProcessAllCallbacksThisFrameEvent, addr 0x5716514, size 0xac, virtual false, abstract: false, final false
  inline void add_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  /// @brief Method add_willStartProcessingCallbacksThisFrameEvent, addr 0x5716394, size 0xc0, virtual false, abstract: false, final false
  inline void add_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_sendCallbacksOnBeatmapDataChange, addr 0x571637c, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendCallbacksOnBeatmapDataChange();

  /// @brief Method get_songTime, addr 0x571638c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTime();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_didProcessAllCallbacksThisFrameEvent, addr 0x57165c0, size 0xac, virtual false, abstract: false, final false
  inline void remove_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  /// @brief Method remove_willStartProcessingCallbacksThisFrameEvent, addr 0x5716454, size 0xc0, virtual false, abstract: false, final false
  inline void remove_willStartProcessingCallbacksThisFrameEvent(::System::Action_1<float_t>* value);

  /// @brief Method set_sendCallbacksOnBeatmapDataChange, addr 0x5716384, size 0x8, virtual false, abstract: false, final false
  inline void set_sendCallbacksOnBeatmapDataChange(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksController(BeatmapCallbacksController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController(BeatmapCallbacksController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5624 };

  /// @brief Field willStartProcessingCallbacksThisFrameEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___willStartProcessingCallbacksThisFrameEvent;

  /// @brief Field didProcessAllCallbacksThisFrameEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didProcessAllCallbacksThisFrameEvent;

  /// @brief Field _callbacksInTimes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* ____callbacksInTimes;

  /// @brief Field _beatmapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _callCallbacksBehavior, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior* ____callCallbacksBehavior;

  /// @brief Field _startFilterTime, offset: 0x38, size: 0x4, def value: None
  float_t ____startFilterTime;

  /// @brief Field _prevSongTime, offset: 0x3c, size: 0x4, def value: None
  float_t ____prevSongTime;

  /// @brief Field _songTime, offset: 0x40, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _sendCallbacksOnBeatmapDataChangeChange, offset: 0x44, size: 0x1, def value: None
  bool ____sendCallbacksOnBeatmapDataChangeChange;

  /// @brief Field _processingCallbacks, offset: 0x45, size: 0x1, def value: None
  bool ____processingCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ___willStartProcessingCallbacksThisFrameEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ___didProcessAllCallbacksThisFrameEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____callbacksInTimes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____beatmapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____callCallbacksBehavior) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____startFilterTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____prevSongTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____songTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____sendCallbacksOnBeatmapDataChangeChange) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____processingCallbacks) == 0x45, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController*, "", "BeatmapCallbacksController");
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehavior*, "", "BeatmapCallbacksController/CallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController_CallCallbacksBehaviorWithLastState*, "", "BeatmapCallbacksController/CallCallbacksBehaviorWithLastState");
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController_ICallCallbacksBehavior*, "", "BeatmapCallbacksController/ICallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController_InitData*, "", "BeatmapCallbacksController/InitData");
