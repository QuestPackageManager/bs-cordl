#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedTypeRestrictionAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4f6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute* UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>());
}
inline void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::SerializedTypeRestrictionAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
