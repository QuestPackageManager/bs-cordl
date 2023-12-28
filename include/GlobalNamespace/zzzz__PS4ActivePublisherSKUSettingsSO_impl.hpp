#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS4ActivePublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4PublisherSKUSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS4ActivePublisherSKUSettingsSO::*)()>(
    &::GlobalNamespace::PS4ActivePublisherSKUSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23680bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS4PublisherSKUSettingsSO*& GlobalNamespace::PS4ActivePublisherSKUSettingsSO::__get_activePublisherSKUSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activePublisherSKUSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4PublisherSKUSettingsSO*> const& GlobalNamespace::PS4ActivePublisherSKUSettingsSO::__get_activePublisherSKUSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activePublisherSKUSettings;
}
constexpr void GlobalNamespace::PS4ActivePublisherSKUSettingsSO::__set_activePublisherSKUSettings(::GlobalNamespace::PS4PublisherSKUSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activePublisherSKUSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO* GlobalNamespace::PS4ActivePublisherSKUSettingsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*>());
}
inline void GlobalNamespace::PS4ActivePublisherSKUSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS4ActivePublisherSKUSettingsSO::PS4ActivePublisherSKUSettingsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
