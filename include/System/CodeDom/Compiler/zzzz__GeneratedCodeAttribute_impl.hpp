#pragma once
// IWYU pragma private; include "System/CodeDom/Compiler/GeneratedCodeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/CodeDom/Compiler/zzzz__GeneratedCodeAttribute_def.hpp"
//  Writing Method size for method: ::System::CodeDom::Compiler::GeneratedCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::CodeDom::Compiler::GeneratedCodeAttribute::*)(::StringW, ::StringW)>(
    &::System::CodeDom::Compiler::GeneratedCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43c831c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CodeDom::Compiler::GeneratedCodeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_tool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tool;
}
constexpr ::StringW const& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_tool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tool;
}
constexpr void System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_set_tool(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::CodeDom::Compiler::GeneratedCodeAttribute::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::CodeDom::Compiler::GeneratedCodeAttribute* System::CodeDom::Compiler::GeneratedCodeAttribute::New_ctor(::StringW tool, ::StringW version) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::CodeDom::Compiler::GeneratedCodeAttribute*>(tool, version));
}
inline void System::CodeDom::Compiler::GeneratedCodeAttribute::_ctor(::StringW tool, ::StringW version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CodeDom::Compiler::GeneratedCodeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tool, version);
}
// Ctor Parameters []
constexpr ::System::CodeDom::Compiler::GeneratedCodeAttribute::GeneratedCodeAttribute() {}
