#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonPath\PathFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::PathFilter.ExecuteFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JsonPath::PathFilter::*)(::Newtonsoft::Json::Linq::JToken*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*,
                                                       ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::PathFilter::ExecuteFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::PathFilter.GetTokenIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, int32_t)>(
    &::Newtonsoft::Json::Linq::JsonPath::PathFilter::GetTokenIndex)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5d8d1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(),
            { "GetTokenIndex", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::PathFilter.GetNextScanValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Linq::JsonPath::PathFilter::GetNextScanValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d92d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(),
                            { "GetNextScanValue",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::PathFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::PathFilter::*)()>(&::Newtonsoft::Json::Linq::JsonPath::PathFilter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8cb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::PathFilter::ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                            ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, root, current, settings);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JsonPath::PathFilter::GetTokenIndex(::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings,
                                                                                                     int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(),
                       { "GetTokenIndex", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonSelectSettings*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, t, settings, index);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JsonPath::PathFilter::GetNextScanValue(::Newtonsoft::Json::Linq::JToken* originalParent, ::Newtonsoft::Json::Linq::JToken* container,
                                                                                                        ::Newtonsoft::Json::Linq::JToken* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(),
                          { "GetNextScanValue",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, originalParent, container, value);
}
inline void Newtonsoft::Json::Linq::JsonPath::PathFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* Newtonsoft::Json::Linq::JsonPath::PathFilter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::PathFilter::PathFilter() {}
