#pragma once
// IWYU pragma private; include "Meta\XR\BuildingBlocks\RunTimeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__RunTimeUtils_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::RunTimeUtils.GenerateRandomString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, bool, bool, bool, bool)>(&::Meta::XR::BuildingBlocks::RunTimeUtils::GenerateRandomString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a3573c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::RunTimeUtils*>(),
                            { "GenerateRandomString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T Meta::XR::BuildingBlocks::RunTimeUtils::GetInterfaceComponent(::UnityEngine::MonoBehaviour* monoBehaviour) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::RunTimeUtils*>(), { "GetInterfaceComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::MonoBehaviour*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, monoBehaviour);
}
inline ::StringW Meta::XR::BuildingBlocks::RunTimeUtils::GenerateRandomString(int32_t size, bool includeLowercase, bool includeUppercase, bool includeNumeric, bool includeSpecial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::RunTimeUtils*>(),
                                       { "GenerateRandomString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, size, includeLowercase, includeUppercase, includeNumeric, includeSpecial);
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::RunTimeUtils::RunTimeUtils() {}
