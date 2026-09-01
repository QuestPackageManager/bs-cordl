#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AsyncRequestNativeArrayData.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncRequestNativeArrayData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T>
inline ::UnityEngine::Rendering::AsyncRequestNativeArrayData UnityEngine::Rendering::AsyncRequestNativeArrayData::CreateAndCheckAccess(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData>(),
                                                           { "CreateAndCheckAccess", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncRequestNativeArrayData>(nullptr, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "nativeArrayBuffer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lengthInBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AsyncRequestNativeArrayData::AsyncRequestNativeArrayData(void* nativeArrayBuffer, int64_t lengthInBytes) noexcept {
  this->nativeArrayBuffer = nativeArrayBuffer;
  this->lengthInBytes = lengthInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AsyncRequestNativeArrayData::AsyncRequestNativeArrayData() {}
