#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionHelpSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionHelpSO)
// Forward declare root types
namespace GlobalNamespace {
class MissionHelpSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionHelpSO);
// Type: ::MissionHelpSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionHelpSO*
class CORDL_TYPE MissionHelpSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _missionHelpId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionHelpId, put = __cordl_internal_set__missionHelpId))::StringW _missionHelpId;

  __declspec(property(get = get_missionHelpId))::StringW missionHelpId;

  static inline ::GlobalNamespace::MissionHelpSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__missionHelpId() const;

  constexpr ::StringW& __cordl_internal_get__missionHelpId();

  constexpr void __cordl_internal_set__missionHelpId(::StringW value);

  /// @brief Method .ctor, addr 0x14ca534, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_missionHelpId, addr 0x14ca52c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_missionHelpId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionHelpSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionHelpSO(MissionHelpSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionHelpSO(MissionHelpSO const&) = delete;

  /// @brief Field _missionHelpId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____missionHelpId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionHelpSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionHelpSO, ____missionHelpId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionHelpSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpSO*, "", "MissionHelpSO");
