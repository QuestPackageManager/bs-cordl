#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constant", ty: "void*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "input", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "output", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "workspace", ty:
// "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputStreamAccessor", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "animationHandleBinder", ty: "void*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream(uint32_t m_AnimatorBindingsVersion, void* constant, void* input, void* output, void* workspace, void* inputStreamAccessor,
                                                                      void* animationHandleBinder) noexcept {
  this->m_AnimatorBindingsVersion = m_AnimatorBindingsVersion;
  this->constant = constant;
  this->input = input;
  this->output = output;
  this->workspace = workspace;
  this->inputStreamAccessor = inputStreamAccessor;
  this->animationHandleBinder = animationHandleBinder;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream() {}
