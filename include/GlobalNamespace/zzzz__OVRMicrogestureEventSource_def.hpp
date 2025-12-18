#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogestureEventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMicrogestureEventSource)
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMicrogestureEventSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMicrogestureEventSource);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogestureEventSource
class CORDL_TYPE OVRMicrogestureEventSource : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field GestureRecognizedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_GestureRecognizedEvent,
                      put = __cordl_internal_set_GestureRecognizedEvent)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* GestureRecognizedEvent;

  __declspec(property(get = get_Hand, put = set_Hand)) ::UnityW<::GlobalNamespace::OVRHand> Hand;

  /// @brief Field _hand, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hand, put = __cordl_internal_set__hand)) ::UnityW<::GlobalNamespace::OVRHand> _hand;

  /// @brief Method CheckForNewGesture, addr 0x5cc47c0, size 0x70, virtual false, abstract: false, final false
  inline void CheckForNewGesture(::GlobalNamespace::OVRHand_MicrogestureType gesture);

  static inline ::GlobalNamespace::OVRMicrogestureEventSource* New_ctor();

  /// @brief Method Update, addr 0x5cc4780, size 0x40, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& __cordl_internal_get_GestureRecognizedEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*& __cordl_internal_get_GestureRecognizedEvent();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__hand() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__hand();

  constexpr void __cordl_internal_set_GestureRecognizedEvent(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* value);

  constexpr void __cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand> value);

  /// @brief Method .ctor, addr 0x5cc4830, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Hand, addr 0x5cc4770, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRHand> get_Hand();

  /// @brief Method set_Hand, addr 0x5cc4778, size 0x8, virtual false, abstract: false, final false
  inline void set_Hand(::GlobalNamespace::OVRHand* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMicrogestureEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMicrogestureEventSource(OVRMicrogestureEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMicrogestureEventSource(OVRMicrogestureEventSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7233 };

  /// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ____hand;

  /// @brief Field GestureRecognizedEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* ___GestureRecognizedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMicrogestureEventSource, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogestureEventSource, ___GestureRecognizedEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMicrogestureEventSource, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMicrogestureEventSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMicrogestureEventSource*, "", "OVRMicrogestureEventSource");
