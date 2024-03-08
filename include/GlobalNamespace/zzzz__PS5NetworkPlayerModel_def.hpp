#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PS5NetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5NetworkPlayerModel);
// Type: ::PS5NetworkPlayerModel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5NetworkPlayerModel*
class CORDL_TYPE PS5NetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  static inline ::GlobalNamespace::PS5NetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x278d8c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5NetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5NetworkPlayerModel(PS5NetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5NetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5NetworkPlayerModel(PS5NetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5NetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5NetworkPlayerModel*, "", "PS5NetworkPlayerModel");
