#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleControllerBase)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleControllerBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleControllerBase);
// Type: ::ObstacleControllerBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4793))
// CS Name: ::ObstacleControllerBase*
class CORDL_TYPE ObstacleControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field didInitEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_didInitEvent, put = __set_didInitEvent))::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* didInitEvent;

  /// @brief Field didStartDissolvingEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didStartDissolvingEvent, put = __set_didStartDissolvingEvent))::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>* didStartDissolvingEvent;

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*& __get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*> const& __get_didInitEvent() const;

  constexpr void __set_didInitEvent(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>*& __get_didStartDissolvingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>*> const& __get_didStartDissolvingEvent() const;

  constexpr void __set_didStartDissolvingEvent(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>* value);

  /// @brief Method add_didInitEvent addr 0x238e160 size 0xb0 virtual false final false
  inline void add_didInitEvent(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* value);

  /// @brief Method remove_didInitEvent addr 0x238e210 size 0xb0 virtual false final false
  inline void remove_didInitEvent(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* value);

  /// @brief Method add_didStartDissolvingEvent addr 0x238cff0 size 0xb0 virtual false final false
  inline void add_didStartDissolvingEvent(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>* value);

  /// @brief Method remove_didStartDissolvingEvent addr 0x238ca3c size 0xb0 virtual false final false
  inline void remove_didStartDissolvingEvent(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>* value);

  /// @brief Method InvokeDidInitEvent addr 0x238d0a0 size 0x1c virtual false final false
  inline void InvokeDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController);

  /// @brief Method InvokeDidStartDissolvingEvent addr 0x238d0dc size 0x1c virtual false final false
  inline void InvokeDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration);

  static inline ::GlobalNamespace::ObstacleControllerBase* New_ctor();

  /// @brief Method .ctor addr 0x238d100 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleControllerBase(ObstacleControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleControllerBase(ObstacleControllerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleControllerBase();

public:
  /// @brief Field didInitEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* ___didInitEvent;

  /// @brief Field didStartDissolvingEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float_t>* ___didStartDissolvingEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleControllerBase, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleControllerBase*, "", "ObstacleControllerBase");
