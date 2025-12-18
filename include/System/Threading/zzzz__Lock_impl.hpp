#pragma once
// IWYU pragma private; include "System/Threading/Lock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Lock.Acquire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::Acquire)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afd584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), "Acquire",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Lock.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afd5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Lock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Lock::*)()>(&::System::Threading::Lock::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5afd5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Threading::Lock::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& System::Threading::Lock::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void System::Threading::Lock::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::Lock::Acquire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), "Acquire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Lock::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Lock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Lock*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Lock* System::Threading::Lock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Lock*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Lock::Lock() {}
