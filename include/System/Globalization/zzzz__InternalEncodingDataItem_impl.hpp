#pragma once
// IWYU pragma private; include "System/Globalization/InternalEncodingDataItem.hpp"
#include "System/Globalization/zzzz__InternalEncodingDataItem_def.hpp"
// Ctor Parameters [CppParam { name: "webName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::InternalEncodingDataItem::InternalEncodingDataItem(::StringW  webName, uint16_t  codePage) noexcept  {
this->webName = webName;
this->codePage = codePage;
}
// Ctor Parameters []
constexpr ::System::Globalization::InternalEncodingDataItem::InternalEncodingDataItem()   {
}
