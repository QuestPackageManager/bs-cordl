#pragma once
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
class __MultiplayerPlayerPlacement____c;
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
class __MultiplayerPlayerPlacement____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPlayerPlacement);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerPlayerPlacement____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5234))
// CS Name: ::MultiplayerPlayerPlacement::<>c*
class CORDL_TYPE __MultiplayerPlayerPlacement____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerPlayerPlacement____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* __9__4_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerPlayerPlacement____c* value);

  static inline ::GlobalNamespace::__MultiplayerPlayerPlacement____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* value);

  static inline ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer*>* getStaticF___9__4_0();

  static inline ::GlobalNamespace::__MultiplayerPlayerPlacement____c* New_ctor();

  /// @brief Method .ctor, addr 0x22568c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortPlayers>b__4_0, addr 0x22568d0, size 0x128, virtual false, abstract: false, final false
  inline int32_t _SortPlayers_b__4_0(::GlobalNamespace::IConnectedPlayer* p1, ::GlobalNamespace::IConnectedPlayer* p2);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerPlayerPlacement____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerPlayerPlacement____c(__MultiplayerPlayerPlacement____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerPlayerPlacement____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerPlayerPlacement____c(__MultiplayerPlayerPlacement____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerPlayerPlacement____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerPlayerPlacement____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerPlayerPlacement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5235))
// CS Name: ::MultiplayerPlayerPlacement*
class CORDL_TYPE MultiplayerPlayerPlacement : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MultiplayerPlayerPlacement____c;

  /// @brief Method GetPlayerWorldPosition, addr 0x22518d4, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPlayerWorldPosition(float_t outerCircleRadius, float_t outerCirclePositionAngle, ::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method GetOuterCirclePositionAngleForPlayer, addr 0x22518c4, size 0x10, virtual false, abstract: false, final false
  static inline float_t GetOuterCirclePositionAngleForPlayer(int32_t playerIndex, int32_t localPlayerIndex, float_t angleBetweenPlayers);

  /// @brief Method GetOuterCircleRadius, addr 0x2251880, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetOuterCircleRadius(float_t angleBetweenPlayers, float_t innerCircleRadius);

  /// @brief Method GetAngleBetweenPlayersWithEvenAdjustment, addr 0x2251860, size 0x20, virtual false, abstract: false, final false
  static inline float_t GetAngleBetweenPlayersWithEvenAdjustment(int32_t numberOfPlayers, ::GlobalNamespace::MultiplayerPlayerLayout layout);

  /// @brief Method SortPlayers, addr 0x22564e0, size 0xfc, virtual false, abstract: false, final false
  static inline void SortPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* players);

  /// @brief Method GetLocalPlayerIndex, addr 0x22565dc, size 0x288, virtual false, abstract: false, final false
  static inline int32_t GetLocalPlayerIndex(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer*>* otherPlayers, ::GlobalNamespace::IConnectedPlayer* localPlayer);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPlayerPlacement(MultiplayerPlayerPlacement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPlayerPlacement(MultiplayerPlayerPlacement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerPlacement();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerPlacement, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerPlacement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerPlacement*, "", "MultiplayerPlayerPlacement");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerPlayerPlacement____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerPlayerPlacement____c*, "", "MultiplayerPlayerPlacement/<>c");
