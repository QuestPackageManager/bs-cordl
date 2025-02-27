#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBoxGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroup)
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup_ElementData;
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
class IBeatmapLightEventConverter;
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
class BeatmapEventDataBoxGroup_ElementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroup);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataBoxGroup/ElementData
class CORDL_TYPE BeatmapEventDataBoxGroup_ElementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next)) ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* _next;

  /// @brief Field _previous, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previous, put = __cordl_internal_set__previous)) ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* _previous;

  /// @brief Field boxGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_boxGroup, put = __cordl_internal_set_boxGroup)) ::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup;

  /// @brief Field distributionOrderIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_distributionOrderIndex, put = __cordl_internal_set_distributionOrderIndex)) int32_t distributionOrderIndex;

  /// @brief Field durationOrderIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_durationOrderIndex, put = __cordl_internal_set_durationOrderIndex)) int32_t durationOrderIndex;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field eventBox, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBox, put = __cordl_internal_set_eventBox)) ::GlobalNamespace::BeatmapEventDataBox* eventBox;

  /// @brief Field eventBoxSubtypeIdentifier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_eventBoxSubtypeIdentifier, put = __cordl_internal_set_eventBoxSubtypeIdentifier)) int32_t eventBoxSubtypeIdentifier;

  /// @brief Field eventBoxType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventBoxType, put = __cordl_internal_set_eventBoxType)) ::System::Type* eventBoxType;

  __declspec(property(get = get_next)) ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* next;

  __declspec(property(get = get_previous)) ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* previous;

  /// @brief Field startBeat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startBeat, put = __cordl_internal_set_startBeat)) float_t startBeat;

  /// @brief Method ConnectWithNext, addr 0x26c0858, size 0x10, virtual false, abstract: false, final false
  inline void ConnectWithNext(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* nextElementData);

  /// @brief Method ConnectWithPrevious, addr 0x26c0848, size 0x10, virtual false, abstract: false, final false
  inline void ConnectWithPrevious(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* prevElementData);

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* New_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox,
                                                                                  int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method ResetConnections, addr 0x26c0840, size 0x8, virtual false, abstract: false, final false
  inline void ResetConnections();

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* const& __cordl_internal_get__next() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*& __cordl_internal_get__next();

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* const& __cordl_internal_get__previous() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*& __cordl_internal_get__previous();

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup* const& __cordl_internal_get_boxGroup() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup*& __cordl_internal_get_boxGroup();

  constexpr int32_t const& __cordl_internal_get_distributionOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_distributionOrderIndex();

  constexpr int32_t const& __cordl_internal_get_durationOrderIndex() const;

  constexpr int32_t& __cordl_internal_get_durationOrderIndex();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr ::GlobalNamespace::BeatmapEventDataBox* const& __cordl_internal_get_eventBox() const;

  constexpr ::GlobalNamespace::BeatmapEventDataBox*& __cordl_internal_get_eventBox();

  constexpr int32_t const& __cordl_internal_get_eventBoxSubtypeIdentifier() const;

  constexpr int32_t& __cordl_internal_get_eventBoxSubtypeIdentifier();

  constexpr ::System::Type* const& __cordl_internal_get_eventBoxType() const;

  constexpr ::System::Type*& __cordl_internal_get_eventBoxType();

  constexpr float_t const& __cordl_internal_get_startBeat() const;

  constexpr float_t& __cordl_internal_get_startBeat();

  constexpr void __cordl_internal_set__next(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* value);

  constexpr void __cordl_internal_set__previous(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* value);

  constexpr void __cordl_internal_set_boxGroup(::GlobalNamespace::BeatmapEventDataBoxGroup* value);

  constexpr void __cordl_internal_set_distributionOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_durationOrderIndex(int32_t value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_eventBox(::GlobalNamespace::BeatmapEventDataBox* value);

  constexpr void __cordl_internal_set_eventBoxSubtypeIdentifier(int32_t value);

  constexpr void __cordl_internal_set_eventBoxType(::System::Type* value);

  constexpr void __cordl_internal_set_startBeat(float_t value);

  /// @brief Method .ctor, addr 0x26c0228, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox, int32_t elementId, int32_t durationOrderIndex,
                    int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method get_next, addr 0x26c0830, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* get_next();

  /// @brief Method get_previous, addr 0x26c0838, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* get_previous();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroup_ElementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup_ElementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroup_ElementData(BeatmapEventDataBoxGroup_ElementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup_ElementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroup_ElementData(BeatmapEventDataBoxGroup_ElementData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12900 };

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
  ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* ____next;

  /// @brief Field _previous, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData* ____previous;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___startBeat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___elementId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___durationOrderIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___distributionOrderIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___eventBoxType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___eventBoxSubtypeIdentifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___eventBox) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ___boxGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ____next) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, ____previous) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataBoxGroup
class CORDL_TYPE BeatmapEventDataBoxGroup : public ::System::Object {
public:
  // Declarations
  using ElementData = ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData;

  /// @brief Field _beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__beat, put = __cordl_internal_set__beat)) float_t _beat;

  /// @brief Field _beatmapEventDataBoxList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventDataBoxList,
                      put = __cordl_internal_set__beatmapEventDataBoxList)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* _beatmapEventDataBoxList;

  /// @brief Field _elementDataDict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__elementDataDict,
                      put = __cordl_internal_set__elementDataDict)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                                 ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* _elementDataDict;

  /// @brief Field _unpackedBeatmapEventData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__unpackedBeatmapEventData,
                      put = __cordl_internal_set__unpackedBeatmapEventData)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* _unpackedBeatmapEventData;

  __declspec(property(get = get_beatmapEventDataBoxList)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList;

  __declspec(property(get = get_elementDataDict)) ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                        ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* elementDataDict;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept;

  /// @brief Method CompareTo, addr 0x26c0804, size 0x2c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapEventDataBoxGroup* b);

  /// @brief Method GetCopyWithNewBeat, addr 0x26c02b4, size 0x6c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GetCopyWithNewBeat(float_t newBeat);

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* New_ctor(float_t beat,
                                                                      ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method RemoveBeatmapEventDataFromBeatmapData, addr 0x26c0320, size 0x194, virtual false, abstract: false, final false
  inline void RemoveBeatmapEventDataFromBeatmapData(::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method SyncWithBeatmapData, addr 0x26c04b4, size 0x350, virtual false, abstract: false, final false
  inline void SyncWithBeatmapData(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                  ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  constexpr float_t const& __cordl_internal_get__beat() const;

  constexpr float_t& __cordl_internal_get__beat();

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* const& __cordl_internal_get__beatmapEventDataBoxList() const;

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*& __cordl_internal_get__beatmapEventDataBoxList();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* const&
  __cordl_internal_get__elementDataDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>*&
  __cordl_internal_get__elementDataDict();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* const& __cordl_internal_get__unpackedBeatmapEventData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*& __cordl_internal_get__unpackedBeatmapEventData();

  constexpr void __cordl_internal_set__beat(float_t value);

  constexpr void __cordl_internal_set__beatmapEventDataBoxList(::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* value);

  constexpr void __cordl_internal_set__elementDataDict(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* value);

  constexpr void __cordl_internal_set__unpackedBeatmapEventData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* value);

  /// @brief Method .ctor, addr 0x26bfa50, size 0x778, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method get_beatmapEventDataBoxList, addr 0x26bfa48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* get_beatmapEventDataBoxList();

  /// @brief Method get_elementDataDict, addr 0x26bfa40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>*
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12901 };

  /// @brief Field _beat, offset: 0x10, size: 0x4, def value: None
  float_t ____beat;

  /// @brief Field _elementDataDict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*>* ____elementDataDict;

  /// @brief Field _unpackedBeatmapEventData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* ____unpackedBeatmapEventData;

  /// @brief Field _beatmapEventDataBoxList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* ____beatmapEventDataBoxList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____elementDataDict) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____unpackedBeatmapEventData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroup, ____beatmapEventDataBoxList) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroup*, "", "BeatmapEventDataBoxGroup");
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroup_ElementData*, "", "BeatmapEventDataBoxGroup/ElementData");
