#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialDiscoverySnapshotCreateInfoEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialDiscoverySnapshotCreateInfoEXT_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentTypeEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4334c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT.get_componentTypeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_componentTypeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e43354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_componentTypeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT.get_componentTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_componentTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4335c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_componentTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    void*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e43364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e43380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    void*, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e433fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e43498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    void*, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e43528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::*)(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e435d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::setStaticF_defaultValue(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, "defaultValue",
                                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(
      std::forward<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(value));
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::getStaticF_defaultValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT, "defaultValue",
                                           ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>();
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_componentTypeCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_componentTypeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::get_componentTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(), { "get_componentTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(void* next, uint32_t componentTypeCount,
                                                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, componentTypeCount, componentTypes);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(uint32_t componentTypeCount,
                                                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* componentTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, componentTypeCount, componentTypes);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, componentTypes);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, componentTypes);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, componentTypes);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::_ctor(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT> componentTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, componentTypes);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_componentTypeCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_componentTypes_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::XrSpatialDiscoverySnapshotCreateInfoEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _componentTypeCount_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* _componentTypes_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_componentTypeCount_k__BackingField = _componentTypeCount_k__BackingField;
  this->_componentTypes_k__BackingField = _componentTypes_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialDiscoverySnapshotCreateInfoEXT::XrSpatialDiscoverySnapshotCreateInfoEXT() {}
