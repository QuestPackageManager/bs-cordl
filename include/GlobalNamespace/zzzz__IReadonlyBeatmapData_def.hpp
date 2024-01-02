#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadonlyBeatmapData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadonlyBeatmapData);
// Type: ::IReadonlyBeatmapData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4260))
// CS Name: ::IReadonlyBeatmapData*
class CORDL_TYPE IReadonlyBeatmapData {
public:
  // Declarations
  __declspec(property(get = get_allBeatmapDataItems))::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* allBeatmapDataItems;

  __declspec(property(get = get_spawnRotationEventsCount)) int32_t spawnRotationEventsCount;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataBasicInfo"
  constexpr operator ::GlobalNamespace::IBeatmapDataBasicInfo*() noexcept;

  /// @brief Method get_allBeatmapDataItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* get_allBeatmapDataItems();

  /// @brief Method GetBeatmapDataItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItems(int32_t subtypeGroupIdentifier);

  /// @brief Method get_spawnRotationEventsCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_spawnRotationEventsCount();

  /// @brief Method add_beatmapEventDataWasInsertedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method remove_beatmapEventDataWasInsertedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method add_beatmapEventDataWillBeRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method remove_beatmapEventDataWillBeRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void
  remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);

  /// @brief Method add_beatmapEventDataWasRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method remove_beatmapEventDataWasRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method GetCopy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapData* GetCopy();

  /// @brief Method GetFilteredCopy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapData* GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem);

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyBeatmapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadonlyBeatmapData(IReadonlyBeatmapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyBeatmapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadonlyBeatmapData(IReadonlyBeatmapData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyBeatmapData*, "", "IReadonlyBeatmapData");
