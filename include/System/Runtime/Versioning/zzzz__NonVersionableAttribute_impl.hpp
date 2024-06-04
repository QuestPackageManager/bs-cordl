#pragma once
// IWYU pragma private; include "System/Runtime/Versioning/NonVersionableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Versioning/zzzz__NonVersionableAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Versioning::NonVersionableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Versioning::NonVersionableAttribute::*)()>(
    &::System::Runtime::Versioning::NonVersionableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30aec18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::NonVersionableAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Runtime::Versioning::NonVersionableAttribute* System::Runtime::Versioning::NonVersionableAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Versioning::NonVersionableAttribute*>());
}
inline void System::Runtime::Versioning::NonVersionableAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::NonVersionableAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Versioning::NonVersionableAttribute::NonVersionableAttribute() {}
