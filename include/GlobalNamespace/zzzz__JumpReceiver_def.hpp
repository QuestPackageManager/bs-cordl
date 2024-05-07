#pragma once
// IWYU pragma private; include "GlobalNamespace/JumpReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JumpReceiver)
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
// Forward declare root types
namespace GlobalNamespace {
class JumpReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpReceiver);
// Type: ::JumpReceiver
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JumpReceiver*
class CORDL_TYPE JumpReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <jumpToDestinationValid>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__jumpToDestinationValid_k__BackingField,
                      put = __cordl_internal_set__jumpToDestinationValid_k__BackingField)) bool _jumpToDestinationValid_k__BackingField;

  __declspec(property(get = get_jumpToDestinationValid, put = set_jumpToDestinationValid)) bool jumpToDestinationValid;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  static inline ::GlobalNamespace::JumpReceiver* New_ctor();

  /// @brief Method OnNotify, addr 0x24d7c44, size 0x140, virtual true, abstract: false, final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  constexpr bool const& __cordl_internal_get__jumpToDestinationValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__jumpToDestinationValid_k__BackingField();

  constexpr void __cordl_internal_set__jumpToDestinationValid_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x24d7d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_jumpToDestinationValid, addr 0x24d7c30, size 0x8, virtual false, abstract: false, final false
  inline bool get_jumpToDestinationValid();

  /// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
  constexpr ::UnityEngine::Playables::INotificationReceiver* i___UnityEngine__Playables__INotificationReceiver() noexcept;

  /// @brief Method set_jumpToDestinationValid, addr 0x24d7c38, size 0xc, virtual false, abstract: false, final false
  inline void set_jumpToDestinationValid(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JumpReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JumpReceiver(JumpReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JumpReceiver(JumpReceiver const&) = delete;

  /// @brief Field <jumpToDestinationValid>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____jumpToDestinationValid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpReceiver, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::JumpReceiver, ____jumpToDestinationValid_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpReceiver*, "", "JumpReceiver");
