#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\EditorInstanceDataArrays.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__EditorInstanceDataArrays_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDataArrays_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly::*)(::by_ref<::UnityEngine::Rendering::CPUInstanceData>)>(
    &::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6825480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly::_ctor(::by_ref<::UnityEngine::Rendering::CPUInstanceData> instanceData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly::EditorInstanceDataArrays_ReadOnly() {}
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6824034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)()>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6824150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Grow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Grow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::Remove)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6824cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::EditorInstanceDataArrays.SetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::EditorInstanceDataArrays::*)(int32_t)>(&::UnityEngine::Rendering::EditorInstanceDataArrays::SetDefault)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6824d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "SetDefault", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Initialize(int32_t initCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Initialize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initCapacity);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Grow(int32_t newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Grow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newCapacity);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::Remove(int32_t index, int32_t lastIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, lastIndex);
}
inline void UnityEngine::Rendering::EditorInstanceDataArrays::SetDefault(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EditorInstanceDataArrays>(), { "SetDefault", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDataArrays"
constexpr UnityEngine::Rendering::EditorInstanceDataArrays::operator ::UnityEngine::Rendering::IDataArrays*() {
  return static_cast<::UnityEngine::Rendering::IDataArrays*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::IDataArrays"
constexpr ::UnityEngine::Rendering::IDataArrays* UnityEngine::Rendering::EditorInstanceDataArrays::i___UnityEngine__Rendering__IDataArrays() {
  return static_cast<::UnityEngine::Rendering::IDataArrays*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::EditorInstanceDataArrays::EditorInstanceDataArrays() {}
