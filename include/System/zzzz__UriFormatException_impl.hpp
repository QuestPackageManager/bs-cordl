#pragma once
// IWYU pragma private; include "System/UriFormatException.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/zzzz__FormatException_impl.hpp"
#include "System/zzzz__UriFormatException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::UriFormatException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriFormatException::*)()>(&::System::UriFormatException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44072b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriFormatException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriFormatException::*)(::StringW)>(&::System::UriFormatException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4405438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriFormatException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriFormatException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::UriFormatException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44072b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriFormatException.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::UriFormatException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::UriFormatException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44072c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
inline void System::UriFormatException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::UriFormatException::_ctor(::StringW textString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textString);
}
inline void System::UriFormatException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::UriFormatException::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                 ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriFormatException*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::UriFormatException* System::UriFormatException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::UriFormatException*>());
}
inline ::System::UriFormatException* System::UriFormatException::New_ctor(::StringW textString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::UriFormatException*>(textString));
}
inline ::System::UriFormatException* System::UriFormatException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                          ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::UriFormatException*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::UriFormatException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::UriFormatException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::UriFormatException::UriFormatException() {}
