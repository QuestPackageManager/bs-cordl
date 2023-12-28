#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO.get_alwaysOwnedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AlwaysOwnedContentSO* (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(
    &::GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                                                                               "get_alwaysOwnedContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentContainerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentContainerSO::*)()>(
    &::GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AlwaysOwnedContentSO*& GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedContent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AlwaysOwnedContentSO*> const& GlobalNamespace::AlwaysOwnedContentContainerSO::__get__alwaysOwnedContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedContent;
}
constexpr void GlobalNamespace::AlwaysOwnedContentContainerSO::__set__alwaysOwnedContent(::GlobalNamespace::AlwaysOwnedContentSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::AlwaysOwnedContentSO* GlobalNamespace::AlwaysOwnedContentContainerSO::get_alwaysOwnedContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(),
                                                                             "get_alwaysOwnedContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AlwaysOwnedContentSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AlwaysOwnedContentContainerSO* GlobalNamespace::AlwaysOwnedContentContainerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AlwaysOwnedContentContainerSO*>());
}
inline void GlobalNamespace::AlwaysOwnedContentContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentContainerSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlwaysOwnedContentContainerSO::AlwaysOwnedContentContainerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
