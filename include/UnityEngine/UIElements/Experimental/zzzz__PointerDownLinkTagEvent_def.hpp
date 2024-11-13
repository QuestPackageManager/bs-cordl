#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerDownLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerDownLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class __PointerDownLinkTagEvent____c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerDownLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class __PointerDownLinkTagEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::PointerDownLinkTagEvent::<>c*
class CORDL_TYPE __PointerDownLinkTagEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c* __9;

  static inline ::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x497aaf4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x497aaec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerDownLinkTagEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PointerDownLinkTagEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerDownLinkTagEvent____c(__PointerDownLinkTagEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerDownLinkTagEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerDownLinkTagEvent____c(__PointerDownLinkTagEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::PointerDownLinkTagEvent
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::PointerDownLinkTagEvent*
class CORDL_TYPE PointerDownLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c;

  /// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__linkID_k__BackingField, put = __cordl_internal_set__linkID_k__BackingField)) ::StringW _linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__linkText_k__BackingField, put = __cordl_internal_set__linkText_k__BackingField)) ::StringW _linkText_k__BackingField;

  __declspec(property(put = set_linkID)) ::StringW linkID;

  __declspec(property(put = set_linkText)) ::StringW linkText;

  /// @brief Method GetPooled, addr 0x497a9d4, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* evt, ::StringW linkID, ::StringW linkText);

  /// @brief Method Init, addr 0x497a974, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x497a9c8, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField();

  constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x497aa3c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_linkID, addr 0x497a964, size 0x8, virtual false, abstract: false, final false
  inline void set_linkID(::StringW value);

  /// @brief Method set_linkText, addr 0x497a96c, size 0x8, virtual false, abstract: false, final false
  inline void set_linkText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDownLinkTagEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDownLinkTagEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDownLinkTagEvent(PointerDownLinkTagEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDownLinkTagEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDownLinkTagEvent(PointerDownLinkTagEvent const&) = delete;

  /// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____linkID_k__BackingField;

  /// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::StringW ____linkText_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerDownLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerDownLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::__PointerDownLinkTagEvent____c*, "UnityEngine.UIElements.Experimental", "PointerDownLinkTagEvent/<>c");
