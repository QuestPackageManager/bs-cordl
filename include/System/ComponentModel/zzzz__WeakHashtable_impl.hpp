#pragma once
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::__WeakHashtable__WeakKeyComparer.System_Collections_IEqualityComparer_Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__WeakHashtable__WeakKeyComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::__WeakHashtable__WeakKeyComparer::System_Collections_IEqualityComparer_Equals)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x293a970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(),
                                                 "System.Collections.IEqualityComparer.Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__WeakHashtable__WeakKeyComparer.System_Collections_IEqualityComparer_GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::__WeakHashtable__WeakKeyComparer::*)(::System::Object*)>(
    &::System::ComponentModel::__WeakHashtable__WeakKeyComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x293aacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(), "System.Collections.IEqualityComparer.GetHashCode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__WeakHashtable__WeakKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__WeakHashtable__WeakKeyComparer::*)()>(
    &::System::ComponentModel::__WeakHashtable__WeakKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293a968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::ComponentModel::__WeakHashtable__WeakKeyComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::ComponentModel::__WeakHashtable__WeakKeyComparer::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
inline bool System::ComponentModel::__WeakHashtable__WeakKeyComparer::System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(),
                                                                             "System.Collections.IEqualityComparer.Equals", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t System::ComponentModel::__WeakHashtable__WeakKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(),
                                                                             "System.Collections.IEqualityComparer.GetHashCode", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::System::ComponentModel::__WeakHashtable__WeakKeyComparer* System::ComponentModel::__WeakHashtable__WeakKeyComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>());
}
inline void System::ComponentModel::__WeakHashtable__WeakKeyComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__WeakHashtable__WeakKeyComparer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__WeakHashtable__WeakKeyComparer::__WeakHashtable__WeakKeyComparer() {}
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::WeakHashtable::*)()>(&::System::ComponentModel::WeakHashtable::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x293a87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::WeakHashtable::*)()>(&::System::ComponentModel::WeakHashtable::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293a8e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::WeakHashtable::*)(::System::Object*)>(
    &::System::ComponentModel::WeakHashtable::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293a8e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), 39));
    return ___internal_method;
  }
};
inline void System::ComponentModel::WeakHashtable::setStaticF__comparer(::System::Collections::IEqualityComparer* value) {
  ::cordl_internals::setStaticField<::System::Collections::IEqualityComparer*, "_comparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get>(
      std::forward<::System::Collections::IEqualityComparer*>(value));
}
inline ::System::Collections::IEqualityComparer* System::ComponentModel::WeakHashtable::getStaticF__comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::IEqualityComparer*, "_comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get>();
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::WeakHashtable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::WeakHashtable*>());
}
inline void System::ComponentModel::WeakHashtable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::WeakHashtable::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::ComponentModel::WeakHashtable::Remove(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::WeakHashtable*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::WeakHashtable::WeakHashtable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
