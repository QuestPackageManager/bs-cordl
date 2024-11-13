#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/LiteralDataPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__LiteralDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x26103e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                               "get_Format", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_ModificationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2613424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                               "get_ModificationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x261342c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                               "get_FileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.GetRawFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2613438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                               "GetRawFileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_format(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_fileName(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_modDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modDate;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_get_modDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modDate;
}
constexpr void Org::BouncyCastle::Bcpg::LiteralDataPacket::__cordl_internal_set_modDate(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modDate = value;
}
inline ::Org::BouncyCastle::Bcpg::LiteralDataPacket* Org::BouncyCastle::Bcpg::LiteralDataPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
inline int32_t Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(), "get_Format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                             "get_ModificationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                             "get_FileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket*>::get(),
                                                                             "GetRawFileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::LiteralDataPacket::LiteralDataPacket() {}
