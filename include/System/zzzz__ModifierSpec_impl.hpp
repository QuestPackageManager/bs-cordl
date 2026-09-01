#pragma once
// IWYU pragma private; include "System\ModifierSpec.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ModifierSpec.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ModifierSpec::*)(::System::Type*)>(&::System::ModifierSpec::Resolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ModifierSpec*>(), { ::i2c::class_of<::System::ModifierSpec*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ModifierSpec.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::System::ModifierSpec::*)(::System::Text::StringBuilder*)>(&::System::ModifierSpec::Append)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ModifierSpec*>(), { ::i2c::class_of<::System::ModifierSpec*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Type* System::ModifierSpec::Resolve(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ModifierSpec*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::ModifierSpec::Append(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ModifierSpec*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method, sb);
}
