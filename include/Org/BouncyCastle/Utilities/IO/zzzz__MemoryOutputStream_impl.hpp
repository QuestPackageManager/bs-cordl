#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/MemoryOutputStream.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__MemoryOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d65ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>::get(),
                                                                               "get_CanRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d65b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Utilities::IO::MemoryOutputStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>::get(),
                                                                             "get_CanRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::MemoryOutputStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream* Org::BouncyCastle::Utilities::IO::MemoryOutputStream::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::IO::MemoryOutputStream*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::MemoryOutputStream::MemoryOutputStream() {}
