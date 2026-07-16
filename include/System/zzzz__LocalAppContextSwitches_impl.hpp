#pragma once
// IWYU pragma private; include "System/LocalAppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContextSwitches_def.hpp"
//  Writing Method size for method: ::System::LocalAppContextSwitches.get_AllowArbitraryTypeInstantiation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::LocalAppContextSwitches::get_AllowArbitraryTypeInstantiation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ff7dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContextSwitches*>(), { "get_AllowArbitraryTypeInstantiation", {}, {} })));
    return ___internal_method;
  }
};
inline void System::LocalAppContextSwitches::setStaticF_s_allowArbitraryTypeInstantiation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_allowArbitraryTypeInstantiation", ::System::LocalAppContextSwitches*>(std::forward<int32_t>(value));
}
inline int32_t System::LocalAppContextSwitches::getStaticF_s_allowArbitraryTypeInstantiation() {
  return ::cordl_internals::getStaticField<int32_t, "s_allowArbitraryTypeInstantiation", ::System::LocalAppContextSwitches*>();
}
inline bool System::LocalAppContextSwitches::get_AllowArbitraryTypeInstantiation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalAppContextSwitches*>(), { "get_AllowArbitraryTypeInstantiation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::LocalAppContextSwitches::LocalAppContextSwitches() {}
