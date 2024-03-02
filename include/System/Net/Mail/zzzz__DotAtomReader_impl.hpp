#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__DotAtomReader_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::DotAtomReader.ReadReverse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::DotAtomReader::ReadReverse)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x29eb824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::DotAtomReader*>::get(), "ReadReverse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Net::Mail::DotAtomReader::ReadReverse(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Mail::DotAtomReader*>::get(), "ReadReverse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, index);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::DotAtomReader::DotAtomReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
