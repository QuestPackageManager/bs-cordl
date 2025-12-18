#pragma once
// IWYU pragma private; include "GlobalNamespace/FlowCoordinatorAvatarsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlowCoordinatorAvatarsHelper)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace GlobalNamespace {
struct FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0;
}
namespace GlobalNamespace {
class FlowCoordinatorAvatarsHelper___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FlowCoordinatorAvatarsHelper;
}
namespace GlobalNamespace {
class FlowCoordinatorAvatarsHelper___c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlowCoordinatorAvatarsHelper);
MARK_REF_PTR_T(::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0);
MARK_VAL_T(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlowCoordinatorAvatarsHelper/<>c__DisplayClass0_0
class CORDL_TYPE FlowCoordinatorAvatarsHelper___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerDataModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDataModel, put = __cordl_internal_set_playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  static inline ::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0* New_ctor();

  /// @brief Method <HasUserSelectedAvatarSystemWithCreatedAvatar>b__0, addr 0x585e5d0, size 0xc4, virtual false, abstract: false, final false
  inline bool _HasUserSelectedAvatarSystemWithCreatedAvatar_b__0(::BeatSaber::AvatarCore::IAvatarSystemMetadata* system);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get_playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get_playerDataModel();

  constexpr void __cordl_internal_set_playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x585e5cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinatorAvatarsHelper___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinatorAvatarsHelper___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinatorAvatarsHelper___c__DisplayClass0_0(FlowCoordinatorAvatarsHelper___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinatorAvatarsHelper___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinatorAvatarsHelper___c__DisplayClass0_0(FlowCoordinatorAvatarsHelper___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6364 };

  /// @brief Field playerDataModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ___playerDataModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0, ___playerDataModel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: FlowCoordinatorAvatarsHelper/<HasUserSelectedAvatarSystemWithCreatedAvatar>d__0
struct CORDL_TYPE FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x585e694, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x585eaac, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "playerDataModel", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>",
  // modifiers: "", def_value: None }, CppParam { name: "avatarSystemCollection", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                            ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
                                                                                            ::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6365 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field playerDataModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel;

  /// @brief Field avatarSystemCollection, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, playerDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, avatarSystemCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlowCoordinatorAvatarsHelper
class CORDL_TYPE FlowCoordinatorAvatarsHelper : public ::System::Object {
public:
  // Declarations
  using _HasUserSelectedAvatarSystemWithCreatedAvatar_d__0 = ::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0;

  using __c__DisplayClass0_0 = ::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0;

  /// @brief Method HasUserSelectedAvatarSystemWithCreatedAvatar, addr 0x585e4d0, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* HasUserSelectedAvatarSystemWithCreatedAvatar(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                                                       ::GlobalNamespace::PlayerDataModel* playerDataModel);

  static inline ::GlobalNamespace::FlowCoordinatorAvatarsHelper* New_ctor();

  /// @brief Method .ctor, addr 0x585e5c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinatorAvatarsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinatorAvatarsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinatorAvatarsHelper(FlowCoordinatorAvatarsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinatorAvatarsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinatorAvatarsHelper(FlowCoordinatorAvatarsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlowCoordinatorAvatarsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlowCoordinatorAvatarsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlowCoordinatorAvatarsHelper*, "", "FlowCoordinatorAvatarsHelper");
NEED_NO_BOX(::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlowCoordinatorAvatarsHelper___c__DisplayClass0_0*, "", "FlowCoordinatorAvatarsHelper/<>c__DisplayClass0_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlowCoordinatorAvatarsHelper__HasUserSelectedAvatarSystemWithCreatedAvatar_d__0, "",
                       "FlowCoordinatorAvatarsHelper/<HasUserSelectedAvatarSystemWithCreatedAvatar>d__0");
