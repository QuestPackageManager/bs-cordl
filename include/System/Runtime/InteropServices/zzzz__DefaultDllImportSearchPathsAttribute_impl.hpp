#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DefaultDllImportSearchPathsAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DefaultDllImportSearchPathsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::*)(::System::Runtime::InteropServices::DllImportSearchPath)>(
    &::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6a1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::DllImportSearchPath>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_get__paths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths;
}
constexpr ::System::Runtime::InteropServices::DllImportSearchPath const& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_get__paths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths;
}
constexpr void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__cordl_internal_set__paths(::System::Runtime::InteropServices::DllImportSearchPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paths = value;
}
inline void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::InteropServices::DllImportSearchPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths);
}
inline ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*
System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::New_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>(paths));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::DefaultDllImportSearchPathsAttribute() {}
