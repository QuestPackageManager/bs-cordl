#pragma once
// IWYU pragma private; include "Mono/ValueTuple_3.hpp"
#include "Mono/zzzz__ValueTuple_3_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }]
template<typename T1,typename T2,typename T3>
constexpr ::Mono::ValueTuple_3<T1,T2,T3>::ValueTuple_3(T1  Item1, T2  Item2, T3  Item3) noexcept  {
this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3>
constexpr ::Mono::ValueTuple_3<T1,T2,T3>::ValueTuple_3()   {
}
