#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumeDebugSettings2.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__IVolumeDebugSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IVolumeDebugSettings2.get_targetRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Rendering::IVolumeDebugSettings2::*)()>(
    &::UnityEngine::Rendering::IVolumeDebugSettings2::get_targetRenderPipeline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), { ::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IVolumeDebugSettings2.get_volumeComponentsPathAndType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (
    ::UnityEngine::Rendering::IVolumeDebugSettings2::*)()>(&::UnityEngine::Rendering::IVolumeDebugSettings2::get_volumeComponentsPathAndType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), { ::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Type* UnityEngine::Rendering::IVolumeDebugSettings2::get_targetRenderPipeline() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* UnityEngine::Rendering::IVolumeDebugSettings2::get_volumeComponentsPathAndType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IVolumeDebugSettings2*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IVolumeDebugSettings"
constexpr UnityEngine::Rendering::IVolumeDebugSettings2::operator ::UnityEngine::Rendering::IVolumeDebugSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolumeDebugSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IVolumeDebugSettings"
constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* UnityEngine::Rendering::IVolumeDebugSettings2::i___UnityEngine__Rendering__IVolumeDebugSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IVolumeDebugSettings*>(static_cast<void*>(this));
}
