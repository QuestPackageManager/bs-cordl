#pragma once
// IWYU pragma private; include "UnityEngine/TextGenerator.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextGenerationError_impl.hpp"
#include "UnityEngine/zzzz__TextGenerationSettings_impl.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGenerationError_def.hpp"
#include "UnityEngine/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/zzzz__UICharInfo_def.hpp"
#include "UnityEngine/zzzz__UILineInfo_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextGenerator_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::TextGenerator*)>(&::UnityEngine::TextGenerator_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c13464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::TextGenerator_BindingsMarshaller::ConvertToNative(::UnityEngine::TextGenerator* textGenerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::TextGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, textGenerator);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextGenerator_BindingsMarshaller::TextGenerator_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::TextGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c12080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(int32_t)>(&::UnityEngine::TextGenerator::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6c12088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::Finalize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6c121f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { ::i2c::class_of<::UnityEngine::TextGenerator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c122c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_characterCountVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::get_characterCountVisible)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c12350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCountVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.ValidatedSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerationSettings (::UnityEngine::TextGenerator::*)(::UnityEngine::TextGenerationSettings)>(
    &::UnityEngine::TextGenerator::ValidatedSettings)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6c123b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "ValidatedSettings", {}, { ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::Invalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c126c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Invalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetCharacters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*)>(
    &::UnityEngine::TextGenerator::GetCharacters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c126cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharacters", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*)>(
    &::UnityEngine::TextGenerator::GetLines)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c12728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLines", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::TextGenerator::GetVertices)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c12784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetPreferredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings)>(&::UnityEngine::TextGenerator::GetPreferredWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c127e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetPreferredWidth", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetPreferredHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings)>(
    &::UnityEngine::TextGenerator::GetPreferredHeight)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c128f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetPreferredHeight", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.PopulateWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings, ::UnityEngine::GameObject*)>(
    &::UnityEngine::TextGenerator::PopulateWithErrors)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6c12954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(),
                            { "PopulateWithErrors", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Populate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings)>(&::UnityEngine::TextGenerator::Populate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c12840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.PopulateWithError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerationError (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings)>(
    &::UnityEngine::TextGenerator::PopulateWithError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c12b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "PopulateWithError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.PopulateAlways
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerationError (::UnityEngine::TextGenerator::*)(::StringW, ::UnityEngine::TextGenerationSettings)>(
    &::UnityEngine::TextGenerator::PopulateAlways)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6c12ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "PopulateAlways", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_verts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* (::UnityEngine::TextGenerator::*)()>(
    &::UnityEngine::TextGenerator::get_verts)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c12e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_verts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_characters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* (::UnityEngine::TextGenerator::*)()>(
    &::UnityEngine::TextGenerator::get_characters)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c12e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_lines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* (::UnityEngine::TextGenerator::*)()>(
    &::UnityEngine::TextGenerator::get_lines)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c12eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_rectExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::get_rectExtents)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c1288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_rectExtents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_characterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::get_characterCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c12364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_lineCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextGenerator::*)()>(&::UnityEngine::TextGenerator::get_lineCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c12f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lineCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::TextGenerator::Internal_Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c121d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Internal_Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TextGenerator::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c12314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Populate_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerator::*)(
    ::StringW, ::UnityEngine::Font*, ::UnityEngine::Color, int32_t, float_t, float_t, ::UnityEngine::FontStyle, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, ::UnityEngine::TextAnchor,
    float_t, float_t, float_t, float_t, bool, bool, ::by_ref<uint32_t>)>(&::UnityEngine::TextGenerator::Populate_Internal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6c12ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal",
                                                                                                                                               {},
                                                                                                                                               { ::i2c::type_of<::StringW>(),
                                                                                                                                                 ::i2c::type_of<::UnityEngine::Font*>(),
                                                                                                                                                 ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                                                 ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                                                 ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Populate_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextGenerator::*)(
    ::StringW, ::UnityEngine::Font*, ::UnityEngine::Color, int32_t, float_t, float_t, ::UnityEngine::FontStyle, bool, bool, int32_t, int32_t, ::UnityEngine::VerticalWrapMode,
    ::UnityEngine::HorizontalWrapMode, bool, ::UnityEngine::TextAnchor, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool, bool, ::by_ref<::UnityEngine::TextGenerationError>)>(
    &::UnityEngine::TextGenerator::Populate_Internal)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6c12cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::StringW>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::Font*>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::VerticalWrapMode>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::HorizontalWrapMode>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::TextGenerationError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetVerticesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Object*)>(&::UnityEngine::TextGenerator::GetVerticesInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c12788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVerticesInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetCharactersInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Object*)>(&::UnityEngine::TextGenerator::GetCharactersInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c126d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharactersInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetLinesInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextGenerator::*)(::System::Object*)>(&::UnityEngine::TextGenerator::GetLinesInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c1272c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLinesInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_rectExtents_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::TextGenerator::get_rectExtents_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c12ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(),
                                                             { "get_rectExtents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_characterCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TextGenerator::get_characterCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c12f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.get_lineCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TextGenerator::get_lineCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c12fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lineCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.Populate_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IntPtr, ::by_ref<::UnityEngine::Color>, int32_t,
                                                                float_t, float_t, ::UnityEngine::FontStyle, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, ::UnityEngine::TextAnchor, float_t,
                                                                float_t, float_t, float_t, bool, bool, ::by_ref<uint32_t>)>(&::UnityEngine::TextGenerator::Populate_Internal_Injected)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c13264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal_Injected",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::System::IntPtr>(),
                                                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                                   ::i2c::type_of<::System::IntPtr>(),
                                                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Color>>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetVerticesInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Object*)>(&::UnityEngine::TextGenerator::GetVerticesInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c13398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVerticesInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetCharactersInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Object*)>(&::UnityEngine::TextGenerator::GetCharactersInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c133dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharactersInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextGenerator.GetLinesInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Object*)>(&::UnityEngine::TextGenerator::GetLinesInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c13420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLinesInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::TextGenerator::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::TextGenerator::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::StringW& UnityEngine::TextGenerator::__cordl_internal_get_m_LastString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastString;
}
constexpr ::StringW const& UnityEngine::TextGenerator::__cordl_internal_get_m_LastString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastString;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_LastString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastString = value;
}
constexpr ::UnityEngine::TextGenerationSettings& UnityEngine::TextGenerator::__cordl_internal_get_m_LastSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSettings;
}
constexpr ::UnityEngine::TextGenerationSettings const& UnityEngine::TextGenerator::__cordl_internal_get_m_LastSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastSettings;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_LastSettings(::UnityEngine::TextGenerationSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastSettings = value;
}
constexpr bool& UnityEngine::TextGenerator::__cordl_internal_get_m_HasGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasGenerated;
}
constexpr bool const& UnityEngine::TextGenerator::__cordl_internal_get_m_HasGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasGenerated;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_HasGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasGenerated = value;
}
constexpr ::UnityEngine::TextGenerationError& UnityEngine::TextGenerator::__cordl_internal_get_m_LastValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastValid;
}
constexpr ::UnityEngine::TextGenerationError const& UnityEngine::TextGenerator::__cordl_internal_get_m_LastValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastValid;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_LastValid(::UnityEngine::TextGenerationError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastValid = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*& UnityEngine::TextGenerator::__cordl_internal_get_m_Verts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Verts;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* const& UnityEngine::TextGenerator::__cordl_internal_get_m_Verts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Verts;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_Verts(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Verts = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*& UnityEngine::TextGenerator::__cordl_internal_get_m_Characters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Characters;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* const& UnityEngine::TextGenerator::__cordl_internal_get_m_Characters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Characters;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_Characters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Characters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*& UnityEngine::TextGenerator::__cordl_internal_get_m_Lines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lines;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* const& UnityEngine::TextGenerator::__cordl_internal_get_m_Lines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Lines;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_Lines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Lines = value;
}
constexpr bool& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedVerts;
}
constexpr bool const& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedVerts;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_CachedVerts(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedVerts = value;
}
constexpr bool& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedCharacters;
}
constexpr bool const& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedCharacters;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_CachedCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedCharacters = value;
}
constexpr bool& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLines;
}
constexpr bool const& UnityEngine::TextGenerator::__cordl_internal_get_m_CachedLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLines;
}
constexpr void UnityEngine::TextGenerator::__cordl_internal_set_m_CachedLines(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedLines = value;
}
inline void UnityEngine::TextGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextGenerator::_ctor(int32_t initialCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
inline void UnityEngine::TextGenerator::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextGenerator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextGenerator::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::TextGenerator::get_characterCountVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCountVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::TextGenerationSettings UnityEngine::TextGenerator::ValidatedSettings(::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "ValidatedSettings", {}, { ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerationSettings>(this, ___internal_method, settings);
}
inline void UnityEngine::TextGenerator::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Invalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextGenerator::GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>* characters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharacters", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UICharInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characters);
}
inline void UnityEngine::TextGenerator::GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>* lines) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLines", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UILineInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lines);
}
inline void UnityEngine::TextGenerator::GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline float_t UnityEngine::TextGenerator::GetPreferredWidth(::StringW str, ::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetPreferredWidth", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, str, settings);
}
inline float_t UnityEngine::TextGenerator::GetPreferredHeight(::StringW str, ::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetPreferredHeight", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, str, settings);
}
inline bool UnityEngine::TextGenerator::PopulateWithErrors(::StringW str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(),
                          { "PopulateWithErrors", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, settings, context);
}
inline bool UnityEngine::TextGenerator::Populate(::StringW str, ::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, settings);
}
inline ::UnityEngine::TextGenerationError UnityEngine::TextGenerator::PopulateWithError(::StringW str, ::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "PopulateWithError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerationError>(this, ___internal_method, str, settings);
}
inline ::UnityEngine::TextGenerationError UnityEngine::TextGenerator::PopulateAlways(::StringW str, ::UnityEngine::TextGenerationSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "PopulateAlways", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextGenerationSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerationError>(this, ___internal_method, str, settings);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* UnityEngine::TextGenerator::get_verts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_verts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* UnityEngine::TextGenerator::get_characters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* UnityEngine::TextGenerator::get_lines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::TextGenerator::get_rectExtents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_rectExtents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline int32_t UnityEngine::TextGenerator::get_characterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TextGenerator::get_lineCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lineCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TextGenerator::Internal_Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Internal_Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::TextGenerator::Internal_Destroy(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline bool UnityEngine::TextGenerator::Populate_Internal(::StringW str, ::UnityEngine::Font* font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing,
                                                          ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize,
                                                          int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY,
                                                          float_t pivotX, float_t pivotY, bool generateOutOfBounds, bool alignByGeometry, ::by_ref<uint32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal",
                                                                                                                                             {},
                                                                                                                                             { ::i2c::type_of<::StringW>(),
                                                                                                                                               ::i2c::type_of<::UnityEngine::Font*>(),
                                                                                                                                               ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                                               ::i2c::type_of<int32_t>(),
                                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                                               ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<float_t>(),
                                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                                               ::i2c::type_of<bool>(),
                                                                                                                                               ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize,
                                                   resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds,
                                                   alignByGeometry, error);
}
inline bool UnityEngine::TextGenerator::Populate_Internal(::StringW str, ::UnityEngine::Font* font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing,
                                                          ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize,
                                                          ::UnityEngine::VerticalWrapMode verticalOverFlow, ::UnityEngine::HorizontalWrapMode horizontalOverflow, bool updateBounds,
                                                          ::UnityEngine::TextAnchor anchor, ::UnityEngine::Vector2 extents, ::UnityEngine::Vector2 pivot, bool generateOutOfBounds,
                                                          bool alignByGeometry, ::by_ref<::UnityEngine::TextGenerationError> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::StringW>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Font*>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::VerticalWrapMode>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::HorizontalWrapMode>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::TextGenerationError>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize,
                                                   resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extents, pivot, generateOutOfBounds, alignByGeometry, error);
}
inline void UnityEngine::TextGenerator::GetVerticesInternal(::System::Object* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVerticesInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices);
}
inline void UnityEngine::TextGenerator::GetCharactersInternal(::System::Object* characters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharactersInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characters);
}
inline void UnityEngine::TextGenerator::GetLinesInternal(::System::Object* lines) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLinesInternal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lines);
}
inline void UnityEngine::TextGenerator::get_rectExtents_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(),
                                                           { "get_rectExtents_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::TextGenerator::get_characterCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_characterCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TextGenerator::get_lineCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "get_lineCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::TextGenerator::Populate_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> str, ::System::IntPtr font,
                                                                   ::by_ref<::UnityEngine::Color> color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style,
                                                                   bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow,
                                                                   int32_t horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY, float_t pivotX,
                                                                   float_t pivotY, bool generateOutOfBounds, bool alignByGeometry, ::by_ref<uint32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "Populate_Internal_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::IntPtr>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                                 ::i2c::type_of<::System::IntPtr>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Color>>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::FontStyle>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::TextAnchor>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit,
                                                   resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY,
                                                   generateOutOfBounds, alignByGeometry, error);
}
inline void UnityEngine::TextGenerator::GetVerticesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetVerticesInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, vertices);
}
inline void UnityEngine::TextGenerator::GetCharactersInternal_Injected(::System::IntPtr _unity_self, ::System::Object* characters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetCharactersInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, characters);
}
inline void UnityEngine::TextGenerator::GetLinesInternal_Injected(::System::IntPtr _unity_self, ::System::Object* lines) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextGenerator*>(), { "GetLinesInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, lines);
}
inline ::UnityEngine::TextGenerator* UnityEngine::TextGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextGenerator*>());
}
inline ::UnityEngine::TextGenerator* UnityEngine::TextGenerator::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextGenerator*>(initialCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::TextGenerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::TextGenerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextGenerator::TextGenerator() {}
