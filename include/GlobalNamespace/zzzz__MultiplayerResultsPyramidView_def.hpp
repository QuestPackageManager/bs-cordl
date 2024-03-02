#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerResultsPyramidView)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsPyramidView);
// Type: ::MultiplayerResultsPyramidView
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerResultsPyramidView*
class CORDL_TYPE MultiplayerResultsPyramidView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _anyResultsAvatar, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__anyResultsAvatar, put = __cordl_internal_set__anyResultsAvatar))::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> _anyResultsAvatar;

  /// @brief Field _avatarsDictionary, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__avatarsDictionary,
      put = __cordl_internal_set__avatarsDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>* _avatarsDictionary;

  /// @brief Field _avatarsFactory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarsFactory, put = __cordl_internal_set__avatarsFactory))::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* _avatarsFactory;

  /// @brief Field _badgeTimelines, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__badgeTimelines,
                      put = __cordl_internal_set__badgeTimelines))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _badgeTimelines;

  /// @brief Field _evenCountOffset, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__evenCountOffset, put = __cordl_internal_set__evenCountOffset)) float_t _evenCountOffset;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__multiplayerOffsetByLocalPlayerPosition,
               put = __cordl_internal_set__multiplayerOffsetByLocalPlayerPosition))::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> _multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _resultAvatarDirectors, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__resultAvatarDirectors,
                      put = __cordl_internal_set__resultAvatarDirectors))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _resultAvatarDirectors;

  /// @brief Field _spawnPoints, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnPoints,
                      put = __cordl_internal_set__spawnPoints))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> _spawnPoints;

  /// @brief Field _spawnPointsParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnPointsParent, put = __cordl_internal_set__spawnPointsParent))::UnityW<::UnityEngine::Transform> _spawnPointsParent;

  __declspec(property(get = get_badgeTimelines))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> badgeTimelines;

  __declspec(property(get = get_resultAvatarDirectors))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> resultAvatarDirectors;

  static inline ::GlobalNamespace::MultiplayerResultsPyramidView* New_ctor();

  /// @brief Method PrespawnAvatars, addr 0x2483d80, size 0x400, virtual false, abstract: false, final false
  inline void PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* activePlayers);

  /// @brief Method SetupResults, addr 0x2483748, size 0x614, virtual false, abstract: false, final false
  inline void SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, ::UnityEngine::Transform* badgeStartTransform,
                           ::UnityEngine::Transform* badgeMidTransform);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> const& __cordl_internal_get__anyResultsAvatar() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>& __cordl_internal_get__anyResultsAvatar();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>*& __cordl_internal_get__avatarsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>*> const&
  __cordl_internal_get__avatarsDictionary() const;

  constexpr ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*& __cordl_internal_get__avatarsFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*> const& __cordl_internal_get__avatarsFactory() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__badgeTimelines() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__badgeTimelines();

  constexpr float_t const& __cordl_internal_get__evenCountOffset() const;

  constexpr float_t& __cordl_internal_get__evenCountOffset();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> const& __cordl_internal_get__multiplayerOffsetByLocalPlayerPosition() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition>& __cordl_internal_get__multiplayerOffsetByLocalPlayerPosition();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__resultAvatarDirectors() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__resultAvatarDirectors();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__spawnPoints() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__spawnPoints();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__spawnPointsParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__spawnPointsParent();

  constexpr void __cordl_internal_set__anyResultsAvatar(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value);

  constexpr void __cordl_internal_set__avatarsDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>* value);

  constexpr void __cordl_internal_set__avatarsFactory(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* value);

  constexpr void __cordl_internal_set__badgeTimelines(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__evenCountOffset(float_t value);

  constexpr void __cordl_internal_set__multiplayerOffsetByLocalPlayerPosition(::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> value);

  constexpr void __cordl_internal_set__resultAvatarDirectors(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__spawnPoints(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set__spawnPointsParent(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x24862f4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_badgeTimelines, addr 0x24858e4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> get_badgeTimelines();

  /// @brief Method get_resultAvatarDirectors, addr 0x24858dc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> get_resultAvatarDirectors();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidView(MultiplayerResultsPyramidView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidView(MultiplayerResultsPyramidView const&) = delete;

  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition> ____multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _spawnPoints, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____spawnPoints;

  /// @brief Field _spawnPointsParent, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____spawnPointsParent;

  /// @brief Field _evenCountOffset, offset: 0x30, size: 0x4, def value: None
  float_t ____evenCountOffset;

  /// @brief Field _avatarsFactory, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* ____avatarsFactory;

  /// @brief Field _avatarsDictionary, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>>* ____avatarsDictionary;

  /// @brief Field _resultAvatarDirectors, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____resultAvatarDirectors;

  /// @brief Field _badgeTimelines, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____badgeTimelines;

  /// @brief Field _anyResultsAvatar, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> ____anyResultsAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidView, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____multiplayerOffsetByLocalPlayerPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____spawnPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____spawnPointsParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____evenCountOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____avatarsFactory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____avatarsDictionary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____resultAvatarDirectors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____badgeTimelines) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsPyramidView, ____anyResultsAvatar) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidView*, "", "MultiplayerResultsPyramidView");
