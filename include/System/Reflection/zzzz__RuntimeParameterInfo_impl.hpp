#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeParameterInfo.hpp"
#include "System/Reflection/zzzz__ParameterInfo_impl.hpp"
#include "System/Reflection/zzzz__RuntimeParameterInfo_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(
    ::StringW, ::System::Type*, int32_t, int32_t, ::System::Object*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(
    &::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d2e110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.FormatParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Text::StringBuilder*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, ::System::Reflection::CallingConventions, bool)>(
    &::System::Reflection::RuntimeParameterInfo::FormatParameters)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3d2b6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "FormatParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*)>(&::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3d2e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeParameterInfo::*)(
    ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(&::System::Reflection::RuntimeParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3d2e2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.get_DefaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeParameterInfo::*)()>(
    &::System::Reflection::RuntimeParameterInfo::get_DefaultValue)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3d2e31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeParameterInfo::*)(bool)>(
    &::System::Reflection::RuntimeParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3d2e630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeParameterInfo::*)(
    ::System::Type*, bool)>(&::System::Reflection::RuntimeParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3d2e68c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetDefaultValueImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeParameterInfo::*)(::System::Reflection::ParameterInfo*)>(
    &::System::Reflection::RuntimeParameterInfo::GetDefaultValueImpl)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3d2e208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "GetDefaultValueImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeParameterInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeParameterInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3d2e6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeParameterInfo::*)()>(
    &::System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3d2e768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                               "GetPseudoCustomAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (
    ::System::Reflection::RuntimeParameterInfo::*)()>(&::System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x3d2e9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                               "GetPseudoCustomAttributesData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.New
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterInfo* (*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*)>(
    &::System::Reflection::RuntimeParameterInfo::New)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d2eec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "New", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeParameterInfo.New
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::ParameterInfo* (*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*)>(
        &::System::Reflection::RuntimeParameterInfo::New)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d2b3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "New", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute*& System::Reflection::RuntimeParameterInfo::__cordl_internal_get_marshalAs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshalAs;
}
constexpr ::System::Runtime::InteropServices::MarshalAsAttribute* const& System::Reflection::RuntimeParameterInfo::__cordl_internal_get_marshalAs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___marshalAs;
}
constexpr void System::Reflection::RuntimeParameterInfo::__cordl_internal_set_marshalAs(::System::Runtime::InteropServices::MarshalAsAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___marshalAs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs, ::System::Object* defaultValue,
                                                            ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type, position, attrs, defaultValue, member, marshalAs);
}
inline void System::Reflection::RuntimeParameterInfo::FormatParameters(::System::Text::StringBuilder* sb,
                                                                       ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p,
                                                                       ::System::Reflection::CallingConventions callingConvention, bool serialization) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "FormatParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::CallingConventions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, p, callingConvention, serialization);
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pinfo, member);
}
inline void System::Reflection::RuntimeParameterInfo::_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, member, marshalAs);
}
inline ::System::Object* System::Reflection::RuntimeParameterInfo::get_DefaultValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeParameterInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeParameterInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Object* System::Reflection::RuntimeParameterInfo::GetDefaultValueImpl(::System::Reflection::ParameterInfo* pinfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "GetDefaultValueImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pinfo);
}
inline bool System::Reflection::RuntimeParameterInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                             "GetPseudoCustomAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> System::Reflection::RuntimeParameterInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(),
                                                                             "GetPseudoCustomAttributesData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeParameterInfo::New(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "New", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*, false>(nullptr, ___internal_method, pinfo, member);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeParameterInfo::New(::System::Type* type, ::System::Reflection::MemberInfo* member,
                                                                                          ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeParameterInfo*>::get(), "New", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::MarshalAsAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*, false>(nullptr, ___internal_method, type, member, marshalAs);
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::StringW name, ::System::Type* type, int32_t position, int32_t attrs,
                                                                                                      ::System::Object* defaultValue, ::System::Reflection::MemberInfo* member,
                                                                                                      ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::RuntimeParameterInfo*>(name, type, position, attrs, defaultValue, member, marshalAs));
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::RuntimeParameterInfo*>(pinfo, member));
}
inline ::System::Reflection::RuntimeParameterInfo* System::Reflection::RuntimeParameterInfo::New_ctor(::System::Type* type, ::System::Reflection::MemberInfo* member,
                                                                                                      ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::RuntimeParameterInfo*>(type, member, marshalAs));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeParameterInfo::RuntimeParameterInfo() {}
