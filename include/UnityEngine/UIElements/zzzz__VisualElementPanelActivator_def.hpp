#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementPanelActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VisualElementPanelActivator)
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementPanelActivator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementPanelActivator);
// Type: UnityEngine.UIElements::VisualElementPanelActivator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementPanelActivator*
class CORDL_TYPE VisualElementPanelActivator : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isActive>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field <isDetaching>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__isDetaching_k__BackingField, put = __cordl_internal_set__isDetaching_k__BackingField)) bool _isDetaching_k__BackingField;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isDetaching, put = set_isDetaching)) bool isDetaching;

  /// @brief Field m_Activatable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Activatable, put = __cordl_internal_set_m_Activatable))::UnityEngine::UIElements::IVisualElementPanelActivatable* m_Activatable;

  static inline ::UnityEngine::UIElements::VisualElementPanelActivator* New_ctor(::UnityEngine::UIElements::IVisualElementPanelActivatable* activatable);

  /// @brief Method OnEnter, addr 0x35072c0, size 0x10, virtual false, abstract: false, final false
  inline void OnEnter(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnLeave, addr 0x35072d0, size 0x74, virtual false, abstract: false, final false
  inline void OnLeave(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method SendActivation, addr 0x3507090, size 0x118, virtual false, abstract: false, final false
  inline void SendActivation();

  /// @brief Method SendDeactivation, addr 0x35071a8, size 0x118, virtual false, abstract: false, final false
  inline void SendDeactivation();

  /// @brief Method SetActive, addr 0x350539c, size 0x33c, virtual false, abstract: false, final false
  inline void SetActive(bool action);

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDetaching_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDetaching_k__BackingField();

  constexpr ::UnityEngine::UIElements::IVisualElementPanelActivatable*& __cordl_internal_get_m_Activatable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementPanelActivatable*> const& __cordl_internal_get_m_Activatable() const;

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isDetaching_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Activatable(::UnityEngine::UIElements::IVisualElementPanelActivatable* value);

  /// @brief Method .ctor, addr 0x350528c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IVisualElementPanelActivatable* activatable);

  /// @brief Method get_isActive, addr 0x3507068, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_isDetaching, addr 0x350707c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDetaching();

  /// @brief Method set_isActive, addr 0x3507070, size 0xc, virtual false, abstract: false, final false
  inline void set_isActive(bool value);

  /// @brief Method set_isDetaching, addr 0x3507084, size 0xc, virtual false, abstract: false, final false
  inline void set_isDetaching(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementPanelActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementPanelActivator(VisualElementPanelActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementPanelActivator(VisualElementPanelActivator const&) = delete;

  /// @brief Field m_Activatable, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementPanelActivatable* ___m_Activatable;

  /// @brief Field <isActive>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// @brief Field <isDetaching>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____isDetaching_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementPanelActivator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementPanelActivator, ___m_Activatable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementPanelActivator, ____isActive_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementPanelActivator, ____isDetaching_k__BackingField) == 0x19, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementPanelActivator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementPanelActivator*, "UnityEngine.UIElements", "VisualElementPanelActivator");
