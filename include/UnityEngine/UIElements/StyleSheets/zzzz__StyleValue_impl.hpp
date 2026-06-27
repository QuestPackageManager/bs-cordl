#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleValue.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_id()  {
return this->___id;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_id() const {
return this->___id;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value)  {
this->___id = value;
}
constexpr ::UnityEngine::UIElements::StyleKeyword& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_keyword()  {
return this->___keyword;
}
constexpr ::UnityEngine::UIElements::StyleKeyword const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_keyword() const {
return this->___keyword;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_keyword(::UnityEngine::UIElements::StyleKeyword  value)  {
this->___keyword = value;
}
constexpr float_t& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_number()  {
return this->___number;
}
constexpr float_t const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_number() const {
return this->___number;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_number(float_t  value)  {
this->___number = value;
}
constexpr ::UnityEngine::UIElements::Length& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_length()  {
return this->___length;
}
constexpr ::UnityEngine::UIElements::Length const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_length() const {
return this->___length;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_length(::UnityEngine::UIElements::Length  value)  {
this->___length = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_color()  {
return this->___color;
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_color() const {
return this->___color;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_color(::UnityEngine::Color  value)  {
this->___color = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_resource()  {
return this->___resource;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_resource() const {
return this->___resource;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_resource(::System::Runtime::InteropServices::GCHandle  value)  {
this->___resource = value;
}
constexpr ::UnityEngine::UIElements::BackgroundPosition& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_position()  {
return this->___position;
}
constexpr ::UnityEngine::UIElements::BackgroundPosition const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_position() const {
return this->___position;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_position(::UnityEngine::UIElements::BackgroundPosition  value)  {
this->___position = value;
}
constexpr ::UnityEngine::UIElements::BackgroundRepeat& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_repeat()  {
return this->___repeat;
}
constexpr ::UnityEngine::UIElements::BackgroundRepeat const& UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_get_repeat() const {
return this->___repeat;
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValue::__cordl_internal_set_repeat(::UnityEngine::UIElements::BackgroundRepeat  value)  {
this->___repeat = value;
}
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "number", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "resource", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "repeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValue::StyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, float_t  number, ::UnityEngine::UIElements::Length  length, ::UnityEngine::Color  color, ::System::Runtime::InteropServices::GCHandle  resource, ::UnityEngine::UIElements::BackgroundPosition  position, ::UnityEngine::UIElements::BackgroundRepeat  repeat) noexcept  {
this->id = id;
this->keyword = keyword;
this->number = number;
this->length = length;
this->color = color;
this->resource = resource;
this->position = position;
this->repeat = repeat;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValue::StyleValue()   {
}
