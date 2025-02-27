#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/RootFilter.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_impl.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__RootFilter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonSelectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::RootFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonPath::RootFilter::*)()>(&::Newtonsoft::Json::Linq::JsonPath::RootFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f46dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonPath::RootFilter.ExecuteFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* (
    ::Newtonsoft::Json::Linq::JsonPath::RootFilter::*)(::Newtonsoft::Json::Linq::JToken*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*,
                                                       ::Newtonsoft::Json::Linq::JsonSelectSettings*)>(&::Newtonsoft::Json::Linq::JsonPath::RootFilter::ExecuteFilter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3f46dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get(), 4));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Linq::JsonPath::RootFilter::setStaticF_Instance(::Newtonsoft::Json::Linq::JsonPath::RootFilter* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JsonPath::RootFilter*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get>(
      std::forward<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>(value));
}
inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* Newtonsoft::Json::Linq::JsonPath::RootFilter::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JsonPath::RootFilter*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get>();
}
inline void Newtonsoft::Json::Linq::JsonPath::RootFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
Newtonsoft::Json::Linq::JsonPath::RootFilter::ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                            ::Newtonsoft::Json::Linq::JsonSelectSettings* settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, root, current, settings);
}
inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* Newtonsoft::Json::Linq::JsonPath::RootFilter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JsonPath::RootFilter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::RootFilter::RootFilter() {}
