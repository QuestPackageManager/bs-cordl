#pragma once
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_UserBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::BufferOffsetSize* (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(
    &::Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(),
                                                                               "get_UserBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.get_CurrentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(
    &::Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(),
                                                                               "get_CurrentSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.set_CurrentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(int32_t)>(
    &::Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fa68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), "set_CurrentSize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncReadOrWriteRequest::*)(
    ::Mono::Net::Security::MobileAuthenticatedStream*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Net::Security::AsyncReadOrWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x281fa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncReadOrWriteRequest.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::AsyncReadOrWriteRequest::*)()>(
    &::Mono::Net::Security::AsyncReadOrWriteRequest::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x281fb14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::Mono::Net::Security::BufferOffsetSize*& Mono::Net::Security::AsyncReadOrWriteRequest::__get__UserBuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserBuffer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize*> const& Mono::Net::Security::AsyncReadOrWriteRequest::__get__UserBuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserBuffer_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncReadOrWriteRequest::__set__UserBuffer_k__BackingField(::Mono::Net::Security::BufferOffsetSize* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UserBuffer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Net::Security::AsyncReadOrWriteRequest::__get__CurrentSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentSize_k__BackingField;
}
constexpr int32_t const& Mono::Net::Security::AsyncReadOrWriteRequest::__get__CurrentSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentSize_k__BackingField;
}
constexpr void Mono::Net::Security::AsyncReadOrWriteRequest::__set__CurrentSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentSize_k__BackingField = value;
}
inline ::Mono::Net::Security::BufferOffsetSize* Mono::Net::Security::AsyncReadOrWriteRequest::get_UserBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(),
                                                                             "get_UserBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::BufferOffsetSize*, false>(this, ___internal_method);
}
inline int32_t Mono::Net::Security::AsyncReadOrWriteRequest::get_CurrentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(),
                                                                             "get_CurrentSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Mono::Net::Security::AsyncReadOrWriteRequest::set_CurrentSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), "set_CurrentSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Net::Security::AsyncReadOrWriteRequest* Mono::Net::Security::AsyncReadOrWriteRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync,
                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::AsyncReadOrWriteRequest*>(parent, sync, buffer, offset, size));
}
inline void Mono::Net::Security::AsyncReadOrWriteRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                                int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, sync, buffer, offset, size);
}
inline ::StringW Mono::Net::Security::AsyncReadOrWriteRequest::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncReadOrWriteRequest*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::AsyncReadOrWriteRequest::AsyncReadOrWriteRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
