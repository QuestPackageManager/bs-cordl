#pragma once
// IWYU pragma private; include "System/Data/InternalDataCollectionBase.hpp"
#include "System/Collections/zzzz__ICollection_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4161fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::InternalDataCollectionBase::*)(::System::Array*, int32_t)>(
    &::System::Data::InternalDataCollectionBase::CopyTo)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4161ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Data::InternalDataCollectionBase::*)()>(
    &::System::Data::InternalDataCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4162044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::InternalDataCollectionBase::*)()>(
    &::System::Data::InternalDataCollectionBase::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4162070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                               "get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.NamesEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Data::InternalDataCollectionBase::*)(::StringW, ::StringW, bool, ::System::Globalization::CultureInfo*)>(&::System::Data::InternalDataCollectionBase::NamesEqual)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4162078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), "NamesEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::InternalDataCollectionBase::*)()>(
    &::System::Data::InternalDataCollectionBase::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4162124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                               "get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_List
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Data::InternalDataCollectionBase::*)()>(
    &::System::Data::InternalDataCollectionBase::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4162128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4162130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Data::InternalDataCollectionBase::setStaticF_s_refreshEventArgs(::System::ComponentModel::CollectionChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::CollectionChangeEventArgs*, "s_refreshEventArgs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get>(
      std::forward<::System::ComponentModel::CollectionChangeEventArgs*>(value));
}
inline ::System::ComponentModel::CollectionChangeEventArgs* System::Data::InternalDataCollectionBase::getStaticF_s_refreshEventArgs() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::CollectionChangeEventArgs*, "s_refreshEventArgs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get>();
}
inline int32_t System::Data::InternalDataCollectionBase::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Data::InternalDataCollectionBase::CopyTo(::System::Array* ar, int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar, index);
}
inline ::System::Collections::IEnumerator* System::Data::InternalDataCollectionBase::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool System::Data::InternalDataCollectionBase::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(),
                                                                             "get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Data::InternalDataCollectionBase::NamesEqual(::StringW s1, ::StringW s2, bool fCaseSensitive, ::System::Globalization::CultureInfo* locale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), "NamesEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s1, s2, fCaseSensitive, locale);
}
inline ::System::Object* System::Data::InternalDataCollectionBase::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), "get_SyncRoot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Data::InternalDataCollectionBase::get_List() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline void System::Data::InternalDataCollectionBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::InternalDataCollectionBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Data::InternalDataCollectionBase* System::Data::InternalDataCollectionBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::InternalDataCollectionBase*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Data::InternalDataCollectionBase::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::InternalDataCollectionBase::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Data::InternalDataCollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::InternalDataCollectionBase::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::InternalDataCollectionBase::InternalDataCollectionBase() {}
