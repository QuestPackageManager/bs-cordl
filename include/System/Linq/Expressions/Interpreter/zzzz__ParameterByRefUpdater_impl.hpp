#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ParameterByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ParameterByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::LocalVariable*, int32_t)>(&::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x40e57d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x40e5800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable*& System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_get__parameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable* const& System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_get__parameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_set__parameter(::System::Linq::Expressions::Interpreter::LocalVariable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame, value);
}
inline ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*
System::Linq::Expressions::Interpreter::ParameterByRefUpdater::New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(parameter, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::ParameterByRefUpdater() {}
