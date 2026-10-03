#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEnumerableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IEnumerableExtensions_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IEnumerableExtensions.GetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::IEnumerable*)>(&::UnityEngine::UIElements::IEnumerableExtensions::GetCount)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x724d804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEnumerableExtensions*>(), { "GetCount", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::IEnumerableExtensions::GetCount(::System::Collections::IEnumerable* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEnumerableExtensions*>(), { "GetCount", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IEnumerableExtensions::IEnumerableExtensions() {}
