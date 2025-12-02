#pragma once
// IWYU pragma private; include "UnityEngine/WWWTranscoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__WWWTranscoder_def.hpp"
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.Hex2Byte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::UnityEngine::WWWTranscoder::Hex2Byte)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6bf3604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "Hex2Byte", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.URLDecode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::WWWTranscoder::URLDecode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6bf329c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "URLDecode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.ByteSubArrayEquals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::UnityEngine::WWWTranscoder::ByteSubArrayEquals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6bf399c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "ByteSubArrayEquals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::UnityEngine::WWWTranscoder::Decode)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6bf36c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::WWWTranscoder::setStaticF_ucHexChars(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ucHexChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_ucHexChars() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "ucHexChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_lcHexChars(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "lcHexChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_lcHexChars() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "lcHexChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlEscapeChar(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "urlEscapeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(std::forward<uint8_t>(value));
}
inline uint8_t UnityEngine::WWWTranscoder::getStaticF_urlEscapeChar() {
  return ::cordl_internals::getStaticField<uint8_t, "urlEscapeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "urlSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_urlSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "urlSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_dataSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "dataSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_dataSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "dataSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlForbidden(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "urlForbidden", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_urlForbidden() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "urlForbidden", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpEscapeChar(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "qpEscapeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(std::forward<uint8_t>(value));
}
inline uint8_t UnityEngine::WWWTranscoder::getStaticF_qpEscapeChar() {
  return ::cordl_internals::getStaticField<uint8_t, "qpEscapeChar", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "qpSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_qpSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "qpSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpForbidden(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "qpForbidden", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::getStaticF_qpForbidden() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "qpForbidden", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get>();
}
inline uint8_t UnityEngine::WWWTranscoder::Hex2Byte(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "Hex2Byte", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, b, offset);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::URLDecode(::ArrayW<uint8_t, ::Array<uint8_t>*> toEncode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "URLDecode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, toEncode);
}
inline bool UnityEngine::WWWTranscoder::ByteSubArrayEquals(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> comperand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "ByteSubArrayEquals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array, index, comperand);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnityEngine::WWWTranscoder::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, uint8_t escapeChar, ::ArrayW<uint8_t, ::Array<uint8_t>*> space) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WWWTranscoder*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, input, escapeChar, space);
}
// Ctor Parameters []
constexpr ::UnityEngine::WWWTranscoder::WWWTranscoder() {}
