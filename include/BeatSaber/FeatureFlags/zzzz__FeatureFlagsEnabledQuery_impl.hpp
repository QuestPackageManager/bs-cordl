#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlagsEnabledQuery.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureFlagsEnabledQuery_def.hpp"
#include "Main/GraphQL/Queries/zzzz__FeatureFlagsEnabled_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31f7c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery.CreateQuery
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Main::GraphQL::Queries::FeatureFlagsEnabled* (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::CreateQuery)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31f81e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>::get(),
                        "CreateQuery",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::_ctor(::System::Collections::Generic::List_1<::StringW>*  features)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, features);
}
inline ::Main::GraphQL::Queries::FeatureFlagsEnabled* BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::CreateQuery(::System::Collections::Generic::List_1<::StringW>*  features)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>::get(),
                        "CreateQuery",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Main::GraphQL::Queries::FeatureFlagsEnabled*, false>(nullptr, ___internal_method, features);
}
inline ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery* BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::New_ctor(::System::Collections::Generic::List_1<::StringW>*  features)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*>(features));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery::FeatureFlagsEnabledQuery()   {
}
