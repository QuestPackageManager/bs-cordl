#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/GraphQLClientProviderInstallerSO.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.get_devServerPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::get_devServerPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                        "get_devServerPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3200d7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::*)()>(&::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3200e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpointPattern()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endpointPattern;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__endpointPattern() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endpointPattern;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__endpointPattern(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endpointPattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__devServerPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devServerPath;
}
constexpr ::StringW const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__devServerPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devServerPath;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__devServerPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____devServerPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__autoInitialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoInitialize;
}
constexpr bool const& BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_get__autoInitialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoInitialize;
}
constexpr void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::__cordl_internal_set__autoInitialize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoInitialize = value;
}
inline ::StringW BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::get_devServerPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                        "get_devServerPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                            il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                            6
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO::GraphQLClientProviderInstallerSO()   {
}
