#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableOutputExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableOutputExtensions)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableOutputExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::PlayableOutputExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableOutputExtensions*, "UnityEngine.Playables", "PlayableOutputExtensions");
// [Extension]
// Dependencies System.Object, UnityEngine.Playables.IPlayable, UnityEngine.Playables.IPlayableOutput
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableOutputExtensions
class CORDL_TYPE PlayableOutputExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method AddNotificationReceiver, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void AddNotificationReceiver(U output, ::UnityEngine::Playables::INotificationReceiver* receiver);

  /// [Extension]
  /// @brief Method GetSourceOutputPort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline int32_t GetSourceOutputPort(U output);

  /// [Extension]
  /// @brief Method GetSourcePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityEngine::Playables::Playable GetSourcePlayable(U output);

  /// [Extension]
  /// @brief Method GetUserData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline ::UnityW<::UnityEngine::Object> GetUserData(U output);

  /// [Extension]
  /// @brief Method PushNotification, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void PushNotification(U output, ::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// [Extension]
  /// @brief Method SetReferenceObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetReferenceObject(U output, ::UnityEngine::Object* value);

  /// [Extension]
  /// @brief Method SetSourcePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U> &&
             ::cordl_internals::type_constraint<V, ::UnityEngine::Playables::IPlayable*> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
  static inline void SetSourcePlayable(U output, V value, int32_t port);

  /// [Extension]
  /// @brief Method SetUserData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetUserData(U output, ::UnityEngine::Object* value);

  /// [Extension]
  /// @brief Method SetWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
    requires(::cordl_internals::type_constraint<U, ::UnityEngine::Playables::IPlayableOutput*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
  static inline void SetWeight(U output, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableOutputExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableOutputExtensions(PlayableOutputExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableOutputExtensions(PlayableOutputExtensionsconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::PlayableOutputExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Playables
