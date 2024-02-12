#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerMissionStatsData)
// Forward declare root types
namespace GlobalNamespace {
class PlayerMissionStatsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerMissionStatsData);
// Type: ::PlayerMissionStatsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11051))
// CS Name: ::PlayerMissionStatsData*
class CORDL_TYPE PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _missionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__missionId, put = __cordl_internal_set__missionId))::StringW _missionId;

  /// @brief Field _cleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cleared, put = __cordl_internal_set__cleared)) bool _cleared;

  __declspec(property(get = get_missionId))::StringW missionId;

  __declspec(property(get = get_cleared, put = set_cleared)) bool cleared;

  constexpr ::StringW& __cordl_internal_get__missionId();

  constexpr ::StringW const& __cordl_internal_get__missionId() const;

  constexpr void __cordl_internal_set__missionId(::StringW value);

  constexpr bool& __cordl_internal_get__cleared();

  constexpr bool const& __cordl_internal_get__cleared() const;

  constexpr void __cordl_internal_set__cleared(bool value);

  /// @brief Method get_missionId, addr 0x12b5a1c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_missionId();

  /// @brief Method get_cleared, addr 0x12b5a24, size 0x8, virtual false, abstract: false, final false
  inline bool get_cleared();

  /// @brief Method set_cleared, addr 0x12b5a2c, size 0xc, virtual false, abstract: false, final false
  inline void set_cleared(bool value);

  static inline ::GlobalNamespace::PlayerMissionStatsData* New_ctor(::StringW missionId, bool cleared);

  /// @brief Method .ctor, addr 0x12b0714, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW missionId, bool cleared);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerMissionStatsData(PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerMissionStatsData(PlayerMissionStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerMissionStatsData();

public:
  /// @brief Field _missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____missionId;

  /// @brief Field _cleared, offset: 0x18, size: 0x1, def value: None
  bool ____cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerMissionStatsData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMissionStatsData, ____missionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMissionStatsData, ____cleared) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerMissionStatsData*, "", "PlayerMissionStatsData");
