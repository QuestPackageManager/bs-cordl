#pragma once
// IWYU pragma private; include "Zenject/TypeValuePair.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::TypeValuePair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::TypeValuePair::*)(::System::Type*, ::System::Object*)>(&::Zenject::TypeValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e68fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeValuePair>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::TypeValuePair::_ctor(::System::Type* type, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::TypeValuePair>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, value);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::TypeValuePair::TypeValuePair(::System::Type* Type, ::System::Object* Value) noexcept {
  this->Type = Type;
  this->Value = Value;
}
// Ctor Parameters []
constexpr ::Zenject::TypeValuePair::TypeValuePair() {}
