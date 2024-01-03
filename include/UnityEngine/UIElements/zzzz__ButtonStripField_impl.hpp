#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ButtonStripField_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "UnityEngine/UIElements/zzzz__ButtonStripField_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__ButtonStripField__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__ButtonStripField__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e34048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ButtonStripField__UxmlTraits*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits* UnityEngine::UIElements::__ButtonStripField__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__ButtonStripField__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__ButtonStripField__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ButtonStripField__UxmlTraits*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__ButtonStripField__UxmlTraits::__ButtonStripField__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField.get_buttons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* (
    ::UnityEngine::UIElements::ButtonStripField::*)()>(&::UnityEngine::UIElements::ButtonStripField::get_buttons)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e33ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(),
                                                                               "get_buttons", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)()>(&::UnityEngine::UIElements::ButtonStripField::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2e33dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)(int32_t)>(
    &::UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e33e98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(), 105));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField.RefreshButtonsState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)()>(
    &::UnityEngine::UIElements::ButtonStripField::RefreshButtonsState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e33f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(),
                                                                               "RefreshButtonsState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& UnityEngine::UIElements::ButtonStripField::__get_m_Buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*> const& UnityEngine::UIElements::ButtonStripField::__get_m_Buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr void UnityEngine::UIElements::ButtonStripField::__set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buttons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* UnityEngine::UIElements::ButtonStripField::get_buttons() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(), "get_buttons",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ButtonStripField* UnityEngine::UIElements::ButtonStripField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ButtonStripField*>());
}
inline void UnityEngine::UIElements::ButtonStripField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify(int32_t newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(), 105)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::ButtonStripField::RefreshButtonsState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ButtonStripField*>::get(),
                                                                             "RefreshButtonsState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ButtonStripField::ButtonStripField() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__ButtonStripField__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__ButtonStripField__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__ButtonStripField__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e34000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ButtonStripField__UxmlFactory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__ButtonStripField__UxmlFactory* UnityEngine::UIElements::__ButtonStripField__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__ButtonStripField__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__ButtonStripField__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__ButtonStripField__UxmlFactory*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__ButtonStripField__UxmlFactory::__ButtonStripField__UxmlFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
