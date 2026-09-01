#pragma once
// IWYU pragma private; include "GlobalNamespace\CallbacksInTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbacksInTime)
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CallbacksInTime;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CallbacksInTime*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CallbacksInTime*, "", "CallbacksInTime");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CallbacksInTime
class CORDL_TYPE CallbacksInTime : public ::System::Object {
public:
  // Declarations
  /// @brief Field _callbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacks,
                      put =
                          __cordl_internal_set__callbacks)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* _callbacks;

  /// @brief Field _callbacksWithSubtypeIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacksWithSubtypeIdentifier, put = __cordl_internal_set__callbacksWithSubtypeIdentifier)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*>* _callbacksWithSubtypeIdentifier;

  /// @brief Field _hasCallbacks, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__hasCallbacks, put = __cordl_internal_set__hasCallbacks)) bool _hasCallbacks;

  /// @brief Field _hasSubtypeCallbacks, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSubtypeCallbacks, put = __cordl_internal_set__hasSubtypeCallbacks)) bool _hasSubtypeCallbacks;

  /// @brief Field aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_aheadTime, put = __cordl_internal_set_aheadTime)) float_t aheadTime;

  /// @brief Field beatmapEventDataForCallbacksAfterNodeRemoval, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval,
                      put = __cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval)) ::GlobalNamespace::BeatmapEventData* beatmapEventDataForCallbacksAfterNodeRemoval;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Field lastProcessedNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lastProcessedNode,
                      put = __cordl_internal_set_lastProcessedNode)) ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* lastProcessedNode;

  /// @brief Method AddCallback, addr 0x58c4274, size 0x4e4, virtual false, abstract: false, final false
  inline void AddCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  /// @brief Method CallCallbacks, addr 0x58c3a7c, size 0x50, virtual false, abstract: false, final false
  inline void CallCallbacks(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method CallCallbacks, addr 0x58c4b98, size 0x264, virtual false, abstract: false, final false
  inline void CallCallbacks(int32_t typeId, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void EnsureCapacity(::System::Collections::Generic::List_1<T>* list, int32_t index);

  static inline ::GlobalNamespace::CallbacksInTime* New_ctor(float_t aheadTime);

  /// @brief Method RemoveCallback, addr 0x58c4758, size 0x300, virtual false, abstract: false, final false
  inline void RemoveCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  /// @brief Method UpdateHasCallbacks, addr 0x58c4af8, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateHasCallbacks();

  /// @brief Method UpdateHasSubtypeCallbacks, addr 0x58c4a58, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateHasSubtypeCallbacks();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* const& __cordl_internal_get__callbacks() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*& __cordl_internal_get__callbacks();

  constexpr ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*>* const&
  __cordl_internal_get__callbacksWithSubtypeIdentifier() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*>*&
  __cordl_internal_get__callbacksWithSubtypeIdentifier();

  constexpr bool const& __cordl_internal_get__hasCallbacks() const;

  constexpr bool& __cordl_internal_get__hasCallbacks();

  constexpr bool const& __cordl_internal_get__hasSubtypeCallbacks() const;

  constexpr bool& __cordl_internal_get__hasSubtypeCallbacks();

  constexpr float_t const& __cordl_internal_get_aheadTime() const;

  constexpr float_t& __cordl_internal_get_aheadTime();

  constexpr ::GlobalNamespace::BeatmapEventData* const& __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() const;

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval();

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* const& __cordl_internal_get_lastProcessedNode() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get_lastProcessedNode();

  constexpr void __cordl_internal_set__callbacks(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value);

  constexpr void __cordl_internal_set__callbacksWithSubtypeIdentifier(
      ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*>* value);

  constexpr void __cordl_internal_set__hasCallbacks(bool value);

  constexpr void __cordl_internal_set__hasSubtypeCallbacks(bool value);

  constexpr void __cordl_internal_set_aheadTime(float_t value);

  constexpr void __cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set_lastProcessedNode(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method .ctor, addr 0x58c41a8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(float_t aheadTime);

  /// @brief Method get_isEmpty, addr 0x58c4188, size 0x20, virtual false, abstract: false, final false
  inline bool get_isEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbacksInTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbacksInTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbacksInTime(CallbacksInTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbacksInTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbacksInTime(CallbacksInTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5622 };

  /// @brief Field lastProcessedNode, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* ___lastProcessedNode;

  /// @brief Field aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ___aheadTime;

  /// @brief Field beatmapEventDataForCallbacksAfterNodeRemoval, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ___beatmapEventDataForCallbacksAfterNodeRemoval;

  /// @brief Field _callbacksWithSubtypeIdentifier, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*>*
      ____callbacksWithSubtypeIdentifier;

  /// @brief Field _callbacks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* ____callbacks;

  /// @brief Field _hasSubtypeCallbacks, offset: 0x38, size: 0x1, def value: None
  bool ____hasSubtypeCallbacks;

  /// @brief Field _hasCallbacks, offset: 0x39, size: 0x1, def value: None
  bool ____hasCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___lastProcessedNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___beatmapEventDataForCallbacksAfterNodeRemoval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____callbacksWithSubtypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____callbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____hasSubtypeCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____hasCallbacks) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CallbacksInTime) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
