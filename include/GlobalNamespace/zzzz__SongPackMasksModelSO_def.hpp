#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModelSO)
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class SongPackMasksModelItem;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMasksModelSO);
// Type: ::SongPackMasksModelSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4522))
// CS Name: ::SongPackMasksModelSO*
class CORDL_TYPE SongPackMasksModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _defaultSongPackMaskItems, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultSongPackMaskItems, put = __set__defaultSongPackMaskItems))::System::Collections::Generic::List_1<::StringW>* _defaultSongPackMaskItems;

  /// @brief Field _customSongPackMaskItems, offset 0x20, size 0x8
  __declspec(property(get = __get__customSongPackMaskItems,
                      put = __set__customSongPackMaskItems))::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> _customSongPackMaskItems;

  /// @brief Field _ostAndExtrasCollection, offset 0x28, size 0x8
  __declspec(property(get = __get__ostAndExtrasCollection, put = __set__ostAndExtrasCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _ostAndExtrasCollection;

  /// @brief Field _dlcCollection, offset 0x30, size 0x8
  __declspec(property(get = __get__dlcCollection, put = __set__dlcCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _dlcCollection;

  __declspec(property(get = get_defaultSongPackMaskItems))::System::Collections::Generic::IReadOnlyList_1<::StringW>* defaultSongPackMaskItems;

  __declspec(property(get = get_customSongPackMaskItems))::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> customSongPackMaskItems;

  __declspec(property(get = get_ostAndExtrasCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasCollection;

  __declspec(property(get = get_dlcCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* dlcCollection;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__defaultSongPackMaskItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__defaultSongPackMaskItems() const;

  constexpr void __set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*>& __get__customSongPackMaskItems();

  constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> const& __get__customSongPackMaskItems() const;

  constexpr void __set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__ostAndExtrasCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__ostAndExtrasCollection() const;

  constexpr void __set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__dlcCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__dlcCollection() const;

  constexpr void __set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  /// @brief Method get_defaultSongPackMaskItems, addr 0x236461c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_defaultSongPackMaskItems();

  /// @brief Method get_customSongPackMaskItems, addr 0x2364624, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> get_customSongPackMaskItems();

  /// @brief Method get_ostAndExtrasCollection, addr 0x236462c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasCollection();

  /// @brief Method get_dlcCollection, addr 0x2364634, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_dlcCollection();

  static inline ::GlobalNamespace::SongPackMasksModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x236463c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelSO(SongPackMasksModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelSO(SongPackMasksModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelSO();

public:
  /// @brief Field _defaultSongPackMaskItems, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____defaultSongPackMaskItems;

  /// @brief Field _customSongPackMaskItems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*, ::Array<::GlobalNamespace::SongPackMasksModelItem*>*> ____customSongPackMaskItems;

  /// @brief Field _ostAndExtrasCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____ostAndExtrasCollection;

  /// @brief Field _dlcCollection, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____dlcCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMasksModelSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____defaultSongPackMaskItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____customSongPackMaskItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____ostAndExtrasCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____dlcCollection) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMasksModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMasksModelSO*, "", "SongPackMasksModelSO");
