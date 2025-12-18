#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffect)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
struct VFXOutputEventArgs;
}
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VisualEffect);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffect
class CORDL_TYPE VisualEffect : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field m_cachedEventAttribute, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cachedEventAttribute, put = __cordl_internal_set_m_cachedEventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* m_cachedEventAttribute;

  /// @brief Field outputEventReceived, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_outputEventReceived, put = __cordl_internal_set_outputEventReceived)) ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* outputEventReceived;

  __declspec(property(get = get_visualEffectAsset)) ::UnityW<::UnityEngine::VFX::VisualEffectAsset> visualEffectAsset;

  /// @brief Method CreateVFXEventAttribute, addr 0x6c60f5c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute();

  /// @brief Method InvokeGetCachedEventAttributeForOutputEvent_Internal, addr 0x6c60fec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source);

  /// @brief Method InvokeOutputEventReceived_Internal, addr 0x6c61028, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId);

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_m_cachedEventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_m_cachedEventAttribute();

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* const& __cordl_internal_get_outputEventReceived() const;

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& __cordl_internal_get_outputEventReceived();

  constexpr void __cordl_internal_set_m_cachedEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  constexpr void __cordl_internal_set_outputEventReceived(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* value);

  /// @brief Method get_visualEffectAsset, addr 0x6c60dd0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> get_visualEffectAsset();

  /// @brief Method get_visualEffectAsset_Injected, addr 0x6c60f20, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_visualEffectAsset_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffect(VisualEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffect(VisualEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22618 };

  /// @brief Field m_cachedEventAttribute, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* ___m_cachedEventAttribute;

  /// @brief Field outputEventReceived, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* ___outputEventReceived;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffect, ___m_cachedEventAttribute) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffect, ___outputEventReceived) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VisualEffect, 0x28>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VisualEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VisualEffect*, "UnityEngine.VFX", "VisualEffect");
