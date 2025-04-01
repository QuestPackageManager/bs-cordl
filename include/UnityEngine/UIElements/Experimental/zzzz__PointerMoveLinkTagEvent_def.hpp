#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerMoveLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerMoveLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class PointerMoveLinkTagEvent___c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerMoveLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class PointerMoveLinkTagEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerMoveLinkTagEvent/<>c
class CORDL_TYPE PointerMoveLinkTagEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c* __9;

  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49db978, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49db970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerMoveLinkTagEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveLinkTagEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerMoveLinkTagEvent___c(PointerMoveLinkTagEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveLinkTagEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerMoveLinkTagEvent___c(PointerMoveLinkTagEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerMoveLinkTagEvent
class CORDL_TYPE PointerMoveLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c;

  /// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x49db858, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x49db7f8, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49db84c, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x49db8c0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x49db7e8, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x49db7f0, size 0x8, virtual false, abstract: false, final false
  inline void set_linkText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerMoveLinkTagEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveLinkTagEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerMoveLinkTagEvent(PointerMoveLinkTagEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveLinkTagEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerMoveLinkTagEvent(PointerMoveLinkTagEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6486 };

  /// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, 0x118>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerMoveLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent___c*, "UnityEngine.UIElements.Experimental", "PointerMoveLinkTagEvent/<>c");
