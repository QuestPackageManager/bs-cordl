#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Alloc.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Alloc::Alloc(uint32_t  start, uint32_t  size, ::System::Object*  handle, bool  shortLived) noexcept  {
this->start = start;
this->size = size;
this->handle = handle;
this->shortLived = shortLived;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Alloc::Alloc()   {
}
