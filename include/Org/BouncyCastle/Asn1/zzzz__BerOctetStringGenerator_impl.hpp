#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetStringGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetStringGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::*)(
    ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12527d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::WriteByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12528b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::Write)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1252920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::*)()>(
    &::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::Close)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1252a40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buf;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_set__buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__off() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____off;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__off() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____off;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_set__off(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____off = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__gen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*> const&
Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__gen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gen;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_set__gen(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerOutputStream*& Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__derOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derOut;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerOutputStream*> const&
Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_get__derOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derOut;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__cordl_internal_set__derOut(::Org::BouncyCastle::Asn1::DerOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____derOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*
Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::New_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>(gen, buf));
}
inline void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gen, buf);
}
inline void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::__BerOctetStringGenerator__BufferedBerOctetStream::__BerOctetStringGenerator__BufferedBerOctetStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1252618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x125264c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12526a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(),
                                                                               "GetOctetOutputStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1252764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), "GetOctetOutputStream",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x12526f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), "GetOctetOutputStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* Org::BouncyCastle::Asn1::BerOctetStringGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(outStream));
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream);
}
inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* Org::BouncyCastle::Asn1::BerOctetStringGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(outStream, tagNo, isExplicit));
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(),
                                                                             "GetOctetOutputStream", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream(int32_t bufSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), "GetOctetOutputStream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, bufSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream(::ArrayW<uint8_t, ::Array<uint8_t>*> buf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>::get(), "GetOctetOutputStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, buf);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator::BerOctetStringGenerator() {}
