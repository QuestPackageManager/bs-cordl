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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b4621c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory* UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup_UxmlFactory::ToggleButtonGroup_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b46284;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b463fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IsMultipleSelection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AllowEmptySelection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                        ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits* UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup_UxmlTraits::ToggleButtonGroup_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_isMultipleSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::get_isMultipleSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                               "get_isMultipleSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.set_isMultipleSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(bool)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::set_isMultipleSelection)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6b4410c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "set_isMultipleSelection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_allowEmptySelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::get_allowEmptySelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b4456c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                               "get_allowEmptySelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.set_allowEmptySelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(bool)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::set_allowEmptySelection)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6b44574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "set_allowEmptySelection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(&::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b4475c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::StringW)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b4476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::StringW, ::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6b448c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ToggleButtonGroupState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::get_contentContainer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b44be8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 135));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnViewDataReady)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b44bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 132));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6b44ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 152));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6b45040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 153));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnButtonGroupContainerElementAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementAdded)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6b45224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnButtonGroupContainerElementAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnButtonGroupContainerElementRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementRemoved)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6b45700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnButtonGroupContainerElementRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateButtonStates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::ToggleButtonGroupState)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonStates)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6b44c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "UpdateButtonStates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ToggleButtonGroupState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.OnOptionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::ToggleButtonGroup::OnOptionChange)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6b45a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnOptionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ToggleButtonGroup.UpdateButtonsStyling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ToggleButtonGroup::*)()>(
    &::UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonsStyling)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6b45564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                               "UpdateButtonsStyling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ButtonGroupContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buttons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::StringW, "k_MaxToggleButtonGroupMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_k_MaxToggleButtonGroupMessage() {
  return ::cordl_internals::getStaticField<::StringW, "k_MaxToggleButtonGroupMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_isMultipleSelectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "isMultipleSelectionProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ToggleButtonGroup::getStaticF_isMultipleSelectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "isMultipleSelectionProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_allowEmptySelectionProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "allowEmptySelectionProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::ToggleButtonGroup::getStaticF_allowEmptySelectionProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "allowEmptySelectionProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_containerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_containerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonGroupClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonGroupClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonGroupClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonGroupClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonLeftClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonLeftClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonLeftClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonLeftClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonMidClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonMidClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonMidClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonMidClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonRightClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonRightClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonRightClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonRightClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_buttonStandaloneClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "buttonStandaloneClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_buttonStandaloneClassName() {
  return ::cordl_internals::getStaticField<::StringW, "buttonStandaloneClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline void UnityEngine::UIElements::ToggleButtonGroup::setStaticF_emptyStateLabelClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "emptyStateLabelClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::ToggleButtonGroup::getStaticF_emptyStateLabelClassName() {
  return ::cordl_internals::getStaticField<::StringW, "emptyStateLabelClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get>();
}
inline bool UnityEngine::UIElements::ToggleButtonGroup::get_isMultipleSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                             "get_isMultipleSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::set_isMultipleSelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "set_isMultipleSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::ToggleButtonGroup::get_allowEmptySelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                             "get_allowEmptySelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::set_allowEmptySelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "set_allowEmptySelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::_ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ToggleButtonGroupState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, toggleButtonGroupState);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::ToggleButtonGroup::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 135)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 132)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 152)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::SetValueWithoutNotify(::UnityEngine::UIElements::ToggleButtonGroupState newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), 153)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementAdded(::UnityEngine::UIElements::VisualElement* ve, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnButtonGroupContainerElementAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, index);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnButtonGroupContainerElementRemoved(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnButtonGroupContainerElementRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonStates(::UnityEngine::UIElements::ToggleButtonGroupState options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "UpdateButtonStates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ToggleButtonGroupState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, options);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::OnOptionChange(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(), "OnOptionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::ToggleButtonGroup::UpdateButtonsStyling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ToggleButtonGroup*>::get(),
                                                                             "UpdateButtonsStyling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ToggleButtonGroup*>());
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ToggleButtonGroup*>(label));
}
inline ::UnityEngine::UIElements::ToggleButtonGroup* UnityEngine::UIElements::ToggleButtonGroup::New_ctor(::StringW label, ::UnityEngine::UIElements::ToggleButtonGroupState toggleButtonGroupState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ToggleButtonGroup*>(label, toggleButtonGroupState));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ToggleButtonGroup::ToggleButtonGroup() {}
