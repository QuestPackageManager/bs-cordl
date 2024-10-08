#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleControllerBase.hpp"
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleControllerBase*
class CORDL_TYPE ObstacleControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field didInitEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didInitEvent, put = __cordl_internal_set_didInitEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>* didInitEvent;

  /// @brief Field didStartDissolvingEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartDissolvingEvent,
                      put = __cordl_internal_set_didStartDissolvingEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>* didStartDissolvingEvent;

  /// @brief Method InvokeDidInitEvent, addr 0x3a82064, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController);

  /// @brief Method InvokeDidStartDissolvingEvent, addr 0x3a820a0, size 0x1c, virtual false, abstract: false, final false
  inline void InvokeDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration);

  static inline ::GlobalNamespace::ObstacleControllerBase* New_ctor();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>*& __cordl_internal_get_didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>*> const& __cordl_internal_get_didInitEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>*& __cordl_internal_get_didStartDissolvingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>*> const& __cordl_internal_get_didStartDissolvingEvent() const;

  constexpr void __cordl_internal_set_didInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>* value);

  constexpr void __cordl_internal_set_didStartDissolvingEvent(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>* value);

  /// @brief Method .ctor, addr 0x3a820c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didInitEvent, addr 0x3a8311c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>* value);

  /// @brief Method add_didStartDissolvingEvent, addr 0x3a81fb4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didStartDissolvingEvent(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>* value);

  /// @brief Method remove_didInitEvent, addr 0x3a831cc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>* value);

  /// @brief Method remove_didStartDissolvingEvent, addr 0x3a81b30, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didStartDissolvingEvent(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleControllerBase(ObstacleControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleControllerBase(ObstacleControllerBase const&) = delete;

  /// @brief Field didInitEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleControllerBase>>* ___didInitEvent;

  /// @brief Field didStartDissolvingEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleControllerBase>, float_t>* ___didStartDissolvingEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4131 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleControllerBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleControllerBase, ___didInitEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleControllerBase, ___didStartDissolvingEvent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleControllerBase*, "", "ObstacleControllerBase");
