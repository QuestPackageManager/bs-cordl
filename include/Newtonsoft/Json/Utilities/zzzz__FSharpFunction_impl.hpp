#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/FSharpFunction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__FSharpFunction_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::FSharpFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::FSharpFunction::*)(
    ::System::Object*, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*)>(&::Newtonsoft::Json::Utilities::FSharpFunction::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ecb5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::FSharpFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::FSharpFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Newtonsoft::Json::Utilities::FSharpFunction::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Newtonsoft::Json::Utilities::FSharpFunction::Invoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3ecb5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::FSharpFunction*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::System::Object* const& Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_set__instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_get__invoker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invoker;
}
constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_get__invoker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invoker;
}
constexpr void Newtonsoft::Json::Utilities::FSharpFunction::__cordl_internal_set__invoker(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____invoker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Utilities::FSharpFunction::_ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::FSharpFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, invoker);
}
inline ::System::Object* Newtonsoft::Json::Utilities::FSharpFunction::Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::FSharpFunction*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, args);
}
inline ::Newtonsoft::Json::Utilities::FSharpFunction*
Newtonsoft::Json::Utilities::FSharpFunction::New_ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Utilities::FSharpFunction*>(instance, invoker));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction::FSharpFunction() {}
