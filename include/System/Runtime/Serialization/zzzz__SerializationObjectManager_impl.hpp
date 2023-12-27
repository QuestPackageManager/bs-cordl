#pragma once
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationObjectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationObjectManager::*)(
    ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b5950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationObjectManager.RegisterObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::SerializationObjectManager::RegisterObject)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24b59e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "RegisterObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationObjectManager.RaiseOnSerializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationObjectManager::*)()>(
    &::System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24b5b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "RaiseOnSerializedEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationObjectManager.AddOnSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationObjectManager::*)(::System::Object*)>(
    &::System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24b5af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "AddOnSerialized",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*& System::Runtime::Serialization::SerializationObjectManager::__get__objectSeenTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objectSeenTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*> const&
System::Runtime::Serialization::SerializationObjectManager::__get__objectSeenTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objectSeenTable;
}
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__objectSeenTable(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectSeenTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::SerializationObjectManager::__get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::SerializationObjectManager::__get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____context;
}
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____context = value;
}
constexpr ::System::Runtime::Serialization::SerializationEventHandler*& System::Runtime::Serialization::SerializationObjectManager::__get__onSerializedHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onSerializedHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationEventHandler*> const&
System::Runtime::Serialization::SerializationObjectManager::__get__onSerializedHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onSerializedHandler;
}
constexpr void System::Runtime::Serialization::SerializationObjectManager::__set__onSerializedHandler(::System::Runtime::Serialization::SerializationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSerializedHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::SerializationObjectManager* System::Runtime::Serialization::SerializationObjectManager::New_ctor(::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SerializationObjectManager*>(context));
}
inline void System::Runtime::Serialization::SerializationObjectManager::_ctor(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void System::Runtime::Serialization::SerializationObjectManager::RegisterObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "RegisterObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::SerializationObjectManager::RaiseOnSerializedEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "RaiseOnSerializedEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationObjectManager::AddOnSerialized(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationObjectManager*>::get(), "AddOnSerialized",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationObjectManager::SerializationObjectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
