#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterDataModel)
namespace GlobalNamespace {
class __BTSCharacterDataModel__PrefabWithId;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__AnimationClipWithId;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__AnimationClipWithId;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__PrefabWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterDataModel);
MARK_REF_PTR_T(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId);
MARK_REF_PTR_T(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId);
// Type: ::PrefabWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3963))
// CS Name: ::BTSCharacterDataModel::PrefabWithId*
class CORDL_TYPE __BTSCharacterDataModel__PrefabWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _prefabAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __get__prefabAssetReference, put = __set__prefabAssetReference))::UnityEngine::AddressableAssets::AssetReference* _prefabAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_prefabAssetReference))::UnityEngine::AddressableAssets::AssetReference* prefabAssetReference;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __get__prefabAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __get__prefabAssetReference() const;

  constexpr void __set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method get_id addr 0x2219ac4 size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method get_prefabAssetReference addr 0x2219acc size 0x8 virtual false final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_prefabAssetReference();

  static inline ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* New_ctor();

  /// @brief Method .ctor addr 0x2219ad4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__PrefabWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSCharacterDataModel__PrefabWithId(__BTSCharacterDataModel__PrefabWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__PrefabWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSCharacterDataModel__PrefabWithId(__BTSCharacterDataModel__PrefabWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSCharacterDataModel__PrefabWithId();

public:
  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _prefabAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____prefabAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AnimationClipWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3964))
// CS Name: ::BTSCharacterDataModel::AnimationClipWithId*
class CORDL_TYPE __BTSCharacterDataModel__AnimationClipWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _animationClipAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __get__animationClipAssetReference, put = __set__animationClipAssetReference))::UnityEngine::AddressableAssets::AssetReference* _animationClipAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_animationClipAssetReference))::UnityEngine::AddressableAssets::AssetReference* animationClipAssetReference;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __get__animationClipAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __get__animationClipAssetReference() const;

  constexpr void __set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method get_id addr 0x2219adc size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method get_animationClipAssetReference addr 0x2219ae4 size 0x8 virtual false final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_animationClipAssetReference();

  static inline ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId* New_ctor();

  /// @brief Method .ctor addr 0x2219aec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__AnimationClipWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSCharacterDataModel__AnimationClipWithId(__BTSCharacterDataModel__AnimationClipWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__AnimationClipWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSCharacterDataModel__AnimationClipWithId(__BTSCharacterDataModel__AnimationClipWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSCharacterDataModel__AnimationClipWithId();

public:
  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _animationClipAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____animationClipAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BTSCharacterDataModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3965))
// CS Name: ::BTSCharacterDataModel*
class CORDL_TYPE BTSCharacterDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationClipWithId = ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId;

  using PrefabWithId = ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId;

  /// @brief Field _prefabsWithIds, offset 0x18, size 0x8
  __declspec(
      property(get = __get__prefabsWithIds,
               put = __set__prefabsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> _prefabsWithIds;

  /// @brief Field _animationClipsWithIds, offset 0x20, size 0x8
  __declspec(property(get = __get__animationClipsWithIds,
                      put = __set__animationClipsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,
                                                                   ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> _animationClipsWithIds;

  __declspec(property(get = get_prefabsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> prefabsWithIds;

  __declspec(property(get = get_animationClipsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,
                                                                ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> animationClipsWithIds;

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>& __get__prefabsWithIds();

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> const& __get__prefabsWithIds() const;

  constexpr void __set__prefabsWithIds(::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>& __get__animationClipsWithIds();

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> const&
  __get__animationClipsWithIds() const;

  constexpr void
  __set__animationClipsWithIds(::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> value);

  /// @brief Method get_prefabsWithIds addr 0x2219aac size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> get_prefabsWithIds();

  /// @brief Method get_animationClipsWithIds addr 0x2219ab4 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> get_animationClipsWithIds();

  static inline ::GlobalNamespace::BTSCharacterDataModel* New_ctor();

  /// @brief Method .ctor addr 0x2219abc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterDataModel(BTSCharacterDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterDataModel(BTSCharacterDataModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterDataModel();

public:
  /// @brief Field _prefabsWithIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> ____prefabsWithIds;

  /// @brief Field _animationClipsWithIds, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> ____animationClipsWithIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterDataModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel*, "", "BTSCharacterDataModel");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, "", "BTSCharacterDataModel/AnimationClipWithId");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, "", "BTSCharacterDataModel/PrefabWithId");
