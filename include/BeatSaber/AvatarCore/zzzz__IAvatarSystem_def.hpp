#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IAvatarSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAvatarSystem)
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class IAvatarSystem;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::IAvatarSystem);
// Dependencies BeatSaber.AvatarCore.IAvatarSystemMetadata
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.IAvatarSystem
class CORDL_TYPE IAvatarSystem {
public:
  // Declarations
  __declspec(property(get = get_isFallbackSystem)) bool isFallbackSystem;

  __declspec(property(get = get_selectableByUser)) bool selectableByUser;

  __declspec(property(get = get_selectionSortOrder)) int32_t selectionSortOrder;

  __declspec(property(get = get_supportedOptionalAvatarDataTypes)) ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* supportedOptionalAvatarDataTypes;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarSystemMetadata*() noexcept;

  /// @brief Method CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist();

  /// @brief Method DeleteUserCreatedAvatar, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DeleteUserCreatedAvatar();

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider();

  /// @brief Method GetMultiplayerAvatarsData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* GetMultiplayerAvatarsData();

  /// @brief Method InstantiateAvatar, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail,
                                                                                                          ::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarEditorUI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* InstantiateAvatarEditorUI(::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarSelectionView, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>* InstantiateAvatarSelectionView(::Zenject::DiContainer* container);

  /// @brief Method __GetRandomizedMultiplayerAvatarsData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __GetRandomizedMultiplayerAvatarsData();

  /// @brief Method get_isFallbackSystem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isFallbackSystem();

  /// @brief Method get_selectableByUser, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_selectableByUser();

  /// @brief Method get_selectionSortOrder, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_selectionSortOrder();

  /// @brief Method get_supportedOptionalAvatarDataTypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* get_supportedOptionalAvatarDataTypes();

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarSystemMetadata"
  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* i___BeatSaber__AvatarCore__IAvatarSystemMetadata() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAvatarSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAvatarSystem(IAvatarSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17573 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::IAvatarSystem);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::IAvatarSystem*, "BeatSaber.AvatarCore", "IAvatarSystem");
