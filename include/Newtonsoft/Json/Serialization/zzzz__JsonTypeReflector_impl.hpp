#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonTypeReflector.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonTypeReflector_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonTypeReflector_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionDelegateFactory_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionObject_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
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
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonTypeReflector___c::*)()>(&::Newtonsoft::Json::Serialization::JsonTypeReflector___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d57020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector___c._GetCreator_b__22_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::JsonTypeReflector___c::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector___c::_GetCreator_b__22_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d57024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(), { "<GetCreator>b__22_1", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonTypeReflector___c::setStaticF___9(::Newtonsoft::Json::Serialization::JsonTypeReflector___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*, "<>9", ::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(
      std::forward<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(value));
}
inline ::Newtonsoft::Json::Serialization::JsonTypeReflector___c* Newtonsoft::Json::Serialization::JsonTypeReflector___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*, "<>9", ::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector___c::setStaticF___9__22_1(::System::Func_2<::System::Object*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::System::Type*>*, "<>9__22_1", ::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(
      std::forward<::System::Func_2<::System::Object*, ::System::Type*>*>(value));
}
inline ::System::Func_2<::System::Object*, ::System::Type*>* Newtonsoft::Json::Serialization::JsonTypeReflector___c::getStaticF___9__22_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::System::Type*>*, "<>9__22_1", ::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonTypeReflector___c::_GetCreator_b__22_1(::System::Object* param) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>(), { "<GetCreator>b__22_1", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, param);
}
inline ::Newtonsoft::Json::Serialization::JsonTypeReflector___c* Newtonsoft::Json::Serialization::JsonTypeReflector___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonTypeReflector___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonTypeReflector___c::JsonTypeReflector___c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::*)()>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d569a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0._GetCreator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::*)(::ArrayW<::System::Object*>)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::_GetCreator_b__0)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5d57080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0*>(),
                                                                                           { "<GetCreator>b__0", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Func_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_get_defaultConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultConstructor;
}
constexpr ::System::Func_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_get_defaultConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultConstructor;
}
constexpr void Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::__cordl_internal_set_defaultConstructor(::System::Func_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultConstructor = value;
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::_GetCreator_b__0(::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0*>(),
                                                                                         { "<GetCreator>b__0", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parameters);
}
inline ::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0* Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonTypeReflector___c__DisplayClass22_0::JsonTypeReflector___c__DisplayClass22_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.CanTypeDescriptorConvertString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::ComponentModel::TypeConverter*>)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::CanTypeDescriptorConvertString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5d53638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                         { "CanTypeDescriptorConvertString", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::ComponentModel::TypeConverter*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetDataContractAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContractAttribute* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d55fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetDataContractAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetDataMemberAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataMemberAttribute* (*)(::System::Reflection::MemberInfo*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d56084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                           { "GetDataMemberAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetObjectMemberSerialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MemberSerialization (*)(::System::Type*, bool)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d562f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                           { "GetObjectMemberSerialization", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetJsonConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d5645c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetJsonConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.CreateJsonConverterInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d5658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                             { "CreateJsonConverterInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.CreateNamingStrategyInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::NamingStrategy* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::CreateNamingStrategyInstance)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d5668c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                             { "CreateNamingStrategyInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetContainerNamingStrategy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::NamingStrategy* (*)(::Newtonsoft::Json::JsonContainerAttribute*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetContainerNamingStrategy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d5678c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                           { "GetContainerNamingStrategy", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>* (*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::GetCreator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d5682c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetCreator", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetAssociatedMetadataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d56a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetAssociatedMetadataType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.GetAssociateMetadataTypeFromAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d56ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                           { "GetAssociateMetadataTypeFromAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.IsNonSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::IsNonSerializable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d56cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "IsNonSerializable", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.IsSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::IsSerializable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d563d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "IsSerializable", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_DynamicCodeGeneration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::get_DynamicCodeGeneration)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d56d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_DynamicCodeGeneration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_FullyTrusted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d554f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_FullyTrusted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonTypeReflector.get_ReflectionDelegateFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* (*)()>(
    &::Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d569a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_ReflectionDelegateFactory", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__dynamicCodeGeneration(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_dynamicCodeGeneration", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__dynamicCodeGeneration() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_dynamicCodeGeneration", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__fullyTrusted(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_fullyTrusted", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__fullyTrusted() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_fullyTrusted", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF_CreatorCache(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>*, "CreatorCache",
                                    ::Newtonsoft::Json::Serialization::JsonTypeReflector*>(
      std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>*
Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF_CreatorCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>*, "CreatorCache",
                                           ::Newtonsoft::Json::Serialization::JsonTypeReflector*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF_AssociatedMetadataTypesCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "AssociatedMetadataTypesCache",
                                    ::Newtonsoft::Json::Serialization::JsonTypeReflector*>(std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*>(value));
}
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF_AssociatedMetadataTypesCache() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>*, "AssociatedMetadataTypesCache",
                                           ::Newtonsoft::Json::Serialization::JsonTypeReflector*>();
}
inline void Newtonsoft::Json::Serialization::JsonTypeReflector::setStaticF__metadataTypeAttributeReflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_metadataTypeAttributeReflectionObject", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>(
      std::forward<::Newtonsoft::Json::Utilities::ReflectionObject*>(value));
}
inline ::Newtonsoft::Json::Utilities::ReflectionObject* Newtonsoft::Json::Serialization::JsonTypeReflector::getStaticF__metadataTypeAttributeReflectionObject() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::ReflectionObject*, "_metadataTypeAttributeReflectionObject", ::Newtonsoft::Json::Serialization::JsonTypeReflector*>();
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetCachedAttribute(::System::Object* attributeProvider) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                              { "GetCachedAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, attributeProvider);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::CanTypeDescriptorConvertString(::System::Type* type, ::by_ref<::System::ComponentModel::TypeConverter*> typeConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                              { "CanTypeDescriptorConvertString", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::ComponentModel::TypeConverter*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, typeConverter);
}
inline ::System::Runtime::Serialization::DataContractAttribute* Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataContractAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetDataContractAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContractAttribute*>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataMemberAttribute* Newtonsoft::Json::Serialization::JsonTypeReflector::GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                         { "GetDataMemberAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataMemberAttribute*>(nullptr, ___internal_method, memberInfo);
}
inline ::Newtonsoft::Json::MemberSerialization Newtonsoft::Json::Serialization::JsonTypeReflector::GetObjectMemberSerialization(::System::Type* objectType, bool ignoreSerializableAttribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                         { "GetObjectMemberSerialization", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MemberSerialization>(nullptr, ___internal_method, objectType, ignoreSerializableAttribute);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonTypeReflector::GetJsonConverter(::System::Object* attributeProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetJsonConverter", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(nullptr, ___internal_method, attributeProvider);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::Serialization::JsonTypeReflector::CreateJsonConverterInstance(::System::Type* converterType, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                           { "CreateJsonConverterInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(nullptr, ___internal_method, converterType, args);
}
inline ::Newtonsoft::Json::Serialization::NamingStrategy* Newtonsoft::Json::Serialization::JsonTypeReflector::CreateNamingStrategyInstance(::System::Type* namingStrategyType,
                                                                                                                                           ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                           { "CreateNamingStrategyInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::NamingStrategy*>(nullptr, ___internal_method, namingStrategyType, args);
}
inline ::Newtonsoft::Json::Serialization::NamingStrategy*
Newtonsoft::Json::Serialization::JsonTypeReflector::GetContainerNamingStrategy(::Newtonsoft::Json::JsonContainerAttribute* containerAttribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                         { "GetContainerNamingStrategy", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::NamingStrategy*>(nullptr, ___internal_method, containerAttribute);
}
inline ::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>* Newtonsoft::Json::Serialization::JsonTypeReflector::GetCreator(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetCreator", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::ArrayW<::System::Object*>, ::System::Object*>*>(nullptr, ___internal_method, type);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociatedMetadataType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetAssociatedMetadataType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonTypeReflector::GetAssociateMetadataTypeFromAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                         { "GetAssociateMetadataTypeFromAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Type* type) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "GetAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, type);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                              { "GetAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, memberInfo);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::IsNonSerializable(::System::Object* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "IsNonSerializable", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, provider);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::IsSerializable(::System::Object* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "IsSerializable", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, provider);
}
template <typename T> inline T Newtonsoft::Json::Serialization::JsonTypeReflector::GetAttribute(::System::Object* provider) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(),
                                                                                              { "GetAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, provider);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::get_DynamicCodeGeneration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_DynamicCodeGeneration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::JsonTypeReflector::get_FullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_FullyTrusted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* Newtonsoft::Json::Serialization::JsonTypeReflector::get_ReflectionDelegateFactory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonTypeReflector*>(), { "get_ReflectionDelegateFactory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonTypeReflector::JsonTypeReflector() {}
