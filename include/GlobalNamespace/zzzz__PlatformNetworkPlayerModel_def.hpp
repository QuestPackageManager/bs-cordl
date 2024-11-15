#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PlatformNetworkPlayerModel)
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class __PlatformNetworkPlayerModel__CreatePartyConfig;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class __PlatformNetworkPlayerModel__CreatePartyConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig);
// Type: ::CreatePartyConfig
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformNetworkPlayerModel::CreatePartyConfig*
class CORDL_TYPE __PlatformNetworkPlayerModel__CreatePartyConfig : public ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*() noexcept;

  static inline ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig* New_ctor();

  /// @brief Method .ctor, addr 0x3e11168, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>>*
  i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___UnityW___GlobalNamespace__PlatformNetworkPlayerModel__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformNetworkPlayerModel__CreatePartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformNetworkPlayerModel__CreatePartyConfig(__PlatformNetworkPlayerModel__CreatePartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformNetworkPlayerModel__CreatePartyConfig(__PlatformNetworkPlayerModel__CreatePartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformNetworkPlayerModel
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformNetworkPlayerModel*
class CORDL_TYPE PlatformNetworkPlayerModel : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
  // Declarations
  using CreatePartyConfig = ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig;

  __declspec(property(get = get_friends)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* friends;

  /// @brief Method DestroyPartyConnection, addr 0x3e11150, size 0x18, virtual true, abstract: false, final false
  inline void DestroyPartyConnection();

  static inline ::GlobalNamespace::PlatformNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x3e11138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_friends, addr 0x3e11140, size 0x10, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformNetworkPlayerModel, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformNetworkPlayerModel*, "", "PlatformNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig*, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
