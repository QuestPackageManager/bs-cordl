#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterDataModel)
namespace GlobalNamespace {
class BTSCharacterDataModel_AnimationClipWithId;
}
namespace GlobalNamespace {
class BTSCharacterDataModel_PrefabWithId;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class BTSCharacterDataModel_AnimationClipWithId;
}
namespace GlobalNamespace {
class BTSCharacterDataModel_PrefabWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterDataModel);
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId);
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterDataModel_PrefabWithId);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterDataModel/PrefabWithId
class CORDL_TYPE BTSCharacterDataModel_PrefabWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  /// @brief Field _prefabAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabAssetReference, put = __cordl_internal_set__prefabAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* _prefabAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_prefabAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* prefabAssetReference;

  static inline ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId* New_ctor();

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr ::UnityEngine::AddressableAssets::AssetReference* const& __cordl_internal_get__prefabAssetReference() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__prefabAssetReference();

  constexpr void __cordl_internal_set__id(int32_t value);

  constexpr void __cordl_internal_set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method .ctor, addr 0x2266424, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x2266414, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_prefabAssetReference, addr 0x226641c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_prefabAssetReference();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterDataModel_PrefabWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel_PrefabWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterDataModel_PrefabWithId(BTSCharacterDataModel_PrefabWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel_PrefabWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterDataModel_PrefabWithId(BTSCharacterDataModel_PrefabWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17674 };

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _prefabAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____prefabAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel_PrefabWithId, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel_PrefabWithId, ____prefabAssetReference) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterDataModel/AnimationClipWithId
class CORDL_TYPE BTSCharacterDataModel_AnimationClipWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _animationClipAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animationClipAssetReference,
                      put = __cordl_internal_set__animationClipAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* _animationClipAssetReference;

  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  __declspec(property(get = get_animationClipAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* animationClipAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  static inline ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReference* const& __cordl_internal_get__animationClipAssetReference() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__animationClipAssetReference();

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr void __cordl_internal_set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  constexpr void __cordl_internal_set__id(int32_t value);

  /// @brief Method .ctor, addr 0x226643c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationClipAssetReference, addr 0x2266434, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_animationClipAssetReference();

  /// @brief Method get_id, addr 0x226642c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterDataModel_AnimationClipWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel_AnimationClipWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterDataModel_AnimationClipWithId(BTSCharacterDataModel_AnimationClipWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterDataModel_AnimationClipWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterDataModel_AnimationClipWithId(BTSCharacterDataModel_AnimationClipWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17675 };

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _animationClipAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____animationClipAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId, ____animationClipAssetReference) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterDataModel
class CORDL_TYPE BTSCharacterDataModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationClipWithId = ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId;

  using PrefabWithId = ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId;

  /// @brief Field _animationClipsWithIds, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__animationClipsWithIds,
      put =
          __cordl_internal_set__animationClipsWithIds)) ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*>
      _animationClipsWithIds;

  /// @brief Field _prefabsWithIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabsWithIds,
                      put = __cordl_internal_set__prefabsWithIds)) ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*>
      _prefabsWithIds;

  __declspec(property(get = get_animationClipsWithIds)) ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*>
      animationClipsWithIds;

  __declspec(property(get = get_prefabsWithIds)) ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*> prefabsWithIds;

  static inline ::GlobalNamespace::BTSCharacterDataModel* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*> const&
  __cordl_internal_get__animationClipsWithIds() const;

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*>&
  __cordl_internal_get__animationClipsWithIds();

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*> const& __cordl_internal_get__prefabsWithIds() const;

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*>& __cordl_internal_get__prefabsWithIds();

  constexpr void
  __cordl_internal_set__animationClipsWithIds(::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*> value);

  constexpr void __cordl_internal_set__prefabsWithIds(::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*> value);

  /// @brief Method .ctor, addr 0x226640c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animationClipsWithIds, addr 0x2266404, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*> get_animationClipsWithIds();

  /// @brief Method get_prefabsWithIds, addr 0x22663fc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*> get_prefabsWithIds();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17676 };

  /// @brief Field _prefabsWithIds, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>*> ____prefabsWithIds;

  /// @brief Field _animationClipsWithIds, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, ::Array<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>*> ____animationClipsWithIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel, ____prefabsWithIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterDataModel, ____animationClipsWithIds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterDataModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel*, "", "BTSCharacterDataModel");
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*, "", "BTSCharacterDataModel/AnimationClipWithId");
NEED_NO_BOX(::GlobalNamespace::BTSCharacterDataModel_PrefabWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*, "", "BTSCharacterDataModel/PrefabWithId");
