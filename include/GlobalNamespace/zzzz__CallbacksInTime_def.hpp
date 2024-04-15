#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CallbacksInTime;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CallbacksInTime);
// Type: ::CallbacksInTime
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CallbacksInTime*
class CORDL_TYPE CallbacksInTime : public ::System::Object {
public:
  // Declarations
  /// @brief Field _callbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacks, put = __cordl_internal_set__callbacks))::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* _callbacks;

  /// @brief Field _callbacksWithSubtypeIdentifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacksWithSubtypeIdentifier, put = __cordl_internal_set__callbacksWithSubtypeIdentifier))::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* _callbacksWithSubtypeIdentifier;

  /// @brief Field aheadTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_aheadTime, put = __cordl_internal_set_aheadTime)) float_t aheadTime;

  /// @brief Field beatmapEventDataForCallbacksAfterNodeRemoval, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval,
                      put = __cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval))::GlobalNamespace::BeatmapEventData* beatmapEventDataForCallbacksAfterNodeRemoval;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Field lastProcessedNode, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lastProcessedNode,
                      put = __cordl_internal_set_lastProcessedNode))::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* lastProcessedNode;

  /// @brief Method AddCallback, addr 0x251ba60, size 0x308, virtual false, abstract: false, final false
  inline void AddCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  /// @brief Method CallCallbacks, addr 0x251a930, size 0xd4, virtual false, abstract: false, final false
  inline void CallCallbacks(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  /// @brief Method CallCallbacks, addr 0x251bd68, size 0x2cc, virtual false, abstract: false, final false
  inline void CallCallbacks(::System::Type* beatmapEventDataType, ::GlobalNamespace::BeatmapDataItem* beatmapDataItem);

  static inline ::GlobalNamespace::CallbacksInTime* New_ctor(float_t aheadTime);

  /// @brief Method RemoveCallback, addr 0x251a560, size 0x1e4, virtual false, abstract: false, final false
  inline void RemoveCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*& __cordl_internal_get__callbacks();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*> const&
  __cordl_internal_get__callbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*&
  __cordl_internal_get__callbacksWithSubtypeIdentifier();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*> const&
  __cordl_internal_get__callbacksWithSubtypeIdentifier() const;

  constexpr float_t const& __cordl_internal_get_aheadTime() const;

  constexpr float_t& __cordl_internal_get_aheadTime();

  constexpr ::GlobalNamespace::BeatmapEventData*& __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventData*> const& __cordl_internal_get_beatmapEventDataForCallbacksAfterNodeRemoval() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*& __cordl_internal_get_lastProcessedNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*> const& __cordl_internal_get_lastProcessedNode() const;

  constexpr void
  __cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value);

  constexpr void __cordl_internal_set__callbacksWithSubtypeIdentifier(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* value);

  constexpr void __cordl_internal_set_aheadTime(float_t value);

  constexpr void __cordl_internal_set_beatmapEventDataForCallbacksAfterNodeRemoval(::GlobalNamespace::BeatmapEventData* value);

  constexpr void __cordl_internal_set_lastProcessedNode(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* value);

  /// @brief Method .ctor, addr 0x251b98c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(float_t aheadTime);

  /// @brief Method get_isEmpty, addr 0x251a744, size 0x8c, virtual false, abstract: false, final false
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

  /// @brief Field lastProcessedNode, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* ___lastProcessedNode;

  /// @brief Field aheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ___aheadTime;

  /// @brief Field beatmapEventDataForCallbacksAfterNodeRemoval, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventData* ___beatmapEventDataForCallbacksAfterNodeRemoval;

  /// @brief Field _callbacksWithSubtypeIdentifier, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>*
      ____callbacksWithSubtypeIdentifier;

  /// @brief Field _callbacks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>* ____callbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CallbacksInTime, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___lastProcessedNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___aheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ___beatmapEventDataForCallbacksAfterNodeRemoval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____callbacksWithSubtypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CallbacksInTime, ____callbacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CallbacksInTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CallbacksInTime*, "", "CallbacksInTime");
