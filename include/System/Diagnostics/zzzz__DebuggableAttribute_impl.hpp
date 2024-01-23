#pragma once
#include "System/Diagnostics/zzzz__DebuggableAttribute_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggableAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes::__DebuggableAttribute__DebuggingModes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes::__DebuggableAttribute__DebuggingModes() {}
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes System::Diagnostics::__DebuggableAttribute__DebuggingModes::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes System::Diagnostics::__DebuggableAttribute__DebuggingModes::Default{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes System::Diagnostics::__DebuggableAttribute__DebuggingModes::DisableOptimizations{ static_cast<int32_t>(0x100) };
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes System::Diagnostics::__DebuggableAttribute__DebuggingModes::IgnoreSymbolStoreSequencePoints{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes System::Diagnostics::__DebuggableAttribute__DebuggingModes::EnableEditAndContinue{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Diagnostics::DebuggableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggableAttribute::*)(::System::Diagnostics::__DebuggableAttribute__DebuggingModes)>(
    &::System::Diagnostics::DebuggableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2579c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggableAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__DebuggableAttribute__DebuggingModes>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes& System::Diagnostics::DebuggableAttribute::__cordl_internal_get_m_debuggingModes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debuggingModes;
}
constexpr ::System::Diagnostics::__DebuggableAttribute__DebuggingModes const& System::Diagnostics::DebuggableAttribute::__cordl_internal_get_m_debuggingModes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debuggingModes;
}
constexpr void System::Diagnostics::DebuggableAttribute::__cordl_internal_set_m_debuggingModes(::System::Diagnostics::__DebuggableAttribute__DebuggingModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_debuggingModes = value;
}
inline ::System::Diagnostics::DebuggableAttribute* System::Diagnostics::DebuggableAttribute::New_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes modes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::DebuggableAttribute*>(modes));
}
inline void System::Diagnostics::DebuggableAttribute::_ctor(::System::Diagnostics::__DebuggableAttribute__DebuggingModes modes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggableAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__DebuggableAttribute__DebuggingModes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modes);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggableAttribute::DebuggableAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
