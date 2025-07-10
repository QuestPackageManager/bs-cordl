#pragma once
// IWYU pragma private; include "UnityEngine/TransformDispatchData.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
//  Writing Method size for method: ::UnityEngine::TransformDispatchData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TransformDispatchData::*)()>(&::UnityEngine::TransformDispatchData::Dispose)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x48a582c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TransformDispatchData>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::TransformDispatchData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TransformDispatchData>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::TransformDispatchData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::TransformDispatchData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
