#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgInputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)(
    ::Org::BouncyCastle::Bcpg::BcpgInputStream*, bool, int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x359e40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadByte)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x35a0400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::Read)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x35a05d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.ReadPartialDataLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadPartialDataLength)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x35a04a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), "ReadPartialDataLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_partial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr bool const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_partial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_partial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partial = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_dataLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_dataLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_dataLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataLength = value;
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn, partial, dataLength);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadPartialDataLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>::get(), "ReadPartialDataLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn,
                                                                                                                                            bool partial, int32_t dataLength) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(bcpgIn, partial, dataLength));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::BcpgInputStream_PartialInputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Wrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::BcpgInputStream* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x359da14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "Wrap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x359daa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x359dad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::Read)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x359db0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x359dbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x359dbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x359dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.NextPacketTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PacketTag (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x359dc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                               "NextPacketTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::Packet* (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x359dd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadPacket",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::Close)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x35a037c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_m_in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr bool const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_next(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_nextB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_nextB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_nextB(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextB = value;
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap(::System::IO::Stream* inStr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "Wrap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgInputStream*, false>(nullptr, ___internal_method, inStr);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputStream);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::BcpgInputStream::ReadAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, off, len);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                             "NextPacketTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PacketTag, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Packet* Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadPacket",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Packet*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream::BcpgInputStream() {}
