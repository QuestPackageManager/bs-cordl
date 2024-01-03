#pragma once
#include "Newtonsoft/Json/zzzz__ConstructorHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_impl.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::*)()>(
    &::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0._set_ReferenceResolver_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (
    ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::*)()>(&::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::_set_ReferenceResolver_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264087c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*>::get(),
                                                 "<set_ReferenceResolver>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IReferenceResolver*> const& Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::__set_value(::Newtonsoft::Json::Serialization::IReferenceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0* Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*>());
}
inline void Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::_set_ReferenceResolver_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*>::get(),
                                               "<set_ReferenceResolver>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0::__JsonSerializerSettings____c__DisplayClass90_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::ReferenceLoopHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ReferenceLoopHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ReferenceLoopHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceLoopHandling", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReferenceLoopHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MissingMemberHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_MissingMemberHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::MissingMemberHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MissingMemberHandling", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::MissingMemberHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::ObjectCreationHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ObjectCreationHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ObjectCreationHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ObjectCreationHandling", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ObjectCreationHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_NullValueHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_NullValueHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_NullValueHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_NullValueHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::NullValueHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_NullValueHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_NullValueHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::NullValueHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DefaultValueHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_DefaultValueHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::DefaultValueHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DefaultValueHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Converters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* (
    ::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_Converters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263f8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_Converters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Converters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*)>(&::Newtonsoft::Json::JsonSerializerSettings::set_Converters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263f8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Converters", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::PreserveReferencesHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_PreserveReferencesHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::PreserveReferencesHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_PreserveReferencesHandling", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TypeNameHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::TypeNameHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_TypeNameHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263f998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_TypeNameHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_TypeNameHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::TypeNameHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_TypeNameHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263f9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TypeNameHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MetadataPropertyHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263fa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_MetadataPropertyHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::MetadataPropertyHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263faa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MetadataPropertyHandling", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::MetadataPropertyHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle (
    ::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263fb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_TypeNameAssemblyFormat", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(
    ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle)>(&::Newtonsoft::Json::JsonSerializerSettings::set_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263fb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TypeNameAssemblyFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ConstructorHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::ConstructorHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_ConstructorHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263fbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ConstructorHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ConstructorHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ConstructorHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_ConstructorHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263fc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ConstructorHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ConstructorHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ContractResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ContractResolver", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ContractResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ContractResolver", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::IContractResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_EqualityComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEqualityComparer* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_EqualityComparer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_EqualityComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Collections::IEqualityComparer*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_EqualityComparer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ReferenceResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolver)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x263fc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ReferenceResolver", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ReferenceResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Serialization::IReferenceResolver*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_ReferenceResolver)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263fcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceResolver", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::IReferenceResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ReferenceResolverProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* (
    ::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolverProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_ReferenceResolverProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ReferenceResolverProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(
    ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*)>(&::Newtonsoft::Json::JsonSerializerSettings::set_ReferenceResolverProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceResolverProvider", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TraceWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ITraceWriter* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_TraceWriter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_TraceWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Serialization::ITraceWriter*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TraceWriter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ITraceWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Binder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationBinder* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_Binder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Binder",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Binder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Runtime::Serialization::SerializationBinder*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_Binder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Binder", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* (
    ::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Error",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(
    ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(&::Newtonsoft::Json::JsonSerializerSettings::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263fdb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Error", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::StreamingContext (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_Context)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x263fdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_Context", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_Context)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x263fe50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Context", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_DateFormatString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263fed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_DateFormatString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::StringW)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_DateFormatString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263ff24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateFormatString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_MaxDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_MaxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263ff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_MaxDepth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_MaxDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_MaxDepth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x263ff3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MaxDepth", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Formatting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_Formatting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2640004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_Formatting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Formatting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Formatting)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_Formatting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2640054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Formatting", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DateFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26400bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_DateFormatHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DateFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::DateFormatHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x264010c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateFormatHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateFormatHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2640174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_DateTimeZoneHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26401c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DateParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateParseHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_DateParseHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2640230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_DateParseHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DateParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::DateParseHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_DateParseHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2640280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateParseHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateParseHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26402e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_FloatFormatHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::FloatFormatHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2640338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_FloatFormatHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_FloatParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::FloatParseHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_FloatParseHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26403a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_FloatParseHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_FloatParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::FloatParseHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_FloatParseHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26403f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_FloatParseHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatParseHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2640458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_StringEscapeHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26404a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_StringEscapeHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_Culture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2640510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_Culture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Globalization::CultureInfo*)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2640574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonSerializerSettings::*)()>(
    &::Newtonsoft::Json::JsonSerializerSettings::get_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x264057c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                               "get_CheckAdditionalContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(bool)>(
    &::Newtonsoft::Json::JsonSerializerSettings::set_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26405d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_CheckAdditionalContent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x26406c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& Newtonsoft::Json::JsonSerializerSettings::__get__formatting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& Newtonsoft::Json::JsonSerializerSettings::__get__formatting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatting = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__dateParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__dateParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__floatFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__floatFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__floatParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__floatParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__stringEscapeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__stringEscapeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringEscapeHandling = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonSerializerSettings::__get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& Newtonsoft::Json::JsonSerializerSettings::__get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::JsonSerializerSettings::__get__checkAdditionalContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkAdditionalContent;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::JsonSerializerSettings::__get__checkAdditionalContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkAdditionalContent;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__checkAdditionalContent(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkAdditionalContent = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonSerializerSettings::__get__maxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonSerializerSettings::__get__maxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__maxDepth(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializerSettings::__get__maxDepthSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepthSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializerSettings::__get__maxDepthSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepthSet;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__maxDepthSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepthSet = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dateFormatString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatStringSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatStringSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializerSettings::__get__dateFormatStringSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatStringSet;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__dateFormatStringSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatStringSet = value;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>& Newtonsoft::Json::JsonSerializerSettings::__get__typeNameAssemblyFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameAssemblyFormat;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> const& Newtonsoft::Json::JsonSerializerSettings::__get__typeNameAssemblyFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameAssemblyFormat;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__typeNameAssemblyFormat(::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNameAssemblyFormat = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__defaultValueHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__defaultValueHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValueHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__preserveReferencesHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveReferencesHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__preserveReferencesHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveReferencesHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__preserveReferencesHandling(::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preserveReferencesHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__nullValueHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__nullValueHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullValueHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__objectCreationHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCreationHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__objectCreationHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCreationHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectCreationHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__missingMemberHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingMemberHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__missingMemberHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingMemberHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__referenceLoopHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceLoopHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__referenceLoopHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceLoopHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceLoopHandling = value;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>& Newtonsoft::Json::JsonSerializerSettings::__get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> const& Newtonsoft::Json::JsonSerializerSettings::__get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__context(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__constructorHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructorHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__constructorHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructorHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__constructorHandling(::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructorHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__typeNameHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__typeNameHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNameHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>& Newtonsoft::Json::JsonSerializerSettings::__get__metadataPropertyHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadataPropertyHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> const& Newtonsoft::Json::JsonSerializerSettings::__get__metadataPropertyHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadataPropertyHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__metadataPropertyHandling(::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metadataPropertyHandling = value;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*& Newtonsoft::Json::JsonSerializerSettings::__get__Converters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Converters_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*> const&
Newtonsoft::Json::JsonSerializerSettings::__get__Converters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Converters_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__Converters_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Converters_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& Newtonsoft::Json::JsonSerializerSettings::__get__ContractResolver_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContractResolver_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IContractResolver*> const& Newtonsoft::Json::JsonSerializerSettings::__get__ContractResolver_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContractResolver_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__ContractResolver_k__BackingField(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ContractResolver_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEqualityComparer*& Newtonsoft::Json::JsonSerializerSettings::__get__EqualityComparer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EqualityComparer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& Newtonsoft::Json::JsonSerializerSettings::__get__EqualityComparer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EqualityComparer_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__EqualityComparer_k__BackingField(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EqualityComparer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*& Newtonsoft::Json::JsonSerializerSettings::__get__ReferenceResolverProvider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReferenceResolverProvider_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*> const&
Newtonsoft::Json::JsonSerializerSettings::__get__ReferenceResolverProvider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReferenceResolverProvider_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__ReferenceResolverProvider_k__BackingField(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReferenceResolverProvider_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& Newtonsoft::Json::JsonSerializerSettings::__get__TraceWriter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TraceWriter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ITraceWriter*> const& Newtonsoft::Json::JsonSerializerSettings::__get__TraceWriter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TraceWriter_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__TraceWriter_k__BackingField(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TraceWriter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& Newtonsoft::Json::JsonSerializerSettings::__get__Binder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Binder_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& Newtonsoft::Json::JsonSerializerSettings::__get__Binder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Binder_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__Binder_k__BackingField(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Binder_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& Newtonsoft::Json::JsonSerializerSettings::__get__Error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*> const&
Newtonsoft::Json::JsonSerializerSettings::__get__Error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__set__Error_k__BackingField(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Error_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::JsonSerializerSettings::setStaticF_DefaultContext(::System::Runtime::Serialization::StreamingContext value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::StreamingContext, "DefaultContext",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get>(
      std::forward<::System::Runtime::Serialization::StreamingContext>(value));
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializerSettings::getStaticF_DefaultContext() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::StreamingContext, "DefaultContext",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get>();
}
inline void Newtonsoft::Json::JsonSerializerSettings::setStaticF_DefaultCulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "DefaultCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get>(
      std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonSerializerSettings::getStaticF_DefaultCulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "DefaultCulture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get>();
}
inline ::Newtonsoft::Json::ReferenceLoopHandling Newtonsoft::Json::JsonSerializerSettings::get_ReferenceLoopHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ReferenceLoopHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ReferenceLoopHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceLoopHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ReferenceLoopHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MissingMemberHandling Newtonsoft::Json::JsonSerializerSettings::get_MissingMemberHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_MissingMemberHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MissingMemberHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MissingMemberHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::MissingMemberHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ObjectCreationHandling Newtonsoft::Json::JsonSerializerSettings::get_ObjectCreationHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ObjectCreationHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ObjectCreationHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ObjectCreationHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ObjectCreationHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::JsonSerializerSettings::get_NullValueHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_NullValueHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_NullValueHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::NullValueHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DefaultValueHandling Newtonsoft::Json::JsonSerializerSettings::get_DefaultValueHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_DefaultValueHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultValueHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DefaultValueHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* Newtonsoft::Json::JsonSerializerSettings::get_Converters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_Converters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Converters", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::PreserveReferencesHandling Newtonsoft::Json::JsonSerializerSettings::get_PreserveReferencesHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_PreserveReferencesHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::PreserveReferencesHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_PreserveReferencesHandling", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::TypeNameHandling Newtonsoft::Json::JsonSerializerSettings::get_TypeNameHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_TypeNameHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TypeNameHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::JsonSerializerSettings::get_MetadataPropertyHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_MetadataPropertyHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MetadataPropertyHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MetadataPropertyHandling", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::MetadataPropertyHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle Newtonsoft::Json::JsonSerializerSettings::get_TypeNameAssemblyFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_TypeNameAssemblyFormat", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TypeNameAssemblyFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ConstructorHandling Newtonsoft::Json::JsonSerializerSettings::get_ConstructorHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ConstructorHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ConstructorHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ConstructorHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::ConstructorHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::JsonSerializerSettings::get_ContractResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ContractResolver", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ContractResolver", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::IContractResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::IEqualityComparer* Newtonsoft::Json::JsonSerializerSettings::get_EqualityComparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_EqualityComparer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEqualityComparer*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_EqualityComparer(::System::Collections::IEqualityComparer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_EqualityComparer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEqualityComparer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ReferenceResolver", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceResolver", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::IReferenceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolverProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_ReferenceResolverProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ReferenceResolverProvider(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_ReferenceResolverProvider", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::JsonSerializerSettings::get_TraceWriter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_TraceWriter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ITraceWriter*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_TraceWriter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ITraceWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::SerializationBinder* Newtonsoft::Json::JsonSerializerSettings::get_Binder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Binder",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationBinder*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Binder(::System::Runtime::Serialization::SerializationBinder* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Binder", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Newtonsoft::Json::JsonSerializerSettings::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Error",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Error", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializerSettings::get_Context() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Context",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Context(::System::Runtime::Serialization::StreamingContext value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Context", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonSerializerSettings::get_DateFormatString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_DateFormatString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DateFormatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateFormatString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonSerializerSettings::get_MaxDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_MaxDepth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_MaxDepth(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_MaxDepth", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonSerializerSettings::get_Formatting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_Formatting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Formatting(::Newtonsoft::Json::Formatting value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Formatting", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonSerializerSettings::get_DateFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_DateFormatHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateFormatHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateFormatHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonSerializerSettings::get_DateTimeZoneHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_DateTimeZoneHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::JsonSerializerSettings::get_DateParseHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_DateParseHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateParseHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_DateParseHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateParseHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonSerializerSettings::get_FloatFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_FloatFormatHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_FloatFormatHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::JsonSerializerSettings::get_FloatParseHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_FloatParseHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatParseHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_FloatParseHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatParseHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonSerializerSettings::get_StringEscapeHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_StringEscapeHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_StringEscapeHandling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonSerializerSettings::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "get_Culture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Culture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonSerializerSettings::get_CheckAdditionalContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                                                             "get_CheckAdditionalContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_CheckAdditionalContent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), "set_CheckAdditionalContent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonSerializerSettings* Newtonsoft::Json::JsonSerializerSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonSerializerSettings*>());
}
inline void Newtonsoft::Json::JsonSerializerSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonSerializerSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonSerializerSettings::JsonSerializerSettings() {}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling Newtonsoft::Json::JsonSerializerSettings::DefaultReferenceLoopHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::MissingMemberHandling Newtonsoft::Json::JsonSerializerSettings::DefaultMissingMemberHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::JsonSerializerSettings::DefaultNullValueHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::DefaultValueHandling Newtonsoft::Json::JsonSerializerSettings::DefaultDefaultValueHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::ObjectCreationHandling Newtonsoft::Json::JsonSerializerSettings::DefaultObjectCreationHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::PreserveReferencesHandling Newtonsoft::Json::JsonSerializerSettings::DefaultPreserveReferencesHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::ConstructorHandling Newtonsoft::Json::JsonSerializerSettings::DefaultConstructorHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::TypeNameHandling Newtonsoft::Json::JsonSerializerSettings::DefaultTypeNameHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::JsonSerializerSettings::DefaultMetadataPropertyHandling{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle Newtonsoft::Json::JsonSerializerSettings::DefaultTypeNameAssemblyFormat{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonSerializerSettings::DefaultFormatting{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonSerializerSettings::DefaultDateFormatHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonSerializerSettings::DefaultDateTimeZoneHandling{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::JsonSerializerSettings::DefaultDateParseHandling{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::JsonSerializerSettings::DefaultFloatParseHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonSerializerSettings::DefaultFloatFormatHandling{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonSerializerSettings::DefaultStringEscapeHandling{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle Newtonsoft::Json::JsonSerializerSettings::DefaultFormatterAssemblyStyle{ static_cast<int32_t>(0x0) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
