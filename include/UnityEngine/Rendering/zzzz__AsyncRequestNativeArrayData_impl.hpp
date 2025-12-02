#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncRequestNativeArrayData.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncRequestNativeArrayData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T>
inline ::UnityEngine::Rendering::AsyncRequestNativeArrayData UnityEngine::Rendering::AsyncRequestNativeArrayData::CreateAndCheckAccess(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AsyncRequestNativeArrayData>::get(), "CreateAndCheckAccess",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncRequestNativeArrayData, false>(nullptr, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "nativeArrayBuffer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lengthInBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AsyncRequestNativeArrayData::AsyncRequestNativeArrayData(void* nativeArrayBuffer, int64_t lengthInBytes) noexcept {
  this->nativeArrayBuffer = nativeArrayBuffer;
  this->lengthInBytes = lengthInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AsyncRequestNativeArrayData::AsyncRequestNativeArrayData() {}
