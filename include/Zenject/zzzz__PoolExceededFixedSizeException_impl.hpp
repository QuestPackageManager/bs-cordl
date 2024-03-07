#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Zenject/zzzz__PoolExceededFixedSizeException_def.hpp"
//  Writing Method size for method: ::Zenject::PoolExceededFixedSizeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PoolExceededFixedSizeException::*)(::StringW)>(&::Zenject::PoolExceededFixedSizeException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x304f7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolExceededFixedSizeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::PoolExceededFixedSizeException* Zenject::PoolExceededFixedSizeException::New_ctor(::StringW errorMessage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolExceededFixedSizeException*>(errorMessage));
}
inline void Zenject::PoolExceededFixedSizeException::_ctor(::StringW errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolExceededFixedSizeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage);
}
// Ctor Parameters []
constexpr ::Zenject::PoolExceededFixedSizeException::PoolExceededFixedSizeException() {}
