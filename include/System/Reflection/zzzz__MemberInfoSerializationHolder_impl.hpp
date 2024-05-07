#pragma once
// IWYU pragma private; include "System/Reflection/MemberInfoSerializationHolder.hpp"
#include "System/Reflection/zzzz__MemberTypes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__MemberInfoSerializationHolder_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetSerializationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW, ::System::Reflection::MemberTypes)>(
        &::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), "GetSerializationInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberTypes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetSerializationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW,
                                                                                           ::StringW, ::System::Reflection::MemberTypes, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(
    &::System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x286e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), "GetSerializationInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberTypes>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::MemberInfoSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::MemberInfoSerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x286e518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::MemberInfoSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::MemberInfoSerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x286e83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberInfoSerializationHolder.GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::MemberInfoSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::MemberInfoSerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x286e89c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), 7));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::MemberInfoSerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::MemberInfoSerializationHolder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Reflection::MemberInfoSerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Reflection::MemberInfoSerializationHolder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberName;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberName;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_memberName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::RuntimeType*& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_reflectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reflectedType;
}
constexpr ::cordl_internals::to_const_pointer<::System::RuntimeType*> const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_reflectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reflectedType;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_reflectedType(::System::RuntimeType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_reflectedType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_signature(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_signature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature2;
}
constexpr ::StringW const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_signature2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_signature2;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_signature2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_signature2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MemberTypes& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberType;
}
constexpr ::System::Reflection::MemberTypes const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_memberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_memberType;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_memberType(::System::Reflection::MemberTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_memberType = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_info;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Reflection::MemberInfoSerializationHolder::__cordl_internal_get_m_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_info;
}
constexpr void System::Reflection::MemberInfoSerializationHolder::__cordl_internal_set_m_info(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass,
                                                                                    ::StringW signature, ::System::Reflection::MemberTypes type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), "GetSerializationInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberTypes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, info, name, reflectedClass, signature, type);
}
inline void System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass,
                                                                                    ::StringW signature, ::StringW signature2, ::System::Reflection::MemberTypes type,
                                                                                    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> genericArguments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), "GetSerializationInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberTypes>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, info, name, reflectedClass, signature, signature2, type, genericArguments);
}
inline ::System::Reflection::MemberInfoSerializationHolder* System::Reflection::MemberInfoSerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::MemberInfoSerializationHolder*>(info, context));
}
inline void System::Reflection::MemberInfoSerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Reflection::MemberInfoSerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::MemberInfoSerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MemberInfoSerializationHolder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::System::Reflection::MemberInfoSerializationHolder::MemberInfoSerializationHolder() {}
