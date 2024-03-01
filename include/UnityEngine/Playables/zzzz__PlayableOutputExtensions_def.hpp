#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableOutputExtensions);
// Type: UnityEngine.Playables::PlayableOutputExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::PlayableOutputExtensions*
class CORDL_TYPE PlayableOutputExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddNotificationReceiver, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void AddNotificationReceiver(U output, ::UnityEngine::Playables::INotificationReceiver* receiver);

  /// @brief Method GetSourceOutputPort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline int32_t GetSourceOutputPort(U output);

  /// @brief Method GetSourcePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::UnityEngine::Playables::Playable GetSourcePlayable(U output);

  /// @brief Method PushNotification, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void PushNotification(U output, ::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  /// @brief Method SetReferenceObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetReferenceObject(U output, ::UnityEngine::Object* value);

  /// @brief Method SetSourcePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U, typename V> static inline void SetSourcePlayable(U output, V value, int32_t port);

  /// @brief Method SetUserData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetUserData(U output, ::UnityEngine::Object* value);

  /// @brief Method SetWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline void SetWeight(U output, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableOutputExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableOutputExtensions(PlayableOutputExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableOutputExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableOutputExtensions(PlayableOutputExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableOutputExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableOutputExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutputExtensions*, "UnityEngine.Playables", "PlayableOutputExtensions");
