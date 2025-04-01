#pragma once
// IWYU pragma private; include "System/Data/InvalidExpressionException.hpp"
#include "System/Data/zzzz__DataException_impl.hpp"
#include "System/Data/zzzz__InvalidExpressionException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Data::InvalidExpressionException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::InvalidExpressionException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Data::InvalidExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41771c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InvalidExpressionException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::InvalidExpressionException::*)()>(&::System::Data::InvalidExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41771cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InvalidExpressionException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::InvalidExpressionException::*)(::StringW)>(
    &::System::Data::InvalidExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41771d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Data::InvalidExpressionException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Data::InvalidExpressionException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Data::InvalidExpressionException::_ctor(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InvalidExpressionException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::System::Data::InvalidExpressionException* System::Data::InvalidExpressionException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::InvalidExpressionException*>(info, context));
}
inline ::System::Data::InvalidExpressionException* System::Data::InvalidExpressionException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::InvalidExpressionException*>());
}
inline ::System::Data::InvalidExpressionException* System::Data::InvalidExpressionException::New_ctor(::StringW s) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::InvalidExpressionException*>(s));
}
// Ctor Parameters []
constexpr ::System::Data::InvalidExpressionException::InvalidExpressionException() {}
