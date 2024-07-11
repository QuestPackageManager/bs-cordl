#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarController)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
struct __AvatarController___LoadAndDisplayAvatar_d__11;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace BeatSaber::AvatarCore {
struct __AvatarController___LoadAndDisplayAvatar_d__11;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarController);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11);
// Type: ::<LoadAndDisplayAvatar>d__11
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: ::AvatarController::<LoadAndDisplayAvatar>d__11
struct CORDL_TYPE __AvatarController___LoadAndDisplayAvatar_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x104d46c, size 0x5d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x104dbbc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarController___LoadAndDisplayAvatar_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BeatSaber::AvatarCore::AvatarController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>", modifiers: "", def_value: None }]
  constexpr __AvatarController___LoadAndDisplayAvatar_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                            ::UnityW<::BeatSaber::AvatarCore::AvatarController> __4__this,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::Avatar>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::Avatar>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, __u__1) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::AvatarController*
class CORDL_TYPE AvatarController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _LoadAndDisplayAvatar_d__11 = ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11;

  /// @brief Field _avatar, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__avatar, put = __cordl_internal_set__avatar))::UnityW<::BeatSaber::AvatarCore::Avatar> _avatar;

  /// @brief Field _avatarDisplayContext, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__avatarDisplayContext, put = __cordl_internal_set__avatarDisplayContext))::BeatSaber::AvatarCore::AvatarDisplayContext _avatarDisplayContext;

  /// @brief Field _avatarSystemCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _optionalDataProvider, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__optionalDataProvider, put = __cordl_internal_set__optionalDataProvider))::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* _optionalDataProvider;

  /// @brief Field _parentingTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parentingTransform, put = __cordl_internal_set__parentingTransform))::UnityW<::UnityEngine::Transform> _parentingTransform;

  /// @brief Field _poseDataProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__poseDataProvider, put = __cordl_internal_set__poseDataProvider))::BeatSaber::AvatarCore::IAvatarPoseDataProvider* _poseDataProvider;

  /// @brief Field _visualDataProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__visualDataProvider, put = __cordl_internal_set__visualDataProvider))::BeatSaber::AvatarCore::IAvatarVisualDataProvider* _visualDataProvider;

  __declspec(property(get = get_avatar))::UnityW<::BeatSaber::AvatarCore::Avatar> avatar;

  /// @brief Method LoadAndDisplayAvatar, addr 0x104d3d0, size 0x94, virtual false, abstract: false, final false
  inline void LoadAndDisplayAvatar();

  static inline ::BeatSaber::AvatarCore::AvatarController* New_ctor();

  /// @brief Method Start, addr 0x104d3cc, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::BeatSaber::AvatarCore::Avatar> const& __cordl_internal_get__avatar() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::Avatar>& __cordl_internal_get__avatar();

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& __cordl_internal_get__avatarDisplayContext() const;

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& __cordl_internal_get__avatarDisplayContext();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& __cordl_internal_get__optionalDataProvider();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> const& __cordl_internal_get__optionalDataProvider() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentingTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentingTransform();

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& __cordl_internal_get__poseDataProvider();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> const& __cordl_internal_get__poseDataProvider() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& __cordl_internal_get__visualDataProvider();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> const& __cordl_internal_get__visualDataProvider() const;

  constexpr void __cordl_internal_set__avatar(::UnityW<::BeatSaber::AvatarCore::Avatar> value);

  constexpr void __cordl_internal_set__avatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value);

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value);

  constexpr void __cordl_internal_set__parentingTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value);

  constexpr void __cordl_internal_set__visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value);

  /// @brief Method .ctor, addr 0x104d464, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_avatar, addr 0x104d3c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::BeatSaber::AvatarCore::Avatar> get_avatar();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarController(AvatarController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarController(AvatarController const&) = delete;

  /// @brief Field _parentingTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____parentingTransform;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _avatarSystemCollection, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _avatarDisplayContext, offset: 0x30, size: 0x4, def value: None
  ::BeatSaber::AvatarCore::AvatarDisplayContext ____avatarDisplayContext;

  /// @brief Field _visualDataProvider, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* ____visualDataProvider;

  /// @brief Field _poseDataProvider, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* ____poseDataProvider;

  /// @brief Field _optionalDataProvider, offset: 0x48, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* ____optionalDataProvider;

  /// @brief Field _avatar, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::Avatar> ____avatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarController, 0x58>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____parentingTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____avatarSystemCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____avatarDisplayContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____visualDataProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____poseDataProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____optionalDataProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarController, ____avatar) == 0x50, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarController*, "BeatSaber.AvatarCore", "AvatarController");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, "BeatSaber.AvatarCore", "AvatarController/<LoadAndDisplayAvatar>d__11");
