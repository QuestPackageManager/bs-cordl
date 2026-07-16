#pragma once
// IWYU pragma private; include "GlobalNamespace/FileUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileUtility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileUtility.GetPlatformPersistentDataPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::FileUtility::GetPlatformPersistentDataPath)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3313b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileUtility*>(), { "GetPlatformPersistentDataPath", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::FileUtility::GetPlatformPersistentDataPath(bool local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileUtility*>(), { "GetPlatformPersistentDataPath", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, local);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileUtility::FileUtility() {}
