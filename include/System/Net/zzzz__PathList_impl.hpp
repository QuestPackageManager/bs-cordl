#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__PathList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Net/zzzz__PathList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::__PathList__PathListComparer.System_Collections_IComparer_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__PathList__PathListComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Net::__PathList__PathListComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2a9ee98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get(),
                                                                               "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__PathList__PathListComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__PathList__PathListComparer::*)()>(&::System::Net::__PathList__PathListComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a9f000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::Net::__PathList__PathListComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Net::__PathList__PathListComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline void System::Net::__PathList__PathListComparer::setStaticF_StaticInstance(::System::Net::__PathList__PathListComparer* value) {
  ::cordl_internals::setStaticField<::System::Net::__PathList__PathListComparer*, "StaticInstance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get>(
      std::forward<::System::Net::__PathList__PathListComparer*>(value));
}
inline ::System::Net::__PathList__PathListComparer* System::Net::__PathList__PathListComparer::getStaticF_StaticInstance() {
  return ::cordl_internals::getStaticField<::System::Net::__PathList__PathListComparer*, "StaticInstance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get>();
}
inline int32_t System::Net::__PathList__PathListComparer::System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get(),
                                                                             "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ol, _cordl_or);
}
inline ::System::Net::__PathList__PathListComparer* System::Net::__PathList__PathListComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__PathList__PathListComparer*>());
}
inline void System::Net::__PathList__PathListComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__PathList__PathListComparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__PathList__PathListComparer::__PathList__PathListComparer() {}
//  Writing Method size for method: ::System::Net::PathList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::PathList::*)()>(&::System::Net::PathList::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a9b3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::PathList::*)()>(&::System::Net::PathList::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9d0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.GetCookiesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::PathList::*)()>(&::System::Net::PathList::GetCookiesCount)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2a9b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "GetCookiesCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Net::PathList::*)()>(&::System::Net::PathList::get_Values)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9cf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::PathList::*)(::StringW)>(&::System::Net::PathList::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9b900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::PathList::*)(::StringW, ::System::Object*)>(&::System::Net::PathList::set_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a9b924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Net::PathList::*)()>(&::System::Net::PathList::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::PathList.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::PathList::*)()>(&::System::Net::PathList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9b8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_SyncRoot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::SortedList*& System::Net::PathList::__cordl_internal_get_m_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& System::Net::PathList::__cordl_internal_get_m_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr void System::Net::PathList::__cordl_internal_set_m_list(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::PathList* System::Net::PathList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::PathList*>());
}
inline void System::Net::PathList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Net::PathList::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::PathList::GetCookiesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "GetCookiesCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Net::PathList::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::PathList::get_Item(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s);
}
inline void System::Net::PathList::set_Item(::StringW s, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, value);
}
inline ::System::Collections::IEnumerator* System::Net::PathList::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Object* System::Net::PathList::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::PathList*>::get(), "get_SyncRoot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::PathList::PathList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
