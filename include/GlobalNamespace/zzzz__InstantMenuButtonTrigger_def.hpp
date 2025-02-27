#pragma once
// IWYU pragma private; include "GlobalNamespace/InstantMenuButtonTrigger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IMenuButtonTrigger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
CORDL_MODULE_EXPORT(InstantMenuButtonTrigger)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class InstantMenuButtonTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InstantMenuButtonTrigger);
// Dependencies IMenuButtonTrigger, System.Object, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: InstantMenuButtonTrigger
class CORDL_TYPE InstantMenuButtonTrigger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _vrPlatformHelper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field menuButtonTriggeredEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_menuButtonTriggeredEvent, put = __cordl_internal_set_menuButtonTriggeredEvent)) ::System::Action* menuButtonTriggeredEvent;

  /// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
  constexpr operator ::GlobalNamespace::IMenuButtonTrigger*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  static inline ::GlobalNamespace::InstantMenuButtonTrigger* New_ctor();

  /// @brief Method Tick, addr 0x3bb8fbc, size 0xcc, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action* const& __cordl_internal_get_menuButtonTriggeredEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_menuButtonTriggeredEvent();

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_menuButtonTriggeredEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3bb9088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_menuButtonTriggeredEvent, addr 0x3bb8e84, size 0x9c, virtual true, abstract: false, final true
  inline void add_menuButtonTriggeredEvent(::System::Action* value);

  /// @brief Convert to "::GlobalNamespace::IMenuButtonTrigger"
  constexpr ::GlobalNamespace::IMenuButtonTrigger* i___GlobalNamespace__IMenuButtonTrigger() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_menuButtonTriggeredEvent, addr 0x3bb8f20, size 0x9c, virtual true, abstract: false, final true
  inline void remove_menuButtonTriggeredEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantMenuButtonTrigger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstantMenuButtonTrigger(InstantMenuButtonTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstantMenuButtonTrigger(InstantMenuButtonTrigger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4432 };

  /// @brief Field _vrPlatformHelper, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field menuButtonTriggeredEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___menuButtonTriggeredEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstantMenuButtonTrigger, ____vrPlatformHelper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstantMenuButtonTrigger, ___menuButtonTriggeredEvent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InstantMenuButtonTrigger, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InstantMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstantMenuButtonTrigger*, "", "InstantMenuButtonTrigger");
