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
class __PointerOverLinkTagEvent____c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerOverLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class __PointerOverLinkTagEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::PointerOverLinkTagEvent::<>c*
class CORDL_TYPE __PointerOverLinkTagEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c* __9;

  static inline ::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x497a2d8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x497a2d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerOverLinkTagEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerOverLinkTagEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerOverLinkTagEvent____c(__PointerOverLinkTagEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerOverLinkTagEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerOverLinkTagEvent____c(__PointerOverLinkTagEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::PointerOverLinkTagEvent
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::PointerOverLinkTagEvent*
class CORDL_TYPE PointerOverLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c;

  /// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x497a1b8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x497a158, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x497a1ac, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x497a220, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x497a148, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x497a150, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerOverLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerOverLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::__PointerOverLinkTagEvent____c*, "UnityEngine.UIElements.Experimental", "PointerOverLinkTagEvent/<>c");
