#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBoxGroupLists.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupLists)
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
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
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupLists;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupLists);
// Type: ::BeatmapEventDataBoxGroupLists
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEventDataBoxGroupLists*
class CORDL_TYPE BeatmapEventDataBoxGroupLists : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatToTimeConverter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatToTimeConverter, put = __cordl_internal_set__beatToTimeConverter)) ::GlobalNamespace::IBeatToTimeConverter* _beatToTimeConverter;

  /// @brief Field _beatmapData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData)) ::GlobalNamespace::BeatmapData* _beatmapData;

  /// @brief Field _beatmapEventDataBoxGroupListDict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEventDataBoxGroupListDict,
                      put = __cordl_internal_set__beatmapEventDataBoxGroupListDict)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*
      _beatmapEventDataBoxGroupListDict;

  /// @brief Field _lightEventConverter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightEventConverter, put = __cordl_internal_set__lightEventConverter)) ::GlobalNamespace::IBeatmapLightEventConverter* _lightEventConverter;

  /// @brief Field _updateBeatmapDataOnInsert, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__updateBeatmapDataOnInsert, put = __cordl_internal_set__updateBeatmapDataOnInsert)) bool _updateBeatmapDataOnInsert;

  /// @brief Method Insert, addr 0x267a300, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* Insert(int32_t groupId, ::GlobalNamespace::BeatmapEventDataBoxGroup* beatmapEventDataBoxGroup);

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroupLists* New_ctor(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                           bool updateBeatmapDataOnInsert, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

  /// @brief Method Remove, addr 0x267a40c, size 0xb8, virtual false, abstract: false, final false
  inline void Remove(int32_t groupId, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete);

  /// @brief Method SyncWithBeatmapData, addr 0x267a65c, size 0x18c, virtual false, abstract: false, final false
  inline void SyncWithBeatmapData();

  /// @brief Method ToggleUpdateBeatmapDataOnInsert, addr 0x267a4c4, size 0x198, virtual false, abstract: false, final false
  inline void ToggleUpdateBeatmapDataOnInsert(bool enableUpdateOnInsert);

  constexpr ::GlobalNamespace::IBeatToTimeConverter*& __cordl_internal_get__beatToTimeConverter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConverter*> const& __cordl_internal_get__beatToTimeConverter() const;

  constexpr ::GlobalNamespace::BeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*& __cordl_internal_get__beatmapEventDataBoxGroupListDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const&
  __cordl_internal_get__beatmapEventDataBoxGroupListDict() const;

  constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& __cordl_internal_get__lightEventConverter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLightEventConverter*> const& __cordl_internal_get__lightEventConverter() const;

  constexpr bool const& __cordl_internal_get__updateBeatmapDataOnInsert() const;

  constexpr bool& __cordl_internal_get__updateBeatmapDataOnInsert();

  constexpr void __cordl_internal_set__beatToTimeConverter(::GlobalNamespace::IBeatToTimeConverter* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value);

  constexpr void __cordl_internal_set__beatmapEventDataBoxGroupListDict(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>* value);

  constexpr void __cordl_internal_set__lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value);

  constexpr void __cordl_internal_set__updateBeatmapDataOnInsert(bool value);

  /// @brief Method .ctor, addr 0x267a250, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter, bool updateBeatmapDataOnInsert,
                    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroupLists();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupLists", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroupLists(BeatmapEventDataBoxGroupLists const&) = delete;

  /// @brief Field _beatmapEventDataBoxGroupListDict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroupList*>* ____beatmapEventDataBoxGroupListDict;

  /// @brief Field _beatmapData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapData* ____beatmapData;

  /// @brief Field _beatToTimeConverter, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatToTimeConverter* ____beatToTimeConverter;

  /// @brief Field _updateBeatmapDataOnInsert, offset: 0x28, size: 0x1, def value: None
  bool ____updateBeatmapDataOnInsert;

  /// @brief Field _lightEventConverter, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLightEventConverter* ____lightEventConverter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupLists, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupLists, ____beatmapEventDataBoxGroupListDict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupLists, ____beatmapData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupLists, ____beatToTimeConverter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupLists, ____updateBeatmapDataOnInsert) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupLists, ____lightEventConverter) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupLists);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupLists*, "", "BeatmapEventDataBoxGroupLists");
