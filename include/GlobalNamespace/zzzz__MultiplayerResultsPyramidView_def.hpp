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
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __MultiplayerResultsPyramidViewAvatar__Factory;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5243))
// CS Name: ::MultiplayerResultsPyramidView*
class CORDL_TYPE MultiplayerResultsPyramidView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset 0x18, size 0x8
  __declspec(property(get = __get__multiplayerOffsetByLocalPlayerPosition,
                      put = __set__multiplayerOffsetByLocalPlayerPosition))::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* _multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _spawnPoints, offset 0x20, size 0x8
  __declspec(property(get = __get__spawnPoints, put = __set__spawnPoints))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _spawnPoints;

  /// @brief Field _spawnPointsParent, offset 0x28, size 0x8
  __declspec(property(get = __get__spawnPointsParent, put = __set__spawnPointsParent))::UnityEngine::Transform* _spawnPointsParent;

  /// @brief Field _evenCountOffset, offset 0x30, size 0x4
  __declspec(property(get = __get__evenCountOffset, put = __set__evenCountOffset)) float_t _evenCountOffset;

  /// @brief Field _avatarsFactory, offset 0x38, size 0x8
  __declspec(property(get = __get__avatarsFactory, put = __set__avatarsFactory))::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* _avatarsFactory;

  /// @brief Field _avatarsDictionary, offset 0x40, size 0x8
  __declspec(property(get = __get__avatarsDictionary,
                      put = __set__avatarsDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* _avatarsDictionary;

  /// @brief Field _resultAvatarDirectors, offset 0x48, size 0x8
  __declspec(property(get = __get__resultAvatarDirectors, put = __set__resultAvatarDirectors))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _resultAvatarDirectors;

  /// @brief Field _badgeTimelines, offset 0x50, size 0x8
  __declspec(property(get = __get__badgeTimelines, put = __set__badgeTimelines))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _badgeTimelines;

  /// @brief Field _anyResultsAvatar, offset 0x58, size 0x8
  __declspec(property(get = __get__anyResultsAvatar, put = __set__anyResultsAvatar))::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* _anyResultsAvatar;

  __declspec(property(get = get_resultAvatarDirectors))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> resultAvatarDirectors;

  __declspec(property(get = get_badgeTimelines))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> badgeTimelines;

  constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& __get__multiplayerOffsetByLocalPlayerPosition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> const& __get__multiplayerOffsetByLocalPlayerPosition() const;

  constexpr void __set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__spawnPoints();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__spawnPoints() const;

  constexpr void __set__spawnPoints(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::UnityEngine::Transform*& __get__spawnPointsParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__spawnPointsParent() const;

  constexpr void __set__spawnPointsParent(::UnityEngine::Transform* value);

  constexpr float_t& __get__evenCountOffset();

  constexpr float_t const& __get__evenCountOffset() const;

  constexpr void __set__evenCountOffset(float_t value);

  constexpr ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*& __get__avatarsFactory();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*> const& __get__avatarsFactory() const;

  constexpr void __set__avatarsFactory(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*& __get__avatarsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*> const&
  __get__avatarsDictionary() const;

  constexpr void __set__avatarsDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__resultAvatarDirectors();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__resultAvatarDirectors() const;

  constexpr void __set__resultAvatarDirectors(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__badgeTimelines();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__badgeTimelines() const;

  constexpr void __set__badgeTimelines(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*& __get__anyResultsAvatar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> const& __get__anyResultsAvatar() const;

  constexpr void __set__anyResultsAvatar(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* value);

  /// @brief Method get_resultAvatarDirectors addr 0x2257e30 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_resultAvatarDirectors();

  /// @brief Method get_badgeTimelines addr 0x2257e38 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> get_badgeTimelines();

  /// @brief Method PrespawnAvatars addr 0x22560d8 size 0x400 virtual false final false
  inline void PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* activePlayers);

  /// @brief Method SetupResults addr 0x2255aa0 size 0x614 virtual false final false
  inline void SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, ::UnityEngine::Transform* badgeStartTransform,
                           ::UnityEngine::Transform* badgeMidTransform);

  static inline ::GlobalNamespace::MultiplayerResultsPyramidView* New_ctor();

  /// @brief Method .ctor addr 0x2258820 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsPyramidView(MultiplayerResultsPyramidView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsPyramidView(MultiplayerResultsPyramidView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsPyramidView();

public:
  /// @brief Field _multiplayerOffsetByLocalPlayerPosition, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* ____multiplayerOffsetByLocalPlayerPosition;

  /// @brief Field _spawnPoints, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____spawnPoints;

  /// @brief Field _spawnPointsParent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____spawnPointsParent;

  /// @brief Field _evenCountOffset, offset: 0x30, size: 0x4, def value: None
  float_t ____evenCountOffset;

  /// @brief Field _avatarsFactory, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* ____avatarsFactory;

  /// @brief Field _avatarsDictionary, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* ____avatarsDictionary;

  /// @brief Field _resultAvatarDirectors, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____resultAvatarDirectors;

  /// @brief Field _badgeTimelines, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____badgeTimelines;

  /// @brief Field _anyResultsAvatar, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* ____anyResultsAvatar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsPyramidView, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsPyramidView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsPyramidView*, "", "MultiplayerResultsPyramidView");
