#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__SimpleBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::SimpleBlockResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::SimpleBlockResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::SimpleBlockResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1036e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::SimpleBlockResult.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::SimpleBlockResult::*)()>(
    &::Org::BouncyCastle::Crypto::SimpleBlockResult::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1036e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(),
                                                                               "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::SimpleBlockResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::SimpleBlockResult::*)()>(
    &::Org::BouncyCastle::Crypto::SimpleBlockResult::Collect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1036ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(),
                                                                               "Collect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::SimpleBlockResult.Collect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::SimpleBlockResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::SimpleBlockResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1036ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(), "Collect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr Org::BouncyCastle::Crypto::SimpleBlockResult::operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::SimpleBlockResult::i___Org__BouncyCastle__Crypto__IBlockResult() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBlockResult*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::SimpleBlockResult::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::SimpleBlockResult::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void Org::BouncyCastle::Crypto::SimpleBlockResult::__cordl_internal_set_result(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::SimpleBlockResult* Org::BouncyCastle::Crypto::SimpleBlockResult::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::SimpleBlockResult*>(result));
}
inline void Org::BouncyCastle::Crypto::SimpleBlockResult::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline int32_t Org::BouncyCastle::Crypto::SimpleBlockResult::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(),
                                                                             "get_Length", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::SimpleBlockResult::Collect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(), "Collect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::SimpleBlockResult::Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::SimpleBlockResult*>::get(), "Collect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, destination, offset);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::SimpleBlockResult::SimpleBlockResult() {}
