#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlTypeException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlTypeException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)()>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x41d51d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(::StringW)>(
    &::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x41c1480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(::StringW, ::System::Exception*)>(
    &::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x41d5238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlTypeException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Data::SqlTypes::SqlTypeException::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x41d525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlTypeException.SqlTypeExceptionSerialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::SerializationInfo* (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Data::SqlTypes::SqlTypeException::SqlTypeExceptionSerialization)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x41d52ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), "SqlTypeExceptionSerialization", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlTypeException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::StringW message, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, e);
}
inline void System::Data::SqlTypes::SqlTypeException::_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, si, sc);
}
inline ::System::Runtime::Serialization::SerializationInfo* System::Data::SqlTypes::SqlTypeException::SqlTypeExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                                                    ::System::Runtime::Serialization::StreamingContext sc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlTypeException*>::get(), "SqlTypeExceptionSerialization", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfo*, false>(nullptr, ___internal_method, si, sc);
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::SqlTypes::SqlTypeException*>());
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::SqlTypes::SqlTypeException*>(message));
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::StringW message, ::System::Exception* e) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::SqlTypes::SqlTypeException*>(message, e));
}
inline ::System::Data::SqlTypes::SqlTypeException* System::Data::SqlTypes::SqlTypeException::New_ctor(::System::Runtime::Serialization::SerializationInfo* si,
                                                                                                      ::System::Runtime::Serialization::StreamingContext sc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::SqlTypes::SqlTypeException*>(si, sc));
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlTypeException::SqlTypeException() {}
