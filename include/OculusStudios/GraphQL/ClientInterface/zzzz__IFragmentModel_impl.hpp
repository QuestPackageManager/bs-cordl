#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/IFragmentModel.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IFragmentModel_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IFragmentModel.set_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::IFragmentModel::*)(::StringW)>(
    &::OculusStudios::GraphQL::ClientInterface::IFragmentModel::set_TypeName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::IFragmentModel.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::GraphQL::ClientInterface::IFragmentModel::*)()>(
    &::OculusStudios::GraphQL::ClientInterface::IFragmentModel::get_TypeName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(), 1 }));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::IFragmentModel::set_TypeName(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::GraphQL::ClientInterface::IFragmentModel::get_TypeName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::IFragmentModel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ICloneable"
constexpr OculusStudios::GraphQL::ClientInterface::IFragmentModel::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* OculusStudios::GraphQL::ClientInterface::IFragmentModel::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
