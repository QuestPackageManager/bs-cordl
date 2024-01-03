#pragma once
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
// Type: UnityEngine.Playables::INotificationReceiver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10437))
// CS Name: ::UnityEngine.Playables::INotificationReceiver*
class CORDL_TYPE INotificationReceiver {
public:
  // Declarations
  /// @brief Method OnNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "INotificationReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotificationReceiver(INotificationReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotificationReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotificationReceiver(INotificationReceiver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::INotificationReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::INotificationReceiver*, "UnityEngine.Playables", "INotificationReceiver");
