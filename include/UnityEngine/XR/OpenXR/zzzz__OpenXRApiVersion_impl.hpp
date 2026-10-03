#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRApiVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRApiVersion_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::OpenXRApiVersion* (*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Current)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e2fccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.get_Major
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Major)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2fd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Major", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.get_Minor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Minor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Minor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.get_Patch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Patch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2fd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Patch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)(uint16_t, uint16_t, uint32_t)>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e2fd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_Equality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_Inequality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2fda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_GreaterThan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e2fdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                            { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_LessThan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e2fe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                         { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2ff0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                            { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*, ::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2ff88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                            { "op_LessThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)(::System::Object*)>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e30004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e300c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>)>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::TryParse)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6e3014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)()>(&::UnityEngine::XR::OpenXR::OpenXRApiVersion::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e302c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::CompareTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e303a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRApiVersion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRApiVersion::*)(::UnityEngine::XR::OpenXR::OpenXRApiVersion*)>(
    &::UnityEngine::XR::OpenXR::OpenXRApiVersion::Equals)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e30454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
    return ___internal_method;
  }
};
constexpr uint16_t& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_major() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_major;
}
constexpr uint16_t const& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_major() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_major;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_set_m_major(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_major = value;
}
constexpr uint16_t& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_minor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minor;
}
constexpr uint16_t const& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_minor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minor;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_set_m_minor(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_minor = value;
}
constexpr uint32_t& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_patch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_patch;
}
constexpr uint32_t const& UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_get_m_patch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_patch;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRApiVersion::__cordl_internal_set_m_patch(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_patch = value;
}
inline ::UnityEngine::XR::OpenXR::OpenXRApiVersion* UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(nullptr, ___internal_method);
}
inline uint16_t UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Major() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Major", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Minor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Minor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::OpenXRApiVersion::get_Patch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "get_Patch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRApiVersion::_ctor(uint16_t major, uint16_t minor, uint32_t patch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor, patch);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_Equality(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                       { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_Inequality(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_GreaterThan(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                       { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_LessThan(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                       { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_GreaterThanOrEqual(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                          { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::op_LessThanOrEqual(::UnityEngine::XR::OpenXR::OpenXRApiVersion* lhs, ::UnityEngine::XR::OpenXR::OpenXRApiVersion* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                          { "op_LessThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRApiVersion::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::TryParse(::StringW customRuntimeLoaderVersion, ::by_ref<::UnityEngine::XR::OpenXR::OpenXRApiVersion*> version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(),
                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, customRuntimeLoaderVersion, version);
}
inline ::StringW UnityEngine::XR::OpenXR::OpenXRApiVersion::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRApiVersion::CompareTo(::UnityEngine::XR::OpenXR::OpenXRApiVersion* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::OpenXRApiVersion::Equals(::UnityEngine::XR::OpenXR::OpenXRApiVersion* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::UnityEngine::XR::OpenXR::OpenXRApiVersion* UnityEngine::XR::OpenXR::OpenXRApiVersion::New_ctor(uint16_t major, uint16_t minor, uint32_t patch) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>(major, minor, patch));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
constexpr UnityEngine::XR::OpenXR::OpenXRApiVersion::operator ::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
constexpr ::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*
UnityEngine::XR::OpenXR::OpenXRApiVersion::i___System__IComparable_1___UnityEngine__XR__OpenXR__OpenXRApiVersion__() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
constexpr UnityEngine::XR::OpenXR::OpenXRApiVersion::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*
UnityEngine::XR::OpenXR::OpenXRApiVersion::i___System__IEquatable_1___UnityEngine__XR__OpenXR__OpenXRApiVersion__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::OpenXRApiVersion*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRApiVersion::OpenXRApiVersion() {}
