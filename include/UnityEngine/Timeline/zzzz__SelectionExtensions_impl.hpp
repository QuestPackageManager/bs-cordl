#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SelectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SelectionExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__ObjectId_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SelectionExtensions.GetObjectId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ObjectId (*)(::UnityEngine::Object*)>(&::UnityEngine::Timeline::SelectionExtensions::GetObjectId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6def740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SelectionExtensions*>(), { "GetObjectId", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::ObjectId UnityEngine::Timeline::SelectionExtensions::GetObjectId(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SelectionExtensions*>(), { "GetObjectId", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ObjectId>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SelectionExtensions::SelectionExtensions() {}
