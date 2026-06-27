#pragma once
// IWYU pragma private; include "System/Threading/Timeout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Threading/zzzz__Timeout_def.hpp"
inline void System::Threading::Timeout::setStaticF_InfiniteTimeSpan(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "InfiniteTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timeout*>::get>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::Threading::Timeout::getStaticF_InfiniteTimeSpan()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "InfiniteTimeSpan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Timeout*>::get>();
}
// Ctor Parameters []
constexpr ::System::Threading::Timeout::Timeout()   {
}
