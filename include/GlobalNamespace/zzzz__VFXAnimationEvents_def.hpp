#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VFXAnimationEvents)
namespace GlobalNamespace {
class __VFXAnimationEvents__VFXAnimationEvent;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class VFXAnimationEvents;
}
namespace GlobalNamespace {
class __VFXAnimationEvents__VFXAnimationEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VFXAnimationEvents);
MARK_REF_PTR_T(::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent);
// Type: ::VFXAnimationEvent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13912))
// CS Name: ::VFXAnimationEvents::VFXAnimationEvent*
class CORDL_TYPE __VFXAnimationEvents__VFXAnimationEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _particleSystems, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystems, put = __set__particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> _particleSystems;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> particleSystems;

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

  constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> value);

  /// @brief Method get_name addr 0x1f9bc58 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method get_particleSystems addr 0x1f9bc60 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> get_particleSystems();

  static inline ::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent* New_ctor();

  /// @brief Method .ctor addr 0x1f9bc68 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VFXAnimationEvents__VFXAnimationEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VFXAnimationEvents__VFXAnimationEvent(__VFXAnimationEvents__VFXAnimationEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VFXAnimationEvents__VFXAnimationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VFXAnimationEvents__VFXAnimationEvent(__VFXAnimationEvents__VFXAnimationEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VFXAnimationEvents__VFXAnimationEvent();

public:
  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _particleSystems, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> ____particleSystems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent, ____particleSystems) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VFXAnimationEvents
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13913))
// CS Name: ::VFXAnimationEvents*
class CORDL_TYPE VFXAnimationEvents : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using VFXAnimationEvent = ::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent;

  /// @brief Field _animation, offset 0x18, size 0x8
  __declspec(property(get = __get__animation, put = __set__animation))::UnityEngine::Animation* _animation;

  /// @brief Field _animationEvents, offset 0x20, size 0x8
  __declspec(property(
      get = __get__animationEvents,
      put = __set__animationEvents))::ArrayW<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, ::Array<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*>*> _animationEvents;

  /// @brief Field animationDidPauseEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_animationDidPauseEvent, put = __set_animationDidPauseEvent))::System::Action* animationDidPauseEvent;

  /// @brief Field spawnCharacterEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_spawnCharacterEvent, put = __set_spawnCharacterEvent))::System::Action* spawnCharacterEvent;

  /// @brief Field despawnCharacterEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_despawnCharacterEvent, put = __set_despawnCharacterEvent))::System::Action* despawnCharacterEvent;

  constexpr ::UnityEngine::Animation*& __get__animation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> const& __get__animation() const;

  constexpr void __set__animation(::UnityEngine::Animation* value);

  constexpr ::ArrayW<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, ::Array<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*>*>& __get__animationEvents();

  constexpr ::ArrayW<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, ::Array<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*>*> const& __get__animationEvents() const;

  constexpr void __set__animationEvents(::ArrayW<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, ::Array<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*>*> value);

  constexpr ::System::Action*& __get_animationDidPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_animationDidPauseEvent() const;

  constexpr void __set_animationDidPauseEvent(::System::Action* value);

  constexpr ::System::Action*& __get_spawnCharacterEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_spawnCharacterEvent() const;

  constexpr void __set_spawnCharacterEvent(::System::Action* value);

  constexpr ::System::Action*& __get_despawnCharacterEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_despawnCharacterEvent() const;

  constexpr void __set_despawnCharacterEvent(::System::Action* value);

  /// @brief Method add_animationDidPauseEvent addr 0x1f9b224 size 0x9c virtual false final false
  inline void add_animationDidPauseEvent(::System::Action* value);

  /// @brief Method remove_animationDidPauseEvent addr 0x1f9b2c0 size 0x9c virtual false final false
  inline void remove_animationDidPauseEvent(::System::Action* value);

  /// @brief Method add_spawnCharacterEvent addr 0x1f9b35c size 0x9c virtual false final false
  inline void add_spawnCharacterEvent(::System::Action* value);

  /// @brief Method remove_spawnCharacterEvent addr 0x1f9b3f8 size 0x9c virtual false final false
  inline void remove_spawnCharacterEvent(::System::Action* value);

  /// @brief Method add_despawnCharacterEvent addr 0x1f9b494 size 0x9c virtual false final false
  inline void add_despawnCharacterEvent(::System::Action* value);

  /// @brief Method remove_despawnCharacterEvent addr 0x1f9b530 size 0x9c virtual false final false
  inline void remove_despawnCharacterEvent(::System::Action* value);

  /// @brief Method PlayEvent addr 0x1f9b5cc size 0xc4 virtual false final false
  inline void PlayEvent(::StringW eventName);

  /// @brief Method PauseAnimation addr 0x1f9b690 size 0x2cc virtual false final false
  inline void PauseAnimation();

  /// @brief Method SpawnCharacterEvent addr 0x1f9b95c size 0x1c virtual false final false
  inline void SpawnCharacterEvent();

  /// @brief Method DeSpawnCharacterEvent addr 0x1f9b978 size 0x1c virtual false final false
  inline void DeSpawnCharacterEvent();

  /// @brief Method ResumeAnimation addr 0x1f9b994 size 0x2bc virtual false final false
  inline void ResumeAnimation();

  static inline ::GlobalNamespace::VFXAnimationEvents* New_ctor();

  /// @brief Method .ctor addr 0x1f9bc50 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VFXAnimationEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXAnimationEvents(VFXAnimationEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXAnimationEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXAnimationEvents(VFXAnimationEvents const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXAnimationEvents();

public:
  /// @brief Field _animation, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Animation* ____animation;

  /// @brief Field _animationEvents, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, ::Array<::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*>*> ____animationEvents;

  /// @brief Field animationDidPauseEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___animationDidPauseEvent;

  /// @brief Field spawnCharacterEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___spawnCharacterEvent;

  /// @brief Field despawnCharacterEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___despawnCharacterEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VFXAnimationEvents, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXAnimationEvents, ____animation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXAnimationEvents, ____animationEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXAnimationEvents, ___animationDidPauseEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXAnimationEvents, ___spawnCharacterEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VFXAnimationEvents, ___despawnCharacterEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VFXAnimationEvents);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXAnimationEvents*, "", "VFXAnimationEvents");
NEED_NO_BOX(::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VFXAnimationEvents__VFXAnimationEvent*, "", "VFXAnimationEvents/VFXAnimationEvent");
