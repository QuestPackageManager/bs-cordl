#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncodingProvider_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Text::EncodingProvider::*)(::StringW)>(
    &::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Text::EncodingProvider::*)(int32_t)>(
    &::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (
    ::System::Text::EncodingProvider::*)(int32_t, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*)>(&::System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x258d764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(int32_t)>(&::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x258d860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(::StringW)>(&::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x258d93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingProvider.GetEncodingFromProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(int32_t, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*)>(
    &::System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x258da18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::EncodingProvider::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::EncodingProvider::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get>();
}
inline void System::Text::EncodingProvider::setStaticF_s_providers(::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*>, "s_providers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get>(
      std::forward<::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*>>(value));
}
inline ::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*> System::Text::EncodingProvider::getStaticF_s_providers() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Text::EncodingProvider*, ::Array<::System::Text::EncodingProvider*>*>, "s_providers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get>();
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method, name);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(int32_t codepage) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method, codepage);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method, codepage, encoderFallback, decoderFallback);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, codepage);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(::StringW encodingName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, encodingName);
}
inline ::System::Text::Encoding* System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage, ::System::Text::EncoderFallback* enc, ::System::Text::DecoderFallback* dec) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingProvider*>::get(), "GetEncodingFromProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, codepage, enc, dec);
}
// Ctor Parameters []
constexpr ::System::Text::EncodingProvider::EncodingProvider() {}
