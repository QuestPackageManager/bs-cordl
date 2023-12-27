#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Leaderboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Leaderboard::*)(void*)>(&::Oculus::Platform::Models::Leaderboard::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2705434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Leaderboard*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Leaderboard::__get_ApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::Leaderboard::__get_ApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ApiName;
}
constexpr void Oculus::Platform::Models::Leaderboard::__set_ApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::Leaderboard::__get_DestinationOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& Oculus::Platform::Models::Leaderboard::__get_DestinationOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationOptional;
}
constexpr void Oculus::Platform::Models::Leaderboard::__set_DestinationOptional(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::Leaderboard::__get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Destination;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& Oculus::Platform::Models::Leaderboard::__get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Destination;
}
constexpr void Oculus::Platform::Models::Leaderboard::__set_Destination(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::Leaderboard::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::Leaderboard::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Leaderboard::__set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cordl_ID = value;
}
inline ::Oculus::Platform::Models::Leaderboard* Oculus::Platform::Models::Leaderboard::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Leaderboard*>(o));
}
inline void Oculus::Platform::Models::Leaderboard::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Leaderboard*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Leaderboard::Leaderboard() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
