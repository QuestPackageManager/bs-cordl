#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IUnifiedNetworkPlayerModel)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IUnifiedNetworkPlayerModel);
// Type: ::IUnifiedNetworkPlayerModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IUnifiedNetworkPlayerModel*
class CORDL_TYPE IUnifiedNetworkPlayerModel {
public:
  // Declarations
  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_publicServers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* publicServers;

  __declspec(property(get = get_secret))::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Method ResetMasterServerReachability, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetMasterServerReachability();

  /// @brief Method SetActiveNetworkPlayerModelType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetActiveNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType);

  /// @brief Method SetServerFilter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method add_partyRefreshingEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_partyRefreshingEvent(::System::Action* value);

  /// @brief Method get_code, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_code();

  /// @brief Method get_publicServers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers();

  /// @brief Method get_secret, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_secret();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

  /// @brief Method remove_partyRefreshingEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_partyRefreshingEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IUnifiedNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnifiedNetworkPlayerModel(IUnifiedNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnifiedNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnifiedNetworkPlayerModel(IUnifiedNetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnifiedNetworkPlayerModel*, "", "IUnifiedNetworkPlayerModel");
