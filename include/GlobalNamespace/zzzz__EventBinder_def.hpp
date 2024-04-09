#pragma once
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
// Type: ::EventBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EventBinder*
class CORDL_TYPE EventBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _unsubscribes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unsubscribes, put = __cordl_internal_set__unsubscribes))::System::Collections::Generic::List_1<::System::Action*>* _unsubscribes;

  /// @brief Method Bind, addr 0x23d558c, size 0xcc, virtual false, abstract: false, final false
  inline void Bind(::System::Action* subscribe, ::System::Action* unsubscribe);

  /// @brief Method ClearAllBindings, addr 0x23d5658, size 0x18c, virtual false, abstract: false, final false
  inline void ClearAllBindings();

  static inline ::GlobalNamespace::EventBinder* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get__unsubscribes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Action*>*> const& __cordl_internal_get__unsubscribes() const;

  constexpr void __cordl_internal_set__unsubscribes(::System::Collections::Generic::List_1<::System::Action*>* value);

  /// @brief Method .ctor, addr 0x23d57e4, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Field _unsubscribes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Action*>* ____unsubscribes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EventBinder, ____unsubscribes) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventBinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventBinder*, "", "EventBinder");
