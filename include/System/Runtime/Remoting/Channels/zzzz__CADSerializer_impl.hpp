#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CADSerializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CADSerializer_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::IO::MemoryStream*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(
        &::System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ce8324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.SerializeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3ce7d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "SerializeMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeObjectSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3ce86d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeObjectSafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.SerializeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::SerializeObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3ce87f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "SerializeObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CADSerializer.DeserializeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::IO::MemoryStream*)>(
    &::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3ce8770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage(::System::IO::MemoryStream* mem,
                                                                                                                                ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, mem, msg);
}
inline ::System::IO::MemoryStream* System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "SerializeMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(nullptr, ___internal_method, msg);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe(::ArrayW<uint8_t, ::Array<uint8_t>*> mem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeObjectSafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, mem);
}
inline ::System::IO::MemoryStream* System::Runtime::Remoting::Channels::CADSerializer::SerializeObject(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "SerializeObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(nullptr, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject(::System::IO::MemoryStream* mem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CADSerializer*>::get(), "DeserializeObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, mem);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CADSerializer::CADSerializer() {}
