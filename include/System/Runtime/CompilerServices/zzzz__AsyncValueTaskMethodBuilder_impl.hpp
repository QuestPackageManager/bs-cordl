#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult,
                                                                                                        bool _useBuilder) noexcept {
  this->_methodBuilder = _methodBuilder;
  this->_haveResult = _haveResult;
  this->_useBuilder = _useBuilder;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder::AsyncValueTaskMethodBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
