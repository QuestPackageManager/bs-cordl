#pragma once
// IWYU pragma private; include "Unity\Properties\IProperty.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Properties::IProperty::*)()>(&::Unity::Properties::IProperty::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IProperty*>(), { ::i2c::class_of<::Unity::Properties::IProperty*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IProperty.DeclaredValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Properties::IProperty::*)()>(&::Unity::Properties::IProperty::DeclaredValueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IProperty*>(), { ::i2c::class_of<::Unity::Properties::IProperty*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW Unity::Properties::IProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IProperty*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* Unity::Properties::IProperty::DeclaredValueType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IProperty*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
