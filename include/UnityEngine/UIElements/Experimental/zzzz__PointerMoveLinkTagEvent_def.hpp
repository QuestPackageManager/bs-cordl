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
class __PointerMoveLinkTagEvent____c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerMoveLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class __PointerMoveLinkTagEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::PointerMoveLinkTagEvent::<>c*
class CORDL_TYPE __PointerMoveLinkTagEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c* __9;

  static inline ::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x497a59c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x497a594, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerMoveLinkTagEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerMoveLinkTagEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerMoveLinkTagEvent____c(__PointerMoveLinkTagEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerMoveLinkTagEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerMoveLinkTagEvent____c(__PointerMoveLinkTagEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::PointerMoveLinkTagEvent
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::PointerMoveLinkTagEvent*
class CORDL_TYPE PointerMoveLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c;

  /// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x497a47c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x497a41c, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x497a470, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x497a4e4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x497a40c, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x497a414, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerMoveLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerMoveLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::__PointerMoveLinkTagEvent____c*, "UnityEngine.UIElements.Experimental", "PointerMoveLinkTagEvent/<>c");
