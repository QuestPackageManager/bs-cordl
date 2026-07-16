#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ToggleButtonGroup.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ToggleButtonGroupState_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ToggleButtonGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__ToggleButtonGroupState_def.hpp"
#include "UnityEngine/UIElements/zzzz__ToggleButtonGroup_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d773d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory* UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::ToggleButtonGroup_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6d77440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d775b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_get_m_IsMultipleSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultipleSelection;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_get_m_IsMultipleSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultipleSelection;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_set_m_IsMultipleSelection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMultipleSelection = value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_get_m_AllowEmptySelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowEmptySelection;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_get_m_AllowEmptySelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowEmptySelection;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::__cordl_internal_set_m_AllowEmptySelection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowEmptySelection = value;
}
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                        ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits* UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::ToggleButtonGroup_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_isMultipleSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::get_isMultipleSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d752c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "get_isMultipleSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.set_isMultipleSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(bool)>(&::UnityEngine::UIElements::ToggleButtonGroup::set_isMultipleSelection)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6d752c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "set_isMultipleSelection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_allowEmptySelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::get_allowEmptySelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d75728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "get_allowEmptySelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.set_allowEmptySelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(bool)>(&::UnityEngine::UIElements::ToggleButtonGroup::set_allowEmptySelection)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6d75730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "set_allowEmptySelection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d75918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::StringW)>(&::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d75928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::StringW, ::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6d75a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::ToggleButtonGroupState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::get_contentContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d75da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 135 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnViewDataReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::OnViewDataReady)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d75db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 132 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6d76064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 152 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6d761fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 153 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnButtonGroupContainerElementAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementAdded)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6d763e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                { "OnButtonGroupContainerElementAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnButtonGroupContainerElementRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementRemoved)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6d768bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                             { "OnButtonGroupContainerElementRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateButtonStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonStates)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6d75e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                                                           { "UpdateButtonStates", {}, { ::i2c::type_of<::UnityEngine::UIElements::ToggleButtonGroupState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnOptionChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnOptionChange)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6d76c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "OnOptionChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateButtonsStyling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonsStyling)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6d76720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "UpdateButtonsStyling", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_ButtonGroupContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonGroupContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_ButtonGroupContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ButtonGroupContainer;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_set_m_ButtonGroupContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ButtonGroupContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_Buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* const& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_Buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Buttons = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_EmptyLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyLabel;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_EmptyLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyLabel;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_set_m_EmptyLabel(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmptyLabel = value;
}
constexpr bool& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_IsMultipleSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultipleSelection;
}
constexpr bool const& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_IsMultipleSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMultipleSelection;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_set_m_IsMultipleSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMultipleSelection = value;
}
constexpr bool& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_AllowEmptySelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowEmptySelection;
}
constexpr bool const& UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_get_m_AllowEmptySelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowEmptySelection;
}
constexpr void UnityEngine::UIElements::ToggleButtonGroup::__cordl_internal_set_m_AllowEmptySelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowEmptySelection = value;
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_k_MaxToggleButtonGroupMessage(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_MaxToggleButtonGroupMessage", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_k_MaxToggleButtonGroupMessage() {
  return ::cordl_internals::getStaticField<::StringW, "k_MaxToggleButtonGroupMessage", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_isMultipleSelectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "isMultipleSelectionProperty", ::UnityEngine::UIElements::ToggleButtonGroup*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ToggleButtonGroup::getStaticF_isMultipleSelectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "isMultipleSelectionProperty", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_allowEmptySelectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowEmptySelectionProperty", ::UnityEngine::UIElements::ToggleButtonGroup*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ToggleButtonGroup::getStaticF_allowEmptySelectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowEmptySelectionProperty", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_containerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_containerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerUssClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonGroupClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonGroupClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonGroupClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonGroupClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonLeftClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonLeftClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonLeftClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonLeftClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonMidClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonMidClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonMidClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonMidClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonRightClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonRightClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonRightClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonRightClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonStandaloneClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonStandaloneClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonStandaloneClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonStandaloneClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_emptyStateLabelClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "emptyStateLabelClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_emptyStateLabelClassName() {
  return ::cordl_internals::getStaticField<::StringW, "emptyStateLabelClassName", ::UnityEngine::UIElements::ToggleButtonGroup*>();
}
inline bool UnityEngine::UIElements::ToggleButtonGroup::get_isMultipleSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "get_isMultipleSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::set_isMultipleSelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "set_isMultipleSelection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ToggleButtonGroup::get_allowEmptySelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "get_allowEmptySelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::set_allowEmptySelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "set_allowEmptySelection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::ToggleButtonGroupState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label, toggleButtonGroupState);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ToggleButtonGroup::get_contentContainer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 135 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnViewDataReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 132 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateMixedValueContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::SetValueWithoutNotify(::UnityEngine::UIElements::ToggleButtonGroupState newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementAdded(::UnityEngine::UIElements::VisualElement* ve, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                           { "OnButtonGroupContainerElementAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, index);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                           { "OnButtonGroupContainerElementRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonStates(::UnityEngine::UIElements::ToggleButtonGroupState options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(),
                                                                                         { "UpdateButtonStates", {}, { ::i2c::type_of<::UnityEngine::UIElements::ToggleButtonGroupState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnOptionChange(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "OnOptionChange", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonsStyling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ToggleButtonGroup*>(), { "UpdateButtonsStyling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ToggleButtonGroup*>());
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ToggleButtonGroup*>(label));
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ToggleButtonGroup*>(label, toggleButtonGroupState));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup::ToggleButtonGroup() {}
