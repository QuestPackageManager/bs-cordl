#pragma once
// IWYU pragma private; include "UnityEngine\SubsystemsImplementation\SubsystemDescriptorWithProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb93cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::CreateImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.UnityEngine_ISubsystemDescriptor_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::UnityEngine_ISubsystemDescriptor_Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb93d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { "UnityEngine.ISubsystemDescriptor.Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb93e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::StringW const& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__cordl_internal_set__id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id_k__BackingField = value;
}
inline ::StringW UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::CreateImpl() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::UnityEngine_ISubsystemDescriptor_Create() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { "UnityEngine.ISubsystemDescriptor.Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*>(this, ___internal_method);
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>());
}
/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::operator ::UnityEngine::ISubsystemDescriptor*() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
constexpr ::UnityEngine::ISubsystemDescriptor* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::i___UnityEngine__ISubsystemDescriptor() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::SubsystemDescriptorWithProvider() {}
