#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Component)
namespace System::ComponentModel {
class IComponent;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class Component;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Component);
// Type: System.ComponentModel::Component
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9469))
// CS Name: ::System.ComponentModel::Component*
class CORDL_TYPE Component : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field site, offset 0x18, size 0x8
  __declspec(property(get = __get_site, put = __set_site))::System::ComponentModel::ISite* site;

  /// @brief Field events, offset 0x20, size 0x8
  __declspec(property(get = __get_events, put = __set_events))::System::ComponentModel::EventHandlerList* events;

  /// @brief Field EventDisposed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EventDisposed, put = setStaticF_EventDisposed))::System::Object* EventDisposed;

  __declspec(property(get = get_CanRaiseEvents)) bool CanRaiseEvents;

  __declspec(property(get = get_CanRaiseEventsInternal)) bool CanRaiseEventsInternal;

  __declspec(property(get = get_Site))::System::ComponentModel::ISite* Site;

  __declspec(property(get = get_DesignMode)) bool DesignMode;

  /// @brief Convert operator to "::System::ComponentModel::IComponent"
  constexpr operator ::System::ComponentModel::IComponent*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::ComponentModel::ISite*& __get_site();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISite*> const& __get_site() const;

  constexpr void __set_site(::System::ComponentModel::ISite* value);

  constexpr ::System::ComponentModel::EventHandlerList*& __get_events();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::EventHandlerList*> const& __get_events() const;

  constexpr void __set_events(::System::ComponentModel::EventHandlerList* value);

  static inline void setStaticF_EventDisposed(::System::Object* value);

  static inline ::System::Object* getStaticF_EventDisposed();

  /// @brief Method Finalize addr 0x2919cf0 size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method get_CanRaiseEvents addr 0x2919d90 size 0x8 virtual true final false
  inline bool get_CanRaiseEvents();

  /// @brief Method get_CanRaiseEventsInternal addr 0x2919d98 size 0xc virtual false final false
  inline bool get_CanRaiseEventsInternal();

  /// @brief Method get_Site addr 0x2919da4 size 0x8 virtual true final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Method Dispose addr 0x2919dac size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2919e18 size 0x304 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method GetService addr 0x291a11c size 0xb4 virtual true final false
  inline ::System::Object* GetService(::System::Type* service);

  /// @brief Method get_DesignMode addr 0x291a1d0 size 0xb0 virtual false final false
  inline bool get_DesignMode();

  /// @brief Method ToString addr 0x291a280 size 0x130 virtual true final false
  inline ::StringW ToString();

  static inline ::System::ComponentModel::Component* New_ctor();

  /// @brief Method .ctor addr 0x291a3b0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Component(Component&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Component(Component const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Component();

public:
  /// @brief Field site, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ISite* ___site;

  /// @brief Field events, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::EventHandlerList* ___events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Component, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::Component);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Component*, "System.ComponentModel", "Component");
