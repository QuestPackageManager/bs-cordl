#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__ConstructedOctetStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1420084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::ConstructedOctetStream::Read)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x14224c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1422794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::ConstructedOctetStream.GetNextParser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser* (::Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(
    &::Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x142268c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(),
                                                                               "GetNextParser", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____first;
}
constexpr bool const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____first;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__first(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____first = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__currentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_get__currentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentStream;
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__cordl_internal_set__currentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::ConstructedOctetStream* Org::BouncyCastle::Asn1::ConstructedOctetStream::New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>(parser));
}
inline void Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::ConstructedOctetStream*>::get(),
                                                                             "GetNextParser", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::ConstructedOctetStream::ConstructedOctetStream() {}
