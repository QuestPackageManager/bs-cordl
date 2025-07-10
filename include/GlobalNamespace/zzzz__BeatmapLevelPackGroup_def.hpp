#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPackGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPackGroup)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPackGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPackGroup);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelPackGroup
class CORDL_TYPE BeatmapLevelPackGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapLevelPacks>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__beatmapLevelPacks_k__BackingField,
      put = __cordl_internal_set__beatmapLevelPacks_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _beatmapLevelPacks_k__BackingField;

  /// @brief Field <groupName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__groupName_k__BackingField, put = __cordl_internal_set__groupName_k__BackingField)) ::StringW _groupName_k__BackingField;

  __declspec(property(get = get_beatmapLevelPacks, put = set_beatmapLevelPacks)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks;

  __declspec(property(get = get_groupName)) ::StringW groupName;

  static inline ::GlobalNamespace::BeatmapLevelPackGroup* New_ctor(::StringW groupName, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* collections);

  /// @brief Method UpdateBeatmapLevelPacks, addr 0x26d6148, size 0x8, virtual false, abstract: false, final false
  inline void UpdateBeatmapLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get__beatmapLevelPacks_k__BackingField() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__beatmapLevelPacks_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__groupName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__groupName_k__BackingField();

  constexpr void __cordl_internal_set__beatmapLevelPacks_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set__groupName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x26d611c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW groupName, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* collections);

  /// @brief Method get_beatmapLevelPacks, addr 0x26d610c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* get_beatmapLevelPacks();

  /// @brief Method get_groupName, addr 0x26d6104, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_groupName();

  /// @brief Method set_beatmapLevelPacks, addr 0x26d6114, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPackGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPackGroup(BeatmapLevelPackGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPackGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPackGroup(BeatmapLevelPackGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13030 };

  /// @brief Field <groupName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____groupName_k__BackingField;

  /// @brief Field <beatmapLevelPacks>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____beatmapLevelPacks_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackGroup, ____groupName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelPackGroup, ____beatmapLevelPacks_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPackGroup, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPackGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPackGroup*, "", "BeatmapLevelPackGroup");
