#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPackMasksModelSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SongPackMasksModelSO)
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
MARK_REF_T(::GlobalNamespace::SongPackMasksModelSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SongPackMasksModelSO*, "", "SongPackMasksModelSO");
// Dependencies PersistentScriptableObject, SongPackMasksModelItem
namespace GlobalNamespace {
// Is value type: false
// CS Name: SongPackMasksModelSO
class CORDL_TYPE SongPackMasksModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _customSongPackMaskItems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__customSongPackMaskItems, put = __cordl_internal_set__customSongPackMaskItems)) ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*>
      _customSongPackMaskItems;

  /// @brief Field _defaultSongPackMaskItems, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultSongPackMaskItems,
                      put = __cordl_internal_set__defaultSongPackMaskItems)) ::System::Collections::Generic::List_1<::StringW>* _defaultSongPackMaskItems;

  __declspec(property(get = get_customSongPackMaskItems)) ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> customSongPackMaskItems;

  __declspec(property(get = get_defaultSongPackMaskItems)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* defaultSongPackMaskItems;

  static inline ::GlobalNamespace::SongPackMasksModelSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> const& __cordl_internal_get__customSongPackMaskItems() const;

  constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*>& __cordl_internal_get__customSongPackMaskItems();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__defaultSongPackMaskItems() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__defaultSongPackMaskItems();

  constexpr void __cordl_internal_set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> value);

  constexpr void __cordl_internal_set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x373f1c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customSongPackMaskItems, addr 0x373f1c0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> get_customSongPackMaskItems();

  /// @brief Method get_defaultSongPackMaskItems, addr 0x373f1b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_defaultSongPackMaskItems();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMasksModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMasksModelSO(SongPackMasksModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMasksModelSO(SongPackMasksModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15121 };

  /// @brief Field _defaultSongPackMaskItems, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____defaultSongPackMaskItems;

  /// @brief Field _customSongPackMaskItems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*> ____customSongPackMaskItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____defaultSongPackMaskItems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackMasksModelSO, ____customSongPackMaskItems) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SongPackMasksModelSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
