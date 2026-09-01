#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JsonPath\RootFilter.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__RootFilter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::RootFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::RootFilter::*)()>(&::Newtonsoft::Json::Linq::JsonPath::RootFilter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d953b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::RootFilter.ExecuteFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JsonPath::RootFilter::*)(::Newtonsoft::Json::Linq::JToken*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*,
                                                       ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::RootFilter::ExecuteFilter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d953bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(), { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(), 4 }));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JsonPath::RootFilter::setStaticF_Instance(::Newtonsoft::Json::Linq::JsonPath::RootFilter* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JsonPath::RootFilter*, "Instance", ::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(
      std::forward<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(value));
}
inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* Newtonsoft::Json::Linq::JsonPath::RootFilter::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JsonPath::RootFilter*, "Instance", ::Newtonsoft::Json::Linq::JsonPath::RootFilter*>();
}
inline void Newtonsoft::Json::Linq::JsonPath::RootFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::RootFilter::ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                            ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, root, current, settings);
}
inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* Newtonsoft::Json::Linq::JsonPath::RootFilter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::RootFilter::RootFilter() {}
