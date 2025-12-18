#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ContractNamespaceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ContractNamespaceAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ContractNamespaceAttribute.get_ClrNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ContractNamespaceAttribute::*)()>(
    &::System::Runtime::Serialization::ContractNamespaceAttribute::get_ClrNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8a6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ContractNamespaceAttribute*>::get(), "get_ClrNamespace",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ContractNamespaceAttribute.get_ContractNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::ContractNamespaceAttribute::*)()>(
    &::System::Runtime::Serialization::ContractNamespaceAttribute::get_ContractNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8a6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ContractNamespaceAttribute*>::get(), "get_ContractNamespace",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_clrNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_clrNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrNamespace;
}
constexpr void System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_set_clrNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clrNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_contractNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_contractNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractNamespace;
}
constexpr void System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_set_contractNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contractNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::Runtime::Serialization::ContractNamespaceAttribute::get_ClrNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ContractNamespaceAttribute*>::get(), "get_ClrNamespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ContractNamespaceAttribute::get_ContractNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ContractNamespaceAttribute*>::get(), "get_ContractNamespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ContractNamespaceAttribute::ContractNamespaceAttribute() {}
