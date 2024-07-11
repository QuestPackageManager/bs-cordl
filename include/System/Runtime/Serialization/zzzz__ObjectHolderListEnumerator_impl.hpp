#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolderListEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderListEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)(
    ::System::Runtime::Serialization::ObjectHolderList*, bool)>(&::System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x286aaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolderList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(
    &::System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28699dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolderListEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectHolder* (::System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(
    &::System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2869984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_isFixupEnumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isFixupEnumerator;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_isFixupEnumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isFixupEnumerator;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_isFixupEnumerator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isFixupEnumerator = value;
}
constexpr ::System::Runtime::Serialization::ObjectHolderList*& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolderList*> const&
System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_list;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_list(::System::Runtime::Serialization::ObjectHolderList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_startingVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_startingVersion;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_startingVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_startingVersion;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_startingVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_startingVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_currPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currPos;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_get_m_currPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currPos;
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__cordl_internal_set_m_currPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currPos = value;
}
inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* System::Runtime::Serialization::ObjectHolderListEnumerator::New_ctor(::System::Runtime::Serialization::ObjectHolderList* list,
                                                                                                                                          bool isFixupEnumerator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ObjectHolderListEnumerator*>(list, isFixupEnumerator));
}
inline void System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor(::System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectHolderList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, isFixupEnumerator);
}
inline bool System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ObjectHolderListEnumerator*>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectHolder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectHolderListEnumerator::ObjectHolderListEnumerator() {}
