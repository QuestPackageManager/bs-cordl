#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\InterpretedFrameInfo.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrameInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::*)(::StringW, ::System::Linq::Expressions::Interpreter::DebugInfo*)>(
    &::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9e850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::*)()>(
    &::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fa15a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::InterpretedFrameInfo::_ctor(::StringW methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, methodName, info);
}
inline ::StringW System::Linq::Expressions::Interpreter::InterpretedFrameInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_methodName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_debugInfo", ty: "::System::Linq::Expressions::Interpreter::DebugInfo*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::InterpretedFrameInfo(::StringW _methodName, ::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo) noexcept {
  this->_methodName = _methodName;
  this->_debugInfo = _debugInfo;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo::InterpretedFrameInfo() {}
