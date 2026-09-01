#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\NativePropertyAttribute.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__TargetType_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativePropertyAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__TargetType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativePropertyAttribute.set_TargetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativePropertyAttribute::*)(::UnityEngine::Bindings::TargetType)>(
    &::UnityEngine::Bindings::NativePropertyAttribute::set_TargetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { "set_TargetType", {}, { ::i2c::type_of<::UnityEngine::Bindings::TargetType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativePropertyAttribute::*)()>(&::UnityEngine::Bindings::NativePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb6328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativePropertyAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb632c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativePropertyAttribute::*)(::StringW, bool, ::UnityEngine::Bindings::TargetType)>(
    &::UnityEngine::Bindings::NativePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6bb6330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Bindings::TargetType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativePropertyAttribute::*)(::StringW, bool, ::UnityEngine::Bindings::TargetType, bool)>(
    &::UnityEngine::Bindings::NativePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6bb635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Bindings::TargetType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Bindings::TargetType& UnityEngine::Bindings::NativePropertyAttribute::__cordl_internal_get__TargetType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetType_k__BackingField;
}
constexpr ::UnityEngine::Bindings::TargetType const& UnityEngine::Bindings::NativePropertyAttribute::__cordl_internal_get__TargetType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetType_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativePropertyAttribute::__cordl_internal_set__TargetType_k__BackingField(::UnityEngine::Bindings::TargetType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TargetType_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativePropertyAttribute::set_TargetType(::UnityEngine::Bindings::TargetType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { "set_TargetType", {}, { ::i2c::type_of<::UnityEngine::Bindings::TargetType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativePropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Bindings::NativePropertyAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Bindings::NativePropertyAttribute::_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Bindings::TargetType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, isFree, targetType);
}
inline void UnityEngine::Bindings::NativePropertyAttribute::_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType, bool isThreadSafe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativePropertyAttribute*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Bindings::TargetType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, isFree, targetType, isThreadSafe);
}
inline ::UnityEngine::Bindings::NativePropertyAttribute* UnityEngine::Bindings::NativePropertyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativePropertyAttribute*>());
}
inline ::UnityEngine::Bindings::NativePropertyAttribute* UnityEngine::Bindings::NativePropertyAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativePropertyAttribute*>(name));
}
inline ::UnityEngine::Bindings::NativePropertyAttribute* UnityEngine::Bindings::NativePropertyAttribute::New_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativePropertyAttribute*>(name, isFree, targetType));
}
inline ::UnityEngine::Bindings::NativePropertyAttribute* UnityEngine::Bindings::NativePropertyAttribute::New_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType,
                                                                                                                  bool isThreadSafe) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativePropertyAttribute*>(name, isFree, targetType, isThreadSafe));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativePropertyAttribute::NativePropertyAttribute() {}
