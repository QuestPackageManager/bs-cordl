#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IntrinsicAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IntrinsicAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IntrinsicAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::IntrinsicAttribute::*)()>(
    &::System::Runtime::CompilerServices::IntrinsicAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d18954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IntrinsicAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::IntrinsicAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IntrinsicAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::IntrinsicAttribute* System::Runtime::CompilerServices::IntrinsicAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::IntrinsicAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::IntrinsicAttribute::IntrinsicAttribute() {}
