#pragma once
// IWYU pragma private; include "BGLib/Polyglot/ILocalize.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::ILocalize.OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::ILocalize::*)(::BGLib::Polyglot::LocalizationModel*)>(&::BGLib::Polyglot::ILocalize::OnLocalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::ILocalize*>(), { ::i2c::class_of<::BGLib::Polyglot::ILocalize*>(), 0 }));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::ILocalize::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::Polyglot::ILocalize*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization);
}
