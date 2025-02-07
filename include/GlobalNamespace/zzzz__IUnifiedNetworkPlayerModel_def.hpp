#pragma once
// IWYU pragma private; include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IUnifiedNetworkPlayerModel)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType;
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
// Dependencies INetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// CS Name: IUnifiedNetworkPlayerModel
class CORDL_TYPE IUnifiedNetworkPlayerModel {
public:
  // Declarations
  __declspec(property(get = get_code)) ::StringW code;

  __declspec(property(get = get_publicServers)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* publicServers;

  __declspec(property(get = get_secret)) ::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Method ResetMasterServerReachability, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResetMasterServerReachability();

  /// @brief Method SetActiveNetworkPlayerModelType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetActiveNetworkPlayerModelType(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType activeNetworkPlayerModelType);

  /// @brief Method SetServerFilter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method add_partyRefreshingEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_partyRefreshingEvent(::System::Action* value);

  /// @brief Method get_code, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_code();

  /// @brief Method get_publicServers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers();

  /// @brief Method get_secret, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_secret();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

  /// @brief Method remove_partyRefreshingEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_partyRefreshingEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IUnifiedNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnifiedNetworkPlayerModel(IUnifiedNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnifiedNetworkPlayerModel*, "", "IUnifiedNetworkPlayerModel");
