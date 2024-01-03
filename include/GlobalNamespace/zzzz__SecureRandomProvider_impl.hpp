#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe567c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.GetByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(
    &::GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetByte)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe568e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "GetByte",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState.FillBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(
    &::GlobalNamespace::__SecureRandomProvider__SecureRandomState::FillBuffer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xe56b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "FillBuffer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SecureRandomProvider__SecureRandomState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SecureRandomProvider__SecureRandomState::*)()>(
    &::GlobalNamespace::__SecureRandomProvider__SecureRandomState::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe56af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider*& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RNGCryptoServiceProvider*> const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__random(::System::Security::Cryptography::RNGCryptoServiceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer0;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer0;
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__randomBuffer0(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomBuffer0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer1;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__randomBuffer1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomBuffer1;
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__randomBuffer1(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomBuffer1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& GlobalNamespace::__SecureRandomProvider__SecureRandomState::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void GlobalNamespace::__SecureRandomProvider__SecureRandomState::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, length);
}
inline uint8_t GlobalNamespace::__SecureRandomProvider__SecureRandomState::GetByte() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "GetByte",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::FillBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), "FillBuffer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* GlobalNamespace::__SecureRandomProvider__SecureRandomState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>());
}
inline void GlobalNamespace::__SecureRandomProvider__SecureRandomState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SecureRandomProvider__SecureRandomState::__SecureRandomProvider__SecureRandomState() {}
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(int32_t)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe56720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)()>(&::GlobalNamespace::SecureRandomProvider::GetByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe56880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetByte",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe56988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecureRandomProvider.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe56a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SecureRandomProvider::setStaticF__secureRandomState(::GlobalNamespace::__SecureRandomProvider__SecureRandomState* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*, "_secureRandomState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get>(
      std::forward<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*>(value));
}
inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* GlobalNamespace::SecureRandomProvider::getStaticF__secureRandomState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SecureRandomProvider__SecureRandomState*, "_secureRandomState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::SecureRandomProvider::GetBytes(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, length);
}
inline uint8_t GlobalNamespace::SecureRandomProvider::GetByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetByte",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, length);
}
inline void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SecureRandomProvider*>::get(), "GetBytes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecureRandomProvider::SecureRandomProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
