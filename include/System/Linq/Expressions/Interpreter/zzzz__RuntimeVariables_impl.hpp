#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RuntimeVariables.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeVariables_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IRuntimeVariables_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeVariables._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::RuntimeVariables::*)(
    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>)>(&::System::Linq::Expressions::Interpreter::RuntimeVariables::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da0494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeVariables*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeVariables.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::CompilerServices::IRuntimeVariables* (*)(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>)>(
        &::System::Linq::Expressions::Interpreter::RuntimeVariables::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d97318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeVariables*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>&
System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_get__boxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxes;
}
constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> const&
System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_get__boxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxes;
}
constexpr void System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_set__boxes(
    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boxes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
System::Linq::Expressions::Interpreter::RuntimeVariables::_ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeVariables*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, boxes);
}
inline ::System::Runtime::CompilerServices::IRuntimeVariables*
System::Linq::Expressions::Interpreter::RuntimeVariables::Create(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::RuntimeVariables*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::IRuntimeVariables*, false>(nullptr, ___internal_method, boxes);
}
inline ::System::Linq::Expressions::Interpreter::RuntimeVariables*
System::Linq::Expressions::Interpreter::RuntimeVariables::New_ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> boxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(boxes));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IRuntimeVariables"
constexpr System::Linq::Expressions::Interpreter::RuntimeVariables::operator ::System::Runtime::CompilerServices::IRuntimeVariables*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IRuntimeVariables*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IRuntimeVariables"
constexpr ::System::Runtime::CompilerServices::IRuntimeVariables* System::Linq::Expressions::Interpreter::RuntimeVariables::i___System__Runtime__CompilerServices__IRuntimeVariables() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IRuntimeVariables*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RuntimeVariables::RuntimeVariables() {}
