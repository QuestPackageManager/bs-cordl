#pragma once
// IWYU pragma private; include "TMPro/ObjectUtilsBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__ObjectUtilsBridge_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::TMPro::ObjectUtilsBridge.MarkDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::TMPro::ObjectUtilsBridge::MarkDirty)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69f84d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ObjectUtilsBridge*>(), { "MarkDirty", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::ObjectUtilsBridge::MarkDirty(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ObjectUtilsBridge*>(), { "MarkDirty", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::TMPro::ObjectUtilsBridge::ObjectUtilsBridge() {}
