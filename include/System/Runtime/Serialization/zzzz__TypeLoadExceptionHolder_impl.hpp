#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TypeLoadExceptionHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__TypeLoadExceptionHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::TypeLoadExceptionHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::TypeLoadExceptionHolder::*)(::StringW)>(
    &::System::Runtime::Serialization::TypeLoadExceptionHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3cfd93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeLoadExceptionHolder.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::TypeLoadExceptionHolder::*)()>(
    &::System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cfd964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get(), "get_TypeName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::TypeLoadExceptionHolder::__cordl_internal_get_m_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeName;
}
constexpr ::StringW const& System::Runtime::Serialization::TypeLoadExceptionHolder::__cordl_internal_get_m_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeName;
}
constexpr void System::Runtime::Serialization::TypeLoadExceptionHolder::__cordl_internal_set_m_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::TypeLoadExceptionHolder::_ctor(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName);
}
inline ::StringW System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeLoadExceptionHolder*>::get(),
                                                                             "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::TypeLoadExceptionHolder* System::Runtime::Serialization::TypeLoadExceptionHolder::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::TypeLoadExceptionHolder*>(typeName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder::TypeLoadExceptionHolder() {}
