#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Binding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateTrigger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Binding)
namespace UnityEngine::UIElements {
struct BindingActivationContext;
}
namespace UnityEngine::UIElements {
struct BindingLogLevel;
}
namespace UnityEngine::UIElements {
struct BindingUpdateTrigger;
}
namespace UnityEngine::UIElements {
struct DataSourceContextChanged;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Binding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Binding);
// Dependencies System.Object, UnityEngine.UIElements.BindingUpdateTrigger
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Binding
class CORDL_TYPE Binding : public ::System::Object {
public:
  // Declarations
  /// @brief Field <property>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__property_k__BackingField, put = __cordl_internal_set__property_k__BackingField)) ::StringW _property_k__BackingField;

  __declspec(property(get = get_isDirty)) bool isDirty;

  /// @brief Field m_Dirty, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dirty, put = __cordl_internal_set_m_Dirty)) bool m_Dirty;

  /// @brief Field m_UpdateTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateTrigger, put = __cordl_internal_set_m_UpdateTrigger)) ::UnityEngine::UIElements::BindingUpdateTrigger m_UpdateTrigger;

  __declspec(property(get = get_updateTrigger, put = set_updateTrigger)) ::UnityEngine::UIElements::BindingUpdateTrigger updateTrigger;

  /// @brief Method ClearDirty, addr 0x6a65200, size 0x8, virtual false, abstract: false, final false
  inline void ClearDirty();

  /// @brief Method MarkDirty, addr 0x6a651f4, size 0xc, virtual false, abstract: false, final false
  inline void MarkDirty();

  static inline ::UnityEngine::UIElements::Binding* New_ctor();

  /// @brief Method OnActivated, addr 0x6a65208, size 0x4, virtual true, abstract: false, final false
  inline void OnActivated(::ByRef<::UnityEngine::UIElements::BindingActivationContext> context);

  /// @brief Method OnDataSourceChanged, addr 0x6a65210, size 0x4, virtual true, abstract: false, final false
  inline void OnDataSourceChanged(::ByRef<::UnityEngine::UIElements::DataSourceContextChanged> context);

  /// @brief Method OnDeactivated, addr 0x6a6520c, size 0x4, virtual true, abstract: false, final false
  inline void OnDeactivated(::ByRef<::UnityEngine::UIElements::BindingActivationContext> context);

  /// @brief Method ResetPanelLogLevel, addr 0x6a65138, size 0x90, virtual false, abstract: false, final false
  static inline void ResetPanelLogLevel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method SetGlobalLogLevel, addr 0x6a64fb0, size 0x60, virtual false, abstract: false, final false
  static inline void SetGlobalLogLevel(::UnityEngine::UIElements::BindingLogLevel logLevel);

  /// @brief Method SetPanelLogLevel, addr 0x6a65010, size 0xd0, virtual false, abstract: false, final false
  static inline void SetPanelLogLevel(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::BindingLogLevel logLevel);

  constexpr ::StringW const& __cordl_internal_get__property_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__property_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_Dirty() const;

  constexpr bool& __cordl_internal_get_m_Dirty();

  constexpr ::UnityEngine::UIElements::BindingUpdateTrigger const& __cordl_internal_get_m_UpdateTrigger() const;

  constexpr ::UnityEngine::UIElements::BindingUpdateTrigger& __cordl_internal_get_m_UpdateTrigger();

  constexpr void __cordl_internal_set__property_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_Dirty(bool value);

  constexpr void __cordl_internal_set_m_UpdateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger value);

  /// @brief Method .ctor, addr 0x6a651e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isDirty, addr 0x6a651d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDirty();

  /// @brief Method get_updateTrigger, addr 0x6a651d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingUpdateTrigger get_updateTrigger();

  /// @brief Method set_updateTrigger, addr 0x6a651e0, size 0x8, virtual false, abstract: false, final false
  inline void set_updateTrigger(::UnityEngine::UIElements::BindingUpdateTrigger value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Binding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Binding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Binding(Binding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Binding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Binding(Binding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4020 };

  /// @brief Field k_UpdateTriggerTooltip offset 0xffffffff size 0x8
  static constexpr ::ConstString k_UpdateTriggerTooltip{ u"This informs the binding system of whether the binding object should be updated on every frame, when a change occurs in the source or on "
                                                         u"every frame if change detection is impossible, and when explicitly marked as dirty." };

  /// @brief Field m_Dirty, offset: 0x10, size: 0x1, def value: None
  bool ___m_Dirty;

  /// @brief Field m_UpdateTrigger, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingUpdateTrigger ___m_UpdateTrigger;

  /// @brief Field <property>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____property_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Binding, ___m_Dirty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding, ___m_UpdateTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Binding, ____property_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Binding, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Binding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Binding*, "UnityEngine.UIElements", "Binding");
