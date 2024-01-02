#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::*)(
    ::Org::BouncyCastle::Bcpg::BcpgInputStream*, bool, int32_t)>(&::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11cd280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::ReadByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x11cf344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::Read)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11cf520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream.ReadPartialDataLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::ReadPartialDataLength)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x11cf3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(),
                                                 "ReadPartialDataLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> const& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_partial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr bool const& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_partial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr void Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__set_partial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partial = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_dataLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__get_dataLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr void Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__set_dataLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataLength = value;
}
inline ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream* Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn,
                                                                                                                                                  bool partial, int32_t dataLength) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>(bcpgIn, partial, dataLength));
}
inline void Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn, partial, dataLength);
}
inline int32_t Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::ReadPartialDataLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*>::get(),
                                               "ReadPartialDataLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream::__BcpgInputStream__PartialInputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Wrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::BcpgInputStream* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11cc880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "Wrap", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11cc918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11cc944;

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
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11cc984;

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
  constexpr static std::size_t addrs = 0x11cca38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11cca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11cca9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.NextPacketTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PacketTag (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11ccab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                               "NextPacketTag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::Packet* (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x11ccb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadPacket",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::Close)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11cf2dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__set_m_in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr bool const& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__set_next(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_nextB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgInputStream::__get_nextB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__set_nextB(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextB = value;
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "Wrap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgInputStream*, false>(nullptr, ___internal_method, inStr);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(inputStream));
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
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
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, off, len);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadFully", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(),
                                                                             "NextPacketTag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PacketTag, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Packet* Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), "ReadPacket",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Packet*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream::BcpgInputStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
