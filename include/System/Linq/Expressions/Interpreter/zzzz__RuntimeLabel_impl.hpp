#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\RuntimeLabel.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::RuntimeLabel::*)(int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::RuntimeLabel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8da6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeLabel>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeLabel.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::RuntimeLabel::*)()>(&::System::Linq::Expressions::Interpreter::RuntimeLabel::ToString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f8da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeLabel>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeLabel>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::RuntimeLabel::_ctor(int32_t index, int32_t continuationStackDepth, int32_t stackDepth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeLabel>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, continuationStackDepth, stackDepth);
}
inline ::StringW System::Linq::Expressions::Interpreter::RuntimeLabel::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeLabel>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ContinuationStackDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::RuntimeLabel::RuntimeLabel(int32_t Index, int32_t StackDepth, int32_t ContinuationStackDepth) noexcept {
  this->Index = Index;
  this->StackDepth = StackDepth;
  this->ContinuationStackDepth = ContinuationStackDepth;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RuntimeLabel::RuntimeLabel() {}
