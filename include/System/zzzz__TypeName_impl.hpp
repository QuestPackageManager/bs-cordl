#pragma once
// IWYU pragma private; include "System\TypeName.hpp"
#include "System/zzzz__TypeName_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::System::TypeName.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeName::*)()>(&::System::TypeName::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeName*>(), { ::i2c::class_of<::System::TypeName*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::TypeName::get_DisplayName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeName*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::TypeName::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
constexpr ::System::IEquatable_1<::System::TypeName*>* System::TypeName::i___System__IEquatable_1___System__TypeName__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
