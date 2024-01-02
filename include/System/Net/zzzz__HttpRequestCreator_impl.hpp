#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpRequestCreator_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::System::Net::HttpRequestCreator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpRequestCreator::*)()>(&::System::Net::HttpRequestCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29cb7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpRequestCreator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpRequestCreator.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (::System::Net::HttpRequestCreator::*)(::System::Uri*)>(
    &::System::Net::HttpRequestCreator::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29cb7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpRequestCreator*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr System::Net::HttpRequestCreator::operator ::System::Net::IWebRequestCreate*() noexcept {
  return static_cast<::System::Net::IWebRequestCreate*>(static_cast<void*>(this));
}
inline ::System::Net::HttpRequestCreator* System::Net::HttpRequestCreator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpRequestCreator*>());
}
inline void System::Net::HttpRequestCreator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpRequestCreator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::HttpRequestCreator::Create(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpRequestCreator*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*, false>(this, ___internal_method, uri);
}
// Ctor Parameters []
constexpr ::System::Net::HttpRequestCreator::HttpRequestCreator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
