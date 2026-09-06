#pragma once
// IWYU pragma private; include "System/ComponentModel/INestedSite.hpp"
#include "System/ComponentModel/zzzz__INestedSite_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INestedSite.get_FullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::INestedSite::*)()>(&::System::ComponentModel::INestedSite::get_FullName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::INestedSite*>(), { ::i2c::class_of<::System::ComponentModel::INestedSite*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::INestedSite::get_FullName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::INestedSite*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::ISite"
constexpr System::ComponentModel::INestedSite::operator ::System::ComponentModel::ISite*() noexcept {
  return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISite"
constexpr ::System::ComponentModel::ISite* System::ComponentModel::INestedSite::i___System__ComponentModel__ISite() noexcept {
  return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr System::ComponentModel::INestedSite::operator ::System::IServiceProvider*() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::INestedSite::i___System__IServiceProvider() noexcept {
  return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
