#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LeaderboardEntries)
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntry;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class LeaderboardEntries;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries);
// Type: BeatSaberAPI.DataTransferObjects::LeaderboardEntries
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6178))
// CS Name: ::BeatSaberAPI.DataTransferObjects::LeaderboardEntries*
class CORDL_TYPE LeaderboardEntries : public ::System::Object {
public:
  // Declarations
  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __get_entries,
                      put = __set_entries))::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> entries;

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*>& __get_entries();

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> const& __get_entries() const;

  constexpr void __set_entries(::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> value);

  static inline ::BeatSaberAPI::DataTransferObjects::LeaderboardEntries* New_ctor();

  /// @brief Method .ctor addr 0x21e8acc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntries", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntries(LeaderboardEntries&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntries", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntries(LeaderboardEntries const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntries();

public:
  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Array<::BeatSaberAPI::DataTransferObjects::LeaderboardEntry*>*> ___entries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries, ___entries) == 0x10, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntries");
