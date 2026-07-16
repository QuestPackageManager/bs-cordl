#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/StringMarshaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StringMarshaller_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::StringMarshaller.TryMarshalEmptyOrNullString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Bindings::StringMarshaller::TryMarshalEmptyOrNullString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6afbb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StringMarshaller*>(),
                                                { "TryMarshalEmptyOrNullString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Bindings::StringMarshaller::TryMarshalEmptyOrNullString(::StringW s, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> managedSpanWrapper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StringMarshaller*>(),
                                              { "TryMarshalEmptyOrNullString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, managedSpanWrapper);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::StringMarshaller::StringMarshaller() {}
