#pragma once
// IWYU pragma private; include "System/Numerics/DoubleUlong.hpp"
#include "System/Numerics/zzzz__DoubleUlong_def.hpp"
constexpr double_t& System::Numerics::DoubleUlong::__cordl_internal_get_dbl()  {
return this->___dbl;
}
constexpr double_t const& System::Numerics::DoubleUlong::__cordl_internal_get_dbl() const {
return this->___dbl;
}
constexpr void System::Numerics::DoubleUlong::__cordl_internal_set_dbl(double_t  value)  {
this->___dbl = value;
}
constexpr uint64_t& System::Numerics::DoubleUlong::__cordl_internal_get_uu()  {
return this->___uu;
}
constexpr uint64_t const& System::Numerics::DoubleUlong::__cordl_internal_get_uu() const {
return this->___uu;
}
constexpr void System::Numerics::DoubleUlong::__cordl_internal_set_uu(uint64_t  value)  {
this->___uu = value;
}
// Ctor Parameters [CppParam { name: "dbl", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uu", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::DoubleUlong::DoubleUlong(double_t  dbl, uint64_t  uu) noexcept  {
this->dbl = dbl;
this->uu = uu;
}
// Ctor Parameters []
constexpr ::System::Numerics::DoubleUlong::DoubleUlong()   {
}
