#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorImportNamespaceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RazorImportNamespaceAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::RazorImportNamespaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::RazorImportNamespaceAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::RazorImportNamespaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4af385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorImportNamespaceAttribute.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::RazorImportNamespaceAttribute::*)()>(
    &::JetBrains::Annotations::RazorImportNamespaceAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af3884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(),
                                                                               "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorImportNamespaceAttribute.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::RazorImportNamespaceAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::RazorImportNamespaceAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4af388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(), "set_Name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::RazorImportNamespaceAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::RazorImportNamespaceAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void JetBrains::Annotations::RazorImportNamespaceAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void JetBrains::Annotations::RazorImportNamespaceAttribute::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::StringW JetBrains::Annotations::RazorImportNamespaceAttribute::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(),
                                                                             "get_Name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::RazorImportNamespaceAttribute::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::RazorImportNamespaceAttribute*>::get(), "set_Name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::RazorImportNamespaceAttribute* JetBrains::Annotations::RazorImportNamespaceAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::RazorImportNamespaceAttribute*>(name));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::RazorImportNamespaceAttribute::RazorImportNamespaceAttribute() {}
