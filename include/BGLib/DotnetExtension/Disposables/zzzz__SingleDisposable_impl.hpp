#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/SingleDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__SingleDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.get_disposable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::get_disposable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330f048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "get_disposable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.set_disposable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::set_disposable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x330f050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "set_disposable", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(&::BGLib::DotnetExtension::Disposables::SingleDisposable::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x330f104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(&::BGLib::DotnetExtension::Disposables::SingleDisposable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x330f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IDisposable*& BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_get__disposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr ::System::IDisposable* const& BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_get__disposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr void BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_set__disposable(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposable = value;
}
inline ::System::IDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::get_disposable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "get_disposable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::set_disposable(::System::IDisposable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "set_disposable", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::SingleDisposable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::SingleDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::SingleDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::SingleDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::SingleDisposable::SingleDisposable() {}
