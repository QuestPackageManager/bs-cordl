#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(&::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x124e464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x124e4a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x124e4c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::Close)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x124e4ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*& Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*> const&
Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_set__out(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____out)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__sGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__sGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_get__eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eiGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream* Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::New_ctor(
    ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>(outStream, sGen, cGen, eiGen));
}
inline void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::_ctor(::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream,
                                                                                                         ::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen,
                                                                                                         ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                         ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZOutputStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream, sGen, cGen, eiGen);
}
inline void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream::__CmsCompressedDataStreamGenerator__CmsCompressedOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124e114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), "SetBufferSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x124e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::StringW)>(&::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x124e1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
inline ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), "SetBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW compressionOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(),
                                                                             "Open", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, compressionOID);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW contentOID, ::StringW compressionOID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, contentOID, compressionOID);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataStreamGenerator::CmsCompressedDataStreamGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
