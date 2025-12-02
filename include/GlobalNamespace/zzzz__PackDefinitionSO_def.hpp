#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackDefinitionSO)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class LeaderboardIdsSO;
}
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
namespace GlobalNamespace {
class PackDefinitionSO_Credits;
}
namespace GlobalNamespace {
class PackDefinitionSO_LeaderboardIds;
}
namespace GlobalNamespace {
class PackDefinitionSO_LevelProductPacks;
}
namespace GlobalNamespace {
struct PackDefinitionSO_Tags;
}
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct PackDefinitionSO_Tags;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PackDefinitionSO_Credits;
}
namespace GlobalNamespace {
class PackDefinitionSO_LeaderboardIds;
}
namespace GlobalNamespace {
class PackDefinitionSO_LevelProductPacks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PackDefinitionSO_Tags);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionSO);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionSO_Credits);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionSO_LeaderboardIds);
MARK_REF_PTR_T(::GlobalNamespace::PackDefinitionSO_LevelProductPacks);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PackDefinitionSO/Tags
struct CORDL_TYPE PackDefinitionSO_Tags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PackDefinitionSO_Tags_Unwrapped
  enum struct __PackDefinitionSO_Tags_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x0),
    __E_BuiltIn = static_cast<int32_t>(0x1),
    __E_DLC = static_cast<int32_t>(0x2),
    __E_InDevelopment = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PackDefinitionSO_Tags_Unwrapped() const noexcept {
    return static_cast<__PackDefinitionSO_Tags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO_Tags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PackDefinitionSO_Tags(int32_t value__) noexcept;

  /// @brief Field BuiltIn value: I32(1)
  static ::GlobalNamespace::PackDefinitionSO_Tags const BuiltIn;

  /// @brief Field DLC value: I32(2)
  static ::GlobalNamespace::PackDefinitionSO_Tags const DLC;

  /// @brief Field Hidden value: I32(0)
  static ::GlobalNamespace::PackDefinitionSO_Tags const Hidden;

  /// @brief Field InDevelopment value: I32(4)
  static ::GlobalNamespace::PackDefinitionSO_Tags const InDevelopment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_Tags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO_Tags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionSO/LeaderboardIds
class CORDL_TYPE PackDefinitionSO_LeaderboardIds : public ::System::Object {
public:
  // Declarations
  /// @brief Field _questLeaderboardIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__questLeaderboardIds, put = __cordl_internal_set__questLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _questLeaderboardIds;

  /// @brief Field _riftLeaderboardIds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__riftLeaderboardIds, put = __cordl_internal_set__riftLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _riftLeaderboardIds;

  /// @brief Field _steamLeaderboardIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLeaderboardIds, put = __cordl_internal_set__steamLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> _steamLeaderboardIds;

  __declspec(property(get = get_questLeaderboardIds, put = set_questLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> questLeaderboardIds;

  __declspec(property(get = get_riftLeaderboardIds, put = set_riftLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> riftLeaderboardIds;

  __declspec(property(get = get_steamLeaderboardIds, put = set_steamLeaderboardIds)) ::UnityW<::GlobalNamespace::LeaderboardIdsSO> steamLeaderboardIds;

  static inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__questLeaderboardIds() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__questLeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__riftLeaderboardIds() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__riftLeaderboardIds();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& __cordl_internal_get__steamLeaderboardIds() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& __cordl_internal_get__steamLeaderboardIds();

  constexpr void __cordl_internal_set__questLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set__riftLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  constexpr void __cordl_internal_set__steamLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value);

  /// @brief Method .ctor, addr 0x36051ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_questLeaderboardIds, addr 0x36051cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_questLeaderboardIds();

  /// @brief Method get_riftLeaderboardIds, addr 0x36051bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_riftLeaderboardIds();

  /// @brief Method get_steamLeaderboardIds, addr 0x36051dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> get_steamLeaderboardIds();

  /// @brief Method set_questLeaderboardIds, addr 0x36051d4, size 0x8, virtual false, abstract: false, final false
  inline void set_questLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

  /// @brief Method set_riftLeaderboardIds, addr 0x36051c4, size 0x8, virtual false, abstract: false, final false
  inline void set_riftLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

  /// @brief Method set_steamLeaderboardIds, addr 0x36051e4, size 0x8, virtual false, abstract: false, final false
  inline void set_steamLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO_LeaderboardIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_LeaderboardIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionSO_LeaderboardIds(PackDefinitionSO_LeaderboardIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_LeaderboardIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionSO_LeaderboardIds(PackDefinitionSO_LeaderboardIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14976 };

  /// @brief Field _riftLeaderboardIds, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____riftLeaderboardIds;

  /// @brief Field _questLeaderboardIds, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____questLeaderboardIds;

  /// @brief Field _steamLeaderboardIds, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardIdsSO> ____steamLeaderboardIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_LeaderboardIds, ____riftLeaderboardIds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_LeaderboardIds, ____questLeaderboardIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_LeaderboardIds, ____steamLeaderboardIds) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO_LeaderboardIds, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionSO/LevelProductPacks
class CORDL_TYPE PackDefinitionSO_LevelProductPacks : public ::System::Object {
public:
  // Declarations
  /// @brief Field _oculusLevelProductPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusLevelProductPacks, put = __cordl_internal_set__oculusLevelProductPacks)) ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>
      _oculusLevelProductPacks;

  /// @brief Field _steamLevelProductPacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__steamLevelProductPacks, put = __cordl_internal_set__steamLevelProductPacks)) ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>
      _steamLevelProductPacks;

  __declspec(property(get = get_oculusLevelProductPacks, put = set_oculusLevelProductPacks)) ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> oculusLevelProductPacks;

  __declspec(property(get = get_steamLevelProductPacks, put = set_steamLevelProductPacks)) ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> steamLevelProductPacks;

  static inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& __cordl_internal_get__oculusLevelProductPacks() const;

  constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& __cordl_internal_get__oculusLevelProductPacks();

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& __cordl_internal_get__steamLevelProductPacks() const;

  constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& __cordl_internal_get__steamLevelProductPacks();

  constexpr void __cordl_internal_set__oculusLevelProductPacks(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value);

  constexpr void __cordl_internal_set__steamLevelProductPacks(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value);

  /// @brief Method .ctor, addr 0x3605210, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_oculusLevelProductPacks, addr 0x3605200, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> get_oculusLevelProductPacks();

  /// @brief Method get_steamLevelProductPacks, addr 0x36051f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> get_steamLevelProductPacks();

  /// @brief Method set_oculusLevelProductPacks, addr 0x3605208, size 0x8, virtual false, abstract: false, final false
  inline void set_oculusLevelProductPacks(::GlobalNamespace::OculusLevelProductPacksSO* value);

  /// @brief Method set_steamLevelProductPacks, addr 0x36051f8, size 0x8, virtual false, abstract: false, final false
  inline void set_steamLevelProductPacks(::GlobalNamespace::SteamLevelProductPacksSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO_LevelProductPacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_LevelProductPacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionSO_LevelProductPacks(PackDefinitionSO_LevelProductPacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_LevelProductPacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionSO_LevelProductPacks(PackDefinitionSO_LevelProductPacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14977 };

  /// @brief Field _steamLevelProductPacks, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> ____steamLevelProductPacks;

  /// @brief Field _oculusLevelProductPacks, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> ____oculusLevelProductPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_LevelProductPacks, ____steamLevelProductPacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_LevelProductPacks, ____oculusLevelProductPacks) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO_LevelProductPacks, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionSO/Credits
class CORDL_TYPE PackDefinitionSO_Credits : public ::System::Object {
public:
  // Declarations
  /// @brief Field creditsPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_creditsPrefab, put = __cordl_internal_set_creditsPrefab)) ::UnityEngine::AddressableAssets::AssetReferenceGameObject* creditsPrefab;

  /// @brief Field order, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  static inline ::GlobalNamespace::PackDefinitionSO_Credits* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* const& __cordl_internal_get_creditsPrefab() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& __cordl_internal_get_creditsPrefab();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_creditsPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method .ctor, addr 0x3605214, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO_Credits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_Credits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionSO_Credits(PackDefinitionSO_Credits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO_Credits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionSO_Credits(PackDefinitionSO_Credits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14978 };

  /// @brief Field order, offset: 0x10, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field creditsPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* ___creditsPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_Credits, ___order) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO_Credits, ___creditsPrefab) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO_Credits, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackDefinitionSO::Tags, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackDefinitionSO
class CORDL_TYPE PackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using Credits = ::GlobalNamespace::PackDefinitionSO_Credits;

  using LeaderboardIds = ::GlobalNamespace::PackDefinitionSO_LeaderboardIds;

  using LevelProductPacks = ::GlobalNamespace::PackDefinitionSO_LevelProductPacks;

  using Tags = ::GlobalNamespace::PackDefinitionSO_Tags;

  /// @brief Field _beatmapLevelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack)) ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> _beatmapLevelPack;

  /// @brief Field _credits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__credits, put = __cordl_internal_set__credits)) ::GlobalNamespace::PackDefinitionSO_Credits* _credits;

  /// @brief Field _leaderboardIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardIds, put = __cordl_internal_set__leaderboardIds)) ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* _leaderboardIds;

  /// @brief Field _levelProductPacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductPacks, put = __cordl_internal_set__levelProductPacks)) ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* _levelProductPacks;

  /// @brief Field _order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order)) int32_t _order;

  /// @brief Field _packPromoInfoReference, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__packPromoInfoReference,
                      put = __cordl_internal_set__packPromoInfoReference)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* _packPromoInfoReference;

  /// @brief Field _perceivedLoudnessPerLevel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__perceivedLoudnessPerLevel, put = __cordl_internal_set__perceivedLoudnessPerLevel)) ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>
      _perceivedLoudnessPerLevel;

  /// @brief Field _tags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags)) ::GlobalNamespace::PackDefinitionSO_Tags _tags;

  __declspec(property(get = get_content, put = set_content)) ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> content;

  __declspec(property(get = get_credits)) ::GlobalNamespace::PackDefinitionSO_Credits* credits;

  __declspec(property(get = get_hasCredits)) bool hasCredits;

  __declspec(property(get = get_isBuiltIn)) bool isBuiltIn;

  __declspec(property(get = get_isBuiltInContent)) bool isBuiltInContent;

  __declspec(property(get = get_isDLC)) bool isDLC;

  __declspec(property(get = get_isEntitlementCheckSkipped)) bool isEntitlementCheckSkipped;

  __declspec(property(get = get_isHidden)) bool isHidden;

  __declspec(property(get = get_isInDevelopment)) bool isInDevelopment;

  __declspec(property(get = get_isOST)) bool isOST;

  __declspec(property(get = get_leaderboardIds)) ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* leaderboardIds;

  __declspec(property(get = get_levelProductPacks, put = set_levelProductPacks)) ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* levelProductPacks;

  __declspec(property(get = get_order, put = set_order)) int32_t order;

  __declspec(property(get = get_packPromoInfoReference)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* packPromoInfoReference;

  __declspec(property(get = get_perceivedLoudness, put = set_perceivedLoudness)) ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> perceivedLoudness;

  __declspec(property(get = get_tags, put = set_tags)) ::GlobalNamespace::PackDefinitionSO_Tags tags;

  static inline ::GlobalNamespace::PackDefinitionSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get__beatmapLevelPack();

  constexpr ::GlobalNamespace::PackDefinitionSO_Credits* const& __cordl_internal_get__credits() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Credits*& __cordl_internal_get__credits();

  constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* const& __cordl_internal_get__leaderboardIds() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds*& __cordl_internal_get__leaderboardIds();

  constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* const& __cordl_internal_get__levelProductPacks() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks*& __cordl_internal_get__levelProductPacks();

  constexpr int32_t const& __cordl_internal_get__order() const;

  constexpr int32_t& __cordl_internal_get__order();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* const& __cordl_internal_get__packPromoInfoReference() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*& __cordl_internal_get__packPromoInfoReference();

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> const& __cordl_internal_get__perceivedLoudnessPerLevel() const;

  constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>& __cordl_internal_get__perceivedLoudnessPerLevel();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get__tags() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get__tags();

  constexpr void __cordl_internal_set__beatmapLevelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr void __cordl_internal_set__credits(::GlobalNamespace::PackDefinitionSO_Credits* value);

  constexpr void __cordl_internal_set__leaderboardIds(::GlobalNamespace::PackDefinitionSO_LeaderboardIds* value);

  constexpr void __cordl_internal_set__levelProductPacks(::GlobalNamespace::PackDefinitionSO_LevelProductPacks* value);

  constexpr void __cordl_internal_set__order(int32_t value);

  constexpr void __cordl_internal_set__packPromoInfoReference(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* value);

  constexpr void __cordl_internal_set__perceivedLoudnessPerLevel(::UnityW<::GlobalNamespace::PerceivedLoudnessSO> value);

  constexpr void __cordl_internal_set__tags(::GlobalNamespace::PackDefinitionSO_Tags value);

  /// @brief Method .ctor, addr 0x36051b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_content, addr 0x36050a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> get_content();

  /// @brief Method get_credits, addr 0x36051ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PackDefinitionSO_Credits* get_credits();

  /// @brief Method get_hasCredits, addr 0x3605164, size 0x38, virtual false, abstract: false, final false
  inline bool get_hasCredits();

  /// @brief Method get_isBuiltIn, addr 0x36050f4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isBuiltIn();

  /// @brief Method get_isBuiltInContent, addr 0x360510c, size 0x14, virtual false, abstract: false, final false
  inline bool get_isBuiltInContent();

  /// @brief Method get_isDLC, addr 0x3605100, size 0xc, virtual false, abstract: false, final false
  inline bool get_isDLC();

  /// @brief Method get_isEntitlementCheckSkipped, addr 0x3605134, size 0x14, virtual false, abstract: false, final false
  inline bool get_isEntitlementCheckSkipped();

  /// @brief Method get_isHidden, addr 0x3605148, size 0x10, virtual false, abstract: false, final false
  inline bool get_isHidden();

  /// @brief Method get_isInDevelopment, addr 0x3605158, size 0xc, virtual false, abstract: false, final false
  inline bool get_isInDevelopment();

  /// @brief Method get_isOST, addr 0x3605120, size 0x14, virtual false, abstract: false, final false
  inline bool get_isOST();

  /// @brief Method get_leaderboardIds, addr 0x36050e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* get_leaderboardIds();

  /// @brief Method get_levelProductPacks, addr 0x36050d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* get_levelProductPacks();

  /// @brief Method get_order, addr 0x36050b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_order();

  /// @brief Method get_packPromoInfoReference, addr 0x36050ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* get_packPromoInfoReference();

  /// @brief Method get_perceivedLoudness, addr 0x360519c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> get_perceivedLoudness();

  /// @brief Method get_tags, addr 0x36050c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PackDefinitionSO_Tags get_tags();

  /// @brief Method set_content, addr 0x36050ac, size 0x8, virtual false, abstract: false, final false
  inline void set_content(::GlobalNamespace::BeatmapLevelPackSO* value);

  /// @brief Method set_levelProductPacks, addr 0x36050dc, size 0x8, virtual false, abstract: false, final false
  inline void set_levelProductPacks(::GlobalNamespace::PackDefinitionSO_LevelProductPacks* value);

  /// @brief Method set_order, addr 0x36050bc, size 0x8, virtual false, abstract: false, final false
  inline void set_order(int32_t value);

  /// @brief Method set_perceivedLoudness, addr 0x36051a4, size 0x8, virtual false, abstract: false, final false
  inline void set_perceivedLoudness(::GlobalNamespace::PerceivedLoudnessSO* value);

  /// @brief Method set_tags, addr 0x36050cc, size 0x8, virtual false, abstract: false, final false
  inline void set_tags(::GlobalNamespace::PackDefinitionSO_Tags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackDefinitionSO(PackDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackDefinitionSO(PackDefinitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14979 };

  /// @brief Field _beatmapLevelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ____beatmapLevelPack;

  /// @brief Field _order, offset: 0x20, size: 0x4, def value: None
  int32_t ____order;

  /// @brief Field _leaderboardIds, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* ____leaderboardIds;

  /// @brief Field _levelProductPacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* ____levelProductPacks;

  /// @brief Field _tags, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ____tags;

  /// @brief Field _packPromoInfoReference, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* ____packPromoInfoReference;

  /// @brief Field _perceivedLoudnessPerLevel, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> ____perceivedLoudnessPerLevel;

  /// @brief Field _credits, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PackDefinitionSO_Credits* ____credits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____beatmapLevelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____leaderboardIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____levelProductPacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____tags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____packPromoInfoReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____perceivedLoudnessPerLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackDefinitionSO, ____credits) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackDefinitionSO, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO_Tags, "", "PackDefinitionSO/Tags");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO*, "", "PackDefinitionSO");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionSO_Credits);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO_Credits*, "", "PackDefinitionSO/Credits");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionSO_LeaderboardIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO_LeaderboardIds*, "", "PackDefinitionSO/LeaderboardIds");
NEED_NO_BOX(::GlobalNamespace::PackDefinitionSO_LevelProductPacks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackDefinitionSO_LevelProductPacks*, "", "PackDefinitionSO/LevelProductPacks");
