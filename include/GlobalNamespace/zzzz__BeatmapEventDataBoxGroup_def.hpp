#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroup)
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
namespace GlobalNamespace {
class __BeatmapEventDataBoxGroup__ElementData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class __BeatmapEventDataBoxGroup__ElementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroup);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData);
// Type: ::ElementData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEventDataBoxGroup::ElementData*
class CORDL_TYPE __BeatmapEventDataBoxGroup__ElementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* _next;

  /// @brief Field _previous, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previous, put = __cordl_internal_set__previous))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* _previous;

  /// @brief Field boxGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_boxGroup, put = __cordl_internal_set_boxGroup))::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup;

  /// @brief Field distributionOrderIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_distributionOrderIndex, put = __cordl_internal_set_distributionOrderIndex)) int32_t distributionOrderIndex;

  /// @brief Field durationOrderIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_durationOrderIndex, put = __cordl_internal_set_durationOrderIndex)) int32_t durationOrderIndex;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field eventBox, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBox, put = __cordl_internal_set_eventBox))::GlobalNamespace::BeatmapEventDataBox* eventBox;

  /// @brief Field eventBoxSubtypeIdentifier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_eventBoxSubtypeIdentifier, put = __cordl_internal_set_eventBoxSubtypeIdentifier)) int32_t eventBoxSubtypeIdentifier;

  /// @brief Field eventBoxType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBoxType, put = __cordl_internal_set_eventBoxType))::System::Type* eventBoxType;

  __declspec(property(get = get_next))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* next;

  __declspec(property(get = get_previous))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* previous;

  /// @brief Field startBeat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startBeat, put = __cordl_internal_set_startBeat)) float_t startBeat;

  /// @brief Method ConnectWithNext, addr 0x13bc340, size 0x10, virtual false, abstract: false, final false
  inline void ConnectWithNext(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* nextElementData);

  /// @brief Method ConnectWithPrevious, addr 0x13bc330, size 0x10, virtual false, abstract: false, final false
  inline void ConnectWithPrevious(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* prevElementData);

  static inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* New_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox,
                                                                                     int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method ResetConnections, addr 0x13bc328, size 0x8, virtual false, abstract: false, final false
  inline void ResetConnections();

  constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*> const& __cordl_internal_get__next() const;

  constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*& __cordl_internal_get__previous();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*> const& __cordl_internal_get__previous() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup*& __cordl_internal_get_boxGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroup*> const& __cordl_internal_get_boxGroup() const;

  constexpr int32_t const& __cordl_internal_get_distributionOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_distributionOrderIndex();

  constexpr int32_t const& __cordl_internal_get_durationOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_durationOrderIndex();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr ::GlobalNamespace::BeatmapEventDataBox*& __cordl_internal_get_eventBox();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBox*> const& __cordl_internal_get_eventBox() const;

  constexpr int32_t const& __cordl_internal_get_eventBoxSubtypeIdentifier() const;

  constexpr int32_t& __cordl_internal_get_eventBoxSubtypeIdentifier();

  constexpr ::System::Type*& __cordl_internal_get_eventBoxType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_eventBoxType() const;

  constexpr float_t const& __cordl_internal_get_startBeat() const;

  constexpr float_t& __cordl_internal_get_startBeat();

  constexpr void __cordl_internal_set__next(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* value);

  constexpr void __cordl_internal_set__previous(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* value);

  constexpr void __cordl_internal_set_boxGroup(::GlobalNamespace::BeatmapEventDataBoxGroup* value);

  constexpr void __cordl_internal_set_distributionOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_durationOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_eventBox(::GlobalNamespace::BeatmapEventDataBox* value);

  constexpr void __cordl_internal_set_eventBoxSubtypeIdentifier(int32_t value);

  constexpr void __cordl_internal_set_eventBoxType(::System::Type* value);

  constexpr void __cordl_internal_set_startBeat(float_t value);

  /// @brief Method .ctor, addr 0x13bbd1c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox, int32_t elementId, int32_t durationOrderIndex,
                    int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method get_next, addr 0x13bc318, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* get_next();

  /// @brief Method get_previous, addr 0x13bc320, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* get_previous();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapEventDataBoxGroup__ElementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataBoxGroup__ElementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapEventDataBoxGroup__ElementData(__BeatmapEventDataBoxGroup__ElementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataBoxGroup__ElementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapEventDataBoxGroup__ElementData(__BeatmapEventDataBoxGroup__ElementData const&) = delete;

  /// @brief Field startBeat, offset: 0x10, size: 0x4, def value: None
  float_t ___startBeat;

  /// @brief Field elementId, offset: 0x14, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field durationOrderIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___durationOrderIndex;

  /// @brief Field distributionOrderIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___distributionOrderIndex;

  /// @brief Field eventBoxType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___eventBoxType;

  /// @brief Field eventBoxSubtypeIdentifier, offset: 0x28, size: 0x4, def value: None
  int32_t ___eventBoxSubtypeIdentifier;

  /// @brief Field eventBox, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventDataBox* ___eventBox;

  /// @brief Field boxGroup, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventDataBoxGroup* ___boxGroup;

  /// @brief Field _next, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* ____next;

  /// @brief Field _previous, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* ____previous;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___startBeat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___durationOrderIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___distributionOrderIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___eventBoxType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___eventBoxSubtypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___eventBox) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ___boxGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ____next) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData, ____previous) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataBoxGroup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEventDataBoxGroup*
class CORDL_TYPE BeatmapEventDataBoxGroup : public ::System::Object {
public:
  // Declarations
  using ElementData = ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData;

  /// @brief Field _beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__beat, put = __cordl_internal_set__beat)) float_t _beat;

  /// @brief Field _beatmapEventDataBoxList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventDataBoxList,
                      put = __cordl_internal_set__beatmapEventDataBoxList))::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* _beatmapEventDataBoxList;

  /// @brief Field _elementDataDict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__elementDataDict,
                      put = __cordl_internal_set__elementDataDict))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                                ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* _elementDataDict;

  /// @brief Field _unpackedBeatmapEventData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__unpackedBeatmapEventData,
                      put = __cordl_internal_set__unpackedBeatmapEventData))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* _unpackedBeatmapEventData;

  __declspec(property(get = get_elementDataDict))::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                       ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* elementDataDict;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept;

  /// @brief Method CompareTo, addr 0x13bc2ec, size 0x2c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapEventDataBoxGroup* b);

  /// @brief Method GetCopyWithNewBeat, addr 0x13bbda8, size 0x74, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GetCopyWithNewBeat(float_t newBeat);

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* New_ctor(float_t beat,
                                                                      ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method RemoveBeatmapEventDataFromBeatmapData, addr 0x13bbe1c, size 0x190, virtual false, abstract: false, final false
  inline void RemoveBeatmapEventDataFromBeatmapData(::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method SyncWithBeatmapData, addr 0x13bbfac, size 0x340, virtual false, abstract: false, final false
  inline void SyncWithBeatmapData(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter);

  constexpr float_t const& __cordl_internal_get__beat() const;

  constexpr float_t& __cordl_internal_get__beat();

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*& __cordl_internal_get__beatmapEventDataBoxList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*> const&
  __cordl_internal_get__beatmapEventDataBoxList() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*&
  __cordl_internal_get__elementDataDict();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*> const&
  __cordl_internal_get__elementDataDict() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get__unpackedBeatmapEventData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*> const& __cordl_internal_get__unpackedBeatmapEventData() const;

  constexpr void __cordl_internal_set__beat(float_t value);

  constexpr void __cordl_internal_set__beatmapEventDataBoxList(::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* value);

  constexpr void __cordl_internal_set__elementDataDict(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* value);

  constexpr void __cordl_internal_set__unpackedBeatmapEventData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method .ctor, addr 0x13bb528, size 0x78c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method get_elementDataDict, addr 0x13bb520, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*
  get_elementDataDict();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* i___System__IComparable_1___GlobalNamespace__BeatmapEventDataBoxGroup__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup const&) = delete;

  /// @brief Field _beat, offset: 0x10, size: 0x4, def value: None
  float_t ____beat;

  /// @brief Field _elementDataDict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* ____elementDataDict;

  /// @brief Field _unpackedBeatmapEventData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* ____unpackedBeatmapEventData;

  /// @brief Field _beatmapEventDataBoxList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* ____beatmapEventDataBoxList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____elementDataDict) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____unpackedBeatmapEventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____beatmapEventDataBoxList) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroup*, "", "BeatmapEventDataBoxGroup");
NEED_NO_BOX(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*, "", "BeatmapEventDataBoxGroup/ElementData");
