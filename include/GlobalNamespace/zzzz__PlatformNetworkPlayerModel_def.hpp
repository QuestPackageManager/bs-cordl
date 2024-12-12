#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
CORDL_MODULE_EXPORT(PlatformNetworkPlayerModel)
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel_CreatePartyConfig;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel_CreatePartyConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig);
// Dependencies BaseNetworkPlayerModel::PartyConfig, INetworkPlayerModelPartyConfig`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformNetworkPlayerModel/CreatePartyConfig
class CORDL_TYPE PlatformNetworkPlayerModel_CreatePartyConfig : public ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>*() noexcept;

  static inline ::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig* New_ctor();

  /// @brief Method .ctor, addr 0x3e71214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>*
  i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___GlobalNamespace__PlatformNetworkPlayerModel__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformNetworkPlayerModel_CreatePartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel_CreatePartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformNetworkPlayerModel_CreatePartyConfig(PlatformNetworkPlayerModel_CreatePartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel_CreatePartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformNetworkPlayerModel_CreatePartyConfig(PlatformNetworkPlayerModel_CreatePartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BaseNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformNetworkPlayerModel
class CORDL_TYPE PlatformNetworkPlayerModel : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
  // Declarations
  using CreatePartyConfig = ::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig;

  __declspec(property(get = get_friends)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* friends;

  /// @brief Method DestroyPartyConnection, addr 0x3e711fc, size 0x18, virtual true, abstract: false, final false
  inline void DestroyPartyConnection();

  static inline ::GlobalNamespace::PlatformNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x3e711e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_friends, addr 0x3e711ec, size 0x10, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_friends();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformNetworkPlayerModel(PlatformNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformNetworkPlayerModel(PlatformNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformNetworkPlayerModel, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformNetworkPlayerModel*, "", "PlatformNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformNetworkPlayerModel_CreatePartyConfig*, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
