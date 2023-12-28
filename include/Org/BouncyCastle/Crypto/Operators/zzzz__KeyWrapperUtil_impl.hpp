#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__KeyWrapperUtil_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.WrapperForName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IKeyWrapper* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xf28878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(), "WrapperForName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil.UnwrapperForName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IKeyUnwrapper* (*)(::StringW, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xf2909c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(), "UnwrapperForName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf292d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::setStaticF_providerMap(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "providerMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::getStaticF_providerMap() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "providerMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get>();
}
inline ::Org::BouncyCastle::Crypto::IKeyWrapper* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::WrapperForName(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(), "WrapperForName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyWrapper*, false>(nullptr, ___internal_method, algorithm, parameters);
}
inline ::Org::BouncyCastle::Crypto::IKeyUnwrapper* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::UnwrapperForName(::StringW algorithm,
                                                                                                                          ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(), "UnwrapperForName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IKeyUnwrapper*, false>(nullptr, ___internal_method, algorithm, parameters);
}
inline ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil* Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>());
}
inline void Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::KeyWrapperUtil::KeyWrapperUtil() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
