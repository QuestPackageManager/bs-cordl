#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TriggerChecker)
namespace UnityEngine {
class Collider;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TriggerChecker);
// Type: ::TriggerChecker
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13907))
// CS Name: ::TriggerChecker*
class CORDL_TYPE TriggerChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field TriggerCheckerOnEnterEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_TriggerCheckerOnEnterEvent, put = __set_TriggerCheckerOnEnterEvent))::System::Action* TriggerCheckerOnEnterEvent;

  /// @brief Field TriggerCheckerOnExitEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_TriggerCheckerOnExitEvent, put = __set_TriggerCheckerOnExitEvent))::System::Action* TriggerCheckerOnExitEvent;

  /// @brief Field TriggerCheckerOnStayEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_TriggerCheckerOnStayEvent, put = __set_TriggerCheckerOnStayEvent))::System::Action* TriggerCheckerOnStayEvent;

  constexpr ::System::Action*& __get_TriggerCheckerOnEnterEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_TriggerCheckerOnEnterEvent() const;

  constexpr void __set_TriggerCheckerOnEnterEvent(::System::Action* value);

  constexpr ::System::Action*& __get_TriggerCheckerOnExitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_TriggerCheckerOnExitEvent() const;

  constexpr void __set_TriggerCheckerOnExitEvent(::System::Action* value);

  constexpr ::System::Action*& __get_TriggerCheckerOnStayEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_TriggerCheckerOnStayEvent() const;

  constexpr void __set_TriggerCheckerOnStayEvent(::System::Action* value);

  /// @brief Method OnTriggerEnter addr 0x1f9adfc size 0x1c virtual false final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerExit addr 0x1f9ae18 size 0x1c virtual false final false
  inline void OnTriggerExit(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerStay addr 0x1f9ae34 size 0x1c virtual false final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  static inline ::GlobalNamespace::TriggerChecker* New_ctor();

  /// @brief Method .ctor addr 0x1f9ae50 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriggerChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerChecker(TriggerChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerChecker(TriggerChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerChecker();

public:
  /// @brief Field TriggerCheckerOnEnterEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___TriggerCheckerOnEnterEvent;

  /// @brief Field TriggerCheckerOnExitEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___TriggerCheckerOnExitEvent;

  /// @brief Field TriggerCheckerOnStayEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___TriggerCheckerOnStayEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TriggerChecker, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerChecker, ___TriggerCheckerOnEnterEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerChecker, ___TriggerCheckerOnExitEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerChecker, ___TriggerCheckerOnStayEvent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TriggerChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TriggerChecker*, "", "TriggerChecker");
