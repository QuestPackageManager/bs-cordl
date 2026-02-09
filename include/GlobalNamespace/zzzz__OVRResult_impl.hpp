#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
template<typename TStatus>
inline ::GlobalNamespace::OVRResult_1<TStatus> GlobalNamespace::OVRResult::From(TStatus  status)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult*>::get(),
                    "From",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_1<TStatus>, false>(nullptr, ___internal_method, status);
}
template<typename TResult,typename TStatus>
inline ::GlobalNamespace::OVRResult_2<TResult,TStatus> GlobalNamespace::OVRResult::From(TResult  result, TStatus  status)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResult*>::get(),
                    "From",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TStatus>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStatus>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRResult_2<TResult,TStatus>, false>(nullptr, ___internal_method, result, status);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRResult::OVRResult()   {
}
