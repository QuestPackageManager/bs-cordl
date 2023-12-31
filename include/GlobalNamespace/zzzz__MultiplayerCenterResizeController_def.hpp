#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerCenterResizeController)
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerCenterResizeController);
// Type: ::MultiplayerCenterResizeController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5193))
// CS Name: ::MultiplayerCenterResizeController*
class CORDL_TYPE MultiplayerCenterResizeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _platformWidth, offset 0x18, size 0x4
  __declspec(property(get = __get__platformWidth, put = __set__platformWidth)) float_t _platformWidth;

  /// @brief Field _layoutProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__layoutProvider, put = __set__layoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _layoutProvider;

  /// @brief Field edgeDistanceFromCenterWasCalculatedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_edgeDistanceFromCenterWasCalculatedEvent, put = __set_edgeDistanceFromCenterWasCalculatedEvent))::System::Action_1<float_t>* edgeDistanceFromCenterWasCalculatedEvent;

  /// @brief Field <isEdgeDistanceFromCenterCalculated>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__isEdgeDistanceFromCenterCalculated_k__BackingField,
                      put = __set__isEdgeDistanceFromCenterCalculated_k__BackingField)) bool _isEdgeDistanceFromCenterCalculated_k__BackingField;

  /// @brief Field <edgeDistanceFromCenter>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__edgeDistanceFromCenter_k__BackingField, put = __set__edgeDistanceFromCenter_k__BackingField)) float_t _edgeDistanceFromCenter_k__BackingField;

  __declspec(property(get = get_isEdgeDistanceFromCenterCalculated, put = set_isEdgeDistanceFromCenterCalculated)) bool isEdgeDistanceFromCenterCalculated;

  __declspec(property(get = get_edgeDistanceFromCenter, put = set_edgeDistanceFromCenter)) float_t edgeDistanceFromCenter;

  constexpr float_t& __get__platformWidth();

  constexpr float_t const& __get__platformWidth() const;

  constexpr void __set__platformWidth(float_t value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__layoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__layoutProvider() const;

  constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::System::Action_1<float_t>*& __get_edgeDistanceFromCenterWasCalculatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_edgeDistanceFromCenterWasCalculatedEvent() const;

  constexpr void __set_edgeDistanceFromCenterWasCalculatedEvent(::System::Action_1<float_t>* value);

  constexpr bool& __get__isEdgeDistanceFromCenterCalculated_k__BackingField();

  constexpr bool const& __get__isEdgeDistanceFromCenterCalculated_k__BackingField() const;

  constexpr void __set__isEdgeDistanceFromCenterCalculated_k__BackingField(bool value);

  constexpr float_t& __get__edgeDistanceFromCenter_k__BackingField();

  constexpr float_t const& __get__edgeDistanceFromCenter_k__BackingField() const;

  constexpr void __set__edgeDistanceFromCenter_k__BackingField(float_t value);

  /// @brief Method add_edgeDistanceFromCenterWasCalculatedEvent, addr 0x2245524, size 0xb0, virtual false, abstract: false, final false
  inline void add_edgeDistanceFromCenterWasCalculatedEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_edgeDistanceFromCenterWasCalculatedEvent, addr 0x22455d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_edgeDistanceFromCenterWasCalculatedEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_isEdgeDistanceFromCenterCalculated, addr 0x2245684, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEdgeDistanceFromCenterCalculated();

  /// @brief Method set_isEdgeDistanceFromCenterCalculated, addr 0x224568c, size 0xc, virtual false, abstract: false, final false
  inline void set_isEdgeDistanceFromCenterCalculated(bool value);

  /// @brief Method get_edgeDistanceFromCenter, addr 0x2245698, size 0x8, virtual false, abstract: false, final false
  inline float_t get_edgeDistanceFromCenter();

  /// @brief Method set_edgeDistanceFromCenter, addr 0x22456a0, size 0x8, virtual false, abstract: false, final false
  inline void set_edgeDistanceFromCenter(float_t value);

  /// @brief Method Start, addr 0x22456a8, size 0xa4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2245874, size 0x94, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandlePlayersLayoutWasCalculated, addr 0x224574c, size 0x78, virtual false, abstract: false, final false
  inline void HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout layout, int32_t numberOfPlayers);

  static inline ::GlobalNamespace::MultiplayerCenterResizeController* New_ctor();

  /// @brief Method .ctor, addr 0x22459b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterResizeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerCenterResizeController(MultiplayerCenterResizeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterResizeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerCenterResizeController(MultiplayerCenterResizeController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerCenterResizeController();

public:
  /// @brief Field _platformWidth, offset: 0x18, size: 0x4, def value: None
  float_t ____platformWidth;

  /// @brief Field _layoutProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____layoutProvider;

  /// @brief Field edgeDistanceFromCenterWasCalculatedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___edgeDistanceFromCenterWasCalculatedEvent;

  /// @brief Field <isEdgeDistanceFromCenterCalculated>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isEdgeDistanceFromCenterCalculated_k__BackingField;

  /// @brief Field <edgeDistanceFromCenter>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____edgeDistanceFromCenter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerCenterResizeController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterResizeController, ____platformWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterResizeController, ____layoutProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterResizeController, ___edgeDistanceFromCenterWasCalculatedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterResizeController, ____isEdgeDistanceFromCenterCalculated_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerCenterResizeController, ____edgeDistanceFromCenter_k__BackingField) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerCenterResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCenterResizeController*, "", "MultiplayerCenterResizeController");
