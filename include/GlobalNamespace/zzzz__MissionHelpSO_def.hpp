#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4458))
// CS Name: ::MissionHelpSO*
class CORDL_TYPE MissionHelpSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _missionHelpId, offset 0x18, size 0x8
  __declspec(property(get = __get__missionHelpId, put = __set__missionHelpId))::StringW _missionHelpId;

  __declspec(property(get = get_missionHelpId))::StringW missionHelpId;

  constexpr ::StringW& __get__missionHelpId();

  constexpr ::StringW const& __get__missionHelpId() const;

  constexpr void __set__missionHelpId(::StringW value);

  /// @brief Method get_missionHelpId addr 0x2352ad8 size 0x8 virtual false final false
  inline ::StringW get_missionHelpId();

  static inline ::GlobalNamespace::MissionHelpSO* New_ctor();

  /// @brief Method .ctor addr 0x2352ae0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionHelpSO(MissionHelpSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionHelpSO(MissionHelpSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionHelpSO();

public:
  /// @brief Field _missionHelpId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____missionHelpId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionHelpSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionHelpSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpSO*, "", "MissionHelpSO");
