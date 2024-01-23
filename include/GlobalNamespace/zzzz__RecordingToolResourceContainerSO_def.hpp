#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolResourceContainerSO)
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5966))
// CS Name: ::RecordingToolResourceContainerSO*
class CORDL_TYPE RecordingToolResourceContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _dlcLevelPackCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcLevelPackCollection,
                      put = __cordl_internal_set__dlcLevelPackCollection))::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> _dlcLevelPackCollection;

  /// @brief Field _ostAndExtrasPackCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ostAndExtrasPackCollection,
                      put = __cordl_internal_set__ostAndExtrasPackCollection))::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> _ostAndExtrasPackCollection;

  /// @brief Field _environmentsList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsList, put = __cordl_internal_set__environmentsList))::UnityW<::GlobalNamespace::EnvironmentsListSO> _environmentsList;

  /// @brief Field _beatmapLevelPacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPacks,
                      put = __cordl_internal_set__beatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* _beatmapLevelPacks;

  __declspec(property(get = get_beatmapLevelPacks))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;

  __declspec(property(get = get_environmentsList))::UnityW<::GlobalNamespace::EnvironmentsListSO> environmentsList;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO>& __cordl_internal_get__dlcLevelPackCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> const& __cordl_internal_get__dlcLevelPackCollection() const;

  constexpr void __cordl_internal_set__dlcLevelPackCollection(::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO>& __cordl_internal_get__ostAndExtrasPackCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> const& __cordl_internal_get__ostAndExtrasPackCollection() const;

  constexpr void __cordl_internal_set__ostAndExtrasPackCollection(::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> value);

  constexpr ::UnityW<::GlobalNamespace::EnvironmentsListSO>& __cordl_internal_get__environmentsList();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentsListSO> const& __cordl_internal_get__environmentsList() const;

  constexpr void __cordl_internal_set__environmentsList(::UnityW<::GlobalNamespace::EnvironmentsListSO> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr void __cordl_internal_set__beatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method get_beatmapLevelPacks, addr 0x2308cf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();

  /// @brief Method get_environmentsList, addr 0x2308cf8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentsListSO> get_environmentsList();

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
  ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> ____dlcLevelPackCollection;

  /// @brief Field _ostAndExtrasPackCollection, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> ____ostAndExtrasPackCollection;

  /// @brief Field _environmentsList, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentsListSO> ____environmentsList;

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
