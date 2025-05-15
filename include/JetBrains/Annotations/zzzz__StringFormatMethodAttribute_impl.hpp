#pragma once
// IWYU pragma private; include "JetBrains/Annotations/StringFormatMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__StringFormatMethodAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::StringFormatMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4af3344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute.get_FormatParameterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::StringFormatMethodAttribute::*)()>(
    &::JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af336c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(),
                                                                               "get_FormatParameterName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute.set_FormatParameterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af3374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(), "set_FormatParameterName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FormatParameterName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FormatParameterName_k__BackingField;
}
constexpr void JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_set__FormatParameterName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FormatParameterName_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void JetBrains::Annotations::StringFormatMethodAttribute::_ctor(::StringW formatParameterName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formatParameterName);
}
inline ::StringW JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(),
                                                                             "get_FormatParameterName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::StringFormatMethodAttribute*>::get(), "set_FormatParameterName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::StringFormatMethodAttribute* JetBrains::Annotations::StringFormatMethodAttribute::New_ctor(::StringW formatParameterName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::StringFormatMethodAttribute*>(formatParameterName));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::StringFormatMethodAttribute::StringFormatMethodAttribute() {}
