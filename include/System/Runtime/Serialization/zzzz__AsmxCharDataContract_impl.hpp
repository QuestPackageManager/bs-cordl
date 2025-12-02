#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/AsmxCharDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__CharDataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__AsmxCharDataContract_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::AsmxCharDataContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::AsmxCharDataContract::*)()>(
    &::System::Runtime::Serialization::AsmxCharDataContract::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f3f0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::AsmxCharDataContract*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::AsmxCharDataContract::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::AsmxCharDataContract*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::AsmxCharDataContract* System::Runtime::Serialization::AsmxCharDataContract::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::AsmxCharDataContract*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::AsmxCharDataContract::AsmxCharDataContract() {}
