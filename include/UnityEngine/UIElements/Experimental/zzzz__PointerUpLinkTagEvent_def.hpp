#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerUpLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerUpLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class PointerUpLinkTagEvent___c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerUpLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class PointerUpLinkTagEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerUpLinkTagEvent/<>c
class CORDL_TYPE PointerUpLinkTagEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c* __9;

  static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49e217c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49e2174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerUpLinkTagEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerUpLinkTagEvent___c(PointerUpLinkTagEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerUpLinkTagEvent___c(PointerUpLinkTagEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerUpLinkTagEvent
class CORDL_TYPE PointerUpLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c;

  /// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x49e205c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x49e1ffc, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49e2050, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x49e20c4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x49e1fec, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x49e1ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_linkText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerUpLinkTagEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerUpLinkTagEvent(PointerUpLinkTagEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerUpLinkTagEvent(PointerUpLinkTagEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6492 };

  /// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, 0x118>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerUpLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent___c*, "UnityEngine.UIElements.Experimental", "PointerUpLinkTagEvent/<>c");
