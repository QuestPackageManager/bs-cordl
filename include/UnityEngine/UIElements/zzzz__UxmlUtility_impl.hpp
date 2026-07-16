#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlUtility.ParseStringListAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW)>(&::UnityEngine::UIElements::UxmlUtility::ParseStringListAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6cbe098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlUtility*>(), { "ParseStringListAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::UxmlUtility::ParseStringListAttribute(::StringW itemList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlUtility*>(), { "ParseStringListAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, itemList);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlUtility::UxmlUtility() {}
