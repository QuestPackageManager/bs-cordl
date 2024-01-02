#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarSystem)
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystem;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
// Type: BeatSaber.BeatAvatarAdapter::BeatAvatarSystem
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15183)), TypeDefinitionIndex(TypeDefinitionIndex(15179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15259))
// CS Name: ::BeatSaber.BeatAvatarAdapter::BeatAvatarSystem*
class CORDL_TYPE BeatAvatarSystem : public ::BeatSaber::AvatarCore::AvatarSystem {
public:
  // Declarations
  /// @brief Field _avatarDataModel, offset 0x38, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _container, offset 0x40, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _settings, offset 0x48, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* _settings;

  /// @brief Field kAvatarSystemTypeIdentifier, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kAvatarSystemTypeIdentifier, put = setStaticF_kAvatarSystemTypeIdentifier))::BeatSaber::AvatarCore::AvatarSystemIdentifier kAvatarSystemTypeIdentifier;

  __declspec(property(get = get_avatarCreated))::System::Threading::Tasks::Task_1<bool>* avatarCreated;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> const& __get__settings() const;

  constexpr void __set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* value);

  static inline void setStaticF_kAvatarSystemTypeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value);

  static inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier getStaticF_kAvatarSystemTypeIdentifier();

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* New_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                           ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings);

  /// @brief Method .ctor, addr 0xe146ac, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings);

  /// @brief Method get_avatarCreated, addr 0xe14794, size 0x80, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_avatarCreated();

  /// @brief Method InstantiateAvatar, addr 0xe14814, size 0xac, virtual true, abstract: false, final false
  /// @param container: ::Zenject::DiContainer* (default: nullptr)
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::Avatar*>* InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail,
                                                                                                 ::Zenject::DiContainer* container = nullptr);

  /// @brief Method InstantiateAvatarEditorUI, addr 0xe148c0, size 0x64, virtual true, abstract: false, final false
  /// @param container: ::Zenject::DiContainer* (default: nullptr)
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>* InstantiateAvatarEditorUI(::Zenject::DiContainer* container = nullptr);

  /// @brief Method InstantiateAvatarSelectionView, addr 0xe14924, size 0x64, virtual true, abstract: false, final false
  /// @param container: ::Zenject::DiContainer* (default: nullptr)
  inline ::System::Threading::Tasks::Task_1<::BeatSaber::AvatarCore::AvatarSelectionView*>* InstantiateAvatarSelectionView(::Zenject::DiContainer* container = nullptr);

  /// @brief Method GetMultiplayerAvatarsData, addr 0xe14988, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* GetMultiplayerAvatarsData();

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0xe14a14, size 0x8, virtual true, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider();

  /// @brief Method CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist, addr 0xe14a1c, size 0x34, virtual true, abstract: false, final false
  inline bool CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist();

  /// @brief Method __GetRandomizedMultiplayerAvatarsData, addr 0xe14a50, size 0x90, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __GetRandomizedMultiplayerAvatarsData();

  /// @brief Method DeleteUserCreatedAvatar, addr 0xe14ae0, size 0x1c, virtual true, abstract: false, final false
  inline void DeleteUserCreatedAvatar();

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarSystem(BeatAvatarSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarSystem(BeatAvatarSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarSystem();

public:
  /// @brief Field _avatarDataModel, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _container, offset: 0x40, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _settings, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* ____settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____avatarDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____container) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____settings) == 0x48, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarSystem");
