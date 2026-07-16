#pragma once
// IWYU pragma private; include "Zenject/SignalTickPriorityCopyBinder.hpp"
#include "Zenject/zzzz__SignalCopyBinder_impl.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(&::Zenject::SignalTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e42af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.get_SignalBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDeclarationBindInfo* (::Zenject::SignalTickPriorityCopyBinder::*)()>(
    &::Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "get_SignalBindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.set_SignalBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e42ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "set_SignalBindInfo", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalTickPriorityCopyBinder.WithTickPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalCopyBinder* (::Zenject::SignalTickPriorityCopyBinder::*)(int32_t)>(
    &::Zenject::SignalTickPriorityCopyBinder::WithTickPriority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e42ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "WithTickPriority", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalDeclarationBindInfo*& Zenject::SignalTickPriorityCopyBinder::__cordl_internal_get__SignalBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalBindInfo_k__BackingField;
}
constexpr ::Zenject::SignalDeclarationBindInfo* const& Zenject::SignalTickPriorityCopyBinder::__cordl_internal_get__SignalBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SignalBindInfo_k__BackingField;
}
constexpr void Zenject::SignalTickPriorityCopyBinder::__cordl_internal_set__SignalBindInfo_k__BackingField(::Zenject::SignalDeclarationBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SignalBindInfo_k__BackingField = value;
}
inline void Zenject::SignalTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::SignalDeclarationBindInfo* Zenject::SignalTickPriorityCopyBinder::get_SignalBindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "get_SignalBindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclarationBindInfo*>(this, ___internal_method);
}
inline void Zenject::SignalTickPriorityCopyBinder::set_SignalBindInfo(::Zenject::SignalDeclarationBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "set_SignalBindInfo", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Zenject::SignalCopyBinder* Zenject::SignalTickPriorityCopyBinder::WithTickPriority(int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalTickPriorityCopyBinder*>(), { "WithTickPriority", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*>(this, ___internal_method, priority);
}
inline ::Zenject::SignalTickPriorityCopyBinder* Zenject::SignalTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalTickPriorityCopyBinder*>(signalBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::SignalTickPriorityCopyBinder::SignalTickPriorityCopyBinder() {}
