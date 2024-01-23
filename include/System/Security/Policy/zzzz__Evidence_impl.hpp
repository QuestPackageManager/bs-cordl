#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)(
    ::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*)>(&::System::Security::Policy::__Evidence__EvidenceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2456798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(
    &::System::Security::Policy::__Evidence__EvidenceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24567c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(
    &::System::Security::Policy::__Evidence__EvidenceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24568f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::__Evidence__EvidenceEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::Policy::__Evidence__EvidenceEnumerator::*)()>(
    &::System::Security::Policy::__Evidence__EvidenceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2456a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Security::Policy::__Evidence__EvidenceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_currentEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEnum;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_currentEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentEnum;
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_set_currentEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentEnum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_hostEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEnum;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_hostEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEnum;
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_set_hostEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hostEnum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_assemblyEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEnum;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_get_assemblyEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEnum;
}
constexpr void System::Security::Policy::__Evidence__EvidenceEnumerator::__cordl_internal_set_assemblyEnum(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyEnum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Policy::__Evidence__EvidenceEnumerator* System::Security::Policy::__Evidence__EvidenceEnumerator::New_ctor(::System::Collections::IEnumerator* hostenum,
                                                                                                                                      ::System::Collections::IEnumerator* assemblyenum) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Policy::__Evidence__EvidenceEnumerator*>(hostenum, assemblyenum));
}
inline void System::Security::Policy::__Evidence__EvidenceEnumerator::_ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hostenum, assemblyenum);
}
inline bool System::Security::Policy::__Evidence__EvidenceEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::Policy::__Evidence__EvidenceEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::__Evidence__EvidenceEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::__Evidence__EvidenceEnumerator*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Policy::__Evidence__EvidenceEnumerator::__Evidence__EvidenceEnumerator() {}
//  Writing Method size for method: ::System::Security::Policy::Evidence._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24565b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_Count)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24565bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2456618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(),
                                                                               "get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.get_SyncRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::Policy::Evidence::*)()>(&::System::Security::Policy::Evidence::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2456620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "get_SyncRoot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Policy::Evidence::*)(::System::Array*, int32_t)>(
    &::System::Security::Policy::Evidence::CopyTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2456624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Policy::Evidence.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Security::Policy::Evidence::*)()>(
    &::System::Security::Policy::Evidence::GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24566e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Security::Policy::Evidence::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Security::Policy::Evidence::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Security::Policy::Evidence::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Security::Policy::Evidence::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr bool& System::Security::Policy::Evidence::__cordl_internal_get__locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr bool const& System::Security::Policy::Evidence::__cordl_internal_get__locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set__locked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locked = value;
}
constexpr ::System::Collections::ArrayList*& System::Security::Policy::Evidence::__cordl_internal_get_hostEvidenceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEvidenceList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Security::Policy::Evidence::__cordl_internal_get_hostEvidenceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostEvidenceList;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set_hostEvidenceList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hostEvidenceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Security::Policy::Evidence::__cordl_internal_get_assemblyEvidenceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEvidenceList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Security::Policy::Evidence::__cordl_internal_get_assemblyEvidenceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyEvidenceList;
}
constexpr void System::Security::Policy::Evidence::__cordl_internal_set_assemblyEvidenceList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyEvidenceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Policy::Evidence* System::Security::Policy::Evidence::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Policy::Evidence*>());
}
inline void System::Security::Policy::Evidence::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Security::Policy::Evidence::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Security::Policy::Evidence::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "get_IsSynchronized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* System::Security::Policy::Evidence::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "get_SyncRoot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Security::Policy::Evidence::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Security::Policy::Evidence::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Policy::Evidence*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Policy::Evidence::Evidence() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
