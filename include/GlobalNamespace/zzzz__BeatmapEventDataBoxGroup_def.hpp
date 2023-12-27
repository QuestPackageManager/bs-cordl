#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroup)
namespace System {
template <typename T> class IComparable_1;
}
namespace GlobalNamespace {
class __BeatmapEventDataBoxGroup__ElementData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4302))
// CS Name: ::BeatmapEventDataBoxGroup::ElementData*
class CORDL_TYPE __BeatmapEventDataBoxGroup__ElementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field startBeat, offset 0x10, size 0x4
  __declspec(property(get = __get_startBeat, put = __set_startBeat)) float_t startBeat;

  /// @brief Field elementId, offset 0x14, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field durationOrderIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_durationOrderIndex, put = __set_durationOrderIndex)) int32_t durationOrderIndex;

  /// @brief Field distributionOrderIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get_distributionOrderIndex, put = __set_distributionOrderIndex)) int32_t distributionOrderIndex;

  /// @brief Field eventBoxType, offset 0x20, size 0x8
  __declspec(property(get = __get_eventBoxType, put = __set_eventBoxType))::System::Type* eventBoxType;

  /// @brief Field eventBoxSubtypeIdentifier, offset 0x28, size 0x4
  __declspec(property(get = __get_eventBoxSubtypeIdentifier, put = __set_eventBoxSubtypeIdentifier)) int32_t eventBoxSubtypeIdentifier;

  /// @brief Field eventBox, offset 0x30, size 0x8
  __declspec(property(get = __get_eventBox, put = __set_eventBox))::GlobalNamespace::BeatmapEventDataBox* eventBox;

  /// @brief Field boxGroup, offset 0x38, size 0x8
  __declspec(property(get = __get_boxGroup, put = __set_boxGroup))::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup;

  /// @brief Field _next, offset 0x40, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* _next;

  /// @brief Field _previous, offset 0x48, size 0x8
  __declspec(property(get = __get__previous, put = __set__previous))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* _previous;

  __declspec(property(get = get_next))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* next;

  __declspec(property(get = get_previous))::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* previous;

  constexpr float_t& __get_startBeat();

  constexpr float_t const& __get_startBeat() const;

  constexpr void __set_startBeat(float_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr int32_t& __get_durationOrderIndex();

  constexpr int32_t const& __get_durationOrderIndex() const;

  constexpr void __set_durationOrderIndex(int32_t value);

  constexpr int32_t& __get_distributionOrderIndex();

  constexpr int32_t const& __get_distributionOrderIndex() const;

  constexpr void __set_distributionOrderIndex(int32_t value);

  constexpr ::System::Type*& __get_eventBoxType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_eventBoxType() const;

  constexpr void __set_eventBoxType(::System::Type* value);

  constexpr int32_t& __get_eventBoxSubtypeIdentifier();

  constexpr int32_t const& __get_eventBoxSubtypeIdentifier() const;

  constexpr void __set_eventBoxSubtypeIdentifier(int32_t value);

  constexpr ::GlobalNamespace::BeatmapEventDataBox*& __get_eventBox();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBox*> const& __get_eventBox() const;

  constexpr void __set_eventBox(::GlobalNamespace::BeatmapEventDataBox* value);

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroup*& __get_boxGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroup*> const& __get_boxGroup() const;

  constexpr void __set_boxGroup(::GlobalNamespace::BeatmapEventDataBoxGroup* value);

  constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*> const& __get__next() const;

  constexpr void __set__next(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* value);

  constexpr ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*& __get__previous();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*> const& __get__previous() const;

  constexpr void __set__previous(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* value);

  /// @brief Method get_next addr 0x2338ffc size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* get_next();

  /// @brief Method get_previous addr 0x2339004 size 0x8 virtual false final false
  inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* get_previous();

  static inline ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* New_ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox,
                                                                                     int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method .ctor addr 0x2338a48 size 0x8c virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapEventDataBoxGroup* boxGroup, ::GlobalNamespace::BeatmapEventDataBox* eventBox, int32_t elementId, int32_t durationOrderIndex,
                    int32_t distributionOrderIndex, float_t startBeat);

  /// @brief Method ResetConnections addr 0x233900c size 0x8 virtual false final false
  inline void ResetConnections();

  /// @brief Method ConnectWithPrevious addr 0x2339014 size 0x10 virtual false final false
  inline void ConnectWithPrevious(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* prevElementData);

  /// @brief Method ConnectWithNext addr 0x2339024 size 0x10 virtual false final false
  inline void ConnectWithNext(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData* nextElementData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataBoxGroup__ElementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapEventDataBoxGroup__ElementData(__BeatmapEventDataBoxGroup__ElementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapEventDataBoxGroup__ElementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapEventDataBoxGroup__ElementData(__BeatmapEventDataBoxGroup__ElementData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapEventDataBoxGroup__ElementData();

public:
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

} // namespace GlobalNamespace
// Type: ::BeatmapEventDataBoxGroup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4303))
// CS Name: ::BeatmapEventDataBoxGroup*
class CORDL_TYPE BeatmapEventDataBoxGroup : public ::System::Object {
public:
  // Declarations
  using ElementData = ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData;

  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __get_beat, put = __set_beat)) float_t beat;

  /// @brief Field _elementDataDict, offset 0x18, size 0x8
  __declspec(property(get = __get__elementDataDict,
                      put = __set__elementDataDict))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                 ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* _elementDataDict;

  /// @brief Field _unpackedBeatmapEventData, offset 0x20, size 0x8
  __declspec(property(get = __get__unpackedBeatmapEventData,
                      put = __set__unpackedBeatmapEventData))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* _unpackedBeatmapEventData;

  /// @brief Field _beatmapEventDataBoxList, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapEventDataBoxList,
                      put = __set__beatmapEventDataBoxList))::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* _beatmapEventDataBoxList;

  __declspec(property(get = get_elementDataDict))::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>,
                                                                                                       ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* elementDataDict;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept;

  constexpr float_t& __get_beat();

  constexpr float_t const& __get_beat() const;

  constexpr void __set_beat(float_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*&
  __get__elementDataDict();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*> const&
  __get__elementDataDict() const;

  constexpr void
  __set__elementDataDict(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*& __get__unpackedBeatmapEventData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*> const& __get__unpackedBeatmapEventData() const;

  constexpr void __set__unpackedBeatmapEventData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* value);

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*& __get__beatmapEventDataBoxList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>*> const& __get__beatmapEventDataBoxList() const;

  constexpr void __set__beatmapEventDataBoxList(::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* value);

  /// @brief Method get_elementDataDict addr 0x23389d8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<int32_t, ::System::Type*, int32_t>, ::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*>*
  get_elementDataDict();

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroup* New_ctor(float_t beat,
                                                                      ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method .ctor addr 0x23344bc size 0x78c virtual false final false
  inline void _ctor(float_t beat, ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBox*>* beatmapEventDataBoxList);

  /// @brief Method GetCopyWithNewBeat addr 0x2338ad4 size 0x74 virtual false final false
  inline ::GlobalNamespace::BeatmapEventDataBoxGroup* GetCopyWithNewBeat(float_t newBeat);

  /// @brief Method RemoveBeatmapEventDataFromBeatmapData addr 0x2338b48 size 0x190 virtual false final false
  inline void RemoveBeatmapEventDataFromBeatmapData(::GlobalNamespace::BeatmapData* beatmapData);

  /// @brief Method SyncWithBeatmapData addr 0x2338cd8 size 0x2f4 virtual false final false
  inline void SyncWithBeatmapData(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor);

  /// @brief Method CompareTo addr 0x2338fcc size 0x30 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::BeatmapEventDataBoxGroup* b);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroup(BeatmapEventDataBoxGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroup();

public:
  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroup*, "", "BeatmapEventDataBoxGroup");
NEED_NO_BOX(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapEventDataBoxGroup__ElementData*, "", "BeatmapEventDataBoxGroup/ElementData");
