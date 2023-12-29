#pragma once
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__BinHexDecoder_def.hpp"
//  Writing Method size for method: ::System::Xml::BinHexDecoder.get_IsFull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d1bf0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::BinHexDecoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26d1c00;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<char16_t, ::Array<char16_t>*>, bool)>(
    &::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x26d1f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<uint8_t>,
                                                                                           ::cordl_internals::Ptr<uint8_t>, ByRef<bool>, ByRef<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x26d1d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::BinHexDecoder::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::BinHexDecoder::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::BinHexDecoder::__set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::BinHexDecoder::__get_curIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr int32_t const& System::Xml::BinHexDecoder::__get_curIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr void System::Xml::BinHexDecoder::__set_curIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curIndex = value;
}
constexpr int32_t& System::Xml::BinHexDecoder::__get_endIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr int32_t const& System::Xml::BinHexDecoder::__get_endIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr void System::Xml::BinHexDecoder::__set_endIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endIndex = value;
}
constexpr bool& System::Xml::BinHexDecoder::__get_hasHalfByteCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHalfByteCached;
}
constexpr bool const& System::Xml::BinHexDecoder::__get_hasHalfByteCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHalfByteCached;
}
constexpr void System::Xml::BinHexDecoder::__set_hasHalfByteCached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHalfByteCached = value;
}
constexpr uint8_t& System::Xml::BinHexDecoder::__get_cachedHalfByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHalfByte;
}
constexpr uint8_t const& System::Xml::BinHexDecoder::__get_cachedHalfByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHalfByte;
}
constexpr void System::Xml::BinHexDecoder::__set_cachedHalfByte(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedHalfByte = value;
}
inline bool System::Xml::BinHexDecoder::get_IsFull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "get_IsFull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, startPos, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, bool allowOddChars) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, chars, allowOddChars);
}
inline void System::Xml::BinHexDecoder::Decode(::cordl_internals::Ptr<char16_t> pChars, ::cordl_internals::Ptr<char16_t> pCharsEndPos, ::cordl_internals::Ptr<uint8_t> pBytes,
                                               ::cordl_internals::Ptr<uint8_t> pBytesEndPos, ByRef<bool> hasHalfByteCached, ByRef<uint8_t> cachedHalfByte, ByRef<int32_t> charsDecoded,
                                               ByRef<int32_t> bytesDecoded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(), "Decode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pChars, pCharsEndPos, pBytes, pBytesEndPos, hasHalfByteCached, cachedHalfByte, charsDecoded, bytesDecoded);
}
// Ctor Parameters []
constexpr ::System::Xml::BinHexDecoder::BinHexDecoder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
