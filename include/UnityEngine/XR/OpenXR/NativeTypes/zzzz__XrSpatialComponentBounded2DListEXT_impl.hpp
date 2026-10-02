#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentBounded2DListEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentBounded2DListEXT_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBounded2DDataEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT.get_boundCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_boundCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_boundCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_bounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e41e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    void*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e41e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e41e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e41eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e41f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e41f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::*)(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e42010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_boundCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_boundCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::get_bounds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(void* next, uint32_t boundCount,
                                                                                            ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT* bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, boundCount, bounds);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(uint32_t boundCount, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT* bounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, boundCount, bounds);
}
inline void
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(void* next,
                                                                                ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, bounds);
}
inline void
UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, bounds);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::_ctor(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT> bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_boundCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "_bounds_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::XrSpatialComponentBounded2DListEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _boundCount_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBounded2DDataEXT* _bounds_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_boundCount_k__BackingField = _boundCount_k__BackingField;
  this->_bounds_k__BackingField = _bounds_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentBounded2DListEXT::XrSpatialComponentBounded2DListEXT() {}
