#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyReader.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b4b3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b4b4f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::Invoke(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sheet, handle);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*
UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction::StylePropertyReader_GetCursorIdFunction() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_property
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleProperty* (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_property",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_property
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(::UnityEngine::UIElements::StyleProperty*)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_property)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_property", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_propertyId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_propertyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_valueCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_valueCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_valueCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_valueCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_valueCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_valueCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.get_dpiScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_dpiScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_dpiScaling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.set_dpiScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(float_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_dpiScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b47050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_dpiScaling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleComplexSelector*, ::UnityEngine::UIElements::StyleVariableContext*, float_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetContext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b47058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetInlineContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>,
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>, float_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetInlineContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b476cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetInlineContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.MoveNextProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyId (
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::MoveNextProperty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b476dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "MoveNextProperty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyValue (
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b477c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "GetValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleValueType (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValueType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b47828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "GetValueType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.IsValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t, ::UnityEngine::UIElements::StyleValueType)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsValueType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b47898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "IsValueType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.IsKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t, ::UnityEngine::UIElements::StyleValueKeyword)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsKeyword)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b47910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "IsKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b47990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadAsString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadLength)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b47d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTimeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimeValue (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTimeValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b47e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTimeValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTranslate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b47e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTranslate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TransformOrigin (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6b481d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOrigin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadRotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Rotate (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6b48450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadRotate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scale (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b48798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFloat)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b48a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFloat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadInt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b48a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadInt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadColor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b48b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadColor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleEnumType, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b48ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFontDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FontDefinition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFontDefinition)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x6b48dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFontDefinition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadFont
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFont)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6b49308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFont",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackground)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6b49650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackground",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Cursor (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6b49f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadCursor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTextShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextShadow (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6b4a214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTextShadow",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPositionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionX)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4a484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPositionX",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPositionY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b4a570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPositionY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t, ::UnityEngine::UIElements::BackgroundPositionKeyword)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b4a49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPositionKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b4a67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundRepeat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundSize (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b4a7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListEasingFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListEasingFunction)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6b4aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListEasingFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListTimeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListTimeValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b4aca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListTimeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadListStylePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*, int32_t)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListStylePropertyName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6b4ae08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListStylePropertyName",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.LoadProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::LoadProperties)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x6b47300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "LoadProperties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.SetCurrentProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetCurrentProperty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b4770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetCurrentProperty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TransformOrigin (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b4830c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOrigin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTransformOriginEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::ByRef<bool>, ::ByRef<bool>)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOriginEnum)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b4af98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOriginEnum",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadTranslate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Translate (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6b47fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTranslate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scale (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b4889c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadRotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Rotate (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue,
    ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6b485d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadRotate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.TryReadEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::ByRef<int32_t>)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryReadEnum)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b4b208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "TryReadEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::UnityEngine::UIElements::StyleSheets::StyleEnumType, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(&::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b4b0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Angle (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAngle)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b4b19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadAngle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)(
    int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::BackgroundPositionKeyword)>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b4a588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPositionKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::BackgroundRepeat (*)(int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b4a738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundRepeat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.ReadBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::BackgroundSize (*)(int32_t, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6b4a8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader.TryGetImageSourceFromValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, float_t, ::ByRef<::UnityEngine::UIElements::StyleSheets::ImageSource>)>(
        &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryGetImageSourceFromValue)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x6b498c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "TryGetImageSourceFromValue",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::ImageSource>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StylePropertyReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::StylePropertyReader::*)()>(
    &::UnityEngine::UIElements::StyleSheets::StylePropertyReader::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b4b2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ValueCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Resolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> const&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_Properties(
    ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_PropertyIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyIds;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const&
UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_PropertyIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PropertyIds;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_PropertyIds(
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PropertyIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_CurrentValueIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentValueIndex;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_get_m_CurrentValueIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentValueIndex;
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyReader::__cordl_internal_set_m_CurrentValueIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentValueIndex = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____property_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*, "getCursorIdFunc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction* UnityEngine::UIElements::StyleSheets::StylePropertyReader::getStaticF_getCursorIdFunc() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader_GetCursorIdFunction*, "getCursorIdFunc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get>();
}
inline ::UnityEngine::UIElements::StyleProperty* UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_property() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_property",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleProperty*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_property(::UnityEngine::UIElements::StyleProperty* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_property", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_propertyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_propertyId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_propertyId(::UnityEngine::UIElements::StyleSheets::StylePropertyId value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_propertyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_valueCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_valueCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_valueCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_valueCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::get_dpiScaling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "get_dpiScaling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::set_dpiScaling(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "set_dpiScaling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetContext(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleComplexSelector* selector,
                                                                                  ::UnityEngine::UIElements::StyleVariableContext* varContext, float_t dpiScaling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, selector, varContext, dpiScaling);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetInlineContext(
    ::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*> properties,
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds, float_t dpiScaling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetInlineContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleProperty*, ::Array<::UnityEngine::UIElements::StyleProperty*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, properties, propertyIds, dpiScaling);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId UnityEngine::UIElements::StyleSheets::StylePropertyReader::MoveNextProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "MoveNextProperty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyId, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyValue UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "GetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleSheets::StylePropertyReader::GetValueType(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "GetValueType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueType, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsValueType(int32_t index, ::UnityEngine::UIElements::StyleValueType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "IsValueType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, type);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::IsKeyword(int32_t index, ::UnityEngine::UIElements::StyleValueKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "IsKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index, keyword);
}
inline ::StringW UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAsString(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadAsString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadLength(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TimeValue UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTimeValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTimeValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeValue, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTranslate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOrigin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadRotate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale, false>(this, ___internal_method, index);
}
inline float_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFloat(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadInt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadInt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadColor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, enumType, index);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFontDefinition(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFontDefinition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition, false>(this, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadFont(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadFont",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackground(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackground",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::Cursor UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadCursor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadCursor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Cursor, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTextShadow(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTextShadow",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionX(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPositionX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPositionY(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPositionY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition(int32_t index,
                                                                                                                                       ::UnityEngine::UIElements::BackgroundPositionKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPositionKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition, false>(this, ___internal_method, index, keyword);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundRepeat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListEasingFunction(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* list, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListEasingFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListTimeValue(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* list, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListTimeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadListStylePropertyName(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* list,
                                                                                                 int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadListStylePropertyName",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, index);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::LoadProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "LoadProperties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::SetCurrentProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "SetCurrentProperty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOrigin(int32_t valCount,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                                 ::UnityEngine::UIElements::StyleSheets::StylePropertyValue zVvalue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOrigin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin, false>(nullptr, ___internal_method, valCount, val1, val2, zVvalue);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTransformOriginEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value,
                                                                                                                            ::ByRef<bool> isVertical, ::ByRef<bool> isHorizontal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTransformOriginEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length, false>(nullptr, ___internal_method, value, isVertical, isHorizontal);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadTranslate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                     ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadTranslate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate, false>(nullptr, ___internal_method, valCount, val1, val2, val3);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadScale(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                             ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale, false>(nullptr, ___internal_method, valCount, val1, val2, val3);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadRotate(int32_t valCount, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val3,
                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate, false>(nullptr, ___internal_method, valCount, val1, val2, val3, val4);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType,
                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ::ByRef<int32_t> intValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "TryReadEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumType, value, intValue);
}
inline int32_t UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadEnum(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType,
                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleEnumType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumType, value);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadAngle(::UnityEngine::UIElements::StyleSheets::StylePropertyValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadAngle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundPosition(int32_t valCount,
                                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                       ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2,
                                                                                                                                       ::UnityEngine::UIElements::BackgroundPositionKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BackgroundPositionKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition, false>(nullptr, ___internal_method, valCount, val1, val2, keyword);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundRepeat(int32_t valCount,
                                                                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                                   ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundRepeat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat, false>(nullptr, ___internal_method, valCount, val1, val2);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StyleSheets::StylePropertyReader::ReadBackgroundSize(int32_t valCount,
                                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val1,
                                                                                                                               ::UnityEngine::UIElements::StyleSheets::StylePropertyValue val2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "ReadBackgroundSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize, false>(nullptr, ___internal_method, valCount, val1, val2);
}
inline bool UnityEngine::UIElements::StyleSheets::StylePropertyReader::TryGetImageSourceFromValue(::UnityEngine::UIElements::StyleSheets::StylePropertyValue propertyValue, float_t dpiScaling,
                                                                                                  ::ByRef<::UnityEngine::UIElements::StyleSheets::ImageSource> source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), "TryGetImageSourceFromValue",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::ImageSource>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, propertyValue, dpiScaling, source);
}
inline void UnityEngine::UIElements::StyleSheets::StylePropertyReader::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* UnityEngine::UIElements::StyleSheets::StylePropertyReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader::StylePropertyReader() {}
