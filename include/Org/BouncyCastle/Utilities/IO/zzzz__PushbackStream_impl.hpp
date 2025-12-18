#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/PushbackStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__PushbackStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::PushbackStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::PushbackStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::IO::PushbackStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x353401c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::PushbackStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::PushbackStream::*)()>(
    &::Org::BouncyCastle::Utilities::IO::PushbackStream::ReadByte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x353402c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::PushbackStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::PushbackStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::IO::PushbackStream::Read)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3534068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::PushbackStream.Unread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::PushbackStream::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::IO::PushbackStream::Unread)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35340d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 42));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Utilities::IO::PushbackStream::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::IO::PushbackStream::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Utilities::IO::PushbackStream::__cordl_internal_set_buf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
inline void Org::BouncyCastle::Utilities::IO::PushbackStream::_ctor(::System::IO::Stream* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline int32_t Org::BouncyCastle::Utilities::IO::PushbackStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::IO::PushbackStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Utilities::IO::PushbackStream::Unread(int32_t b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::PushbackStream*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline ::Org::BouncyCastle::Utilities::IO::PushbackStream* Org::BouncyCastle::Utilities::IO::PushbackStream::New_ctor(::System::IO::Stream* s) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::IO::PushbackStream*>(s));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::PushbackStream::PushbackStream() {}
