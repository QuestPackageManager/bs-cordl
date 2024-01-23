#pragma once
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixRecord_def.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::FixRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::FixRecord::*)(
    int32_t, ::StringW, ::StringW, ::Assets::OVR::Scripts::FixMethodDelegate*, ::UnityEngine::Object*, bool, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Assets::OVR::Scripts::FixRecord::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27f874c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Assets::OVR::Scripts::FixMethodDelegate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Assets::OVR::Scripts::FixMethodDelegate*& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_fixMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixMethod;
}
constexpr ::cordl_internals::to_const_pointer<::Assets::OVR::Scripts::FixMethodDelegate*> const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_fixMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixMethod;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_fixMethod(::Assets::OVR::Scripts::FixMethodDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fixMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Object>& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_targetObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_targetObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetObject;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_targetObject(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_buttonNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_buttonNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonNames;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_buttonNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_editModeRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editModeRequired;
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_editModeRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editModeRequired;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_editModeRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editModeRequired = value;
}
constexpr bool& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complete;
}
constexpr bool const& Assets::OVR::Scripts::FixRecord::__cordl_internal_get_complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complete;
}
constexpr void Assets::OVR::Scripts::FixRecord::__cordl_internal_set_complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complete = value;
}
inline ::Assets::OVR::Scripts::FixRecord* Assets::OVR::Scripts::FixRecord::New_ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix,
                                                                                    ::UnityEngine::Object* target, bool editRequired, ::ArrayW<::StringW, ::Array<::StringW>*> buttons) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Assets::OVR::Scripts::FixRecord*>(order, cat, msg, fix, target, editRequired, buttons));
}
inline void Assets::OVR::Scripts::FixRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix, ::UnityEngine::Object* target, bool editRequired,
                                                   ::ArrayW<::StringW, ::Array<::StringW>*> buttons) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::FixRecord*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Assets::OVR::Scripts::FixMethodDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order, cat, msg, fix, target, editRequired, buttons);
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::FixRecord::FixRecord() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
