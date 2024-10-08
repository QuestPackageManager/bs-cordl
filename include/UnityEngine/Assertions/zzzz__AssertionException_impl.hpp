#pragma once
// IWYU pragma private; include "UnityEngine/Assertions/AssertionException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/Assertions/zzzz__AssertionException_def.hpp"
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Assertions::AssertionException::*)(::StringW, ::StringW)>(
    &::UnityEngine::Assertions::AssertionException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x485985c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Assertions::AssertionException.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Assertions::AssertionException::*)()>(
    &::UnityEngine::Assertions::AssertionException::get_Message)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x485a164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Assertions::AssertionException::__cordl_internal_get_m_UserMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserMessage;
}
constexpr ::StringW const& UnityEngine::Assertions::AssertionException::__cordl_internal_get_m_UserMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserMessage;
}
constexpr void UnityEngine::Assertions::AssertionException::__cordl_internal_set_m_UserMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UserMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Assertions::AssertionException* UnityEngine::Assertions::AssertionException::New_ctor(::StringW message, ::StringW userMessage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Assertions::AssertionException*>(message, userMessage));
}
inline void UnityEngine::Assertions::AssertionException::_ctor(::StringW message, ::StringW userMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, userMessage);
}
inline ::StringW UnityEngine::Assertions::AssertionException::get_Message() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Assertions::AssertionException*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Assertions::AssertionException::AssertionException() {}
