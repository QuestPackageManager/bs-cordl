#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerPlacement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerPlacement)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
class MultiplayerPlayerPlacement___c;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayerPlacement;
}
namespace GlobalNamespace {
class MultiplayerPlayerPlacement___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayerPlacement);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayerPlacement___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPlayerPlacement/<>c
class CORDL_TYPE MultiplayerPlayerPlacement___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerPlayerPlacement___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* __9__4_0;

  static inline ::GlobalNamespace::MultiplayerPlayerPlacement___c* New_ctor();

  /// @brief Method <SortPlayers>b__4_0, addr 0x3bdf044, size 0x128, virtual false, abstract: false, final false
  inline int32_t _SortPlayers_b__4_0(::GlobalNamespace::IConnectedPlayer* p1, ::GlobalNamespace::IConnectedPlayer* p2);

  /// @brief Method .ctor, addr 0x3bdf03c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerPlayerPlacement___c* getStaticF___9();

  static inline ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerPlayerPlacement___c* value);

  static inline void setStaticF___9__4_0(::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerPlacement___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayerPlacement___c(MultiplayerPlayerPlacement___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayerPlacement___c(MultiplayerPlayerPlacement___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4600 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerPlacement___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPlayerPlacement
class CORDL_TYPE MultiplayerPlayerPlacement : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::MultiplayerPlayerPlacement___c;

  /// @brief Method GetAngleBetweenPlayersWithEvenAdjustment, addr 0x3bd8fd0, size 0x2c, virtual false, abstract: false, final false
  static inline float_t GetAngleBetweenPlayersWithEvenAdjustment(int32_t numberOfPlayers, ::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method GetLocalPlayerIndex, addr 0x3bded58, size 0x288, virtual false, abstract: false, final false
  static inline int32_t GetLocalPlayerIndex(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>* otherPlayers, ::GlobalNamespace::IConnectedPlayer* localPlayer);

  /// @brief Method GetOuterCirclePositionAngleForPlayer, addr 0x3bd9040, size 0x14, virtual false, abstract: false, final false
  static inline float_t GetOuterCirclePositionAngleForPlayer(int32_t playerIndex, int32_t localPlayerIndex, float_t angleBetweenPlayers);

  /// @brief Method GetOuterCircleRadius, addr 0x3bd8ffc, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetOuterCircleRadius(float_t angleBetweenPlayers, float_t innerCircleRadius);

  /// @brief Method GetPlayerWorldPosition, addr 0x3bd9054, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPlayerWorldPosition(float_t outerCircleRadius, float_t outerCirclePositionAngle, ::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method SortPlayers, addr 0x3bdec60, size 0xf8, virtual false, abstract: false, final false
  static inline void SortPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* players);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerPlacement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayerPlacement(MultiplayerPlayerPlacement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayerPlacement(MultiplayerPlayerPlacement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerPlacement, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerPlacement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerPlacement*, "", "MultiplayerPlayerPlacement");
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerPlacement___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerPlacement___c*, "", "MultiplayerPlayerPlacement/<>c");
