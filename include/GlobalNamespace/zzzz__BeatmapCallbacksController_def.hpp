#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCallbacksController)
namespace GlobalNamespace {
class __BeatmapCallbacksController__ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
class CallbacksInTime;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__InitData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehavior;
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
class __BeatmapCallbacksController__CallCallbacksBehavior;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4704))
// CS Name: ::BeatmapCallbacksController::InitData*
class CORDL_TYPE __BeatmapCallbacksController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapData, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapData, put = __set_beatmapData))::GlobalNamespace::IReadonlyBeatmapData* beatmapData;

  /// @brief Field startFilterTime, offset 0x18, size 0x4
  __declspec(property(get = __get_startFilterTime, put = __set_startFilterTime)) float_t startFilterTime;

  /// @brief Field shouldKeepReplayState, offset 0x1c, size 0x1
  __declspec(property(get = __get_shouldKeepReplayState, put = __set_shouldKeepReplayState)) bool shouldKeepReplayState;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_beatmapData() const;

  constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr float_t& __get_startFilterTime();

  constexpr float_t const& __get_startFilterTime() const;

  constexpr void __set_startFilterTime(float_t value);

  constexpr bool& __get_shouldKeepReplayState();

  constexpr bool const& __get_shouldKeepReplayState() const;

  constexpr void __set_shouldKeepReplayState(bool value);

  static inline ::GlobalNamespace::__BeatmapCallbacksController__InitData* New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState);

  /// @brief Method .ctor, addr 0x237b7f0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float_t startFilterTime, bool shouldKeepReplayState);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCallbacksController__InitData(__BeatmapCallbacksController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCallbacksController__InitData(__BeatmapCallbacksController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapCallbacksController__InitData();

public:
  /// @brief Field beatmapData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___beatmapData;

  /// @brief Field startFilterTime, offset: 0x18, size: 0x4, def value: None
  float_t ___startFilterTime;

  /// @brief Field shouldKeepReplayState, offset: 0x1c, size: 0x1, def value: None
  bool ___shouldKeepReplayState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__InitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapCallbacksController__InitData, ___beatmapData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapCallbacksController__InitData, ___startFilterTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapCallbacksController__InitData, ___shouldKeepReplayState) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ICallCallbacksBehavior
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4705))
// CS Name: ::BeatmapCallbacksController::ICallCallbacksBehavior*
class CORDL_TYPE __BeatmapCallbacksController__ICallCallbacksBehavior {
public:
  // Declarations
  /// @brief Method CallCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method Replay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__ICallCallbacksBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCallbacksController__ICallCallbacksBehavior(__BeatmapCallbacksController__ICallCallbacksBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__ICallCallbacksBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCallbacksController__ICallCallbacksBehavior(__BeatmapCallbacksController__ICallCallbacksBehavior const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::CallCallbacksBehavior
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4706))
// CS Name: ::BeatmapCallbacksController::CallCallbacksBehavior*
class CORDL_TYPE __BeatmapCallbacksController__CallCallbacksBehavior : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
  constexpr operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept;

  /// @brief Method CallCallbacks, addr 0x237b830, size 0x18, virtual true, abstract: false, final true
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method Replay, addr 0x237b848, size 0x4, virtual true, abstract: false, final true
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  static inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior* New_ctor();

  /// @brief Method .ctor, addr 0x2379f08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCallbacksController__CallCallbacksBehavior(__BeatmapCallbacksController__CallCallbacksBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCallbacksController__CallCallbacksBehavior(__BeatmapCallbacksController__CallCallbacksBehavior const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapCallbacksController__CallCallbacksBehavior();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CallCallbacksBehaviorWithLastState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4707))
// CS Name: ::BeatmapCallbacksController::CallCallbacksBehaviorWithLastState*
class CORDL_TYPE __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _replayState, offset 0x10, size 0x8
  __declspec(property(get = __get__replayState,
                      put = __set__replayState))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* _replayState;

  /// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
  constexpr operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*& __get__replayState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>*> const&
  __get__replayState() const;

  constexpr void __set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method CallCallbacks, addr 0x237b84c, size 0xc4, virtual true, abstract: false, final true
  inline void CallCallbacks(::GlobalNamespace::CallbacksInTime* callbacksInTime, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method Replay, addr 0x237b910, size 0x288, virtual true, abstract: false, final true
  inline void Replay(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes);

  static inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState* New_ctor();

  /// @brief Method .ctor, addr 0x2379f10, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState();

public:
  /// @brief Field _replayState, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::GlobalNamespace::BeatmapDataItem*>* ____replayState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState, ____replayState) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapCallbacksController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 62, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4708))
// CS Name: ::BeatmapCallbacksController*
class CORDL_TYPE BeatmapCallbacksController : public ::System::Object {
public:
  // Declarations
  using CallCallbacksBehaviorWithLastState = ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;

  using CallCallbacksBehavior = ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior;

  using ICallCallbacksBehavior = ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior;

  using InitData = ::GlobalNamespace::__BeatmapCallbacksController__InitData;

  /// @brief Field didProcessAllCallbacksThisFrameEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_didProcessAllCallbacksThisFrameEvent, put = __set_didProcessAllCallbacksThisFrameEvent))::System::Action* didProcessAllCallbacksThisFrameEvent;

  /// @brief Field _callbacksInTimes, offset 0x18, size 0x8
  __declspec(property(get = __get__callbacksInTimes, put = __set__callbacksInTimes))::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* _callbacksInTimes;

  /// @brief Field _beatmapData, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _callCallbacksBehavior, offset 0x28, size 0x8
  __declspec(property(get = __get__callCallbacksBehavior, put = __set__callCallbacksBehavior))::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* _callCallbacksBehavior;

  /// @brief Field _startFilterTime, offset 0x30, size 0x4
  __declspec(property(get = __get__startFilterTime, put = __set__startFilterTime)) float_t _startFilterTime;

  /// @brief Field _prevSongTime, offset 0x34, size 0x4
  __declspec(property(get = __get__prevSongTime, put = __set__prevSongTime)) float_t _prevSongTime;

  /// @brief Field _songTime, offset 0x38, size 0x4
  __declspec(property(get = __get__songTime, put = __set__songTime)) float_t _songTime;

  /// @brief Field _sendCallbacksOnBeatmapDataChangeChange, offset 0x3c, size 0x1
  __declspec(property(get = __get__sendCallbacksOnBeatmapDataChangeChange, put = __set__sendCallbacksOnBeatmapDataChangeChange)) bool _sendCallbacksOnBeatmapDataChangeChange;

  /// @brief Field _processingCallbacks, offset 0x3d, size 0x1
  __declspec(property(get = __get__processingCallbacks, put = __set__processingCallbacks)) bool _processingCallbacks;

  __declspec(property(get = get_sendCallbacksOnBeatmapDataChange, put = set_sendCallbacksOnBeatmapDataChange)) bool sendCallbacksOnBeatmapDataChange;

  __declspec(property(get = get_songTime)) float_t songTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Action*& __get_didProcessAllCallbacksThisFrameEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didProcessAllCallbacksThisFrameEvent() const;

  constexpr void __set_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  constexpr ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*& __get__callbacksInTimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>*> const& __get__callbacksInTimes() const;

  constexpr void __set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*& __get__callCallbacksBehavior();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*> const& __get__callCallbacksBehavior() const;

  constexpr void __set__callCallbacksBehavior(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* value);

  constexpr float_t& __get__startFilterTime();

  constexpr float_t const& __get__startFilterTime() const;

  constexpr void __set__startFilterTime(float_t value);

  constexpr float_t& __get__prevSongTime();

  constexpr float_t const& __get__prevSongTime() const;

  constexpr void __set__prevSongTime(float_t value);

  constexpr float_t& __get__songTime();

  constexpr float_t const& __get__songTime() const;

  constexpr void __set__songTime(float_t value);

  constexpr bool& __get__sendCallbacksOnBeatmapDataChangeChange();

  constexpr bool const& __get__sendCallbacksOnBeatmapDataChangeChange() const;

  constexpr void __set__sendCallbacksOnBeatmapDataChangeChange(bool value);

  constexpr bool& __get__processingCallbacks();

  constexpr bool const& __get__processingCallbacks() const;

  constexpr void __set__processingCallbacks(bool value);

  /// @brief Method get_sendCallbacksOnBeatmapDataChange, addr 0x2379a8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_sendCallbacksOnBeatmapDataChange();

  /// @brief Method set_sendCallbacksOnBeatmapDataChange, addr 0x2379a94, size 0xc, virtual false, abstract: false, final false
  inline void set_sendCallbacksOnBeatmapDataChange(bool value);

  /// @brief Method get_songTime, addr 0x2379aa0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_songTime();

  /// @brief Method add_didProcessAllCallbacksThisFrameEvent, addr 0x2379aa8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  /// @brief Method remove_didProcessAllCallbacksThisFrameEvent, addr 0x2379b44, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didProcessAllCallbacksThisFrameEvent(::System::Action* value);

  static inline ::GlobalNamespace::BeatmapCallbacksController* New_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData* initData);

  /// @brief Method .ctor, addr 0x2379be0, size 0x328, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData* initData);

  /// @brief Method Dispose, addr 0x2379f8c, size 0x254, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ReplayState, addr 0x237a1e0, size 0xac, virtual false, abstract: false, final false
  inline void ReplayState();

  /// @brief Method ManualUpdate, addr 0x237a28c, size 0x5e0, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t songTime);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers);

  /// @brief Method AddBeatmapCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback,
                                                                           ::ArrayW<int32_t, ::Array<int32_t>*> beatmapDataSubtypeIdentifiers);

  /// @brief Method RemoveBeatmapCallback, addr 0x237a86c, size 0xc0, virtual false, abstract: false, final false
  inline void RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  /// @brief Method TriggerBeatmapEvent, addr 0x237ab9c, size 0x160, virtual false, abstract: false, final false
  inline void TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  /// @brief Method HandleBeatmapEventDataWasInserted, addr 0x237add0, size 0x5d8, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData* beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);

  /// @brief Method HandleBeatmapEventDataWillBeRemoved, addr 0x237b3a8, size 0x254, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventDataToRemove,
                                                  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToRemove);

  /// @brief Method HandleBeatmapEventDataWasRemoved, addr 0x237b5fc, size 0x1f4, virtual false, abstract: false, final false
  inline void HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventData);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksController(BeatmapCallbacksController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksController(BeatmapCallbacksController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksController();

public:
  /// @brief Field didProcessAllCallbacksThisFrameEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didProcessAllCallbacksThisFrameEvent;

  /// @brief Field _callbacksInTimes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<float_t, ::GlobalNamespace::CallbacksInTime*>* ____callbacksInTimes;

  /// @brief Field _beatmapData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _callCallbacksBehavior, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* ____callCallbacksBehavior;

  /// @brief Field _startFilterTime, offset: 0x30, size: 0x4, def value: None
  float_t ____startFilterTime;

  /// @brief Field _prevSongTime, offset: 0x34, size: 0x4, def value: None
  float_t ____prevSongTime;

  /// @brief Field _songTime, offset: 0x38, size: 0x4, def value: None
  float_t ____songTime;

  /// @brief Field _sendCallbacksOnBeatmapDataChangeChange, offset: 0x3c, size: 0x1, def value: None
  bool ____sendCallbacksOnBeatmapDataChangeChange;

  /// @brief Field _processingCallbacks, offset: 0x3d, size: 0x1, def value: None
  bool ____processingCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ___didProcessAllCallbacksThisFrameEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____callbacksInTimes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____beatmapData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____callCallbacksBehavior) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____startFilterTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____prevSongTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____songTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____sendCallbacksOnBeatmapDataChangeChange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksController, ____processingCallbacks) == 0x3d, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController*, "", "BeatmapCallbacksController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*, "", "BeatmapCallbacksController/CallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*, "", "BeatmapCallbacksController/CallCallbacksBehaviorWithLastState");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*, "", "BeatmapCallbacksController/ICallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__InitData*, "", "BeatmapCallbacksController/InitData");
