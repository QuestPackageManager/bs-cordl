#pragma once
// IWYU pragma private; include "GlobalNamespace/CannotStartGameReasonMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CannotStartGameReasonMethods.LocalizedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::CannotStartGameReason)>(&::GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x373216c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CannotStartGameReasonMethods*>(), { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey(::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CannotStartGameReasonMethods*>(), { "LocalizedKey", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cannotStartGameReason);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CannotStartGameReasonMethods::CannotStartGameReasonMethods() {}
