#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(SteamNetworkPlayerModel)
namespace GlobalNamespace {
class INetworkPlayerModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamNetworkPlayerModel);
// Type: ::SteamNetworkPlayerModel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamNetworkPlayerModel*
class CORDL_TYPE SteamNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  static inline ::GlobalNamespace::SteamNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x28bb338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamNetworkPlayerModel(SteamNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamNetworkPlayerModel(SteamNetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamNetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamNetworkPlayerModel*, "", "SteamNetworkPlayerModel");
