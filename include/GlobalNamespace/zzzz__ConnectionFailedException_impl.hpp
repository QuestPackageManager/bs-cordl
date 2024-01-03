#pragma once
#include "GlobalNamespace/zzzz__ConnectionFailedReason_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedException_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionFailedException::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe32260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectionFailedException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectionFailedException::*)(::GlobalNamespace::ConnectionFailedReason, ::StringW)>(
    &::GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe322cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ConnectionFailedReason& GlobalNamespace::ConnectionFailedException::__get_reason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr ::GlobalNamespace::ConnectionFailedReason const& GlobalNamespace::ConnectionFailedException::__get_reason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr void GlobalNamespace::ConnectionFailedException::__set_reason(::GlobalNamespace::ConnectionFailedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reason = value;
}
inline ::GlobalNamespace::ConnectionFailedException* GlobalNamespace::ConnectionFailedException::New_ctor(::GlobalNamespace::ConnectionFailedReason reason) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConnectionFailedException*>(reason));
}
inline void GlobalNamespace::ConnectionFailedException::_ctor(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline ::GlobalNamespace::ConnectionFailedException* GlobalNamespace::ConnectionFailedException::New_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConnectionFailedException*>(reason, message));
}
inline void GlobalNamespace::ConnectionFailedException::_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectionFailedException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectionFailedException::ConnectionFailedException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
