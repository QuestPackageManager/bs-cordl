#pragma once
// IWYU pragma private; include "UnityEngine/ExposedReference_1.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
inline T UnityEngine::ExposedReference_1<T>::Resolve(::UnityEngine::IExposedPropertyTable*  resolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExposedReference_1<T>>::get(),
                        "Resolve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::IExposedPropertyTable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, resolver);
}
// Ctor Parameters [CppParam { name: "exposedName", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultValue", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::ExposedReference_1<T>::ExposedReference_1(::UnityEngine::PropertyName  exposedName, ::UnityW<::UnityEngine::Object>  defaultValue) noexcept  {
this->exposedName = exposedName;
this->defaultValue = defaultValue;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::ExposedReference_1<T>::ExposedReference_1()   {
}
