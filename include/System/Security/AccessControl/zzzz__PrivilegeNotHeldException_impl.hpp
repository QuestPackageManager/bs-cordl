#pragma once
// IWYU pragma private; include "System/Security/AccessControl/PrivilegeNotHeldException.hpp"
#include "System/zzzz__UnauthorizedAccessException_impl.hpp"
#include "System/Security/AccessControl/zzzz__PrivilegeNotHeldException_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)()>(
    &::System::Security::AccessControl::PrivilegeNotHeldException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x596c77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::AccessControl::PrivilegeNotHeldException::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x596c7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::PrivilegeNotHeldException.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::PrivilegeNotHeldException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x596c868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), 10));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_get__privilegeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privilegeName;
}
constexpr ::StringW const& System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_get__privilegeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privilegeName;
}
constexpr void System::Security::AccessControl::PrivilegeNotHeldException::__cordl_internal_set__privilegeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privilegeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::PrivilegeNotHeldException*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Security::AccessControl::PrivilegeNotHeldException* System::Security::AccessControl::PrivilegeNotHeldException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::PrivilegeNotHeldException*>());
}
inline ::System::Security::AccessControl::PrivilegeNotHeldException* System::Security::AccessControl::PrivilegeNotHeldException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::PrivilegeNotHeldException*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Security::AccessControl::PrivilegeNotHeldException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Security::AccessControl::PrivilegeNotHeldException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::PrivilegeNotHeldException::PrivilegeNotHeldException() {}
