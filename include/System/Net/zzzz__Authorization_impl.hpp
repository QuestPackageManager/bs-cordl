#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
//  Writing Method size for method: ::System::Net::Authorization._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Authorization::*)(::StringW)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x281dbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Authorization::*)(::StringW, bool)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x281dc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281dce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), "get_Message",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281dce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), "get_Complete",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Authorization::__get_m_Message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Message;
}
constexpr ::StringW const& System::Net::Authorization::__get_m_Message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Message;
}
constexpr void System::Net::Authorization::__set_m_Message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Authorization::__get_m_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr bool const& System::Net::Authorization::__get_m_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr void System::Net::Authorization::__set_m_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Complete = value;
}
constexpr ::StringW& System::Net::Authorization::__get_ModuleAuthenticationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModuleAuthenticationType;
}
constexpr ::StringW const& System::Net::Authorization::__get_ModuleAuthenticationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ModuleAuthenticationType;
}
constexpr void System::Net::Authorization::__set_ModuleAuthenticationType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ModuleAuthenticationType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW token) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Authorization*>(token));
}
inline void System::Net::Authorization::_ctor(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW token, bool finished) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Authorization*>(token, finished));
}
inline void System::Net::Authorization::_ctor(::StringW token, bool finished) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, finished);
}
inline ::StringW System::Net::Authorization::get_Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), "get_Message",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Net::Authorization::get_Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Authorization*>::get(), "get_Complete",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Authorization::Authorization() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
