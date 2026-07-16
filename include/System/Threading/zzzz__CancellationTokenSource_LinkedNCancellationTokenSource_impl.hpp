#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource_LinkedNCancellationTokenSource.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_LinkedNCancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::*)(::ArrayW<::System::Threading::CancellationToken>)>(
    &::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5caae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::CancellationToken>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::*)(bool)>(
    &::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cab204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::CancellationTokenRegistration>& GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::__cordl_internal_get__linkingRegistrations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkingRegistrations;
}
constexpr ::ArrayW<::System::Threading::CancellationTokenRegistration> const&
GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::__cordl_internal_get__linkingRegistrations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkingRegistrations;
}
constexpr void GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::__cordl_internal_set__linkingRegistrations(::ArrayW<::System::Threading::CancellationTokenRegistration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linkingRegistrations = value;
}
inline void GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate", ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::getStaticF_s_linkedTokenCancelDelegate() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_linkedTokenCancelDelegate", ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>();
}
inline void GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::_ctor(::ArrayW<::System::Threading::CancellationToken> tokens) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::CancellationToken>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tokens);
}
inline void GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*
GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::New_ctor(::ArrayW<::System::Threading::CancellationToken> tokens) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*>(tokens));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource::CancellationTokenSource_LinkedNCancellationTokenSource() {}
