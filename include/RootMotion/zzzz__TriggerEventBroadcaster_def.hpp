#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TriggerEventBroadcaster)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace RootMotion {
class TriggerEventBroadcaster;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::TriggerEventBroadcaster);
// Type: RootMotion::TriggerEventBroadcaster
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::TriggerEventBroadcaster*
class CORDL_TYPE TriggerEventBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field target, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::GameObject> target;

  static inline ::RootMotion::TriggerEventBroadcaster* New_ctor();

  /// @brief Method OnTriggerEnter, addr 0x1343df0, size 0xb4, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* collider);

  /// @brief Method OnTriggerExit, addr 0x1343f58, size 0xb4, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* collider);

  /// @brief Method OnTriggerStay, addr 0x1343ea4, size 0xb4, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* collider);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x134400c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerEventBroadcaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerEventBroadcaster(TriggerEventBroadcaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerEventBroadcaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerEventBroadcaster(TriggerEventBroadcaster const&) = delete;

  /// @brief Field target, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::TriggerEventBroadcaster, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::TriggerEventBroadcaster, ___target) == 0x18, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::TriggerEventBroadcaster);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::TriggerEventBroadcaster*, "RootMotion", "TriggerEventBroadcaster");
