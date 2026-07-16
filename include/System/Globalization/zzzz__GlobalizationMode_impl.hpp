#pragma once
// IWYU pragma private; include "System/Globalization/GlobalizationMode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__GlobalizationMode_def.hpp"
//  Writing Method size for method: ::System::Globalization::GlobalizationMode.get_Invariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Globalization::GlobalizationMode::get_Invariant)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bc2ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GlobalizationMode*>(), { "get_Invariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GlobalizationMode.GetGlobalizationInvariantMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc2b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GlobalizationMode*>(), { "GetGlobalizationInvariantMode", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Globalization::GlobalizationMode::setStaticF__Invariant_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<Invariant>k__BackingField", ::System::Globalization::GlobalizationMode*>(std::forward<bool>(value));
}
inline bool System::Globalization::GlobalizationMode::getStaticF__Invariant_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<Invariant>k__BackingField", ::System::Globalization::GlobalizationMode*>();
}
inline bool System::Globalization::GlobalizationMode::get_Invariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GlobalizationMode*>(), { "get_Invariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Globalization::GlobalizationMode::GetGlobalizationInvariantMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GlobalizationMode*>(), { "GetGlobalizationInvariantMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::GlobalizationMode::GlobalizationMode() {}
