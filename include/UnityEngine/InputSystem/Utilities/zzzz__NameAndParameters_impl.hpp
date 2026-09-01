#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\NameAndParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NameAndParameters___c::*)()>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6505bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters___c._ToString_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::NameAndParameters___c::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters___c::_ToString_b__8_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6505bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(),
                                                                                           { "<ToString>b__8_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::NameAndParameters___c::setStaticF___9(::UnityEngine::InputSystem::Utilities::NameAndParameters___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*, "<>9", ::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(
      std::forward<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters___c* UnityEngine::InputSystem::Utilities::NameAndParameters___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*, "<>9", ::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>();
}
inline void UnityEngine::InputSystem::Utilities::NameAndParameters___c::setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__8_0", ::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* UnityEngine::InputSystem::Utilities::NameAndParameters___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>*, "<>9__8_0",
                                           ::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>();
}
inline void UnityEngine::InputSystem::Utilities::NameAndParameters___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::NameAndParameters___c::_ToString_b__8_0(::UnityEngine::InputSystem::Utilities::NamedValue x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>(),
                                                                                         { "<ToString>b__8_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters___c* UnityEngine::InputSystem::Utilities::NameAndParameters___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::NameAndParameters___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::NameAndParameters___c::NameAndParameters___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::NameAndParameters::*)()>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65050bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NameAndParameters::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65050c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> (
    ::UnityEngine::InputSystem::Utilities::NameAndParameters::*)()>(&::UnityEngine::InputSystem::Utilities::NameAndParameters::get_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65050cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.set_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NameAndParameters::*)(
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>)>(&::UnityEngine::InputSystem::Utilities::NameAndParameters::set_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65050d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
                                         { "set_parameters", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::NameAndParameters::*)()>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::ToString)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x65050e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.ParseMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* (*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::ParseMultiple)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x65052fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "ParseMultiple", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.ParseMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>)>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::ParseMultiple)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x65053b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
            { "ParseMultiple", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.ParseName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::NameAndParameters::ParseName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65058e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "ParseName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::NameAndParameters (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::NameAndParameters::Parse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6505958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NameAndParameters.ParseNameAndParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::NameAndParameters (*)(::StringW, ::by_ref<int32_t>, bool)>(
    &::UnityEngine::InputSystem::Utilities::NameAndParameters::ParseNameAndParameters)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6505580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
                                                             { "ParseNameAndParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Utilities::NameAndParameters::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::NameAndParameters::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> UnityEngine::InputSystem::Utilities::NameAndParameters::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::NameAndParameters::set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
                                       { "set_parameters", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Utilities::NameAndParameters::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* UnityEngine::InputSystem::Utilities::NameAndParameters::ParseMultiple(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "ParseMultiple", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>(nullptr, ___internal_method, text);
}
inline bool UnityEngine::InputSystem::Utilities::NameAndParameters::ParseMultiple(::StringW text,
                                                                                  ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
          { "ParseMultiple", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, list);
}
inline ::StringW UnityEngine::InputSystem::Utilities::NameAndParameters::ParseName(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "ParseName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters UnityEngine::InputSystem::Utilities::NameAndParameters::Parse(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NameAndParameters>(nullptr, ___internal_method, text);
}
inline ::UnityEngine::InputSystem::Utilities::NameAndParameters UnityEngine::InputSystem::Utilities::NameAndParameters::ParseNameAndParameters(::StringW text, ::by_ref<int32_t> index, bool nameOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>(),
                                                           { "ParseNameAndParameters", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NameAndParameters>(nullptr, ___internal_method, text, index, nameOnly);
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_parameters_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::NameAndParameters::NameAndParameters(
    ::StringW _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
  this->_parameters_k__BackingField = _parameters_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::NameAndParameters::NameAndParameters() {}
