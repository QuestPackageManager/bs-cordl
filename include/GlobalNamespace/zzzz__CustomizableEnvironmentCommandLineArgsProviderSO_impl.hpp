#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CustomizableEnvironmentCommandLineArgsProviderSO_def.hpp"
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO.GetCommandLineArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(
    &::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x21ba9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                                                 "GetCommandLineArgs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(
    &::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21bab38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICommandLineArgsProvider"
constexpr GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::operator ::GlobalNamespace::ICommandLineArgsProvider*() noexcept {
  return static_cast<::GlobalNamespace::ICommandLineArgsProvider*>(static_cast<void*>(this));
}
constexpr bool& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useCustomCommandLineArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomCommandLineArgs;
}
constexpr bool const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useCustomCommandLineArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useCustomCommandLineArgs;
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useCustomCommandLineArgs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useCustomCommandLineArgs = value;
}
constexpr bool& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useEnvironmentCommandLineArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEnvironmentCommandLineArgs;
}
constexpr bool const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useEnvironmentCommandLineArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEnvironmentCommandLineArgs;
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useEnvironmentCommandLineArgs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEnvironmentCommandLineArgs = value;
}
constexpr ::StringW& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__customCommandLineArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customCommandLineArgs;
}
constexpr ::StringW const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__customCommandLineArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customCommandLineArgs;
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__customCommandLineArgs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customCommandLineArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentCommandLineArgsProvider*& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__environmentCommandLineArgsProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentCommandLineArgsProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentCommandLineArgsProvider*> const&
GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__environmentCommandLineArgsProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentCommandLineArgsProvider;
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__environmentCommandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentCommandLineArgsProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                                               "GetCommandLineArgs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO* GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>());
}
inline void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::CustomizableEnvironmentCommandLineArgsProviderSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
