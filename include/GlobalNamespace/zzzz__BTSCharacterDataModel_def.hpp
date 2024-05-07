#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterDataModel)
namespace GlobalNamespace {
class __BTSCharacterDataModel__AnimationClipWithId;
}
namespace GlobalNamespace {
class __BTSCharacterDataModel__PrefabWithId;
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
// CS Name: ::BTSCharacterDataModel::PrefabWithId*
class CORDL_TYPE __BTSCharacterDataModel__PrefabWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  /// @brief Field _prefabAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabAssetReference, put = __cordl_internal_set__prefabAssetReference))::UnityEngine::AddressableAssets::AssetReference* _prefabAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_prefabAssetReference))::UnityEngine::AddressableAssets::AssetReference* prefabAssetReference;

  static inline ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* New_ctor();

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__prefabAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __cordl_internal_get__prefabAssetReference() const;

  constexpr void __cordl_internal_set__id(int32_t value);

  constexpr void __cordl_internal_set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method .ctor, addr 0x10534a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x1053494, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_prefabAssetReference, addr 0x105349c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_prefabAssetReference();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSCharacterDataModel__PrefabWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__PrefabWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSCharacterDataModel__PrefabWithId(__BTSCharacterDataModel__PrefabWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__PrefabWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSCharacterDataModel__PrefabWithId(__BTSCharacterDataModel__PrefabWithId const&) = delete;

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _prefabAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____prefabAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId, ____prefabAssetReference) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AnimationClipWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSCharacterDataModel::AnimationClipWithId*
class CORDL_TYPE __BTSCharacterDataModel__AnimationClipWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _animationClipAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animationClipAssetReference,
                      put = __cordl_internal_set__animationClipAssetReference))::UnityEngine::AddressableAssets::AssetReference* _animationClipAssetReference;

  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  __declspec(property(get = get_animationClipAssetReference))::UnityEngine::AddressableAssets::AssetReference* animationClipAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  static inline ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__animationClipAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __cordl_internal_get__animationClipAssetReference() const;

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr void __cordl_internal_set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  constexpr void __cordl_internal_set__id(int32_t value);

  /// @brief Method .ctor, addr 0x10534bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationClipAssetReference, addr 0x10534b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_animationClipAssetReference();

  /// @brief Method get_id, addr 0x10534ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSCharacterDataModel__AnimationClipWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__AnimationClipWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSCharacterDataModel__AnimationClipWithId(__BTSCharacterDataModel__AnimationClipWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterDataModel__AnimationClipWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSCharacterDataModel__AnimationClipWithId(__BTSCharacterDataModel__AnimationClipWithId const&) = delete;

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _animationClipAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____animationClipAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId, ____animationClipAssetReference) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BTSCharacterDataModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSCharacterDataModel*
class CORDL_TYPE BTSCharacterDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationClipWithId = ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId;

  using PrefabWithId = ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId;

  /// @brief Field _animationClipsWithIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animationClipsWithIds,
                      put = __cordl_internal_set__animationClipsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,
                                                                                  ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> _animationClipsWithIds;

  /// @brief Field _prefabsWithIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabsWithIds,
                      put = __cordl_internal_set__prefabsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*,
                                                                           ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> _prefabsWithIds;

  __declspec(property(get = get_animationClipsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*,
                                                                ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> animationClipsWithIds;

  __declspec(property(get = get_prefabsWithIds))::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> prefabsWithIds;

  static inline ::GlobalNamespace::BTSCharacterDataModel* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> const&
  __cordl_internal_get__animationClipsWithIds() const;

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>&
  __cordl_internal_get__animationClipsWithIds();

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> const&
  __cordl_internal_get__prefabsWithIds() const;

  constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>& __cordl_internal_get__prefabsWithIds();

  constexpr void __cordl_internal_set__animationClipsWithIds(
      ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> value);

  constexpr void __cordl_internal_set__prefabsWithIds(::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> value);

  /// @brief Method .ctor, addr 0x105348c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationClipsWithIds, addr 0x1053484, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> get_animationClipsWithIds();

  /// @brief Method get_prefabsWithIds, addr 0x105347c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> get_prefabsWithIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterDataModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterDataModel(BTSCharacterDataModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterDataModel(BTSCharacterDataModel const&) = delete;

  /// @brief Field _prefabsWithIds, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> ____prefabsWithIds;

  /// @brief Field _animationClipsWithIds, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> ____animationClipsWithIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterDataModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel, ____prefabsWithIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel, ____animationClipsWithIds) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel*, "", "BTSCharacterDataModel");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, "", "BTSCharacterDataModel/AnimationClipWithId");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, "", "BTSCharacterDataModel/PrefabWithId");
