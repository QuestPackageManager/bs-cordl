#pragma once
// IWYU pragma private; include "System/MonoCustomAttrs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeEventInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::MonoCustomAttrs_AttributeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoCustomAttrs_AttributeInfo::*)(::System::AttributeUsageAttribute*, int32_t)>(
    &::System::MonoCustomAttrs_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c924c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::AttributeUsageAttribute*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs_AttributeInfo.get_Usage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AttributeUsageAttribute* (::System::MonoCustomAttrs_AttributeInfo::*)()>(&::System::MonoCustomAttrs_AttributeInfo::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c94b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(), { "get_Usage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs_AttributeInfo.get_InheritanceLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::MonoCustomAttrs_AttributeInfo::*)()>(&::System::MonoCustomAttrs_AttributeInfo::get_InheritanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c94b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(), { "get_InheritanceLevel", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::AttributeUsageAttribute*& System::MonoCustomAttrs_AttributeInfo::__cordl_internal_get__usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usage;
}
constexpr ::System::AttributeUsageAttribute* const& System::MonoCustomAttrs_AttributeInfo::__cordl_internal_get__usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usage;
}
constexpr void System::MonoCustomAttrs_AttributeInfo::__cordl_internal_set__usage(::System::AttributeUsageAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usage = value;
}
constexpr int32_t& System::MonoCustomAttrs_AttributeInfo::__cordl_internal_get__inheritanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritanceLevel;
}
constexpr int32_t const& System::MonoCustomAttrs_AttributeInfo::__cordl_internal_get__inheritanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritanceLevel;
}
constexpr void System::MonoCustomAttrs_AttributeInfo::__cordl_internal_set__inheritanceLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inheritanceLevel = value;
}
inline void System::MonoCustomAttrs_AttributeInfo::_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::AttributeUsageAttribute*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usage, inheritanceLevel);
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs_AttributeInfo::get_Usage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(), { "get_Usage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*>(this, ___internal_method);
}
inline int32_t System::MonoCustomAttrs_AttributeInfo::get_InheritanceLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs_AttributeInfo*>(), { "get_InheritanceLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::MonoCustomAttrs_AttributeInfo* System::MonoCustomAttrs_AttributeInfo::New_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoCustomAttrs_AttributeInfo*>(usage, inheritanceLevel));
}
// Ctor Parameters []
constexpr ::System::MonoCustomAttrs_AttributeInfo::MonoCustomAttrs_AttributeInfo() {}
//  Writing Method size for method: ::System::MonoCustomAttrs.IsUserCattrProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::MonoCustomAttrs::IsUserCattrProvider)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c90d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "IsUserCattrProvider", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
    &::System::MonoCustomAttrs::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c90efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                            { "GetCustomAttributesInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(
    &::System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5c90f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                { "GetPseudoCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Type*)>(&::System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c91204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetPseudoCustomAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
    &::System::MonoCustomAttrs::GetCustomAttributesBase)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c9137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                            { "GetCustomAttributesBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
    &::System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x5c9152c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                            { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)(::System::Reflection::ICustomAttributeProvider*, bool)>(&::System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c924d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                             { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (*)(::System::Reflection::ICustomAttributeProvider*)>(
    &::System::MonoCustomAttrs::GetCustomAttributesDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9264c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetCustomAttributesDataInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, bool)>(
    &::System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5c92650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                             { "GetCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
        &::System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x12ec;
  constexpr static std::size_t addrs = 0x5c92950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                            { "GetCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesDataBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
        &::System::MonoCustomAttrs::GetCustomAttributesDataBase)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5c92780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                            { "GetCustomAttributesDataBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(
    &::System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5c93c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                { "GetPseudoCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (*)(::System::Type*)>(&::System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5c93f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetPseudoCustomAttributesData", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(&::System::MonoCustomAttrs::IsDefined)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c94188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                         { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.IsDefinedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(&::System::MonoCustomAttrs::IsDefinedInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9440c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                             { "IsDefinedInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBasePropertyDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::System::Reflection::RuntimePropertyInfo*)>(&::System::MonoCustomAttrs::GetBasePropertyDefinition)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5c94410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBasePropertyDefinition", {}, { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBaseEventDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (*)(::System::Reflection::RuntimeEventInfo*)>(&::System::MonoCustomAttrs::GetBaseEventDefinition)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c946e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBaseEventDefinition", {}, { ::i2c::type_of<::System::Reflection::RuntimeEventInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ICustomAttributeProvider* (*)(::System::Reflection::ICustomAttributeProvider*)>(&::System::MonoCustomAttrs::GetBase)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5c91ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.RetrieveAttributeUsageNoCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AttributeUsageAttribute* (*)(::System::Type*)>(&::System::MonoCustomAttrs::RetrieveAttributeUsageNoCache)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c948f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "RetrieveAttributeUsageNoCache", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.RetrieveAttributeUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AttributeUsageAttribute* (*)(::System::Type*)>(&::System::MonoCustomAttrs::RetrieveAttributeUsage)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5c92278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "RetrieveAttributeUsage", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::MonoCustomAttrs::setStaticF_corlib(::System::Reflection::Assembly* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Assembly*, "corlib", ::System::MonoCustomAttrs*>(std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* System::MonoCustomAttrs::getStaticF_corlib() {
  return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "corlib", ::System::MonoCustomAttrs*>();
}
inline void System::MonoCustomAttrs::setStaticF_usage_cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*, "usage_cache", ::System::MonoCustomAttrs*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* System::MonoCustomAttrs::getStaticF_usage_cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*, "usage_cache", ::System::MonoCustomAttrs*>();
}
inline void System::MonoCustomAttrs::setStaticF_DefaultAttributeUsage(::System::AttributeUsageAttribute* value) {
  ::cordl_internals::setStaticField<::System::AttributeUsageAttribute*, "DefaultAttributeUsage", ::System::MonoCustomAttrs*>(std::forward<::System::AttributeUsageAttribute*>(value));
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::getStaticF_DefaultAttributeUsage() {
  return ::cordl_internals::getStaticField<::System::AttributeUsageAttribute*, "DefaultAttributeUsage", ::System::MonoCustomAttrs*>();
}
inline bool System::MonoCustomAttrs::IsUserCattrProvider(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "IsUserCattrProvider", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::System::Attribute*> System::MonoCustomAttrs::GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool pseudoAttrs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                          { "GetCustomAttributesInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(nullptr, ___internal_method, obj, attributeType, pseudoAttrs);
}
inline ::ArrayW<::System::Object*> System::MonoCustomAttrs::GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                              { "GetPseudoCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, obj, attributeType);
}
inline ::ArrayW<::System::Object*> System::MonoCustomAttrs::GetPseudoCustomAttributes(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetPseudoCustomAttributes", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Object*> System::MonoCustomAttrs::GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inheritedOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                          { "GetCustomAttributesBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, obj, attributeType, inheritedOnly);
}
inline ::ArrayW<::System::Object*> System::MonoCustomAttrs::GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                          { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::MonoCustomAttrs::GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                           { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method, obj, inherit);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::MonoCustomAttrs::GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetCustomAttributesDataInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                             bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                           { "GetCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, obj, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                             ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                          { "GetCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                                 ::System::Type* attributeType, bool inheritedOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                          { "GetCustomAttributesDataBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*>(nullptr, ___internal_method, obj, attributeType, inheritedOnly);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::MonoCustomAttrs::GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                              { "GetPseudoCustomAttributesData", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(nullptr, ___internal_method, obj, attributeType);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::MonoCustomAttrs::GetPseudoCustomAttributesData(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetPseudoCustomAttributesData", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(nullptr, ___internal_method, type);
}
inline bool System::MonoCustomAttrs::IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                              { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline bool System::MonoCustomAttrs::IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(),
                                                           { "IsDefinedInternal", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, AttributeType);
}
inline ::System::Reflection::PropertyInfo* System::MonoCustomAttrs::GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBasePropertyDefinition", {}, { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, property);
}
inline ::System::Reflection::EventInfo* System::MonoCustomAttrs::GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBaseEventDefinition", {}, { ::i2c::type_of<::System::Reflection::RuntimeEventInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(nullptr, ___internal_method, evt);
}
inline ::System::Reflection::ICustomAttributeProvider* System::MonoCustomAttrs::GetBase(::System::Reflection::ICustomAttributeProvider* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "GetBase", {}, { ::i2c::type_of<::System::Reflection::ICustomAttributeProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ICustomAttributeProvider*>(nullptr, ___internal_method, obj);
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsageNoCache(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "RetrieveAttributeUsageNoCache", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*>(nullptr, ___internal_method, attributeType);
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsage(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoCustomAttrs*>(), { "RetrieveAttributeUsage", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*>(nullptr, ___internal_method, attributeType);
}
// Ctor Parameters []
constexpr ::System::MonoCustomAttrs::MonoCustomAttrs() {}
