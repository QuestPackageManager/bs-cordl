#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerResultsData)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsData);
// Type: ::MultiplayerResultsData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerResultsData*
class CORDL_TYPE MultiplayerResultsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _allPlayersSortedData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__allPlayersSortedData,
                      put = __cordl_internal_set__allPlayersSortedData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* _allPlayersSortedData;

  /// @brief Field _gameId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameId, put = __cordl_internal_set__gameId))::StringW _gameId;

  /// @brief Field _localPlayerResultData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayerResultData, put = __cordl_internal_set__localPlayerResultData))::GlobalNamespace::MultiplayerPlayerResultsData* _localPlayerResultData;

  /// @brief Field _otherPlayersData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__otherPlayersData,
                      put = __cordl_internal_set__otherPlayersData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* _otherPlayersData;

  __declspec(property(get = get_allPlayersSortedData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* allPlayersSortedData;

  __declspec(property(get = get_gameId))::StringW gameId;

  __declspec(property(get = get_localPlayerResultData))::GlobalNamespace::MultiplayerPlayerResultsData* localPlayerResultData;

  __declspec(property(get = get_otherPlayersData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* otherPlayersData;

  static inline ::GlobalNamespace::MultiplayerResultsData*
  New_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
           ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
           ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& __cordl_internal_get__allPlayersSortedData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const&
  __cordl_internal_get__allPlayersSortedData() const;

  constexpr ::StringW const& __cordl_internal_get__gameId() const;

  constexpr ::StringW& __cordl_internal_get__gameId();

  constexpr ::GlobalNamespace::MultiplayerPlayerResultsData*& __cordl_internal_get__localPlayerResultData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayerResultsData*> const& __cordl_internal_get__localPlayerResultData() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& __cordl_internal_get__otherPlayersData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const&
  __cordl_internal_get__otherPlayersData() const;

  constexpr void __cordl_internal_set__allPlayersSortedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value);

  constexpr void __cordl_internal_set__gameId(::StringW value);

  constexpr void __cordl_internal_set__localPlayerResultData(::GlobalNamespace::MultiplayerPlayerResultsData* value);

  constexpr void __cordl_internal_set__otherPlayersData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value);

  /// @brief Method .ctor, addr 0x14d6d14, size 0x548, virtual false, abstract: false, final false
  inline void _ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
                    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
                    ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method get_allPlayersSortedData, addr 0x14d6d0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_allPlayersSortedData();

  /// @brief Method get_gameId, addr 0x14d6cf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_gameId();

  /// @brief Method get_localPlayerResultData, addr 0x14d6cfc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerPlayerResultsData* get_localPlayerResultData();

  /// @brief Method get_otherPlayersData, addr 0x14d6d04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_otherPlayersData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsData(MultiplayerResultsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsData(MultiplayerResultsData const&) = delete;

  /// @brief Field _gameId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____gameId;

  /// @brief Field _localPlayerResultData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayerResultsData* ____localPlayerResultData;

  /// @brief Field _otherPlayersData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* ____otherPlayersData;

  /// @brief Field _allPlayersSortedData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* ____allPlayersSortedData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsData, ____gameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsData, ____localPlayerResultData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsData, ____otherPlayersData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsData, ____allPlayersSortedData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsData*, "", "MultiplayerResultsData");
