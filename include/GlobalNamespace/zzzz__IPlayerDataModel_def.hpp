#pragma once
// IWYU pragma private; include "GlobalNamespace/IPlayerDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayerDataModel)
namespace GlobalNamespace {
class PlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class IPlayerDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPlayerDataModel);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPlayerDataModel
class CORDL_TYPE IPlayerDataModel {
public:
  // Declarations
  __declspec(property(get = get_playerData)) ::GlobalNamespace::PlayerData* playerData;

  /// @brief Method get_playerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::PlayerData* get_playerData();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayerDataModel(IPlayerDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15140 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlayerDataModel*, "", "IPlayerDataModel");
