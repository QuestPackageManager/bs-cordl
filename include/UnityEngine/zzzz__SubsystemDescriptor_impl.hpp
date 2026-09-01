#pragma once
// IWYU pragma private; include "UnityEngine\SubsystemDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptor.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SubsystemDescriptor::*)()>(&::UnityEngine::SubsystemDescriptor::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb8590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptor.UnityEngine_ISubsystemDescriptor_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemDescriptor::*)()>(
    &::UnityEngine::SubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb8598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { "UnityEngine.ISubsystemDescriptor.Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptor.CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemDescriptor::*)()>(&::UnityEngine::SubsystemDescriptor::CreateImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { ::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemDescriptor::*)()>(&::UnityEngine::SubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb85a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::SubsystemDescriptor::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::StringW const& UnityEngine::SubsystemDescriptor::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::SubsystemDescriptor::__cordl_internal_set__id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::StringW UnityEngine::SubsystemDescriptor::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { "UnityEngine.ISubsystemDescriptor.Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemDescriptor::CreateImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*>(this, ___internal_method);
}
inline void UnityEngine::SubsystemDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SubsystemDescriptor* UnityEngine::SubsystemDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemDescriptor*>());
}
/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr UnityEngine::SubsystemDescriptor::operator ::UnityEngine::ISubsystemDescriptor*() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
constexpr ::UnityEngine::ISubsystemDescriptor* UnityEngine::SubsystemDescriptor::i___UnityEngine__ISubsystemDescriptor() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemDescriptor::SubsystemDescriptor() {}
