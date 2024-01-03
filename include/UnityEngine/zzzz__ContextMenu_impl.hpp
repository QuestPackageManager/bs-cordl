#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ContextMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2cd2834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW, bool)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cd286c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW, bool, int32_t)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cd28a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ContextMenu::__get_menuItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuItem;
}
constexpr ::StringW const& UnityEngine::ContextMenu::__get_menuItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuItem;
}
constexpr void UnityEngine::ContextMenu::__set_menuItem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___menuItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ContextMenu::__get_validate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr bool const& UnityEngine::ContextMenu::__get_validate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr void UnityEngine::ContextMenu::__set_validate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validate = value;
}
constexpr int32_t& UnityEngine::ContextMenu::__get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::ContextMenu::__get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::ContextMenu::__set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ContextMenu*>(itemName));
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName);
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName, bool isValidateFunction) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ContextMenu*>(itemName, isValidateFunction));
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName, bool isValidateFunction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isValidateFunction);
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName, bool isValidateFunction, int32_t priority) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ContextMenu*>(itemName, isValidateFunction, priority));
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName, bool isValidateFunction, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContextMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isValidateFunction, priority);
}
// Ctor Parameters []
constexpr ::UnityEngine::ContextMenu::ContextMenu() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
