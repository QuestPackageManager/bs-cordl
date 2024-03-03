#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystemInternal_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateDelegate", ty:
// "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateFunction", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "loopConditionFunction", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystemInternal::PlayerLoopSystemInternal(::System::Type* type, ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate,
                                                                                      void* updateFunction, void* loopConditionFunction, int32_t numSubSystems) noexcept {
  this->type = type;
  this->updateDelegate = updateDelegate;
  this->updateFunction = updateFunction;
  this->loopConditionFunction = loopConditionFunction;
  this->numSubSystems = numSubSystems;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevel::PlayerLoopSystemInternal::PlayerLoopSystemInternal() {}
