#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/NetworkAdapter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkAdapter)
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class NetworkAdapter;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.NetworkAdapter
class CORDL_TYPE NetworkAdapter : public ::System::Object {
public:
  // Declarations
  /// @brief Field <NetworkData>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__NetworkData_k__BackingField,
                      put = setStaticF__NetworkData_k__BackingField)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* _NetworkData_k__BackingField;

  /// @brief Field <NetworkMessenger>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__NetworkMessenger_k__BackingField,
                      put = setStaticF__NetworkMessenger_k__BackingField)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* _NetworkMessenger_k__BackingField;

  /// @brief Method SetConfig, addr 0x585c9a4, size 0x90, virtual false, abstract: false, final false
  static inline void SetConfig(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger);

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* getStaticF__NetworkData_k__BackingField();

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* getStaticF__NetworkMessenger_k__BackingField();

  /// @brief Method get_NetworkData, addr 0x58677d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* get_NetworkData();

  /// @brief Method get_NetworkMessenger, addr 0x5867870, size 0x4c, virtual false, abstract: false, final false
  static inline ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* get_NetworkMessenger();

  static inline void setStaticF__NetworkData_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value);

  static inline void setStaticF__NetworkMessenger_k__BackingField(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value);

  /// @brief Method set_NetworkData, addr 0x5867820, size 0x50, virtual false, abstract: false, final false
  static inline void set_NetworkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value);

  /// @brief Method set_NetworkMessenger, addr 0x58678bc, size 0x50, virtual false, abstract: false, final false
  static inline void set_NetworkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkAdapter(NetworkAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkAdapter(NetworkAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::NetworkAdapter*, "Meta.XR.MultiplayerBlocks.Colocation", "NetworkAdapter");
