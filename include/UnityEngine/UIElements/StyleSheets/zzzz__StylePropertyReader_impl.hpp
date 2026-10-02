#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyReader.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ImageSource_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleEnumType_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPositionKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRatio_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextAutoSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x71c7fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x71c8108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::Invoke(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sheet, handle);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*
UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::StylePropertyReader_GetCursorIdFunction() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_m_CurrentValueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_m_CurrentValueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_m_CurrentValueIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_m_CurrentValueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_m_CurrentValueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_m_CurrentValueIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleProperty* (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_property", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(::UnityEngine::UIElements::StyleProperty*)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "set_property", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_propertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_propertyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_propertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "set_propertyId", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_valueCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_valueCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_valueCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_valueCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_valueCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_valueCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_dpiScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_dpiScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_dpiScaling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_dpiScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(float_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_dpiScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71c2f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_dpiScaling", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleComplexSelector*, ::UnityEngine::UIElements::StyleVariableContext*, float_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetContext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x71c2f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "SetContext",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetInlineContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleProperty*>, float_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetInlineContext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x71c3314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                            { "SetInlineContext",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleProperty*>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.MoveNextProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::MoveNextProperty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x71c3320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "MoveNextProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyValue (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x71c33f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.GetValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleValueType (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValueType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x71c3458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "GetValueType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t, ::UnityEngine::UIElements::StyleValueType)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsValueType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x71c34c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "IsValueType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.IsKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t, ::UnityEngine::UIElements::StyleValueKeyword)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsKeyword)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x71c3540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "IsKeyword", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x71c35c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadAsString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadLength)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x71c3970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TimeValue (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTimeValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x71c3a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTimeValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Translate (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x71c3ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTranslate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransformOrigin (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x71c3e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTransformOrigin", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Rotate (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x71c4080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadRotate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scale (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x71c43c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadScale", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFloat)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x71c4644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFloat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x71c46b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadColor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x71c4748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadColor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x71c47bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x71c48a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadAsset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFontDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FontDefinition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFontDefinition)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x71c49f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFontDefinition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFont)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x71c4f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFont", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadMaterialDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MaterialDefinition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadMaterialDefinition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x71c52e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadMaterialDefinition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackground)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x71c532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackground", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Cursor (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x71c5fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadCursor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextShadow (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x71c62c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTextShadow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextAutoSize (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextAutoSize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x71c6720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTextAutoSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPositionX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionX)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x71c69a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundPositionX", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPositionY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x71c6a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundPositionY", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t, ::UnityEngine::UIElements::BackgroundPositionKeyword)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x71c69bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "ReadBackgroundPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPositionKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x71c6b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundRepeat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundSize (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x71c6d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListEasingFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListEasingFunction)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x71c701c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                            { "ReadListEasingFunction", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListTimeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListTimeValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x71c71c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                         { "ReadListTimeValue", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListFilterFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListFilterFunction)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x71c7328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                            { "ReadListFilterFunction", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListStylePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListStylePropertyName)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x71c77bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                         { "ReadListStylePropertyName", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRatio (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRatio)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x71c7974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadRatio", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.LoadProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::LoadProperties)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x71c2f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "LoadProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetCurrentProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetCurrentProperty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x71c3350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "SetCurrentProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransformOrigin (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x71c3f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadTransformOrigin",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOriginEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::by_ref<bool>, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOriginEnum)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x71c7b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
            { "ReadTransformOriginEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Translate (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x71c3bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadTranslate",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scale (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x71c44cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadScale",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Rotate (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue,
    ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x71c4208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                         { "ReadRotate",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.TryReadEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryReadEnum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x71c7e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "TryReadEnum",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x71c7cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
            { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Angle (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAngle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x71c7d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::BackgroundPositionKeyword)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x71c6aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadBackgroundPosition",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::BackgroundPositionKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::BackgroundRepeat (*)(int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x71c6c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadBackgroundRepeat",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::BackgroundSize (*)(int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x71c6e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadBackgroundSize",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextShadow (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue,
    ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x71c6458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                         { "ReadTextShadow",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextAutoSize (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextAutoSize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x71c6858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "ReadTextAutoSize",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::Cursor (*)(int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue,
                                                      ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, float_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x71c6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                             { "ReadCursor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.TryGetImageSourceFromValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, float_t, ::by_ref<::UnityEngine::UIElements::StyleSheets::ImageSource>)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryGetImageSourceFromValue)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x71c559c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                           { "TryGetImageSourceFromValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::ImageSource>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x71c7ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_ValueCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueCount;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_ValueCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueCount;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_ValueCount(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueCount = value;
}
constexpr ::UnityEngine::UIElements::StyleVariableResolver*& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resolver;
}
constexpr ::UnityEngine::UIElements::StyleVariableResolver* const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resolver;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_Resolver(::UnityEngine::UIElements::StyleVariableResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resolver = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Sheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sheet;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Sheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sheet;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_Sheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sheet = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*>& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*> const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_Properties(::ArrayW<::UnityEngine::UIElements::StyleProperty*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Properties = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__m_CurrentValueIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_CurrentValueIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__m_CurrentValueIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_CurrentValueIndex_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set__m_CurrentValueIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____m_CurrentValueIndex_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_CurrentPropertyIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPropertyIndex;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_CurrentPropertyIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPropertyIndex;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_CurrentPropertyIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPropertyIndex = value;
}
constexpr ::UnityEngine::UIElements::StyleProperty*& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__property_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr ::UnityEngine::UIElements::StyleProperty* const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__property_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set__property_k__BackingField(::UnityEngine::UIElements::StyleProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__propertyId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__propertyId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set__propertyId_k__BackingField(::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__valueCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__valueCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueCount_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set__valueCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueCount_k__BackingField = value;
}
constexpr float_t& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__dpiScaling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dpiScaling_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get__dpiScaling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dpiScaling_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set__dpiScaling_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dpiScaling_k__BackingField = value;
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::setStaticF_getCursorIdFunc(::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*, "getCursorIdFunc", ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* UnityEngine::UIElements::StyleSheets::StylePropertyReader::getStaticF_getCursorIdFunc() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*, "getCursorIdFunc",
                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>();
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_m_CurrentValueIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_m_CurrentValueIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_m_CurrentValueIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_m_CurrentValueIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_property() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_property", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleProperty*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_property(::UnityEngine::UIElements::StyleProperty* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "set_property", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_propertyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_propertyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_propertyId(::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "set_propertyId", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_valueCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_valueCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_valueCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_valueCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_dpiScaling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "get_dpiScaling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_dpiScaling(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "set_dpiScaling", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetContext(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleComplexSelector* selector,
                                                                                  ::UnityEngine::UIElements::StyleVariableContext* varContext, float_t dpiScaling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "SetContext",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleVariableContext*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet, selector, varContext, dpiScaling);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetInlineContext(::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleProperty*> properties,
                                                                                        float_t dpiScaling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
          { "SetInlineContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleProperty*>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet, properties, dpiScaling);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StylePropertyReader::MoveNextProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "MoveNextProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValueType(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "GetValueType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueType>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsValueType(int32_t index, ::UnityEngine::UIElements::StyleValueType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "IsValueType", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, type);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsKeyword(int32_t index, ::UnityEngine::UIElements::StyleValueKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "IsKeyword", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, keyword);
}
inline ::StringW UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsString(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadAsString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadLength(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TimeValue UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTimeValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTimeValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeValue>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTranslate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTransformOrigin", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadRotate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadScale", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale>(this, ___internal_method, index);
}
inline float_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFloat(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFloat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadInt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadColor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadColor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, enumType, index);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsset(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadAsset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFontDefinition(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFontDefinition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFont(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadFont", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::MaterialDefinition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadMaterialDefinition(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadMaterialDefinition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MaterialDefinition>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackground(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackground", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Cursor UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadCursor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Cursor>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTextShadow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TextAutoSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextAutoSize(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadTextAutoSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextAutoSize>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionX(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundPositionX", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionY(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundPositionY", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition(int32_t index,
                                                                                                                                       ::UnityEngine::UIElements::BackgroundPositionKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "ReadBackgroundPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPositionKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(this, ___internal_method, index, keyword);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundRepeat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadBackgroundSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListEasingFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* list, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                          { "ReadListEasingFunction", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListTimeValue(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* list, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                       { "ReadListTimeValue", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListFilterFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>* list, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                          { "ReadListFilterFunction", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::FilterFunction>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListStylePropertyName(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list,
                                                                                                 int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                       { "ReadListStylePropertyName", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, index);
}
inline ::UnityEngine::UIElements::StyleRatio UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRatio(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "ReadRatio", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRatio>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::LoadProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "LoadProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetCurrentProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { "SetCurrentProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin(int32_t valCount,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue zVvalue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadTransformOrigin",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin>(nullptr, ___internal_method, valCount, val1, val2, zVvalue);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOriginEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value,
                                                                                                                            ::by_ref<bool> isVertical, ::by_ref<bool> isHorizontal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
          { "ReadTransformOriginEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, value, isVertical, isHorizontal);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadTranslate",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate>(nullptr, ___internal_method, valCount, val1, val2, val3);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadScale",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale>(nullptr, ___internal_method, valCount, val1, val2, val3);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                       { "ReadRotate",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate>(nullptr, ___internal_method, valCount, val1, val2, val3, val4);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType,
                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ::by_ref<int32_t> intValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "TryReadEnum",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, enumType, value, intValue);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType,
                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                       { "ReadEnum", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleEnumType>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, enumType, value);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAngle(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadAngle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition(int32_t valCount,
                                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                                       ::UnityEngine::UIElements::BackgroundPositionKeyword keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                       { "ReadBackgroundPosition",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPositionKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(nullptr, ___internal_method, valCount, val1, val2, keyword);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat(int32_t valCount,
                                                                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadBackgroundRepeat",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat>(nullptr, ___internal_method, valCount, val1, val2);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize(int32_t valCount,
                                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadBackgroundSize",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(nullptr, ___internal_method, valCount, val1, val2);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow(int32_t valCount,
                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                       { "ReadTextShadow",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow>(nullptr, ___internal_method, valCount, val1, val2, val3, val4);
}
inline ::UnityEngine::UIElements::TextAutoSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextAutoSize(int32_t valCount,
                                                                                                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                           ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "ReadTextAutoSize",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextAutoSize>(nullptr, ___internal_method, valCount, val1, val2, val3);
}
inline ::UnityEngine::UIElements::Cursor UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor(int32_t valueCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3, float_t dpiScaling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                           { "ReadCursor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Cursor>(nullptr, ___internal_method, valueCount, val1, val2, val3, dpiScaling);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryGetImageSourceFromValue(::UnityEngine::UIElements::StyleSheets::StylePropertyValue propertyValue, float_t dpiScaling,
                                                                                                  ::by_ref<::UnityEngine::UIElements::StyleSheets::ImageSource> source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(),
                                                                                         { "TryGetImageSourceFromValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::ImageSource>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, propertyValue, dpiScaling, source);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* UnityEngine::UIElements::StyleSheets::StylePropertyReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader::StylePropertyReader() {}
