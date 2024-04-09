#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardUploadData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardUploadData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardUploadData);
// Type: ::LeaderboardUploadData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LeaderboardUploadData*
class CORDL_TYPE LeaderboardUploadData : public ::System::Object {
public:
  // Declarations
  /// @brief Field authorName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_authorName, put = __cordl_internal_set_authorName))::StringW authorName;

  /// @brief Field bpm, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bpm, put = __cordl_internal_set_bpm))::StringW bpm;

  /// @brief Field difficulty, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty))::StringW difficulty;

  /// @brief Field infoHash, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_infoHash, put = __cordl_internal_set_infoHash))::StringW infoHash;

  /// @brief Field leaderboardId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leaderboardId, put = __cordl_internal_set_leaderboardId))::StringW leaderboardId;

  /// @brief Field modifiers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_modifiers, put = __cordl_internal_set_modifiers))::System::Collections::Generic::List_1<::StringW>* modifiers;

  /// @brief Field playerId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId))::StringW playerId;

  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field score, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_score, put = __cordl_internal_set_score))::StringW score;

  /// @brief Field songName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_songName, put = __cordl_internal_set_songName))::StringW songName;

  /// @brief Field songSubName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_songSubName, put = __cordl_internal_set_songSubName))::StringW songSubName;

  static inline ::GlobalNamespace::LeaderboardUploadData* New_ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName,
                                                                   ::StringW authorName, ::StringW bpm, ::StringW difficulty, ::StringW infoHash,
                                                                   ::System::Collections::Generic::List_1<::StringW>* modifiers);

  constexpr ::StringW const& __cordl_internal_get_authorName() const;

  constexpr ::StringW& __cordl_internal_get_authorName();

  constexpr ::StringW const& __cordl_internal_get_bpm() const;

  constexpr ::StringW& __cordl_internal_get_bpm();

  constexpr ::StringW const& __cordl_internal_get_difficulty() const;

  constexpr ::StringW& __cordl_internal_get_difficulty();

  constexpr ::StringW const& __cordl_internal_get_infoHash() const;

  constexpr ::StringW& __cordl_internal_get_infoHash();

  constexpr ::StringW const& __cordl_internal_get_leaderboardId() const;

  constexpr ::StringW& __cordl_internal_get_leaderboardId();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_modifiers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_modifiers() const;

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::StringW const& __cordl_internal_get_score() const;

  constexpr ::StringW& __cordl_internal_get_score();

  constexpr ::StringW const& __cordl_internal_get_songName() const;

  constexpr ::StringW& __cordl_internal_get_songName();

  constexpr ::StringW const& __cordl_internal_get_songSubName() const;

  constexpr ::StringW& __cordl_internal_get_songSubName();

  constexpr void __cordl_internal_set_authorName(::StringW value);

  constexpr void __cordl_internal_set_bpm(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::StringW value);

  constexpr void __cordl_internal_set_infoHash(::StringW value);

  constexpr void __cordl_internal_set_leaderboardId(::StringW value);

  constexpr void __cordl_internal_set_modifiers(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_score(::StringW value);

  constexpr void __cordl_internal_set_songName(::StringW value);

  constexpr void __cordl_internal_set_songSubName(::StringW value);

  /// @brief Method .ctor, addr 0x13ad3fc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName, ::StringW authorName, ::StringW bpm,
                    ::StringW difficulty, ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW>* modifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardUploadData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardUploadData(LeaderboardUploadData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardUploadData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardUploadData(LeaderboardUploadData const&) = delete;

  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field playerId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerId;

  /// @brief Field score, offset: 0x20, size: 0x8, def value: None
  ::StringW ___score;

  /// @brief Field leaderboardId, offset: 0x28, size: 0x8, def value: None
  ::StringW ___leaderboardId;

  /// @brief Field songName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___songName;

  /// @brief Field songSubName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___songSubName;

  /// @brief Field authorName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___authorName;

  /// @brief Field bpm, offset: 0x48, size: 0x8, def value: None
  ::StringW ___bpm;

  /// @brief Field difficulty, offset: 0x50, size: 0x8, def value: None
  ::StringW ___difficulty;

  /// @brief Field infoHash, offset: 0x58, size: 0x8, def value: None
  ::StringW ___infoHash;

  /// @brief Field modifiers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardUploadData, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___playerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___score) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___leaderboardId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___songName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___songSubName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___authorName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___bpm) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___difficulty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___infoHash) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LeaderboardUploadData, ___modifiers) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardUploadData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardUploadData*, "", "LeaderboardUploadData");
