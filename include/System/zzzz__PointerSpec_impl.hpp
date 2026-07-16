#pragma once
// IWYU pragma private; include "System/PointerSpec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__PointerSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::PointerSpec._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::PointerSpec::*)(int32_t)>(&::System::PointerSpec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::PointerSpec::*)(::System::Type*)>(&::System::PointerSpec::Resolve)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c9c800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::PointerSpec::*)(::System::Text::StringBuilder*)>(&::System::PointerSpec::Append)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c9c854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::PointerSpec.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::PointerSpec::*)()>(&::System::PointerSpec::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c9c874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { ::i2c::class_of<::System::PointerSpec*>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::PointerSpec::__cordl_internal_get_pointer_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer_level;
}
constexpr int32_t const& System::PointerSpec::__cordl_internal_get_pointer_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer_level;
}
constexpr void System::PointerSpec::__cordl_internal_set_pointer_level(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointer_level = value;
}
inline void System::PointerSpec::_ctor(int32_t pointer_level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer_level);
}
inline ::System::Type* System::PointerSpec::Resolve(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { "Resolve", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::PointerSpec::Append(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::PointerSpec*>(), { "Append", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, sb);
}
inline ::StringW System::PointerSpec::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::PointerSpec*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::PointerSpec* System::PointerSpec::New_ctor(int32_t pointer_level) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::PointerSpec*>(pointer_level));
}
/// @brief Convert operator to "::System::ModifierSpec"
constexpr System::PointerSpec::operator ::System::ModifierSpec*() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ModifierSpec"
constexpr ::System::ModifierSpec* System::PointerSpec::i___System__ModifierSpec() noexcept {
  return static_cast<::System::ModifierSpec*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::PointerSpec::PointerSpec() {}
