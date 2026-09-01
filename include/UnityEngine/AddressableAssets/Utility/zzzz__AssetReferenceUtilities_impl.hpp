#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\Utility\AssetReferenceUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__AssetReferenceUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities.FormatName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::FormatName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6464fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*>(), { "FormatName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::*)()>(
    &::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6465060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::FormatName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*>(), { "FormatName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities* UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::AssetReferenceUtilities::AssetReferenceUtilities() {}
