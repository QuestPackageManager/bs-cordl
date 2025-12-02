#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryPreProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPreProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPreProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Entry_def.hpp"
// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize::EntryPreProcessor_AllocSize(int32_t vertexCount, int32_t indexCount) noexcept {
  this->vertexCount = vertexCount;
  this->indexCount = indexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize::EntryPreProcessor_AllocSize() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_childrenIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::get_childrenIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aa4da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "get_childrenIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_headAllocs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* (
    ::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_headAllocs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aa4da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "get_headAllocs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_tailAllocs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* (
    ::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_tailAllocs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aa4db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "get_tailAllocs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_flattenedEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* (
    ::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_flattenedEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6aa4db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "get_flattenedEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.PreProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::PreProcess)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6aa4dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "PreProcess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Entry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.ClearReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::ClearReferences)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6aa5344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "ClearReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.DoEvaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::DoEvaluate)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6aa4f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "DoEvaluate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Entry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::Add)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6aa53bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::Flush)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6aa5524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               "Flush", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6aa55d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_ChildrenIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_ChildrenIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenIndex;
}
constexpr void UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_ChildrenIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildrenIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Allocs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const&
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Allocs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocs;
}
constexpr void
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_Allocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Allocs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_HeadAllocs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeadAllocs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const&
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_HeadAllocs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HeadAllocs;
}
constexpr void
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_HeadAllocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HeadAllocs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_TailAllocs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TailAllocs;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const&
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_TailAllocs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TailAllocs;
}
constexpr void
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_TailAllocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TailAllocs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>*& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_FlattenedEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedEntries;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* const& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_FlattenedEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FlattenedEntries;
}
constexpr void UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_FlattenedEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FlattenedEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Pending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pending;
}
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize const& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Pending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pending;
}
constexpr void UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_Pending(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pending = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mask;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const&
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_Mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mask;
}
constexpr void
UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_Mask(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_IsPushingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPushingMask;
}
constexpr bool const& UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_get_m_IsPushingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPushingMask;
}
constexpr void UnityEngine::UIElements::UIR::EntryPreProcessor::__cordl_internal_set_m_IsPushingMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsPushingMask = value;
}
inline int32_t UnityEngine::UIElements::UIR::EntryPreProcessor::get_childrenIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                             "get_childrenIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_headAllocs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                             "get_headAllocs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_tailAllocs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                             "get_tailAllocs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_flattenedEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                             "get_flattenedEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::PreProcess(::UnityEngine::UIElements::UIR::Entry* root) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "PreProcess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Entry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::ClearReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(),
                                                                             "ClearReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::DoEvaluate(::UnityEngine::UIElements::UIR::Entry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "DoEvaluate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Entry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::Add(int32_t vertexCount, int32_t indexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertexCount, indexCount);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::EntryPreProcessor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryPreProcessor* UnityEngine::UIElements::UIR::EntryPreProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::EntryPreProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor::EntryPreProcessor() {}
