#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyFileVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyFileVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyFileVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyFileVersionAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyFileVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3d21d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyFileVersionAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void System::Reflection::AssemblyFileVersionAttribute::__cordl_internal_set__Version_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Version_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::AssemblyFileVersionAttribute::_ctor(::StringW version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyFileVersionAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version);
}
inline ::System::Reflection::AssemblyFileVersionAttribute* System::Reflection::AssemblyFileVersionAttribute::New_ctor(::StringW version) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyFileVersionAttribute*>(version));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyFileVersionAttribute::AssemblyFileVersionAttribute() {}
