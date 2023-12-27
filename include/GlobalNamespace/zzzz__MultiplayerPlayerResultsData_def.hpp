#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerResultsData)
namespace System {
class IComparable;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
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
// Type: ::MultiplayerPlayerResultsData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5236))
// CS Name: ::MultiplayerPlayerResultsData*
class CORDL_TYPE MultiplayerPlayerResultsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field connectedPlayer, offset 0x10, size 0x8
  __declspec(property(get = __get_connectedPlayer, put = __set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  /// @brief Field multiplayerLevelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __get_multiplayerLevelCompletionResults,
                      put = __set_multiplayerLevelCompletionResults))::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults;

  /// @brief Field badge, offset 0x20, size 0x8
  __declspec(property(get = __get_badge, put = __set_badge))::GlobalNamespace::MultiplayerBadgeAwardData* badge;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get_connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get_connectedPlayer() const;

  constexpr void __set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& __get_multiplayerLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> const& __get_multiplayerLevelCompletionResults() const;

  constexpr void __set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults* value);

  constexpr ::GlobalNamespace::MultiplayerBadgeAwardData*& __get_badge();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBadgeAwardData*> const& __get_badge() const;

  constexpr void __set_badge(::GlobalNamespace::MultiplayerBadgeAwardData* value);

  static inline ::GlobalNamespace::MultiplayerPlayerResultsData* New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                          ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults);

  /// @brief Method .ctor addr 0x22569f8 size 0x2c virtual false final false
  inline void _ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults);

  /// @brief Method CompareTo addr 0x2256a24 size 0x1e0 virtual true final true
  inline int32_t CompareTo(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayerResultsData(MultiplayerPlayerResultsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayerResultsData(MultiplayerPlayerResultsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerResultsData();

public:
  /// @brief Field connectedPlayer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ___connectedPlayer;

  /// @brief Field multiplayerLevelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelCompletionResults* ___multiplayerLevelCompletionResults;

  /// @brief Field badge, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBadgeAwardData* ___badge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerResultsData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerResultsData*, "", "MultiplayerPlayerResultsData");
