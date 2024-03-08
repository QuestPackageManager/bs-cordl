#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FixupHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::FixupHolder::*)(int64_t, ::System::Object*, int32_t)>(
    &::System::Runtime::Serialization::FixupHolder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26116c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr int64_t const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_id(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_id = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupInfo;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_fixupInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fixupInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupType;
}
constexpr int32_t const& System::Runtime::Serialization::FixupHolder::__cordl_internal_get_m_fixupType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fixupType;
}
constexpr void System::Runtime::Serialization::FixupHolder::__cordl_internal_set_m_fixupType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fixupType = value;
}
inline ::System::Runtime::Serialization::FixupHolder* System::Runtime::Serialization::FixupHolder::New_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::FixupHolder*>(id, fixupInfo, fixupType));
}
inline void System::Runtime::Serialization::FixupHolder::_ctor(int64_t id, ::System::Object* fixupInfo, int32_t fixupType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FixupHolder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, fixupInfo, fixupType);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FixupHolder::FixupHolder() {}
