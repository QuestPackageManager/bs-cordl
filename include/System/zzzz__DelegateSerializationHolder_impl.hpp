#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::__DelegateSerializationHolder__DelegateEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__DelegateSerializationHolder__DelegateEntry::*)(::System::Delegate*, ::StringW)>(
    &::System::__DelegateSerializationHolder__DelegateEntry::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2880568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DelegateSerializationHolder__DelegateEntry.DeserializeDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Delegate* (::System::__DelegateSerializationHolder__DelegateEntry::*)(::System::Runtime::Serialization::SerializationInfo*, int32_t)>(
        &::System::__DelegateSerializationHolder__DelegateEntry::DeserializeDelegate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x28802f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(), "DeserializeDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_assembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_targetTypeAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeAssembly;
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_targetTypeAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeAssembly;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_targetTypeAssembly(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetTypeAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_targetTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeName;
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_targetTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTypeName;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_targetTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___methodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::__DelegateSerializationHolder__DelegateEntry*& System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_delegateEntry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegateEntry;
}
constexpr ::cordl_internals::to_const_pointer<::System::__DelegateSerializationHolder__DelegateEntry*> const&
System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_get_delegateEntry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegateEntry;
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__cordl_internal_set_delegateEntry(::System::__DelegateSerializationHolder__DelegateEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegateEntry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__DelegateSerializationHolder__DelegateEntry* System::__DelegateSerializationHolder__DelegateEntry::New_ctor(::System::Delegate* del, ::StringW targetLabel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__DelegateSerializationHolder__DelegateEntry*>(del, targetLabel));
}
inline void System::__DelegateSerializationHolder__DelegateEntry::_ctor(::System::Delegate* del, ::StringW targetLabel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, del, targetLabel);
}
inline ::System::Delegate* System::__DelegateSerializationHolder__DelegateEntry::DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* info, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(), "DeserializeDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, info, index);
}
// Ctor Parameters []
constexpr ::System::__DelegateSerializationHolder__DelegateEntry::__DelegateSerializationHolder__DelegateEntry() {}
//  Writing Method size for method: ::System::DelegateSerializationHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x28800f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetDelegateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetDelegateData)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x287fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetDelegateData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateSerializationHolder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2880684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::DelegateSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::DelegateSerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28806c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::DelegateSerializationHolder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::DelegateSerializationHolder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
constexpr ::System::Delegate*& System::DelegateSerializationHolder::__cordl_internal_get__delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> const& System::DelegateSerializationHolder::__cordl_internal_get__delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegate;
}
constexpr void System::DelegateSerializationHolder::__cordl_internal_set__delegate(::System::Delegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::DelegateSerializationHolder* System::DelegateSerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext ctx) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::DelegateSerializationHolder*>(info, ctx));
}
inline void System::DelegateSerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, ctx);
}
inline void System::DelegateSerializationHolder::GetDelegateData(::System::Delegate* instance, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                 ::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetDelegateData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, info, ctx);
}
inline void System::DelegateSerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::DelegateSerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::System::DelegateSerializationHolder::DelegateSerializationHolder() {}
