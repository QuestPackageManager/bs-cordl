#pragma once
// IWYU pragma private; include "UnityEngine/TransformDispatchData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::TransformDispatchData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TransformDispatchData::*)()>(&::UnityEngine::TransformDispatchData::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6ad13f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformDispatchData>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TransformDispatchData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TransformDispatchData>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::TransformDispatchData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::TransformDispatchData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transformedID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentID", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "scales", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TransformDispatchData::TransformDispatchData(::Unity::Collections::NativeArray_1<int32_t> transformedID, ::Unity::Collections::NativeArray_1<int32_t> parentID,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrices,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> rotations,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> scales) noexcept {
  this->transformedID = transformedID;
  this->parentID = parentID;
  this->localToWorldMatrices = localToWorldMatrices;
  this->positions = positions;
  this->rotations = rotations;
  this->scales = scales;
}
// Ctor Parameters []
constexpr ::UnityEngine::TransformDispatchData::TransformDispatchData() {}
