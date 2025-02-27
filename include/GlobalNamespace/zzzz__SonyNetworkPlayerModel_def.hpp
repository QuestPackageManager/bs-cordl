#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(SonyNetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class SonyNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyNetworkPlayerModel);
// Dependencies PlatformNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyNetworkPlayerModel
class CORDL_TYPE SonyNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  static inline ::GlobalNamespace::SonyNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x3e80f1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyNetworkPlayerModel(SonyNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyNetworkPlayerModel(SonyNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyNetworkPlayerModel, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyNetworkPlayerModel*, "", "SonyNetworkPlayerModel");
