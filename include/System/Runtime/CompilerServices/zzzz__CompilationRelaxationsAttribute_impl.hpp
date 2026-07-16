#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CompilationRelaxationsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxationsAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxations_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(int32_t)>(
    &::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)(::System::Runtime::CompilerServices::CompilationRelaxations)>(
    &::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CompilationRelaxations>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute.get_CompilationRelaxations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)()>(
    &::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(), { "get_CompilationRelaxations", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_get_m_relaxations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_relaxations;
}
constexpr int32_t const& System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_get_m_relaxations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_relaxations;
}
constexpr void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::__cordl_internal_set_m_relaxations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_relaxations = value;
}
inline void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(int32_t relaxations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relaxations);
}
inline void System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::CompilationRelaxations>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relaxations);
}
inline int32_t System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(), { "get_CompilationRelaxations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute* System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor(int32_t relaxations) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(relaxations));
}
inline ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*
System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*>(relaxations));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::CompilationRelaxationsAttribute() {}
