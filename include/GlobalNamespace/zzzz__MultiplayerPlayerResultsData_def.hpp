#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerResultsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerResultsData)
namespace GlobalNamespace {
class IBeatSaberConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayerResultsData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPlayerResultsData
class CORDL_TYPE MultiplayerPlayerResultsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field badge, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_badge, put = __cordl_internal_set_badge)) ::GlobalNamespace::MultiplayerBadgeAwardData* badge;

  /// @brief Field connectedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayer, put = __cordl_internal_set_connectedPlayer)) ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer;

  /// @brief Field multiplayerLevelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerLevelCompletionResults,
                      put = __cordl_internal_set_multiplayerLevelCompletionResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x363fe1c, size 0x1dc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::GlobalNamespace::MultiplayerPlayerResultsData* New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                          ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults);

  constexpr ::GlobalNamespace::MultiplayerBadgeAwardData* const& __cordl_internal_get_badge() const;

  constexpr ::GlobalNamespace::MultiplayerBadgeAwardData*& __cordl_internal_get_badge();

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& __cordl_internal_get_connectedPlayer() const;

  constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& __cordl_internal_get_connectedPlayer();

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* const& __cordl_internal_get_multiplayerLevelCompletionResults() const;

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& __cordl_internal_get_multiplayerLevelCompletionResults();

  constexpr void __cordl_internal_set_badge(::GlobalNamespace::MultiplayerBadgeAwardData* value);

  constexpr void __cordl_internal_set_connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value);

  constexpr void __cordl_internal_set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults* value);

  /// @brief Method .ctor, addr 0x363fe14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerResultsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayerResultsData(MultiplayerPlayerResultsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayerResultsData(MultiplayerPlayerResultsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15094 };

  /// @brief Field connectedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberConnectedPlayer* ___connectedPlayer;

  /// @brief Field multiplayerLevelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelCompletionResults* ___multiplayerLevelCompletionResults;

  /// @brief Field badge, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgeAwardData* ___badge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPlayerResultsData, ___connectedPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayerResultsData, ___multiplayerLevelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayerResultsData, ___badge) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerResultsData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerResultsData*, "", "MultiplayerPlayerResultsData");
