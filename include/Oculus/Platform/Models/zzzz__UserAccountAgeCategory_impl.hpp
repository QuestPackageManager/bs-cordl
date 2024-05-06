#pragma once
#include "Oculus/Platform/zzzz__AccountAgeCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserAccountAgeCategory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserAccountAgeCategory::*)(void*)>(
    &::Oculus::Platform::Models::UserAccountAgeCategory::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2adf174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAccountAgeCategory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::AccountAgeCategory& Oculus::Platform::Models::UserAccountAgeCategory::__cordl_internal_get_AgeCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeCategory;
}
constexpr ::Oculus::Platform::AccountAgeCategory const& Oculus::Platform::Models::UserAccountAgeCategory::__cordl_internal_get_AgeCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeCategory;
}
constexpr void Oculus::Platform::Models::UserAccountAgeCategory::__cordl_internal_set_AgeCategory(::Oculus::Platform::AccountAgeCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AgeCategory = value;
}
inline ::Oculus::Platform::Models::UserAccountAgeCategory* Oculus::Platform::Models::UserAccountAgeCategory::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::UserAccountAgeCategory*>(o));
}
inline void Oculus::Platform::Models::UserAccountAgeCategory::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAccountAgeCategory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserAccountAgeCategory::UserAccountAgeCategory() {}
