#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\UserProof.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserProof._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::UserProof::*)(::System::IntPtr)>(&::Oculus::Platform::Models::UserProof::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5df2c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::UserProof*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::UserProof::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::StringW const& Oculus::Platform::Models::UserProof::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Oculus::Platform::Models::UserProof::__cordl_internal_set_Value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
inline void Oculus::Platform::Models::UserProof::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::UserProof*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::UserProof* Oculus::Platform::Models::UserProof::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::UserProof*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserProof::UserProof() {}
