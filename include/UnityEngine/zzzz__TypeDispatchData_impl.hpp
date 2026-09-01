#pragma once
// IWYU pragma private; include "UnityEngine\TypeDispatchData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TypeDispatchData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TypeDispatchData::*)()>(&::UnityEngine::TypeDispatchData::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad46a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TypeDispatchData>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TypeDispatchData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TypeDispatchData>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::TypeDispatchData::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::TypeDispatchData::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "changed", ty: "::ArrayW<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "changedID", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "destroyedID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TypeDispatchData::TypeDispatchData(::ArrayW<::UnityW<::UnityEngine::Object>> changed, ::Unity::Collections::NativeArray_1<int32_t> changedID,
                                                            ::Unity::Collections::NativeArray_1<int32_t> destroyedID) noexcept {
  this->changed = changed;
  this->changedID = changedID;
  this->destroyedID = destroyedID;
}
// Ctor Parameters []
constexpr ::UnityEngine::TypeDispatchData::TypeDispatchData() {}
