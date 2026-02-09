#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationStream.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationStream_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constant", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "input", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "output", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "workspace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputStreamAccessor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "animationHandleBinder", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream(uint32_t  m_AnimatorBindingsVersion, ::System::IntPtr  constant, ::System::IntPtr  input, ::System::IntPtr  output, ::System::IntPtr  workspace, ::System::IntPtr  inputStreamAccessor, ::System::IntPtr  animationHandleBinder) noexcept  {
this->m_AnimatorBindingsVersion = m_AnimatorBindingsVersion;
this->constant = constant;
this->input = input;
this->output = output;
this->workspace = workspace;
this->inputStreamAccessor = inputStreamAccessor;
this->animationHandleBinder = animationHandleBinder;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationStream::AnimationStream()   {
}
