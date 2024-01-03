#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DelayedMenuButtonTrigger)
namespace Zenject {
class ITickable;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class DelayedMenuButtonTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DelayedMenuButtonTrigger);
// Type: ::DelayedMenuButtonTrigger
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5052))
// CS Name: ::DelayedMenuButtonTrigger*
class CORDL_TYPE DelayedMenuButtonTrigger : public ::System::Object {
public:
  // Declarations
  /// @brief Field menuButtonTriggeredEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_menuButtonTriggeredEvent, put = __set_menuButtonTriggeredEvent))::System::Action* menuButtonTriggeredEvent;

  /// @brief Field _pressDuration, offset 0x18, size 0x4
  __declspec(property(get = __get__pressDuration, put = __set__pressDuration)) float_t _pressDuration;

  /// @brief Field _timer, offset 0x1c, size 0x4
  __declspec(property(get = __get__timer, put = __set__timer)) float_t _timer;

  /// @brief Field _waitingForButtonRelease, offset 0x20, size 0x1
  __declspec(property(get = __get__waitingForButtonRelease, put = __set__waitingForButtonRelease)) bool _waitingForButtonRelease;

  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
  constexpr operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept;

  constexpr ::System::Action*& __get_menuButtonTriggeredEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_menuButtonTriggeredEvent() const;

  constexpr void __set_menuButtonTriggeredEvent(::System::Action* value);

  constexpr float_t& __get__pressDuration();

  constexpr float_t const& __get__pressDuration() const;

  constexpr void __set__pressDuration(float_t value);

  constexpr float_t& __get__timer();

  constexpr float_t const& __get__timer() const;

  constexpr void __set__timer(float_t value);

  constexpr bool& __get__waitingForButtonRelease();

  constexpr bool const& __get__waitingForButtonRelease() const;

  constexpr void __set__waitingForButtonRelease(bool value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method add_menuButtonTriggeredEvent, addr 0x23c3e2c, size 0x9c, virtual true, abstract: false, final true
  inline void add_menuButtonTriggeredEvent(::System::Action* value);

  /// @brief Method remove_menuButtonTriggeredEvent, addr 0x23c3ec8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_menuButtonTriggeredEvent(::System::Action* value);

  /// @brief Method Tick, addr 0x23c3f64, size 0x110, virtual true, abstract: false, final true
  inline void Tick();

  static inline ::GlobalNamespace::DelayedMenuButtonTrigger* New_ctor();

  /// @brief Method .ctor, addr 0x23c4074, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayedMenuButtonTrigger(DelayedMenuButtonTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayedMenuButtonTrigger(DelayedMenuButtonTrigger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayedMenuButtonTrigger();

public:
  /// @brief Field menuButtonTriggeredEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___menuButtonTriggeredEvent;

  /// @brief Field _pressDuration, offset: 0x18, size: 0x4, def value: None
  float_t ____pressDuration;

  /// @brief Field _timer, offset: 0x1c, size: 0x4, def value: None
  float_t ____timer;

  /// @brief Field _waitingForButtonRelease, offset: 0x20, size: 0x1, def value: None
  bool ____waitingForButtonRelease;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DelayedMenuButtonTrigger, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedMenuButtonTrigger, ___menuButtonTriggeredEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedMenuButtonTrigger, ____pressDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedMenuButtonTrigger, ____timer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedMenuButtonTrigger, ____waitingForButtonRelease) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedMenuButtonTrigger, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DelayedMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DelayedMenuButtonTrigger*, "", "DelayedMenuButtonTrigger");
