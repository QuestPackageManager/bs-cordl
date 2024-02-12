#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x120adc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120ae40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataParser.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::CmsCompressedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x120ae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(),
                                                                               "GetContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* Org::BouncyCastle::Cms::CmsCompressedDataParser::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(compressedData));
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compressedData);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* Org::BouncyCastle::Cms::CmsCompressedDataParser::New_ctor(::System::IO::Stream* compressedData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>(compressedData));
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataParser::_ctor(::System::IO::Stream* compressedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compressedData);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsCompressedDataParser::GetContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataParser*>::get(),
                                                                             "GetContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataParser::CmsCompressedDataParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
