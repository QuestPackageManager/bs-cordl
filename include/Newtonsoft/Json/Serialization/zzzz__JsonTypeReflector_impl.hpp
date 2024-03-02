#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonTypeReflector_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonTypeReflector_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionDelegateFactory_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionObject_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataMemberAttribute_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::*)()>(
    &::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277f180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0._GetJsonConverterCreator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::JsonConverter* (::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
        &::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::_GetJsonConverterCreator_b__0)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x277f990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*>::get(),
                                    "<GetJsonConverterCreator>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_get_converterType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converterType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_get_converterType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converterType;
}
constexpr void Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_set_converterType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___converterType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::System::Object*>*& Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_get_defaultConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultConstructor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const&
Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_get_defaultConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultConstructor;
}
constexpr void Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__cordl_internal_set_defaultConstructor(::System::Func_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0* Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*>());
}
inline void Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConverter*
Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::_GetJsonConverterCreator_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0*>::get(),
                                  "<GetJsonConverterCreator>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(this, ___internal_method, parameters);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass18_0::__JsonTypeReflector____c__DisplayClass18_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::__JsonTypeReflector____c::*)()>(
    &::Newtonsoft::Json::Serialization::__JsonTypeReflector____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277fe90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c._GetJsonConverterCreator_b__18_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::__JsonTypeReflector____c::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::__JsonTypeReflector____c::_GetJsonConverterCreator_b__18_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x277fe98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get(), "<GetJsonConverterCreator>b__18_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::__JsonTypeReflector____c::setStaticF___9(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get>(
      std::forward<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>(value));
}
inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* Newtonsoft::Json::Serialization::__JsonTypeReflector____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get>();
}
inline void Newtonsoft::Json::Serialization::__JsonTypeReflector____c::setStaticF___9__18_1(::System::Func_2<::System::Object*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::System::Type*>*, "<>9__18_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get>(
      std::forward<::System::Func_2<::System::Object*, ::System::Type*>*>(value));
}
inline ::System::Func_2<::System::Object*, ::System::Type*>* Newtonsoft::Json::Serialization::__JsonTypeReflector____c::getStaticF___9__18_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::System::Type*>*, "<>9__18_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get>();
}
inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* Newtonsoft::Json::Serialization::__JsonTypeReflector____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>());
}
inline void Newtonsoft::Json::Serialization::__JsonTypeReflector____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::__JsonTypeReflector____c::_GetJsonConverterCreator_b__18_1(::System::Object* param) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*>::get(), "<GetJsonConverterCreator>b__18_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, param);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c::__JsonTypeReflector____c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetDataContractAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataContractAttribute* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x277eac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetDataContractAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetDataMemberAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataMemberAttribute* (*)(::System::Reflection::MemberInfo*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x277eb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetDataMemberAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetObjectMemberSerialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MemberSerialization (*)(::System::Type*, bool)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x277ed98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetObjectMemberSerialization", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetJsonConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x277ee88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetJsonConverter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.CreateJsonConverterInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Type*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x277ef6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "CreateJsonConverterInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetJsonConverterCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>* (*)(::System::Type*)>(
        &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverterCreator)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x277f014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetJsonConverterCreator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetTypeConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetTypeConverter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x277f210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetTypeConverter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetAssociatedMetadataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x277f268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAssociatedMetadataType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetAssociateMetadataTypeFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x277f2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAssociateMetadataTypeFromAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_DynamicCodeGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::get_DynamicCodeGeneration)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x277f550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                               "get_DynamicCodeGeneration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_FullyTrusted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x277dea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                               "get_FullyTrusted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_ReflectionDelegateFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* (*)()>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x277f188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                               "get_ReflectionDelegateFactory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__dynamicCodeGeneration(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_dynamicCodeGeneration",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>(
      std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__dynamicCodeGeneration() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_dynamicCodeGeneration",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__fullyTrusted(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_fullyTrusted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>(
      std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__fullyTrusted() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_fullyTrusted",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF_JsonConverterCreatorCache(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>* value) {
  ::cordl_internals::setStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>*,
      "JsonConverterCreatorCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>*>(
          value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>*
Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF_JsonConverterCreatorCache() {
  return ::cordl_internals::getStaticField<
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*>*,
      "JsonConverterCreatorCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF_AssociatedMetadataTypesCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "AssociatedMetadataTypesCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF_AssociatedMetadataTypesCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "AssociatedMetadataTypesCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__metadataTypeAttributeReflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_metadataTypeAttributeReflectionObject",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>(
      std::forward<::Newtonsoft::Json::Utilities::ReflectionObject*>(value));
}
inline ::Newtonsoft::Json::Utilities::ReflectionObject* Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__metadataTypeAttributeReflectionObject() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_metadataTypeAttributeReflectionObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get>();
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetCachedAttribute(::System::Object* attributeProvider) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetCachedAttribute",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, attributeProvider);
}
inline ::System::Runtime::Serialization::DataContractAttribute* Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetDataContractAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContractAttribute*, false>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataMemberAttribute* Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetDataMemberAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataMemberAttribute*, false>(nullptr, ___internal_method, memberInfo);
}
inline ::Newtonsoft::Json::MemberSerialization Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization(::System::Type* objectType, bool ignoreSerializableAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetObjectMemberSerialization", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MemberSerialization, false>(nullptr, ___internal_method, objectType, ignoreSerializableAttribute);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter(::System::Object* attributeProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetJsonConverter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(nullptr, ___internal_method, attributeProvider);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance(::System::Type* converterType,
                                                                                                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> converterArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "CreateJsonConverterInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*, false>(nullptr, ___internal_method, converterType, converterArgs);
}
inline ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*
Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverterCreator(::System::Type* converterType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetJsonConverterCreator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::Newtonsoft::Json::JsonConverter*>*, false>(nullptr, ___internal_method,
                                                                                                                                                                     converterType);
}
inline ::System::ComponentModel::TypeConverter* Newtonsoft::Json::Serialization::JsonTypeReflector::GetTypeConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetTypeConverter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAssociatedMetadataType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAssociateMetadataTypeFromAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Type* type) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAttribute",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, type);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAttribute",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, memberInfo);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Object* provider) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(), "GetAttribute",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, provider);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::get_DynamicCodeGeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                             "get_DynamicCodeGeneration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                             "get_FullyTrusted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonTypeReflector*>::get(),
                                                                             "get_ReflectionDelegateFactory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonTypeReflector::JsonTypeReflector() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
