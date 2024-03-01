#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PS4NetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4NetworkPlayerModel);
// Type: ::PS4NetworkPlayerModel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS4NetworkPlayerModel*
class CORDL_TYPE PS4NetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  static inline ::GlobalNamespace::PS4NetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x272d600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4NetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4NetworkPlayerModel(PS4NetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4NetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4NetworkPlayerModel(PS4NetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4NetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4NetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4NetworkPlayerModel*, "", "PS4NetworkPlayerModel");
