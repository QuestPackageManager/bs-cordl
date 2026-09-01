#pragma once
// IWYU pragma private; include "UnityEngine\AsyncInstantiateOperationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperationHelper_def.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperationHelper.CreateAsyncInstantiateOperationResultArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AsyncInstantiateOperation*, int32_t)>(
    &::UnityEngine::AsyncInstantiateOperationHelper::CreateAsyncInstantiateOperationResultArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ad9c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperationHelper*>(),
                                                { "CreateAsyncInstantiateOperationResultArray", {}, { ::i2c::type_of<::UnityEngine::AsyncInstantiateOperation*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AsyncInstantiateOperationHelper::CreateAsyncInstantiateOperationResultArray(::UnityEngine::AsyncInstantiateOperation* op, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperationHelper*>(),
                                              { "CreateAsyncInstantiateOperationResultArray", {}, { ::i2c::type_of<::UnityEngine::AsyncInstantiateOperation*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, op, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperationHelper::AsyncInstantiateOperationHelper() {}
