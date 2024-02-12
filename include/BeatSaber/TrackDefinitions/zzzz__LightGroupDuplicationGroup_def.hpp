#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LightGroupDuplicationGroup)
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions {
class LightGroupDuplicationGroup;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup);
// Type: BeatSaber.TrackDefinitions::LightGroupDuplicationGroup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16141))
// CS Name: ::BeatSaber.TrackDefinitions::LightGroupDuplicationGroup*
class CORDL_TYPE LightGroupDuplicationGroup : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _duplicationGroupName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__duplicationGroupName, put = __cordl_internal_set__duplicationGroupName))::StringW _duplicationGroupName;

  /// @brief Field _lightGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups,
                      put = __cordl_internal_set__lightGroups))::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> _lightGroups;

  __declspec(property(get = get_duplicationGroupName))::StringW duplicationGroupName;

  __declspec(property(get = get_lightGroups))::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> lightGroups;

  constexpr ::StringW& __cordl_internal_get__duplicationGroupName();

  constexpr ::StringW const& __cordl_internal_get__duplicationGroupName() const;

  constexpr void __cordl_internal_set__duplicationGroupName(::StringW value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>& __cordl_internal_get__lightGroups();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> const& __cordl_internal_get__lightGroups() const;

  constexpr void __cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> value);

  /// @brief Method get_duplicationGroupName, addr 0xe3d634, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_duplicationGroupName();

  /// @brief Method get_lightGroups, addr 0xe3d63c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> get_lightGroups();

  static inline ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup* New_ctor();

  /// @brief Method .ctor, addr 0xe3d644, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupDuplicationGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupDuplicationGroup(LightGroupDuplicationGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupDuplicationGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupDuplicationGroup(LightGroupDuplicationGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupDuplicationGroup();

public:
  /// @brief Field _duplicationGroupName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____duplicationGroupName;

  /// @brief Field _lightGroups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> ____lightGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup, ____duplicationGroupName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup, ____lightGroups) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
NEED_NO_BOX(::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*, "BeatSaber.TrackDefinitions", "LightGroupDuplicationGroup");
