#pragma once
// IWYU pragma private; include "Mono/Runtime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__Runtime_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline void Mono::Runtime::setStaticF_dump(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "dump", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Mono::Runtime::getStaticF_dump()  {
return ::cordl_internals::getStaticField<::System::Object*, "dump", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Runtime*>::get>();
}
// Ctor Parameters []
constexpr ::Mono::Runtime::Runtime()   {
}
