#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.get_RequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(
    &::GlobalNamespace::HMAutoincrementedRequestId::get_RequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2255ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(),
                                                                               "get_RequestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(&::GlobalNamespace::HMAutoincrementedRequestId::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2255b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HMAutoincrementedRequestId::*)(::GlobalNamespace::HMAutoincrementedRequestId*)>(
    &::GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2255cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAutoincrementedRequestId*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HMAutoincrementedRequestId::*)(::System::Object*)>(
    &::GlobalNamespace::HMAutoincrementedRequestId::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2255d10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAutoincrementedRequestId.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::HMAutoincrementedRequestId::*)()>(
    &::GlobalNamespace::HMAutoincrementedRequestId::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2255dc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
constexpr GlobalNamespace::HMAutoincrementedRequestId::operator ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*
GlobalNamespace::HMAutoincrementedRequestId::i___System__IEquatable_1___GlobalNamespace__HMAutoincrementedRequestId__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*>(static_cast<void*>(this));
}
constexpr uint64_t& GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_get__requestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr uint64_t const& GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_get__requestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr void GlobalNamespace::HMAutoincrementedRequestId::__cordl_internal_set__requestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId = value;
}
inline void GlobalNamespace::HMAutoincrementedRequestId::setStaticF__nextRequestId(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "_nextRequestId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get>(
      std::forward<uint64_t>(value));
}
inline uint64_t GlobalNamespace::HMAutoincrementedRequestId::getStaticF__nextRequestId() {
  return ::cordl_internals::getStaticField<uint64_t, "_nextRequestId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get>();
}
inline uint64_t GlobalNamespace::HMAutoincrementedRequestId::get_RequestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(),
                                                                             "get_RequestId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAutoincrementedRequestId* GlobalNamespace::HMAutoincrementedRequestId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HMAutoincrementedRequestId*>());
}
inline void GlobalNamespace::HMAutoincrementedRequestId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::HMAutoincrementedRequestId::Equals(::GlobalNamespace::HMAutoincrementedRequestId* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAutoincrementedRequestId*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::HMAutoincrementedRequestId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::HMAutoincrementedRequestId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAutoincrementedRequestId*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HMAutoincrementedRequestId::HMAutoincrementedRequestId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
