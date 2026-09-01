#pragma once
// IWYU pragma private; include "GlobalNamespace\ObjectiveValueFormatterSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ObjectiveValueFormatterSO::*)(int32_t)>(&::GlobalNamespace::ObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3756968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectiveValueFormatterSO*>(), { ::i2c::class_of<::GlobalNamespace::ObjectiveValueFormatterSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::ObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObjectiveValueFormatterSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectiveValueFormatterSO* GlobalNamespace::ObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectiveValueFormatterSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectiveValueFormatterSO::ObjectiveValueFormatterSO() {}
