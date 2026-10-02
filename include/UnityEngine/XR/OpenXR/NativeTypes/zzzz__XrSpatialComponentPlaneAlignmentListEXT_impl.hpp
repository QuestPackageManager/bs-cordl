#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentPlaneAlignmentListEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentPlaneAlignmentListEXT_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPlaneAlignmentEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e454c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e454cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT.get_planeAlignmentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_planeAlignmentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e454d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_planeAlignmentCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT.get_planeAlignments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_planeAlignments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e454dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_planeAlignments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    void*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e454e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e45500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e4551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e45590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e455f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::*)(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e45680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_planeAlignmentCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_planeAlignmentCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::get_planeAlignments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(), { "get_planeAlignments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(void* next, uint32_t planeAlignmentCount,
                                                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT* planeAlignments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, planeAlignmentCount, planeAlignments);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(uint32_t planeAlignmentCount,
                                                                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT* planeAlignments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planeAlignmentCount, planeAlignments);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT> planeAlignments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, planeAlignments);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT> planeAlignments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planeAlignments);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT> planeAlignments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, planeAlignments);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::_ctor(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT> planeAlignments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planeAlignments);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_planeAlignmentCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_planeAlignments_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT*", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::XrSpatialComponentPlaneAlignmentListEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _planeAlignmentCount_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPlaneAlignmentEXT* _planeAlignments_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_planeAlignmentCount_k__BackingField = _planeAlignmentCount_k__BackingField;
  this->_planeAlignments_k__BackingField = _planeAlignments_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPlaneAlignmentListEXT::XrSpatialComponentPlaneAlignmentListEXT() {}
