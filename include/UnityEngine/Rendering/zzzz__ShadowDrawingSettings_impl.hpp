#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowDrawingSettings.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_impl.hpp"
#include "UnityEngine/zzzz__ShadowObjectsFilter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowDrawingSettings.set_useRenderingLayerMaskTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShadowDrawingSettings::*)(bool)>(
    &::UnityEngine::Rendering::ShadowDrawingSettings::set_useRenderingLayerMaskTest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b24c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { "set_useRenderingLayerMaskTest", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowDrawingSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShadowDrawingSettings::*)(::UnityEngine::Rendering::CullingResults, int32_t)>(
    &::UnityEngine::Rendering::ShadowDrawingSettings::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b24c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowDrawingSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShadowDrawingSettings::*)(::UnityEngine::Rendering::ShadowDrawingSettings)>(
    &::UnityEngine::Rendering::ShadowDrawingSettings::Equals)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b24d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowDrawingSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowDrawingSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShadowDrawingSettings::*)(::System::Object*)>(&::UnityEngine::Rendering::ShadowDrawingSettings::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b25074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShadowDrawingSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ShadowDrawingSettings::*)()>(&::UnityEngine::Rendering::ShadowDrawingSettings::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b25130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ShadowDrawingSettings::set_useRenderingLayerMaskTest(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { "set_useRenderingLayerMaskTest", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ShadowDrawingSettings::_ctor(::UnityEngine::Rendering::CullingResults cullingResults, int32_t lightIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cullingResults, lightIndex);
}
inline bool UnityEngine::Rendering::ShadowDrawingSettings::Equals(::UnityEngine::Rendering::ShadowDrawingSettings other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowDrawingSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ShadowDrawingSettings::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::ShadowDrawingSettings::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShadowDrawingSettings>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
constexpr UnityEngine::Rendering::ShadowDrawingSettings::operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*
UnityEngine::Rendering::ShadowDrawingSettings::i___System__IEquatable_1___UnityEngine__Rendering__ShadowDrawingSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_CullingResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LightIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SplitIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseRenderingLayerMaskTest", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BatchLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SplitData", ty:
// "::UnityEngine::Rendering::ShadowSplitData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ObjectsFilter", ty: "::UnityEngine::ShadowObjectsFilter", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_ProjectionType", ty: "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowDrawingSettings::ShadowDrawingSettings(::UnityEngine::Rendering::CullingResults m_CullingResults, int32_t m_LightIndex, int32_t m_SplitIndex,
                                                                                 int32_t m_UseRenderingLayerMaskTest, uint32_t m_BatchLayerMask, ::UnityEngine::Rendering::ShadowSplitData m_SplitData,
                                                                                 ::UnityEngine::ShadowObjectsFilter m_ObjectsFilter,
                                                                                 ::UnityEngine::Rendering::BatchCullingProjectionType m_ProjectionType) noexcept {
  this->m_CullingResults = m_CullingResults;
  this->m_LightIndex = m_LightIndex;
  this->m_SplitIndex = m_SplitIndex;
  this->m_UseRenderingLayerMaskTest = m_UseRenderingLayerMaskTest;
  this->m_BatchLayerMask = m_BatchLayerMask;
  this->m_SplitData = m_SplitData;
  this->m_ObjectsFilter = m_ObjectsFilter;
  this->m_ProjectionType = m_ProjectionType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowDrawingSettings::ShadowDrawingSettings() {}
