#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexRunnerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunnerFactory_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexRunnerFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexRunnerFactory::*)()>(&::System::Text::RegularExpressions::RegexRunnerFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x638fe94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexRunnerFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexRunnerFactory.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexRunner* (::System::Text::RegularExpressions::RegexRunnerFactory::*)()>(
    &::System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexRunnerFactory*>(),
                                                                                          { ::i2c::class_of<::System::Text::RegularExpressions::RegexRunnerFactory*>(), 4 }));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::RegexRunnerFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexRunnerFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexRunner* System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::RegularExpressions::RegexRunnerFactory*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexRunner*>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexRunnerFactory* System::Text::RegularExpressions::RegexRunnerFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexRunnerFactory*>());
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexRunnerFactory::RegexRunnerFactory() {}
