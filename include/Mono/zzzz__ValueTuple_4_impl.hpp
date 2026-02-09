#pragma once
// IWYU pragma private; include "Mono/ValueTuple_4.hpp"
#include "Mono/zzzz__ValueTuple_4_def.hpp"
// Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item3", ty: "T3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: Some("{}") }]
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::Mono::ValueTuple_4<T1,T2,T3,T4>::ValueTuple_4(T1  Item1, T2  Item2, T3  Item3, T4  Item4) noexcept  {
this->Item1 = Item1;
this->Item2 = Item2;
this->Item3 = Item3;
this->Item4 = Item4;
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::Mono::ValueTuple_4<T1,T2,T3,T4>::ValueTuple_4()   {
}
