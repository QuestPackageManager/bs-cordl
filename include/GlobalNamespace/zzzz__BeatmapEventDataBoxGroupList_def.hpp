#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupList)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupProcessor;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace GlobalNamespace {
template <typename T, typename TBase> class SortedList_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupList);
// Type: ::BeatmapEventDataBoxGroupList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4306))
// CS Name: ::BeatmapEventDataBoxGroupList*
class CORDL_TYPE BeatmapEventDataBoxGroupList : public ::System::Object {
public:
  // Declarations
  /// @brief Field updateBeatmapDataOnInsert, offset 0x10, size 0x1
  __declspec(property(get = __get_updateBeatmapDataOnInsert, put = __set_updateBeatmapDataOnInsert)) bool updateBeatmapDataOnInsert;

  /// @brief Field _beatmapEventDataBoxGroupProcessor, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapEventDataBoxGroupProcessor,
                      put = __set__beatmapEventDataBoxGroupProcessor))::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* _beatmapEventDataBoxGroupProcessor;

  /// @brief Field _sortedList, offset 0x20, size 0x8
  __declspec(property(get = __get__sortedList,
                      put = __set__sortedList))::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* _sortedList;

  /// @brief Field _groupId, offset 0x28, size 0x4
  __declspec(property(get = __get__groupId, put = __set__groupId)) int32_t _groupId;

  /// @brief Field _beatmapData, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatToTimeConvertor, offset 0x38, size 0x8
  __declspec(property(get = __get__beatToTimeConvertor, put = __set__beatToTimeConvertor))::GlobalNamespace::IBeatToTimeConvertor* _beatToTimeConvertor;

  /// @brief Field _nonSyncedInsertsExist, offset 0x40, size 0x1
  __declspec(property(get = __get__nonSyncedInsertsExist, put = __set__nonSyncedInsertsExist)) bool _nonSyncedInsertsExist;

  /// @brief Field _usedBeatmapEventDataBoxes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__usedBeatmapEventDataBoxes,
                             put = setStaticF__usedBeatmapEventDataBoxes))::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* _usedBeatmapEventDataBoxes;

  constexpr bool& __get_updateBeatmapDataOnInsert();

  constexpr bool const& __get_updateBeatmapDataOnInsert() const;

  constexpr void __set_updateBeatmapDataOnInsert(bool value);

  constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*& __get__beatmapEventDataBoxGroupProcessor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*> const& __get__beatmapEventDataBoxGroupProcessor() const;

  constexpr void __set__beatmapEventDataBoxGroupProcessor(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* value);

  constexpr ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*& __get__sortedList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>*> const&
  __get__sortedList() const;

  constexpr void __set__sortedList(::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* value);

  constexpr int32_t& __get__groupId();

  constexpr int32_t const& __get__groupId() const;

  constexpr void __set__groupId(int32_t value);

  constexpr ::GlobalNamespace::BeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr ::GlobalNamespace::IBeatToTimeConvertor*& __get__beatToTimeConvertor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConvertor*> const& __get__beatToTimeConvertor() const;

  constexpr void __set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor* value);

  constexpr bool& __get__nonSyncedInsertsExist();

  constexpr bool const& __get__nonSyncedInsertsExist() const;

  constexpr void __set__nonSyncedInsertsExist(bool value);

  static inline void setStaticF__usedBeatmapEventDataBoxes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value);

  static inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* getStaticF__usedBeatmapEventDataBoxes();

  /// @brief Method NoDomainReloadInit addr 0x23396a0 size 0x78 virtual false final false
  static inline void NoDomainReloadInit();

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroupList* New_ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor);

  /// @brief Method .ctor addr 0x2339718 size 0xd8 virtual false final false
  inline void _ctor(int32_t groupId, ::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor);

  /// @brief Method Insert addr 0x233986c size 0x3c4 virtual false final false
  inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* Insert(::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup);

  /// @brief Method Remove addr 0x2339c80 size 0x3c8 virtual false final false
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete);

  /// @brief Method SyncWithBeatmapData addr 0x233a048 size 0x178 virtual false final false
  inline void SyncWithBeatmapData();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroupList();

public:
  /// @brief Field updateBeatmapDataOnInsert, offset: 0x10, size: 0x1, def value: None
  bool ___updateBeatmapDataOnInsert;

  /// @brief Field _beatmapEventDataBoxGroupProcessor, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* ____beatmapEventDataBoxGroupProcessor;

  /// @brief Field _sortedList, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*, ::GlobalNamespace::BeatmapEventDataBoxGroup*>* ____sortedList;

  /// @brief Field _groupId, offset: 0x28, size: 0x4, def value: None
  int32_t ____groupId;

  /// @brief Field _beatmapData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _beatToTimeConvertor, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConvertor* ____beatToTimeConvertor;

  /// @brief Field _nonSyncedInsertsExist, offset: 0x40, size: 0x1, def value: None
  bool ____nonSyncedInsertsExist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupList, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupList*, "", "BeatmapEventDataBoxGroupList");
