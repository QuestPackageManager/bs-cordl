#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/DisplayStringFormatAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__DisplayStringFormatAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute.get_formatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)()>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::get_formatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45682e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(),
                                                 "get_formatString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute.set_formatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::set_formatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45682e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(), "set_formatString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x45682f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_get__formatString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_get__formatString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_set__formatString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatString_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::get_formatString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(), "get_formatString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::set_formatString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(), "set_formatString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::_ctor(::StringW formatString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formatString);
}
inline ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute* UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::New_ctor(::StringW formatString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(formatString));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::DisplayStringFormatAttribute() {}
