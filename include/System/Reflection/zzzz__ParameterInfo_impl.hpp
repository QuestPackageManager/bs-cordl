#pragma once
// IWYU pragma private; include "System/Reflection/ParameterInfo.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_impl.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_impl.hpp"
#include "System/Runtime/InteropServices/zzzz___ParameterInfo_impl.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::ParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterAttributes (::System::Reflection::ParameterInfo::*)()>(
    &::System::Reflection::ParameterInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Member
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Reflection::ParameterInfo::*)()>(
    &::System::Reflection::ParameterInfo::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_ParameterType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::ParameterInfo::*)()>(
    &::System::Reflection::ParameterInfo::get_ParameterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d329dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsIn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3d329e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsIn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOptional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3d32a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsOptional",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3d32a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsOut",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_DefaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)()>(
    &::System::Reflection::ParameterInfo::get_DefaultValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d32a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::ParameterInfo::IsDefined)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3d32a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::ParameterInfo::*)(bool)>(
    &::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3d32b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3d32b9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Reflection::ParameterInfo::GetRealObject)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3d32cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3d32f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ParameterAttributes& System::Reflection::ParameterInfo::__cordl_internal_get_AttrsImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AttrsImpl;
}
constexpr ::System::Reflection::ParameterAttributes const& System::Reflection::ParameterInfo::__cordl_internal_get_AttrsImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AttrsImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_AttrsImpl(::System::Reflection::ParameterAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AttrsImpl = value;
}
constexpr ::System::Type*& System::Reflection::ParameterInfo::__cordl_internal_get_ClassImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassImpl;
}
constexpr ::System::Type* const& System::Reflection::ParameterInfo::__cordl_internal_get_ClassImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_ClassImpl(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ClassImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::ParameterInfo::__cordl_internal_get_DefaultValueImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValueImpl;
}
constexpr ::System::Object* const& System::Reflection::ParameterInfo::__cordl_internal_get_DefaultValueImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultValueImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_DefaultValueImpl(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultValueImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MemberInfo*& System::Reflection::ParameterInfo::__cordl_internal_get_MemberImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberImpl;
}
constexpr ::System::Reflection::MemberInfo* const& System::Reflection::ParameterInfo::__cordl_internal_get_MemberImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_MemberImpl(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MemberImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::ParameterInfo::__cordl_internal_get_NameImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameImpl;
}
constexpr ::StringW const& System::Reflection::ParameterInfo::__cordl_internal_get_NameImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_NameImpl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NameImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Reflection::ParameterInfo::__cordl_internal_get_PositionImpl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionImpl;
}
constexpr int32_t const& System::Reflection::ParameterInfo::__cordl_internal_get_PositionImpl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionImpl;
}
constexpr void System::Reflection::ParameterInfo::__cordl_internal_set_PositionImpl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PositionImpl = value;
}
inline void System::Reflection::ParameterInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::ParameterAttributes System::Reflection::ParameterInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterAttributes, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Reflection::ParameterInfo::get_Member() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ParameterInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::ParameterInfo::get_ParameterType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Reflection::ParameterInfo::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsIn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsIn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsOptional",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "get_IsOut",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::ParameterInfo::get_DefaultValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::ParameterInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::ParameterInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Object* System::Reflection::ParameterInfo::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline ::StringW System::Reflection::ParameterInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::ParameterInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::ParameterInfo*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr System::Reflection::ParameterInfo::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::ParameterInfo::i___System__Reflection__ICustomAttributeProvider() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Reflection::ParameterInfo::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Reflection::ParameterInfo::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr System::Reflection::ParameterInfo::operator ::System::Runtime::InteropServices::_ParameterInfo*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_ParameterInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr ::System::Runtime::InteropServices::_ParameterInfo* System::Reflection::ParameterInfo::i___System__Runtime__InteropServices___ParameterInfo() noexcept {
  return static_cast<::System::Runtime::InteropServices::_ParameterInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::ParameterInfo::ParameterInfo() {}
