#pragma once
// IWYU pragma private; include "System/ArraySpec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ArraySpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ArraySpec._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ArraySpec::*)(int32_t, bool)>(&::System::ArraySpec::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c9c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ArraySpec::*)(::System::Type*)>(&::System::ArraySpec::Resolve)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c9c65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::ArraySpec::*)(::System::Text::StringBuilder*)>(&::System::ArraySpec::Append)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c9c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ArraySpec::*)()>(&::System::ArraySpec::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c9c780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { ::i2c::class_of<::System::ArraySpec*>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::ArraySpec::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr int32_t const& System::ArraySpec::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void System::ArraySpec::__cordl_internal_set_dimensions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr bool& System::ArraySpec::__cordl_internal_get_bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bound;
}
constexpr bool const& System::ArraySpec::__cordl_internal_get_bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bound;
}
constexpr void System::ArraySpec::__cordl_internal_set_bound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bound = value;
}
inline void System::ArraySpec::_ctor(int32_t dimensions, bool bound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dimensions, bound);
}
inline ::System::Type* System::ArraySpec::Resolve(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::ArraySpec::Append(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ArraySpec*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, sb);
}
inline ::StringW System::ArraySpec::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ArraySpec*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ArraySpec* System::ArraySpec::New_ctor(int32_t dimensions, bool bound) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ArraySpec*>(dimensions, bound));
}
/// @brief Convert operator to "::System::ModifierSpec"
constexpr System::ArraySpec::operator ::System::ModifierSpec*() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ModifierSpec"
constexpr ::System::ModifierSpec* System::ArraySpec::i___System__ModifierSpec() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ArraySpec::ArraySpec() {}
