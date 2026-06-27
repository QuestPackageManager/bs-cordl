#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/PaddedHeadAndTail.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
constexpr int32_t& System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_get_Head()  {
return this->___Head;
}
constexpr int32_t const& System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_get_Head() const {
return this->___Head;
}
constexpr void System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_set_Head(int32_t  value)  {
this->___Head = value;
}
constexpr int32_t& System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_get_Tail()  {
return this->___Tail;
}
constexpr int32_t const& System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_get_Tail() const {
return this->___Tail;
}
constexpr void System::Collections::Concurrent::PaddedHeadAndTail::__cordl_internal_set_Tail(int32_t  value)  {
this->___Tail = value;
}
// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Concurrent::PaddedHeadAndTail::PaddedHeadAndTail(int32_t  Head, int32_t  Tail) noexcept  {
this->Head = Head;
this->Tail = Tail;
}
// Ctor Parameters []
constexpr ::System::Collections::Concurrent::PaddedHeadAndTail::PaddedHeadAndTail()   {
}
