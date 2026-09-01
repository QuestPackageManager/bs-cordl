#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IEnumerableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IEnumerableExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IEnumerableExtensions.HasValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::UnityEngine::UIElements::IEnumerableExtensions::HasValues)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6db1534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEnumerableExtensions*>(),
                                                                                           { "HasValues", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IEnumerableExtensions::HasValues(::System::Collections::Generic::IEnumerable_1<::StringW>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IEnumerableExtensions*>(),
                                                                                         { "HasValues", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IEnumerableExtensions::IEnumerableExtensions() {}
