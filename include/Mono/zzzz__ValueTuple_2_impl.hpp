#pragma once
// IWYU pragma private; include "Mono/ValueTuple_2.hpp"
#include "Mono/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }]
template<typename T1,typename T2>
constexpr ::Mono::ValueTuple_2<T1,T2>::ValueTuple_2(T1  Item1, T2  Item2) noexcept  {
this->Item1 = Item1;
this->Item2 = Item2;
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Mono::ValueTuple_2<T1,T2>::ValueTuple_2()   {
}
