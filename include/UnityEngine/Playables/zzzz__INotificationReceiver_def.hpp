#pragma once
// IWYU pragma private; include "UnityEngine/Playables/INotificationReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotificationReceiver)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class INotificationReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::INotificationReceiver);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.INotificationReceiver
class CORDL_TYPE INotificationReceiver {
public:
  // Declarations
  /// @brief Method OnNotify, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "INotificationReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotificationReceiver(INotificationReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::INotificationReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::INotificationReceiver*, "UnityEngine.Playables", "INotificationReceiver");
