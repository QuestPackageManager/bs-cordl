#pragma once
// IWYU pragma private; include "UnityEngine/TrackedReference.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TrackedReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrackedReference::*)()>(&::UnityEngine::TrackedReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ae4978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*)>(&::UnityEngine::TrackedReference::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ae497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>(), ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*)>(&::UnityEngine::TrackedReference::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ae49c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>(), ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TrackedReference::*)(::System::Object*)>(&::UnityEngine::TrackedReference::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ae4a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { ::i2c::class_of<::UnityEngine::TrackedReference*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrackedReference::*)()>(&::UnityEngine::TrackedReference::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae4ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { ::i2c::class_of<::UnityEngine::TrackedReference*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrackedReference.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TrackedReference*)>(&::UnityEngine::TrackedReference::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ae4ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::TrackedReference::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::TrackedReference::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::TrackedReference::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
inline void UnityEngine::TrackedReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TrackedReference::op_Equality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>(), ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::TrackedReference::op_Inequality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>(), ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::TrackedReference::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TrackedReference*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t UnityEngine::TrackedReference::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TrackedReference*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::TrackedReference::op_Implicit_bool(::UnityEngine::TrackedReference* exists) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TrackedReference*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::TrackedReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exists);
}
inline ::UnityEngine::TrackedReference* UnityEngine::TrackedReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TrackedReference*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TrackedReference::TrackedReference() {}
