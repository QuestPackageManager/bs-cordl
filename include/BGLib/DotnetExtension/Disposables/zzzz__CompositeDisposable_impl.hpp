#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\Disposables\CompositeDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__CompositeDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(int32_t)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x330f90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(::ArrayW<::System::IDisposable*>)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x330f990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::Add)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x330f9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)(::ArrayW<::System::IDisposable*>)>(
    &::BGLib::DotnetExtension::Disposables::CompositeDisposable::Add)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x330faf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::CompositeDisposable.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::CompositeDisposable::*)()>(&::BGLib::DotnetExtension::Disposables::CompositeDisposable::Dispose)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x330fbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void BGLib::DotnetExtension::Disposables::CompositeDisposable::__cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposables = value;
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::_ctor(::ArrayW<::System::IDisposable*> disposables) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposables);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Add(::System::IDisposable* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Add(::ArrayW<::System::IDisposable*> disposables) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposables);
}
inline void BGLib::DotnetExtension::Disposables::CompositeDisposable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable* BGLib::DotnetExtension::Disposables::CompositeDisposable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(capacity));
}
inline ::BGLib::DotnetExtension::Disposables::CompositeDisposable* BGLib::DotnetExtension::Disposables::CompositeDisposable::New_ctor(::ArrayW<::System::IDisposable*> disposables) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>(disposables));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::CompositeDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::CompositeDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::CompositeDisposable::CompositeDisposable() {}
