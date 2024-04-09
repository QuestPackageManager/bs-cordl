#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StartupErrorSceneSetupData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::StartupErrorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25a0984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitle;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitle;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_subtitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subtitle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::StartupErrorSceneSetupData* GlobalNamespace::StartupErrorSceneSetupData::New_ctor(::StringW title, ::StringW subtitle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StartupErrorSceneSetupData*>(title, subtitle));
}
inline void GlobalNamespace::StartupErrorSceneSetupData::_ctor(::StringW title, ::StringW subtitle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, subtitle);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorSceneSetupData::StartupErrorSceneSetupData() {}
