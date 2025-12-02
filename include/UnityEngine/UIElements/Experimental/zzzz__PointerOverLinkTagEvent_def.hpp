#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerOverLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerOverLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class PointerOverLinkTagEvent___c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerOverLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class PointerOverLinkTagEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent/<>c
class CORDL_TYPE PointerOverLinkTagEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c* __9;

  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6aea640, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6aea63c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOverLinkTagEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOverLinkTagEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOverLinkTagEvent___c(PointerOverLinkTagEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverLinkTagEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOverLinkTagEvent___c(PointerOverLinkTagEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5489 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent
class CORDL_TYPE PointerOverLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c;

  /// @brief Field <linkID>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x6aea524, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x6aea4c0, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x6aea518, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6aea590, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x6aea4b0, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x6aea4b8, size 0x8, virtual false, abstract: false, final false
  inline void set_linkText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOverLinkTagEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOverLinkTagEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOverLinkTagEvent(PointerOverLinkTagEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOverLinkTagEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOverLinkTagEvent(PointerOverLinkTagEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5490 };

  /// @brief Field <linkID>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, ____linkID_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, ____linkText_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerOverLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent___c*, "UnityEngine.UIElements.Experimental", "PointerOverLinkTagEvent/<>c");
