#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\FSharpFunction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__FSharpFunction_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::FSharpFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::FSharpFunction::*)(
    ::System::Object*, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*)>(&::Newtonsoft::Json::Utilities::FSharpFunction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d27a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::FSharpFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Utilities::FSharpFunction::*)(::ArrayW<::System::Object*>)>(
    &::Newtonsoft::Json::Utilities::FSharpFunction::Invoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d27a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(), { "Invoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
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
  this->____instance = value;
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
  this->____invoker = value;
}
inline void Newtonsoft::Json::Utilities::FSharpFunction::_ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, invoker);
}
inline ::System::Object* Newtonsoft::Json::Utilities::FSharpFunction::Invoke(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::FSharpFunction*>(), { "Invoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::Newtonsoft::Json::Utilities::FSharpFunction*
Newtonsoft::Json::Utilities::FSharpFunction::New_ctor(::System::Object* instance, ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* invoker) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::FSharpFunction*>(instance, invoker));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::FSharpFunction::FSharpFunction() {}
