#pragma once
#include "System/Xml/Schema/zzzz__RangePositionInfo_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
// Ctor Parameters [CppParam { name: "curpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rangeCounters", ty:
// "::ArrayW<::System::Decimal,::Array<::System::Decimal>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Schema::RangePositionInfo::RangePositionInfo(::System::Xml::Schema::BitSet* curpos, ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> rangeCounters) noexcept {
  this->curpos = curpos;
  this->rangeCounters = rangeCounters;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RangePositionInfo::RangePositionInfo() {}
