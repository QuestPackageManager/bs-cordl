#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TypeDependencyAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TypeDependencyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::TypeDependencyAttribute::*)(::StringW)>(
    &::System::Runtime::CompilerServices::TypeDependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2758f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TypeDependencyAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::CompilerServices::TypeDependencyAttribute::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::TypeDependencyAttribute* System::Runtime::CompilerServices::TypeDependencyAttribute::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::TypeDependencyAttribute*>(typeName));
}
inline void System::Runtime::CompilerServices::TypeDependencyAttribute::_ctor(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TypeDependencyAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TypeDependencyAttribute::TypeDependencyAttribute() {}
