#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Versioning/zzzz__TargetFrameworkAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Versioning::TargetFrameworkAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Versioning::TargetFrameworkAttribute::*)(::StringW)>(
    &::System::Runtime::Versioning::TargetFrameworkAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2730d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::TargetFrameworkAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Versioning::TargetFrameworkAttribute.set_FrameworkDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Versioning::TargetFrameworkAttribute::*)(::StringW)>(
    &::System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::TargetFrameworkAttribute*>::get(), "set_FrameworkDisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkName;
}
constexpr ::StringW const& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkName;
}
constexpr void System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_set__frameworkName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____frameworkName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkDisplayName;
}
constexpr ::StringW const& System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_get__frameworkDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frameworkDisplayName;
}
constexpr void System::Runtime::Versioning::TargetFrameworkAttribute::__cordl_internal_set__frameworkDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____frameworkDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Versioning::TargetFrameworkAttribute* System::Runtime::Versioning::TargetFrameworkAttribute::New_ctor(::StringW frameworkName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Versioning::TargetFrameworkAttribute*>(frameworkName));
}
inline void System::Runtime::Versioning::TargetFrameworkAttribute::_ctor(::StringW frameworkName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::TargetFrameworkAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameworkName);
}
inline void System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Versioning::TargetFrameworkAttribute*>::get(), "set_FrameworkDisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::Versioning::TargetFrameworkAttribute::TargetFrameworkAttribute() {}
