#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropertyChangedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PropertyChangedEvent)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class PropertyChangedEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyChangedEvent;
}
namespace UnityEngine::UIElements {
class PropertyChangedEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyChangedEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyChangedEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PropertyChangedEvent/<>c
class CORDL_TYPE PropertyChangedEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PropertyChangedEvent___c* __9;

  static inline ::UnityEngine::UIElements::PropertyChangedEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6a95f1c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PropertyChangedEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6a95f18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PropertyChangedEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PropertyChangedEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangedEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangedEvent___c(PropertyChangedEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangedEvent___c(PropertyChangedEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5229 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyChangedEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PropertyChangedEvent
class CORDL_TYPE PropertyChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::PropertyChangedEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PropertyChangedEvent___c;

  /// @brief Field <property>k__BackingField, offset 0x68, size 0x98
  __declspec(property(get = __cordl_internal_get__property_k__BackingField, put = __cordl_internal_set__property_k__BackingField)) ::UnityEngine::UIElements::BindingId _property_k__BackingField;

  __declspec(property(get = get_property, put = set_property)) ::UnityEngine::UIElements::BindingId property;

  /// @brief Method GetPooled, addr 0x6a95e30, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PropertyChangedEvent* GetPooled(::ByRef<::UnityEngine::UIElements::BindingId> property);

  static inline ::UnityEngine::UIElements::PropertyChangedEvent* New_ctor();

  constexpr ::UnityEngine::UIElements::BindingId const& __cordl_internal_get__property_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingId& __cordl_internal_get__property_k__BackingField();

  constexpr void __cordl_internal_set__property_k__BackingField(::UnityEngine::UIElements::BindingId value);

  /// @brief Method .ctor, addr 0x6a95dac, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_property, addr 0x6a95d90, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingId get_property();

  /// @brief Method set_property, addr 0x6a95da0, size 0xc, virtual false, abstract: false, final false
  inline void set_property(::UnityEngine::UIElements::BindingId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyChangedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyChangedEvent(PropertyChangedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyChangedEvent(PropertyChangedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5230 };

  /// @brief Field <property>k__BackingField, offset: 0x68, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId ____property_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyChangedEvent, ____property_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyChangedEvent, 0x100>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropertyChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyChangedEvent*, "UnityEngine.UIElements", "PropertyChangedEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyChangedEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyChangedEvent___c*, "UnityEngine.UIElements", "PropertyChangedEvent/<>c");
