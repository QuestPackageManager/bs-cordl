#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__ExclusiveReference_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexRunner* (::System::Text::RegularExpressions::ExclusiveReference::*)()>(
    &::System::Text::RegularExpressions::ExclusiveReference::Get)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2955ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(),
                                                                               "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::ExclusiveReference::*)(::System::Text::RegularExpressions::RegexRunner*)>(
    &::System::Text::RegularExpressions::ExclusiveReference::Release)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2955d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexRunner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::ExclusiveReference::*)()>(
    &::System::Text::RegularExpressions::ExclusiveReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2955dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexRunner*& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ref;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexRunner*> const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ref;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__ref(::System::Text::RegularExpressions::RegexRunner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::RegexRunner*& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexRunner*> const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__obj(::System::Text::RegularExpressions::RegexRunner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr int32_t const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__locked(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locked = value;
}
inline ::System::Text::RegularExpressions::RegexRunner* System::Text::RegularExpressions::ExclusiveReference::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(),
                                                                             "Get", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexRunner*, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::ExclusiveReference::Release(::System::Text::RegularExpressions::RegexRunner* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexRunner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::Text::RegularExpressions::ExclusiveReference* System::Text::RegularExpressions::ExclusiveReference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::ExclusiveReference*>());
}
inline void System::Text::RegularExpressions::ExclusiveReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::ExclusiveReference*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::ExclusiveReference::ExclusiveReference() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
