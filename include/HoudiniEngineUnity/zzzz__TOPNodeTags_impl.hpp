#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/TOPNodeTags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::TOPNodeTags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::TOPNodeTags::*)()>(&::HoudiniEngineUnity::TOPNodeTags::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a50b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__cordl_internal_get__show() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____show;
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__cordl_internal_get__show() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____show;
}
constexpr void HoudiniEngineUnity::TOPNodeTags::__cordl_internal_set__show(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____show = value;
}
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__cordl_internal_get__autoload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoload;
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__cordl_internal_get__autoload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoload;
}
constexpr void HoudiniEngineUnity::TOPNodeTags::__cordl_internal_set__autoload(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoload = value;
}
inline void HoudiniEngineUnity::TOPNodeTags::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::TOPNodeTags* HoudiniEngineUnity::TOPNodeTags::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::TOPNodeTags*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::TOPNodeTags::TOPNodeTags() {}
