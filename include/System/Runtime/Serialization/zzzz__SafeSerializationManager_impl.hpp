#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SafeSerializationManager.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)()>(
    &::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cf7084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3cf708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.get_IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SafeSerializationManager::*)()>(
    &::System::Runtime::Serialization::SafeSerializationManager::get_IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3cf7580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "get_IsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteSerialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3cf7590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "CompleteSerialization", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x3cf78b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "CompleteDeserialization",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3cf7c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                    "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_IObjectReference_GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::StreamingContext)>(
        &::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3cf7d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                    "System.Runtime.Serialization.IObjectReference.GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(
    ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3cf7fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_serializedStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializedStates;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_serializedStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializedStates;
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_set_m_serializedStates(::System::Collections::Generic::IList_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_serializedStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_savedSerializationInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_savedSerializationInfo;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_savedSerializationInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_savedSerializationInfo;
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_set_m_savedSerializationInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_savedSerializationInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_realObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_realObject;
}
constexpr ::System::Object* const& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_realObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_realObject;
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_set_m_realObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_realObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::RuntimeType*& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_realType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_realType;
}
constexpr ::System::RuntimeType* const& System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_m_realType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_realType;
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_set_m_realType(::System::RuntimeType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_realType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*&
System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_SerializeObjectState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeObjectState;
}
constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* const&
System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_get_SerializeObjectState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializeObjectState;
}
constexpr void
System::Runtime::Serialization::SafeSerializationManager::__cordl_internal_set_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SerializeObjectState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::SafeSerializationManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SafeSerializationManager::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline bool System::Runtime::Serialization::SafeSerializationManager::get_IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                                                             "get_IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization(::System::Object* serializedObject, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "CompleteSerialization", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedObject, info, context);
}
inline void System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization(::System::Object* deserializedObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "CompleteDeserialization",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deserializedObject);
}
inline void System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object*
System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                                  "System.Runtime.Serialization.IObjectReference.GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline void System::Runtime::Serialization::SafeSerializationManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::System::Runtime::Serialization::SafeSerializationManager* System::Runtime::Serialization::SafeSerializationManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SafeSerializationManager*>());
}
inline ::System::Runtime::Serialization::SafeSerializationManager* System::Runtime::Serialization::SafeSerializationManager::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::SafeSerializationManager*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Runtime::Serialization::SafeSerializationManager::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Runtime::Serialization::SafeSerializationManager::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SafeSerializationManager::SafeSerializationManager() {}
