#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InterpretedFrameInfo.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrameInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::*)(
    ::StringW, ::System::Linq::Expressions::Interpreter::DebugInfo*)>(&::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40d4bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::DebugInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40d84e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>::get(), 3));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::InterpretedFrameInfo::_ctor(::StringW methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::DebugInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodName, info);
}
inline ::StringW System::Linq::Expressions::Interpreter::InterpretedFrameInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_methodName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_debugInfo", ty: "::System::Linq::Expressions::Interpreter::DebugInfo*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::InterpretedFrameInfo(::StringW _methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo) noexcept {
  this->_methodName = _methodName;
  this->_debugInfo = _debugInfo;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::InterpretedFrameInfo() {}
