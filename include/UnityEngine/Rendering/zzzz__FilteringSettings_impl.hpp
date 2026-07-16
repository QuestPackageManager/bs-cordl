#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FilteringSettings.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FilteringSettings::*)(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange>, int32_t, uint32_t,
                                                                                                             int32_t)>(&::UnityEngine::Rendering::FilteringSettings::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b1e200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange>>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.get_renderQueueRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderQueueRange (::UnityEngine::Rendering::FilteringSettings::*)()>(
    &::UnityEngine::Rendering::FilteringSettings::get_renderQueueRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "get_renderQueueRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.set_batchLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FilteringSettings::*)(uint32_t)>(&::UnityEngine::Rendering::FilteringSettings::set_batchLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1e308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_batchLayerMask", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.set_excludeMotionVectorObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FilteringSettings::*)(bool)>(&::UnityEngine::Rendering::FilteringSettings::set_excludeMotionVectorObjects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b1e310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_excludeMotionVectorObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.set_forceAllMotionVectorObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FilteringSettings::*)(bool)>(&::UnityEngine::Rendering::FilteringSettings::set_forceAllMotionVectorObjects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b1e31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_forceAllMotionVectorObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::FilteringSettings::*)(::UnityEngine::Rendering::FilteringSettings)>(
    &::UnityEngine::Rendering::FilteringSettings::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b1e328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::FilteringSettings::*)(::System::Object*)>(&::UnityEngine::Rendering::FilteringSettings::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b1e428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::FilteringSettings::*)()>(&::UnityEngine::Rendering::FilteringSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b1e4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FilteringSettings.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::FilteringSettings, ::UnityEngine::Rendering::FilteringSettings)>(
    &::UnityEngine::Rendering::FilteringSettings::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b1e560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FilteringSettings::_ctor(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, int32_t layerMask, uint32_t renderingLayerMask,
                                                             int32_t excludeMotionVectorObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderQueueRange, layerMask, renderingLayerMask, excludeMotionVectorObjects);
}
inline ::UnityEngine::Rendering::RenderQueueRange UnityEngine::Rendering::FilteringSettings::get_renderQueueRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "get_renderQueueRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderQueueRange>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::FilteringSettings::set_batchLayerMask(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_batchLayerMask", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::FilteringSettings::set_excludeMotionVectorObjects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_excludeMotionVectorObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::FilteringSettings::set_forceAllMotionVectorObjects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "set_forceAllMotionVectorObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::FilteringSettings::Equals(::UnityEngine::Rendering::FilteringSettings other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::FilteringSettings::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::FilteringSettings::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::FilteringSettings::op_Equality(::UnityEngine::Rendering::FilteringSettings left, ::UnityEngine::Rendering::FilteringSettings right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FilteringSettings>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
constexpr UnityEngine::Rendering::FilteringSettings::operator ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>* UnityEngine::Rendering::FilteringSettings::i___System__IEquatable_1___UnityEngine__Rendering__FilteringSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_RenderQueueRange", ty: "::UnityEngine::Rendering::RenderQueueRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayerMask", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RenderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BatchLayerMask", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ExcludeMotionVectorObjects", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ForceAllMotionVectorObjects", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SortingLayerRange", ty: "::UnityEngine::Rendering::SortingLayerRange", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::FilteringSettings::FilteringSettings(::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange, int32_t m_LayerMask, uint32_t m_RenderingLayerMask,
                                                                         uint32_t m_BatchLayerMask, int32_t m_ExcludeMotionVectorObjects, int32_t m_ForceAllMotionVectorObjects,
                                                                         ::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange) noexcept {
  this->m_RenderQueueRange = m_RenderQueueRange;
  this->m_LayerMask = m_LayerMask;
  this->m_RenderingLayerMask = m_RenderingLayerMask;
  this->m_BatchLayerMask = m_BatchLayerMask;
  this->m_ExcludeMotionVectorObjects = m_ExcludeMotionVectorObjects;
  this->m_ForceAllMotionVectorObjects = m_ForceAllMotionVectorObjects;
  this->m_SortingLayerRange = m_SortingLayerRange;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FilteringSettings::FilteringSettings() {}
