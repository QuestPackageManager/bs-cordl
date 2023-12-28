#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__RuntimeEventInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::__MonoCustomAttrs__AttributeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__MonoCustomAttrs__AttributeInfo::*)(::System::AttributeUsageAttribute*, int32_t)>(
    &::System::__MonoCustomAttrs__AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25fbbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AttributeUsageAttribute*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__MonoCustomAttrs__AttributeInfo.get_Usage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AttributeUsageAttribute* (::System::__MonoCustomAttrs__AttributeInfo::*)()>(
    &::System::__MonoCustomAttrs__AttributeInfo::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25fe2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(), "get_Usage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__MonoCustomAttrs__AttributeInfo.get_InheritanceLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__MonoCustomAttrs__AttributeInfo::*)()>(
    &::System::__MonoCustomAttrs__AttributeInfo::get_InheritanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25fe2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(),
                                                                               "get_InheritanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::AttributeUsageAttribute*& System::__MonoCustomAttrs__AttributeInfo::__get__usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usage;
}
constexpr ::cordl_internals::to_const_pointer<::System::AttributeUsageAttribute*> const& System::__MonoCustomAttrs__AttributeInfo::__get__usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usage;
}
constexpr void System::__MonoCustomAttrs__AttributeInfo::__set__usage(::System::AttributeUsageAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____usage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::__MonoCustomAttrs__AttributeInfo::__get__inheritanceLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritanceLevel;
}
constexpr int32_t const& System::__MonoCustomAttrs__AttributeInfo::__get__inheritanceLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inheritanceLevel;
}
constexpr void System::__MonoCustomAttrs__AttributeInfo::__set__inheritanceLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inheritanceLevel = value;
}
inline ::System::__MonoCustomAttrs__AttributeInfo* System::__MonoCustomAttrs__AttributeInfo::New_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__MonoCustomAttrs__AttributeInfo*>(usage, inheritanceLevel));
}
inline void System::__MonoCustomAttrs__AttributeInfo::_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AttributeUsageAttribute*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage, inheritanceLevel);
}
inline ::System::AttributeUsageAttribute* System::__MonoCustomAttrs__AttributeInfo::get_Usage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(), "get_Usage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*, false>(this, ___internal_method);
}
inline int32_t System::__MonoCustomAttrs__AttributeInfo::get_InheritanceLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__MonoCustomAttrs__AttributeInfo*>::get(),
                                                                             "get_InheritanceLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__MonoCustomAttrs__AttributeInfo::__MonoCustomAttrs__AttributeInfo() {}
//  Writing Method size for method: ::System::MonoCustomAttrs.IsUserCattrProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::MonoCustomAttrs::IsUserCattrProvider)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x25fa558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsUserCattrProvider", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(&::System::MonoCustomAttrs::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25fa724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(&::System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x25fa72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(::System::Type*)>(
    &::System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25faa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(&::System::MonoCustomAttrs::GetCustomAttributesBase)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25fab7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesBase", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(&::System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x25fad20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(::System::Reflection::ICustomAttributeProvider*, bool)>(
    &::System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25fbbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*)>(&::System::MonoCustomAttrs::GetCustomAttributesDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25fbd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesDataInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, bool)>(
        &::System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x25fbd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
        &::System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x1360;
  constexpr static std::size_t addrs = 0x25fc030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetCustomAttributesDataBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
        &::System::MonoCustomAttrs::GetCustomAttributesDataBase)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x25fbe84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesDataBase", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (*)(
    ::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(&::System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x25fd390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributesData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (*)(
    ::System::Type*)>(&::System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x25fd680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributesData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*, bool)>(
    &::System::MonoCustomAttrs::IsDefined)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x25fd898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsDefined", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.IsDefinedInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ICustomAttributeProvider*, ::System::Type*)>(
    &::System::MonoCustomAttrs::IsDefinedInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25fdb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsDefinedInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBasePropertyDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (*)(::System::Reflection::RuntimePropertyInfo*)>(
    &::System::MonoCustomAttrs::GetBasePropertyDefinition)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x25fdb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBasePropertyDefinition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimePropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBaseEventDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (*)(::System::Reflection::RuntimeEventInfo*)>(
    &::System::MonoCustomAttrs::GetBaseEventDefinition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x25fde1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBaseEventDefinition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeEventInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.GetBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ICustomAttributeProvider* (*)(::System::Reflection::ICustomAttributeProvider*)>(
    &::System::MonoCustomAttrs::GetBase)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x25fb6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBase", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.RetrieveAttributeUsageNoCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AttributeUsageAttribute* (*)(::System::Type*)>(&::System::MonoCustomAttrs::RetrieveAttributeUsageNoCache)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x25fe02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "RetrieveAttributeUsageNoCache",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoCustomAttrs.RetrieveAttributeUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AttributeUsageAttribute* (*)(::System::Type*)>(&::System::MonoCustomAttrs::RetrieveAttributeUsage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25fba5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "RetrieveAttributeUsage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::MonoCustomAttrs::setStaticF_corlib(::System::Reflection::Assembly* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Assembly*, "corlib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>(
      std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* System::MonoCustomAttrs::getStaticF_corlib() {
  return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "corlib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>();
}
inline void System::MonoCustomAttrs::setStaticF_usage_cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*, "usage_cache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* System::MonoCustomAttrs::getStaticF_usage_cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>*, "usage_cache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>();
}
inline void System::MonoCustomAttrs::setStaticF_DefaultAttributeUsage(::System::AttributeUsageAttribute* value) {
  ::cordl_internals::setStaticField<::System::AttributeUsageAttribute*, "DefaultAttributeUsage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>(
      std::forward<::System::AttributeUsageAttribute*>(value));
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::getStaticF_DefaultAttributeUsage() {
  return ::cordl_internals::getStaticField<::System::AttributeUsageAttribute*, "DefaultAttributeUsage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get>();
}
inline bool System::MonoCustomAttrs::IsUserCattrProvider(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsUserCattrProvider", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> System::MonoCustomAttrs::GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                           ::System::Type* attributeType, bool pseudoAttrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, false>(nullptr, ___internal_method, obj, attributeType, pseudoAttrs);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::MonoCustomAttrs::GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, obj, attributeType);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::MonoCustomAttrs::GetPseudoCustomAttributes(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::MonoCustomAttrs::GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                                 bool inheritedOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesBase", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, obj, attributeType, inheritedOnly);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::MonoCustomAttrs::GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                             bool inherit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::MonoCustomAttrs::GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, obj, inherit);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
System::MonoCustomAttrs::GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesDataInternal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(nullptr, ___internal_method, obj);
}
/// @param inherit: bool (default: false)
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                             bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, obj, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                             ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* System::MonoCustomAttrs::GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                                 ::System::Type* attributeType, bool inheritedOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetCustomAttributesDataBase", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*, false>(nullptr, ___internal_method, obj, attributeType,
                                                                                                                                          inheritedOnly);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
System::MonoCustomAttrs::GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributesData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(nullptr, ___internal_method, obj,
                                                                                                                                                                attributeType);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> System::MonoCustomAttrs::GetPseudoCustomAttributesData(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetPseudoCustomAttributesData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(nullptr, ___internal_method, type);
}
inline bool System::MonoCustomAttrs::IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsDefined", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
inline bool System::MonoCustomAttrs::IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "IsDefinedInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, AttributeType);
}
inline ::System::Reflection::PropertyInfo* System::MonoCustomAttrs::GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* property) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBasePropertyDefinition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimePropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(nullptr, ___internal_method, property);
}
inline ::System::Reflection::EventInfo* System::MonoCustomAttrs::GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBaseEventDefinition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeEventInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*, false>(nullptr, ___internal_method, evt);
}
inline ::System::Reflection::ICustomAttributeProvider* System::MonoCustomAttrs::GetBase(::System::Reflection::ICustomAttributeProvider* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "GetBase", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ICustomAttributeProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ICustomAttributeProvider*, false>(nullptr, ___internal_method, obj);
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsageNoCache(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "RetrieveAttributeUsageNoCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*, false>(nullptr, ___internal_method, attributeType);
}
inline ::System::AttributeUsageAttribute* System::MonoCustomAttrs::RetrieveAttributeUsage(::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoCustomAttrs*>::get(), "RetrieveAttributeUsage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::AttributeUsageAttribute*, false>(nullptr, ___internal_method, attributeType);
}
// Ctor Parameters []
constexpr ::System::MonoCustomAttrs::MonoCustomAttrs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
