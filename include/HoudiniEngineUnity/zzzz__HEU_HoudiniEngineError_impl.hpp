#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniEngineError_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x256e29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x256e318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(
    &::HoudiniEngineUnity::HEU_HoudiniEngineError::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x256e3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniEngineError::__cordl_internal_get__errorMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorMsg;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniEngineError::__cordl_internal_get__errorMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorMsg;
}
constexpr void HoudiniEngineUnity::HEU_HoudiniEngineError::__cordl_internal_set__errorMsg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorMsg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniEngineError*>());
}
inline void HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor(::StringW errorMsg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_HoudiniEngineError*>(errorMsg));
}
inline void HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor(::StringW errorMsg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMsg);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniEngineError::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_HoudiniEngineError::HEU_HoudiniEngineError() {}
