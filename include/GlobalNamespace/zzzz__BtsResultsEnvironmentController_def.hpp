#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BtsResultsEnvironmentController)
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class BTSCharacterResultAnimationController;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__PrefabWithId;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BtsResultsEnvironmentController;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BtsResultsEnvironmentController);
MARK_REF_PTR_T(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation);
MARK_REF_PTR_T(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13);
// Type: ::BTSResultCharacterPlaceWithAnimation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15015))
// CS Name: ::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*
class CORDL_TYPE __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation : public ::System::Object {
public:
  // Declarations
  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _placeTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__placeTransform, put = __cordl_internal_set__placeTransform))::UnityW<::UnityEngine::Transform> _placeTransform;

  /// @brief Field _animationController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animationController,
                      put = __cordl_internal_set__animationController))::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> _animationController;

  /// @brief Field _animationClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animationClip, put = __cordl_internal_set__animationClip))::UnityW<::UnityEngine::AnimationClip> _animationClip;

  /// @brief Field _btsCharacter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacter, put = __cordl_internal_set__btsCharacter))::UnityW<::GlobalNamespace::BTSCharacter> _btsCharacter;

  /// @brief Field _btsCharacterAssetReference, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterAssetReference,
                      put = __cordl_internal_set__btsCharacterAssetReference))::UnityEngine::AddressableAssets::AssetReference* _btsCharacterAssetReference;

  __declspec(property(get = get_name))::StringW name;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__placeTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__placeTransform() const;

  constexpr void __cordl_internal_set__placeTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController>& __cordl_internal_get__animationController();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> const& __cordl_internal_get__animationController() const;

  constexpr void __cordl_internal_set__animationController(::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> value);

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__animationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__animationClip() const;

  constexpr void __cordl_internal_set__animationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr ::UnityW<::GlobalNamespace::BTSCharacter>& __cordl_internal_get__btsCharacter();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacter> const& __cordl_internal_get__btsCharacter() const;

  constexpr void __cordl_internal_set__btsCharacter(::UnityW<::GlobalNamespace::BTSCharacter> value);

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__btsCharacterAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __cordl_internal_get__btsCharacterAssetReference() const;

  constexpr void __cordl_internal_set__btsCharacterAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method get_name, addr 0xe2ec6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method Clean, addr 0xe2eb04, size 0xec, virtual false, abstract: false, final false
  inline void Clean();

  /// @brief Method SetCharacter, addr 0xe2e6ac, size 0xcc, virtual false, abstract: false, final false
  inline void SetCharacter(::UnityEngine::AddressableAssets::AssetReference* assetReference, ::GlobalNamespace::BTSCharacter* btsCharacter, bool alternativeMaterial);

  static inline ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation* New_ctor();

  /// @brief Method .ctor, addr 0xe2ec74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation(__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation(__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation();

public:
  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _placeTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____placeTransform;

  /// @brief Field _animationController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> ____animationController;

  /// @brief Field _animationClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____animationClip;

  /// @brief Field _btsCharacter, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacter> ____btsCharacter;

  /// @brief Field _btsCharacterAssetReference, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____btsCharacterAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____placeTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____animationController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____animationClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____btsCharacter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, ____btsCharacterAssetReference) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DestroyCharactersDelayed>d__13
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15016))
// CS Name: ::BtsResultsEnvironmentController::<DestroyCharactersDelayed>d__13*
class CORDL_TYPE __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::BtsResultsEnvironmentController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> value);

  static inline ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe2eadc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe2ec7c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe2ec80, size 0xc0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe2ed40, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe2ed48, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe2ed88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13(__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13(__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BtsResultsEnvironmentController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4038)), TypeDefinitionIndex(TypeDefinitionIndex(15108))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15017))
// CS Name: ::BtsResultsEnvironmentController*
class CORDL_TYPE BtsResultsEnvironmentController : public ::GlobalNamespace::BaseResultsEnvironmentController {
public:
  // Declarations
  using _DestroyCharactersDelayed_d__13 = ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13;

  using BTSResultCharacterPlaceWithAnimation = ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;

  /// @brief Field _btsCharacterAnimationWrapper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterAnimationWrapper,
                      put = __cordl_internal_set__btsCharacterAnimationWrapper))::UnityW<::UnityEngine::GameObject> _btsCharacterAnimationWrapper;

  /// @brief Field _btsCharacterDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterDataModel, put = __cordl_internal_set__btsCharacterDataModel))::UnityW<::GlobalNamespace::BTSCharacterDataModel> _btsCharacterDataModel;

  /// @brief Field _btsCharactersResultsAppearPlayableDirector, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharactersResultsAppearPlayableDirector,
                      put = __cordl_internal_set__btsCharactersResultsAppearPlayableDirector))::UnityW<::UnityEngine::Playables::PlayableDirector> _btsCharactersResultsAppearPlayableDirector;

  /// @brief Field _resultPlacesWithAnimations, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__resultPlacesWithAnimations, put = __cordl_internal_set__resultPlacesWithAnimations))::ArrayW<
      ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
      ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*> _resultPlacesWithAnimations;

  /// @brief Field _handles, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__handles,
                      put = __cordl_internal_set__handles))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* _handles;

  __declspec(property(get = get_keyword))::StringW keyword;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__btsCharacterAnimationWrapper();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__btsCharacterAnimationWrapper() const;

  constexpr void __cordl_internal_set__btsCharacterAnimationWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel>& __cordl_internal_get__btsCharacterDataModel();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel> const& __cordl_internal_get__btsCharacterDataModel() const;

  constexpr void __cordl_internal_set__btsCharacterDataModel(::UnityW<::GlobalNamespace::BTSCharacterDataModel> value);

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__btsCharactersResultsAppearPlayableDirector();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__btsCharactersResultsAppearPlayableDirector() const;

  constexpr void __cordl_internal_set__btsCharactersResultsAppearPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                     ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>&
  __cordl_internal_get__resultPlacesWithAnimations();

  constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                     ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*> const&
  __cordl_internal_get__resultPlacesWithAnimations() const;

  constexpr void __cordl_internal_set__resultPlacesWithAnimations(::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                                                                           ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>
                                                                      value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get__handles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get__handles() const;

  constexpr void __cordl_internal_set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method get_keyword, addr 0xe2df38, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_keyword();

  /// @brief Method Setup, addr 0xe2df78, size 0x4e4, virtual true, abstract: false, final false
  inline void Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method SpawnBtsCharacters, addr 0xe2e45c, size 0x250, virtual false, abstract: false, final false
  inline void SpawnBtsCharacters(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* btsCharacterPrefabToSpawn, bool useAlternativeMaterial);

  /// @brief Method Activate, addr 0xe2e778, size 0xa8, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0xe2e820, size 0x1d0, virtual true, abstract: false, final false
  inline void Deactivate();

  /// @brief Method DestroyCharactersDelayed, addr 0xe2ea74, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DestroyCharactersDelayed();

  /// @brief Method DestroyCharactersAndStopAnimations, addr 0xe2e9f0, size 0x84, virtual false, abstract: false, final false
  inline void DestroyCharactersAndStopAnimations();

  static inline ::GlobalNamespace::BtsResultsEnvironmentController* New_ctor();

  /// @brief Method .ctor, addr 0xe2ebf0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BtsResultsEnvironmentController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BtsResultsEnvironmentController(BtsResultsEnvironmentController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BtsResultsEnvironmentController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BtsResultsEnvironmentController(BtsResultsEnvironmentController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BtsResultsEnvironmentController();

public:
  /// @brief Field _btsCharacterAnimationWrapper, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____btsCharacterAnimationWrapper;

  /// @brief Field _btsCharacterDataModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterDataModel> ____btsCharacterDataModel;

  /// @brief Field _btsCharactersResultsAppearPlayableDirector, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____btsCharactersResultsAppearPlayableDirector;

  /// @brief Field _resultPlacesWithAnimations, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
           ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>
      ____resultPlacesWithAnimations;

  /// @brief Field _handles, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ____handles;

  /// @brief Field kCharacterDisplayEventType value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::BasicBeatmapEventType const kCharacterDisplayEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BtsResultsEnvironmentController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BtsResultsEnvironmentController, ____btsCharacterAnimationWrapper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BtsResultsEnvironmentController, ____btsCharacterDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BtsResultsEnvironmentController, ____btsCharactersResultsAppearPlayableDirector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BtsResultsEnvironmentController, ____resultPlacesWithAnimations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BtsResultsEnvironmentController, ____handles) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BtsResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BtsResultsEnvironmentController*, "", "BtsResultsEnvironmentController");
NEED_NO_BOX(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*, "", "BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation");
NEED_NO_BOX(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__13*, "", "BtsResultsEnvironmentController/<DestroyCharactersDelayed>d__13");
