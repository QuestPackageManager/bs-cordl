#pragma once
// IWYU pragma private; include "GlobalNamespace/EventBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class EventBinder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventBinder);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EventBinder
class CORDL_TYPE EventBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _unsubscribes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unsubscribes, put = __cordl_internal_set__unsubscribes)) ::System::Collections::Generic::List_1<::System::Action*>* _unsubscribes;

  /// @brief Method Bind, addr 0x39c2fa8, size 0xc8, virtual false, abstract: false, final false
  inline void Bind(::System::Action* subscribe, ::System::Action* unsubscribe);

  /// @brief Method ClearAllBindings, addr 0x39c3070, size 0x18c, virtual false, abstract: false, final false
  inline void ClearAllBindings();

  static inline ::GlobalNamespace::EventBinder* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get__unsubscribes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get__unsubscribes();

  constexpr void __cordl_internal_set__unsubscribes(::System::Collections::Generic::List_1<::System::Action*>* value);

  /// @brief Method .ctor, addr 0x39c31fc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBinder(EventBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBinder(EventBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16415 };

  /// @brief Field _unsubscribes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Action*>* ____unsubscribes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventBinder, ____unsubscribes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventBinder, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventBinder*, "", "EventBinder");
