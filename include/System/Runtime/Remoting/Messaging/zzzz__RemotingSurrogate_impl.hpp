#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/RemotingSurrogate.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__RemotingSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogate.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3cf1be0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogate.SetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Remoting::Messaging::RemotingSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                  ::System::Runtime::Serialization::ISurrogateSelector*)>(&::System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3cf1cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::RemotingSurrogate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::RemotingSurrogate::*)()>(
    &::System::Runtime::Remoting::Messaging::RemotingSurrogate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cf1d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Messaging::RemotingSurrogate::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                   ::System::Runtime::Serialization::StreamingContext sc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, si, sc);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::RemotingSurrogate::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                ::System::Runtime::Serialization::StreamingContext sc,
                                                                                                ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, si, sc, selector);
}
inline void System::Runtime::Remoting::Messaging::RemotingSurrogate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::RemotingSurrogate*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr System::Runtime::Remoting::Messaging::RemotingSurrogate::operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Remoting::Messaging::RemotingSurrogate::i___System__Runtime__Serialization__ISerializationSurrogate() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializationSurrogate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::RemotingSurrogate::RemotingSurrogate() {}
