#pragma once
// IWYU pragma private; include "System/Globalization/InternalCodePageDataItem.hpp"
#include "System/Globalization/zzzz__InternalCodePageDataItem_def.hpp"
// Ctor Parameters [CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uiFamilyCodePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Names", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::InternalCodePageDataItem::InternalCodePageDataItem(uint16_t  codePage, uint16_t  uiFamilyCodePage, uint32_t  flags, ::StringW  Names) noexcept  {
this->codePage = codePage;
this->uiFamilyCodePage = uiFamilyCodePage;
this->flags = flags;
this->Names = Names;
}
// Ctor Parameters []
constexpr ::System::Globalization::InternalCodePageDataItem::InternalCodePageDataItem()   {
}
