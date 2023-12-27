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
class __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11;
}
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__PrefabWithId;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class BTSCharacterResultAnimationController;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class BtsResultsEnvironmentController;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;
}
namespace GlobalNamespace {
class __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BtsResultsEnvironmentController);
MARK_REF_PTR_T(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation);
MARK_REF_PTR_T(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11);
// Type: ::BTSResultCharacterPlaceWithAnimation
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3975))
// CS Name: ::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*
class CORDL_TYPE __BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation : public ::System::Object {
public:
  // Declarations
  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _placeTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__placeTransform, put = __set__placeTransform))::UnityEngine::Transform* _placeTransform;

  /// @brief Field _animationController, offset 0x20, size 0x8
  __declspec(property(get = __get__animationController, put = __set__animationController))::GlobalNamespace::BTSCharacterResultAnimationController* _animationController;

  /// @brief Field _animationClip, offset 0x28, size 0x8
  __declspec(property(get = __get__animationClip, put = __set__animationClip))::UnityEngine::AnimationClip* _animationClip;

  /// @brief Field _btsCharacter, offset 0x30, size 0x8
  __declspec(property(get = __get__btsCharacter, put = __set__btsCharacter))::GlobalNamespace::BTSCharacter* _btsCharacter;

  /// @brief Field _btsCharacterAssetReference, offset 0x38, size 0x8
  __declspec(property(get = __get__btsCharacterAssetReference, put = __set__btsCharacterAssetReference))::UnityEngine::AddressableAssets::AssetReference* _btsCharacterAssetReference;

  __declspec(property(get = get_name))::StringW name;

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::UnityEngine::Transform*& __get__placeTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__placeTransform() const;

  constexpr void __set__placeTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::BTSCharacterResultAnimationController*& __get__animationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterResultAnimationController*> const& __get__animationController() const;

  constexpr void __set__animationController(::GlobalNamespace::BTSCharacterResultAnimationController* value);

  constexpr ::UnityEngine::AnimationClip*& __get__animationClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__animationClip() const;

  constexpr void __set__animationClip(::UnityEngine::AnimationClip* value);

  constexpr ::GlobalNamespace::BTSCharacter*& __get__btsCharacter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacter*> const& __get__btsCharacter() const;

  constexpr void __set__btsCharacter(::GlobalNamespace::BTSCharacter* value);

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __get__btsCharacterAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __get__btsCharacterAssetReference() const;

  constexpr void __set__btsCharacterAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method get_name addr 0x221d040 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method Clean addr 0x221ced8 size 0xec virtual false final false
  inline void Clean();

  /// @brief Method SetCharacter addr 0x221ca80 size 0xcc virtual false final false
  inline void SetCharacter(::UnityEngine::AddressableAssets::AssetReference* assetReference, ::GlobalNamespace::BTSCharacter* btsCharacter, bool alternativeMaterial);

  static inline ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation* New_ctor();

  /// @brief Method .ctor addr 0x221d048 size 0x8 virtual false final false
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
  ::UnityEngine::Transform* ____placeTransform;

  /// @brief Field _animationController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterResultAnimationController* ____animationController;

  /// @brief Field _animationClip, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____animationClip;

  /// @brief Field _btsCharacter, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacter* ____btsCharacter;

  /// @brief Field _btsCharacterAssetReference, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____btsCharacterAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DestroyCharactersDelayed>d__11
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3976))
// CS Name: ::BtsResultsEnvironmentController::<DestroyCharactersDelayed>d__11*
class CORDL_TYPE __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::BtsResultsEnvironmentController* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::BtsResultsEnvironmentController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BtsResultsEnvironmentController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::BtsResultsEnvironmentController* value);

  static inline ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x221ceb0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x221d050 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x221d054 size 0xc0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x221d114 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x221d11c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x221d15c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11(__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BtsResultsEnvironmentController* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BtsResultsEnvironmentController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4687)), TypeDefinitionIndex(TypeDefinitionIndex(14724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3977))
// CS Name: ::BtsResultsEnvironmentController*
class CORDL_TYPE BtsResultsEnvironmentController : public ::GlobalNamespace::BaseResultsEnvironmentController {
public:
  // Declarations
  using _DestroyCharactersDelayed_d__11 = ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11;

  using BTSResultCharacterPlaceWithAnimation = ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation;

  /// @brief Field _btsCharacterAnimationWrapper, offset 0x18, size 0x8
  __declspec(property(get = __get__btsCharacterAnimationWrapper, put = __set__btsCharacterAnimationWrapper))::UnityEngine::GameObject* _btsCharacterAnimationWrapper;

  /// @brief Field _btsCharacterDataModel, offset 0x20, size 0x8
  __declspec(property(get = __get__btsCharacterDataModel, put = __set__btsCharacterDataModel))::GlobalNamespace::BTSCharacterDataModel* _btsCharacterDataModel;

  /// @brief Field _btsCharactersResultsAppearPlayableDirector, offset 0x28, size 0x8
  __declspec(property(get = __get__btsCharactersResultsAppearPlayableDirector,
                      put = __set__btsCharactersResultsAppearPlayableDirector))::UnityEngine::Playables::PlayableDirector* _btsCharactersResultsAppearPlayableDirector;

  /// @brief Field _resultPlacesWithAnimations, offset 0x30, size 0x8
  __declspec(
      property(get = __get__resultPlacesWithAnimations,
               put = __set__resultPlacesWithAnimations))::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                                                                 ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*> _resultPlacesWithAnimations;

  /// @brief Field _handles, offset 0x38, size 0x8
  __declspec(property(get = __get__handles, put = __set__handles))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* _handles;

  constexpr ::UnityEngine::GameObject*& __get__btsCharacterAnimationWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__btsCharacterAnimationWrapper() const;

  constexpr void __set__btsCharacterAnimationWrapper(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::BTSCharacterDataModel*& __get__btsCharacterDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSCharacterDataModel*> const& __get__btsCharacterDataModel() const;

  constexpr void __set__btsCharacterDataModel(::GlobalNamespace::BTSCharacterDataModel* value);

  constexpr ::UnityEngine::Playables::PlayableDirector*& __get__btsCharactersResultsAppearPlayableDirector();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> const& __get__btsCharactersResultsAppearPlayableDirector() const;

  constexpr void __set__btsCharactersResultsAppearPlayableDirector(::UnityEngine::Playables::PlayableDirector* value);

  constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                     ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>&
  __get__resultPlacesWithAnimations();

  constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                     ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*> const&
  __get__resultPlacesWithAnimations() const;

  constexpr void __set__resultPlacesWithAnimations(::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                                                            ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>
                                                       value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __get__handles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __get__handles() const;

  constexpr void __set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  /// @brief Method Setup addr 0x221c34c size 0x4e4 virtual true final false
  inline void Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method SpawnBtsCharacters addr 0x221c830 size 0x250 virtual false final false
  inline void SpawnBtsCharacters(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* btsCharacterPrefabToSpawn, bool useAlternativeMaterial);

  /// @brief Method Activate addr 0x221cb4c size 0xa8 virtual true final false
  inline void Activate(bool immediately);

  /// @brief Method Deactivate addr 0x221cbf4 size 0x1d0 virtual true final false
  inline void Deactivate(bool immediately);

  /// @brief Method DestroyCharactersDelayed addr 0x221ce48 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* DestroyCharactersDelayed();

  /// @brief Method DestroyCharactersAndStopAnimations addr 0x221cdc4 size 0x84 virtual false final false
  inline void DestroyCharactersAndStopAnimations();

  static inline ::GlobalNamespace::BtsResultsEnvironmentController* New_ctor();

  /// @brief Method .ctor addr 0x221cfc4 size 0x7c virtual false final false
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
  ::UnityEngine::GameObject* ____btsCharacterAnimationWrapper;

  /// @brief Field _btsCharacterDataModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSCharacterDataModel* ____btsCharacterDataModel;

  /// @brief Field _btsCharactersResultsAppearPlayableDirector, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableDirector* ____btsCharactersResultsAppearPlayableDirector;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BtsResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BtsResultsEnvironmentController*, "", "BtsResultsEnvironmentController");
NEED_NO_BOX(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*, "", "BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation");
NEED_NO_BOX(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*, "", "BtsResultsEnvironmentController/<DestroyCharactersDelayed>d__11");
