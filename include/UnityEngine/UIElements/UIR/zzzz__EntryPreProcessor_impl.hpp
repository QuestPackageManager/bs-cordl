#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\EntryPreProcessor.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_childrenIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd94e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_childrenIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_headAllocs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* (
    ::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_headAllocs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd94ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_headAllocs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_tailAllocs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* (
    ::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::get_tailAllocs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd94f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_tailAllocs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.get_flattenedEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::get_flattenedEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cd94fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_flattenedEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.PreProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::PreProcess)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6cd9504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "PreProcess", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.ClearReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::ClearReferences)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cd9a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "ClearReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.DoEvaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(::UnityEngine::UIElements::UIR::Entry*)>(
    &::UnityEngine::UIElements::UIR::EntryPreProcessor::DoEvaluate)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6cd96d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "DoEvaluate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::Add)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6cd9b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "Add", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::Flush)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cd9c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::EntryPreProcessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::EntryPreProcessor::*)()>(&::UnityEngine::UIElements::UIR::EntryPreProcessor::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6cd9d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { ".ctor", {}, {} })));
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
  this->___m_Allocs = value;
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
  this->___m_HeadAllocs = value;
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
  this->___m_TailAllocs = value;
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
  this->___m_FlattenedEntries = value;
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
  this->___m_Mask = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_childrenIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_headAllocs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_headAllocs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_tailAllocs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_tailAllocs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* UnityEngine::UIElements::UIR::EntryPreProcessor::get_flattenedEntries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "get_flattenedEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::PreProcess(::UnityEngine::UIElements::UIR::Entry* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "PreProcess", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::ClearReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "ClearReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::DoEvaluate(::UnityEngine::UIElements::UIR::Entry* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "DoEvaluate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Entry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::Add(int32_t vertexCount, int32_t indexCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "Add", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexCount, indexCount);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::EntryPreProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::EntryPreProcessor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryPreProcessor* UnityEngine::UIElements::UIR::EntryPreProcessor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::EntryPreProcessor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor::EntryPreProcessor() {}
