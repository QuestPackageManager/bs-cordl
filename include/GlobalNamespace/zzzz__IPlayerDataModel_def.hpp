#pragma once
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
// Type: ::IPlayerDataModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IPlayerDataModel*
class CORDL_TYPE IPlayerDataModel {
public:
  // Declarations
  __declspec(property(get = get_playerData))::GlobalNamespace::PlayerData* playerData;

  /// @brief Method get_playerData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::PlayerData* get_playerData();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlayerDataModel(IPlayerDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlayerDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayerDataModel(IPlayerDataModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPlayerDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlayerDataModel*, "", "IPlayerDataModel");
