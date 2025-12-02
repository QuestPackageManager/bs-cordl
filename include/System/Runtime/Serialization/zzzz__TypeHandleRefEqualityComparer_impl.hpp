#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TypeHandleRefEqualityComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__TypeHandleRefEqualityComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__TypeHandleRef_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRefEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::TypeHandleRefEqualityComparer::*)(
    ::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::TypeHandleRef*)>(&::System::Runtime::Serialization::TypeHandleRefEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f2edf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRefEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::TypeHandleRefEqualityComparer::*)(
    ::System::Runtime::Serialization::TypeHandleRef*)>(&::System::Runtime::Serialization::TypeHandleRefEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2ee18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::TypeHandleRefEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::TypeHandleRefEqualityComparer::*)()>(
    &::System::Runtime::Serialization::TypeHandleRefEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2b680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Runtime::Serialization::TypeHandleRefEqualityComparer::Equals(::System::Runtime::Serialization::TypeHandleRef* x, ::System::Runtime::Serialization::TypeHandleRef* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t System::Runtime::Serialization::TypeHandleRefEqualityComparer::GetHashCode(::System::Runtime::Serialization::TypeHandleRef* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::TypeHandleRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::TypeHandleRefEqualityComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::TypeHandleRefEqualityComparer* System::Runtime::Serialization::TypeHandleRefEqualityComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::TypeHandleRefEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>"
constexpr System::Runtime::Serialization::TypeHandleRefEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*
System::Runtime::Serialization::TypeHandleRefEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Runtime__Serialization__TypeHandleRef__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::TypeHandleRefEqualityComparer::TypeHandleRefEqualityComparer() {}
