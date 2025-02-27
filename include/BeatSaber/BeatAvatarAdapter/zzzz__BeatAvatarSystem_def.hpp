#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatarSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatAvatarSystem)
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
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystemSettings;
}
namespace BeatSaber::BeatAvatarAdapter {
struct BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarDataModel;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter {
class BeatAvatarSystem;
}
namespace BeatSaber::BeatAvatarAdapter {
struct BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
MARK_VAL_T(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarAdapter.BeatAvatarSystem/<CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist>d__12
struct CORDL_TYPE BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2259494, size 0x324, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22597b8, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                       ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* __4__this,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17711 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, __u__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, 0x38>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
// Dependencies BeatSaber.AvatarCore.AvatarSystem, BeatSaber.AvatarCore.AvatarSystemIdentifier
namespace BeatSaber::BeatAvatarAdapter {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.BeatAvatarSystem
class CORDL_TYPE BeatAvatarSystem : public ::BeatSaber::AvatarCore::AvatarSystem {
public:
  // Declarations
  using _CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12 = ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12;

  /// @brief Field _avatarDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarDataModel, put = __cordl_internal_set__avatarDataModel)) ::BeatSaber::BeatAvatarSDK::AvatarDataModel* _avatarDataModel;

  /// @brief Field _container, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _settings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> _settings;

  __declspec(property(get = get_avatarCreated)) ::System::Threading::Tasks::Task_1<bool>* avatarCreated;

  /// @brief Field kAvatarSystemTypeIdentifier, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kAvatarSystemTypeIdentifier, put = setStaticF_kAvatarSystemTypeIdentifier)) ::BeatSaber::AvatarCore::AvatarSystemIdentifier kAvatarSystemTypeIdentifier;

  /// @brief Method CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist, addr 0x2259210, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist();

  /// @brief Method DeleteUserCreatedAvatar, addr 0x2259394, size 0x84, virtual true, abstract: false, final false
  inline void DeleteUserCreatedAvatar();

  /// @brief Method GetMultiplayerAvatarOptionalDataProvider, addr 0x2259208, size 0x8, virtual true, abstract: false, final false
  inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* GetMultiplayerAvatarOptionalDataProvider();

  /// @brief Method GetMultiplayerAvatarsData, addr 0x225917c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* GetMultiplayerAvatarsData();

  /// @brief Method InstantiateAvatar, addr 0x2259008, size 0xac, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* InstantiateAvatar(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext, int32_t levelOfDetail,
                                                                                                          ::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarEditorUI, addr 0x22590b4, size 0x64, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* InstantiateAvatarEditorUI(::Zenject::DiContainer* container);

  /// @brief Method InstantiateAvatarSelectionView, addr 0x2259118, size 0x64, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>* InstantiateAvatarSelectionView(::Zenject::DiContainer* container);

  static inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem* New_ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model,
                                                                           ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings);

  /// @brief Method __GetRandomizedMultiplayerAvatarsData, addr 0x2259304, size 0x90, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarData>* __GetRandomizedMultiplayerAvatarsData();

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& __cordl_internal_get__avatarDataModel() const;

  constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& __cordl_internal_get__avatarDataModel();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> const& __cordl_internal_get__settings() const;

  constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings>& __cordl_internal_get__settings();

  constexpr void __cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__settings(::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> value);

  /// @brief Method .ctor, addr 0x2258f04, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* model, ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* settings);

  static inline ::BeatSaber::AvatarCore::AvatarSystemIdentifier getStaticF_kAvatarSystemTypeIdentifier();

  /// @brief Method get_avatarCreated, addr 0x2258fec, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* get_avatarCreated();

  static inline void setStaticF_kAvatarSystemTypeIdentifier(::BeatSaber::AvatarCore::AvatarSystemIdentifier value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatAvatarSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatAvatarSystem(BeatAvatarSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatAvatarSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatAvatarSystem(BeatAvatarSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17712 };

  /// @brief Field _avatarDataModel, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _container, offset: 0x40, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _settings, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> ____settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____avatarDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____container) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, ____settings) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem, 0x50>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem*, "BeatSaber.BeatAvatarAdapter", "BeatAvatarSystem");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystem__CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist_d__12, "BeatSaber.BeatAvatarAdapter",
                       "BeatAvatarSystem/<CreateDefaultAvatarIfUserCreatedAvatarDoesNotExist>d__12");
