#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstaller.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstaller_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProvider_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstaller::*)(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*)>(&::BeatSaber::GraphQL::GraphQLClientProviderInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3200eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstaller::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3200f04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings*& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__graphQlClientProviderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQlClientProviderSettings;
}
constexpr ::BeatSaber::GraphQL::GraphQLClientProvider_Settings* const& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__graphQlClientProviderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphQlClientProviderSettings;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_set__graphQlClientProviderSettings(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphQlClientProviderSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppInitSetupData*& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__setupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupData;
}
constexpr ::GlobalNamespace::AppInitSetupData* const& BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_get__setupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupData;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstaller::__cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstaller::_ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*  graphQlClientProviderSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GraphQL::GraphQLClientProvider_Settings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphQlClientProviderSettings);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>::get(),
                            7
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProviderInstaller* BeatSaber::GraphQL::GraphQLClientProviderInstaller::New_ctor(::BeatSaber::GraphQL::GraphQLClientProvider_Settings*  graphQlClientProviderSettings)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::GraphQLClientProviderInstaller*>(graphQlClientProviderSettings));
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProviderInstaller::GraphQLClientProviderInstaller()   {
}
