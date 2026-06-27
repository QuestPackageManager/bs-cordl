#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleValueManaged.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValueManaged::StyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, ::System::Object*  value) noexcept  {
this->id = id;
this->keyword = keyword;
this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValueManaged::StyleValueManaged()   {
}
