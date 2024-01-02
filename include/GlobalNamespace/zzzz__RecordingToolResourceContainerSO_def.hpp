#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolResourceContainerSO)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolResourceContainerSO);
// Type: ::RecordingToolResourceContainerSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5966))
// CS Name: ::RecordingToolResourceContainerSO*
class CORDL_TYPE RecordingToolResourceContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _dlcLevelPackCollection, offset 0x18, size 0x8
  __declspec(property(get = __get__dlcLevelPackCollection, put = __set__dlcLevelPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _dlcLevelPackCollection;

  /// @brief Field _ostAndExtrasPackCollection, offset 0x20, size 0x8
  __declspec(property(get = __get__ostAndExtrasPackCollection, put = __set__ostAndExtrasPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _ostAndExtrasPackCollection;

  /// @brief Field _environmentsList, offset 0x28, size 0x8
  __declspec(property(get = __get__environmentsList, put = __set__environmentsList))::GlobalNamespace::EnvironmentsListSO* _environmentsList;

  /// @brief Field _beatmapLevelPacks, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapLevelPacks, put = __set__beatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* _beatmapLevelPacks;

  __declspec(property(get = get_beatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;

  __declspec(property(get = get_environmentsList))::GlobalNamespace::EnvironmentsListSO* environmentsList;

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__dlcLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__dlcLevelPackCollection() const;

  constexpr void __set__dlcLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__ostAndExtrasPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__ostAndExtrasPackCollection() const;

  constexpr void __set__ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::GlobalNamespace::EnvironmentsListSO*& __get__environmentsList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> const& __get__environmentsList() const;

  constexpr void __set__environmentsList(::GlobalNamespace::EnvironmentsListSO* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*& __get__beatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__beatmapLevelPacks() const;

  constexpr void __set__beatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method get_beatmapLevelPacks, addr 0x2308cf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();

  /// @brief Method get_environmentsList, addr 0x2308cf8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentsListSO* get_environmentsList();

  /// @brief Method OnEnable, addr 0x2308d00, size 0xcc, virtual true, abstract: false, final false
  inline void OnEnable();

  static inline ::GlobalNamespace::RecordingToolResourceContainerSO* New_ctor();

  /// @brief Method .ctor, addr 0x2308dcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolResourceContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolResourceContainerSO(RecordingToolResourceContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolResourceContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolResourceContainerSO(RecordingToolResourceContainerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolResourceContainerSO();

public:
  /// @brief Field _dlcLevelPackCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____dlcLevelPackCollection;

  /// @brief Field _ostAndExtrasPackCollection, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____ostAndExtrasPackCollection;

  /// @brief Field _environmentsList, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListSO* ____environmentsList;

  /// @brief Field _beatmapLevelPacks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* ____beatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolResourceContainerSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolResourceContainerSO, ____dlcLevelPackCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolResourceContainerSO, ____ostAndExtrasPackCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolResourceContainerSO, ____environmentsList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolResourceContainerSO, ____beatmapLevelPacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolResourceContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolResourceContainerSO*, "", "RecordingToolResourceContainerSO");
