#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccess.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_position)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6af875c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3)>(&::UnityEngine::Jobs::TransformAccess::set_position)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af87fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_rotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6af8894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Jobs::TransformAccess::set_rotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af8930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.set_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3)>(&::UnityEngine::Jobs::TransformAccess::set_localPosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af89c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.set_localRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Jobs::TransformAccess::set_localRotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af8a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_localScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_localScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6af8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_localScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.set_localScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3)>(&::UnityEngine::Jobs::TransformAccess::set_localScale)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af8b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.get_localToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Jobs::TransformAccess::*)()>(&::UnityEngine::Jobs::TransformAccess::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6af8c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_localToWorldMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Jobs::TransformAccess::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af8ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                             { "SetPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetLocalPositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Jobs::TransformAccess::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::Jobs::TransformAccess::SetLocalPositionAndRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af8d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                             { "SetLocalPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetPositionAndRotation_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Jobs::TransformAccess::SetPositionAndRotation_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af8d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                             { "SetPositionAndRotation_Internal",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetLocalPositionAndRotation_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Jobs::TransformAccess::SetLocalPositionAndRotation_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6af8df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                             { "SetLocalPositionAndRotation_Internal",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Jobs::TransformAccess::GetPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af87b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "GetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Jobs::TransformAccess::SetPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "SetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Jobs::TransformAccess::GetRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af88ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "GetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Jobs::TransformAccess::SetRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "SetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetLocalPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Jobs::TransformAccess::SetLocalPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "SetLocalPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetLocalRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Quaternion>)>(
    &::UnityEngine::Jobs::TransformAccess::SetLocalRotation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                         { "SetLocalRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetLocalScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Jobs::TransformAccess::GetLocalScale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "GetLocalScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.SetLocalScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::Jobs::TransformAccess::SetLocalScale)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                { "SetLocalScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Jobs::TransformAccess.GetLocalToWorldMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Jobs::TransformAccess>, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Jobs::TransformAccess::GetLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af8c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                         { "GetLocalToWorldMatrix", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::Jobs::TransformAccess::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccess::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Jobs::TransformAccess::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccess::set_rotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Jobs::TransformAccess::set_localPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Jobs::TransformAccess::set_localRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Jobs::TransformAccess::get_localScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_localScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccess::set_localScale(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "set_localScale", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Jobs::TransformAccess::get_localToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "get_localToWorldMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
inline void UnityEngine::Jobs::TransformAccess::SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                           { "SetPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                                           { "SetLocalPositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, localPosition, localRotation);
}
inline void UnityEngine::Jobs::TransformAccess::SetPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> position,
                                                                                ::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "SetPositionAndRotation_Internal",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, position, rotation);
}
inline void UnityEngine::Jobs::TransformAccess::SetLocalPositionAndRotation_Internal(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> localPosition,
                                                                                     ::by_ref<::UnityEngine::Quaternion> localRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(), { "SetLocalPositionAndRotation_Internal",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, localPosition, localRotation);
}
inline void UnityEngine::Jobs::TransformAccess::GetPosition(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "GetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, p);
}
inline void UnityEngine::Jobs::TransformAccess::SetPosition(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "SetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, p);
}
inline void UnityEngine::Jobs::TransformAccess::GetRotation(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Quaternion> r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "GetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::SetRotation(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Quaternion> r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "SetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::SetLocalPosition(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "SetLocalPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, p);
}
inline void UnityEngine::Jobs::TransformAccess::SetLocalRotation(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Quaternion> r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                       { "SetLocalRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::GetLocalScale(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "GetLocalScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::SetLocalScale(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Vector3> r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                              { "SetLocalScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, r);
}
inline void UnityEngine::Jobs::TransformAccess::GetLocalToWorldMatrix(::by_ref<::UnityEngine::Jobs::TransformAccess> access, ::by_ref<::UnityEngine::Matrix4x4> m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Jobs::TransformAccess>(),
                                       { "GetLocalToWorldMatrix", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Jobs::TransformAccess>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, access, m);
}
// Ctor Parameters [CppParam { name: "hierarchy", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Jobs::TransformAccess::TransformAccess(::System::IntPtr hierarchy, int32_t index) noexcept {
  this->hierarchy = hierarchy;
  this->index = index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Jobs::TransformAccess::TransformAccess() {}
