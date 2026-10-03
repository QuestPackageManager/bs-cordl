#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialContextCreateInfoEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialContextCreateInfoEXT_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityConfigurationBaseHeaderEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4310c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT.get_capabilityConfigCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_capabilityConfigCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_capabilityConfigCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT.get_capabilityConfigs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_capabilityConfigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_capabilityConfigs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(
    void*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e4312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(
    uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e43148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                         { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(void*, ::Unity::Collections::NativeArray_1<::System::IntPtr>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e43164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(::Unity::Collections::NativeArray_1<::System::IntPtr>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e431d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(
    void*, ::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e43240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::*)(::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e432c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_capabilityConfigCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_capabilityConfigCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::get_capabilityConfigs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(), { "get_capabilityConfigs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(void* next, uint32_t capabilityConfigCount,
                                                                                       ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* capabilityConfigs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, capabilityConfigCount, capabilityConfigs);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(uint32_t capabilityConfigCount,
                                                                                       ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* capabilityConfigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                       { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capabilityConfigCount, capabilityConfigs);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(void* next, ::Unity::Collections::NativeArray_1<::System::IntPtr> capabilityConfigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, capabilityConfigs);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(::Unity::Collections::NativeArray_1<::System::IntPtr> capabilityConfigs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capabilityConfigs);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr> capabilityConfigs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, capabilityConfigs);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::_ctor(::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr> capabilityConfigs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capabilityConfigs);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capabilityConfigCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_capabilityConfigs_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT*", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::XrSpatialContextCreateInfoEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _capabilityConfigCount_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityConfigurationBaseHeaderEXT* _capabilityConfigs_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_capabilityConfigCount_k__BackingField = _capabilityConfigCount_k__BackingField;
  this->_capabilityConfigs_k__BackingField = _capabilityConfigs_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialContextCreateInfoEXT::XrSpatialContextCreateInfoEXT() {}
