#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentPersistenceListEXT.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentPersistenceListEXT_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceDataEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_next", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT.get_persistDataCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_persistDataCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e44694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_persistDataCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT.get_persistData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_persistData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e4469c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_persistData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    void*, uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e446a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    uint32_t, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e446c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e446dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e44750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    void*, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e447b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
            { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::*)(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e44840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(*this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_persistDataCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_persistDataCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::get_persistData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(), { "get_persistData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(void* next, uint32_t persistDataCount,
                                                                                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* persistData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, persistDataCount, persistData);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(uint32_t persistDataCount,
                                                                                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* persistData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, persistDataCount, persistData);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, persistData);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(
    ::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, persistData);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(
    void* next, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
          { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, next, persistData);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::_ctor(
    ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT> persistData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, persistData);
}
// Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_next_k__BackingField", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_persistDataCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "_persistData_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT*", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::XrSpatialComponentPersistenceListEXT(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint32_t _persistDataCount_k__BackingField,
    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT* _persistData_k__BackingField) noexcept {
  this->_type_k__BackingField = _type_k__BackingField;
  this->_next_k__BackingField = _next_k__BackingField;
  this->_persistDataCount_k__BackingField = _persistDataCount_k__BackingField;
  this->_persistData_k__BackingField = _persistData_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentPersistenceListEXT::XrSpatialComponentPersistenceListEXT() {}
