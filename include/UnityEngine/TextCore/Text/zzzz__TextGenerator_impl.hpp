#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerator.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__HighlightState_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextBackingContainer_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RichTextTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::*)(
    ::System::Object*, ::System::IntPtr)>(&::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4949ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::*)(
    uint32_t, int32_t, ::UnityEngine::TextCore::Text::TextInfo*, ::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4949f2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::Invoke(uint32_t unicode, int32_t stringIndex, ::UnityEngine::TextCore::Text::TextInfo* text,
                                                                                             ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, stringIndex, text, fontAsset);
}
inline ::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback* UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback::TextGenerator_MissingCharacterEventCallback() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter::*)(
    ::UnityEngine::TextCore::Text::Character*, int32_t)>(&::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4949f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter::_ctor(::UnityEngine::TextCore::Text::Character* character, int32_t materialIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, character, materialIndex);
}
// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character*", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty:
// "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter::TextGenerator_SpecialCharacter(::UnityEngine::TextCore::Text::Character* character,
                                                                                                        ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset,
                                                                                                        ::UnityW<::UnityEngine::Material> material, int32_t materialIndex) noexcept {
  this->character = character;
  this->fontAsset = fontAsset;
  this->material = material;
  this->materialIndex = materialIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter::TextGenerator_SpecialCharacter() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextGenerator* (*)()>(
    &::UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x493c924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                               "GetTextGenerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::GenerateText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x493d014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GenerateText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x493d27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetPreferredValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.get_isTextTruncated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::TextCore::Text::TextGenerator::get_isTextTruncated)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x493d4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                               "get_isTextTruncated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::Prepare)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x493d188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateTextMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x7654;
  constexpr static std::size_t addrs = 0x49352d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GenerateTextMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveWordWrappingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::ByRef<::UnityEngine::TextCore::Text::WordWrapState>, int32_t, int32_t, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x493f730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveWordWrappingState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.RestoreWordWrappingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::ByRef<::UnityEngine::TextCore::Text::WordWrapState>, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x493f9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "RestoreWordWrappingState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ValidateHtmlTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>, int32_t, ::ByRef<int32_t>,
    ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag)> {
  constexpr static std::size_t size = 0x4780;
  constexpr static std::size_t addrs = 0x493fc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ValidateHtmlTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveGlyphVertexInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo)> {
  constexpr static std::size_t size = 0xb6c;
  constexpr static std::size_t addrs = 0x4944468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveGlyphVertexInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveSpriteVertexInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0x4944fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveSpriteVertexInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawUnderlineMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*,
    ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh)> {
  constexpr static std::size_t size = 0xba8;
  constexpr static std::size_t addrs = 0x49457f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DrawUnderlineMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawTextHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x4946424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DrawTextHighlight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ClearMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::ClearMesh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x49469a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ClearMesh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SetArraySizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>, ::UnityEngine::TextCore::Text::TextGenerationSettings*,
    ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::SetArraySizes)> {
  constexpr static std::size_t size = 0x13f8;
  constexpr static std::size_t addrs = 0x493e338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SetArraySizes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextElement* (
    ::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, uint32_t, ::UnityEngine::TextCore::Text::FontAsset*,
                                                     ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ::ByRef<bool>)>(
    &::UnityEngine::TextCore::Text::TextGenerator::GetTextElement)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x4946b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetTextElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ComputeMarginSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Vector4)>(
    &::UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x493d558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ComputeMarginSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetSpecialCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x493d530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetSpecialCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetEllipsisSpecialCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x49469c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetEllipsisSpecialCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetUnderlineSpecialCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49463a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetUnderlineSpecialCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValuesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x493d3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetPreferredValuesInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.CalculatePreferredValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(
    ::ByRef<float_t>, ::UnityEngine::Vector2, bool, ::UnityEngine::TextCore::Text::TextWrappingMode, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues)> {
  constexpr static std::size_t size = 0x29bc;
  constexpr static std::size_t addrs = 0x4946ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.PopulateTextBackingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextGenerator::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x493d5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextBackingArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.PopulateTextBackingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::StringW, int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::TextGenerator::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x49498a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextBackingArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.PopulateTextProcessingArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextGenerator::PopulateTextProcessingArray)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x493d5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextProcessingArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.InsertNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    int32_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, ::ByRef<bool>, ::ByRef<float_t>, ::UnityEngine::TextCore::Text::TextGenerationSettings*,
    ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::InsertNewLine)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x4949994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "InsertNewLine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DoMissingGlyphCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(
    uint32_t, int32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::TextInfo*)>(&::UnityEngine::TextCore::Text::TextGenerator::DoMissingGlyphCallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4946e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DoMissingGlyphCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ClearMarkupTagAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(
    &::UnityEngine::TextCore::Text::TextGenerator::ClearMarkupTagAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4944404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                               "ClearMarkupTagAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::_ctor)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x493c994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::Text::TextBackingContainer& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextBackingArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextBackingArray;
}
constexpr ::UnityEngine::TextCore::Text::TextBackingContainer const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextBackingArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextBackingArray;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TextBackingArray(::UnityEngine::TextCore::Text::TextBackingContainer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextBackingArray = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextProcessingArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextProcessingArray;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextProcessingArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextProcessingArray;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TextProcessingArray(
    ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextProcessingArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_InternalTextProcessingArraySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalTextProcessingArraySize;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_InternalTextProcessingArraySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalTextProcessingArraySize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_InternalTextProcessingArraySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalTextProcessingArraySize = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_VertexBufferAutoSizeReduction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBufferAutoSizeReduction;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_VertexBufferAutoSizeReduction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexBufferAutoSizeReduction;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_VertexBufferAutoSizeReduction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexBufferAutoSizeReduction = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HtmlTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HtmlTag;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HtmlTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HtmlTag;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HtmlTag(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HtmlTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::HighlightState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightState;
}
constexpr ::UnityEngine::TextCore::Text::HighlightState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HighlightState(::UnityEngine::TextCore::Text::HighlightState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighlightState = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsIgnoringAlignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsIgnoringAlignment;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsIgnoringAlignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsIgnoringAlignment;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsIgnoringAlignment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsIgnoringAlignment = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_RectTransformCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransformCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_RectTransformCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RectTransformCorners;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RectTransformCorners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginWidth;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginWidth;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MarginWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarginWidth = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginHeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginHeight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MarginHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarginHeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PreferredWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreferredWidth;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PreferredWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreferredWidth;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_PreferredWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreferredWidth = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PreferredHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreferredHeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PreferredHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreferredHeight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_PreferredHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreferredHeight = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFontAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFontAsset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CurrentFontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentFontAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMaterial;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CurrentMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentMaterialIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMaterialIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentMaterialIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentMaterialIndex;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CurrentMaterialIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentMaterialIndex = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferenceStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferenceStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferenceStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferenceStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaterialReferenceStack(
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaterialReferenceStack = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_Padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Padding = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentSpriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSpriteAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentSpriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSpriteAsset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CurrentSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentSpriteAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TotalCharacterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TotalCharacterCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TotalCharacterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TotalCharacterCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TotalCharacterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TotalCharacterCount = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontSize;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontSize = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontScaleMultiplier;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontScaleMultiplier;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontScaleMultiplier = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentFontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFontSize;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CurrentFontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CurrentFontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFontSize = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SizeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SizeStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SizeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SizeStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SizeStack = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextStyleStacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextStyleStacks;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextStyleStacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextStyleStacks;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TextStyleStacks(
    ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, ::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TextStyleStacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextStyleStackDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextStyleStackDepth;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextStyleStackDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextStyleStackDepth;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TextStyleStackDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextStyleStackDepth = value;
}
constexpr ::UnityEngine::TextCore::Text::FontStyles& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontStyleInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyleInternal;
}
constexpr ::UnityEngine::TextCore::Text::FontStyles const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontStyleInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyleInternal;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontStyleInternal = value;
}
constexpr ::UnityEngine::TextCore::Text::FontStyleStack& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontStyleStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyleStack;
}
constexpr ::UnityEngine::TextCore::Text::FontStyleStack const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontStyleStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyleStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontStyleStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontWeightInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightInternal;
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontWeightInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightInternal;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontWeightInternal = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontWeightStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontWeightStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontWeightStack;
}
constexpr void
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontWeightStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineJustification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineJustification;
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineJustification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineJustification;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineJustification = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineJustificationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineJustificationStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineJustificationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineJustificationStack;
}
constexpr void
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineJustificationStack = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_BaselineOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaselineOffset;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_BaselineOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaselineOffset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_BaselineOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaselineOffset = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_BaselineOffsetStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaselineOffsetStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_BaselineOffsetStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaselineOffsetStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaselineOffsetStack = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontColor32() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontColor32;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FontColor32() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontColor32;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FontColor32(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontColor32 = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HtmlColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HtmlColor;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HtmlColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HtmlColor;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HtmlColor(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HtmlColor = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_UnderlineColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnderlineColor;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_UnderlineColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnderlineColor;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_UnderlineColor(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnderlineColor = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StrikethroughColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StrikethroughColor;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StrikethroughColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StrikethroughColor;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_StrikethroughColor(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StrikethroughColor = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_UnderlineColorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnderlineColorStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_UnderlineColorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnderlineColorStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnderlineColorStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StrikethroughColorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StrikethroughColorStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StrikethroughColorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StrikethroughColorStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StrikethroughColorStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightColorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightColorStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightColorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightColorStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighlightColorStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightStateStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightStateStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightStateStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightStateStack;
}
constexpr void
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HighlightStateStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighlightStateStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ItalicAngleStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicAngleStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ItalicAngleStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicAngleStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ItalicAngleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItalicAngleStack = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientPreset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientPreset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ColorGradientPreset(::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColorGradientPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ColorGradientStack(
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradientStack = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientPresetIsTinted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientPresetIsTinted;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ColorGradientPresetIsTinted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradientPresetIsTinted;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ColorGradientPresetIsTinted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradientPresetIsTinted = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ActionStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ActionStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionStack = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineOffset;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineOffset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineOffset = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineHeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineHeight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineHeight = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsDrivenLineSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrivenLineSpacing;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsDrivenLineSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDrivenLineSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsDrivenLineSpacing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDrivenLineSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MonoSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MonoSpacing;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MonoSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MonoSpacing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MonoSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MonoSpacing = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_XAdvance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XAdvance;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_XAdvance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XAdvance;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_XAdvance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XAdvance = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagLineIndent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagLineIndent;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagLineIndent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagLineIndent;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TagLineIndent(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TagLineIndent = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagIndent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagIndent;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagIndent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagIndent;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TagIndent(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TagIndent = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IndentStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IndentStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndentStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IndentStack = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagNoParsing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagNoParsing;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TagNoParsing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TagNoParsing;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TagNoParsing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TagNoParsing = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CharacterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CharacterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CharacterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharacterCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstCharacterOfLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCharacterOfLine;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstCharacterOfLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstCharacterOfLine;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FirstCharacterOfLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstCharacterOfLine = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastCharacterOfLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastCharacterOfLine;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastCharacterOfLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastCharacterOfLine;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LastCharacterOfLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastCharacterOfLine = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstVisibleCharacterOfLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstVisibleCharacterOfLine;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstVisibleCharacterOfLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstVisibleCharacterOfLine;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FirstVisibleCharacterOfLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstVisibleCharacterOfLine = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastVisibleCharacterOfLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVisibleCharacterOfLine;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastVisibleCharacterOfLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVisibleCharacterOfLine;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LastVisibleCharacterOfLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastVisibleCharacterOfLine = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxLineAscender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLineAscender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxLineAscender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLineAscender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxLineAscender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxLineAscender = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxLineDescender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLineDescender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxLineDescender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxLineDescender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxLineDescender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxLineDescender = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineNumber;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineNumber;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineNumber = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineVisibleCharacterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineVisibleCharacterCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineVisibleCharacterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineVisibleCharacterCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineVisibleCharacterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineVisibleCharacterCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineVisibleSpaceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineVisibleSpaceCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineVisibleSpaceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineVisibleSpaceCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineVisibleSpaceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineVisibleSpaceCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstOverflowCharacterIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstOverflowCharacterIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FirstOverflowCharacterIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstOverflowCharacterIndex;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FirstOverflowCharacterIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstOverflowCharacterIndex = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PageNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageNumber;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PageNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageNumber;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_PageNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PageNumber = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginLeft;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginLeft;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MarginLeft(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarginLeft = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginRight;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MarginRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarginRight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MarginRight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarginRight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_Width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Width = value;
}
constexpr ::UnityEngine::TextCore::Text::Extents& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MeshExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshExtents;
}
constexpr ::UnityEngine::TextCore::Text::Extents const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MeshExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshExtents;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MeshExtents = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxCapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapHeight;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxCapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapHeight;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxCapHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxCapHeight = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxAscender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAscender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxAscender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAscender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxAscender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxAscender = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxDescender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDescender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxDescender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDescender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxDescender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxDescender = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsNewPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNewPage;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsNewPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNewPage;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsNewPage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsNewPage = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsNonBreakingSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNonBreakingSpace;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsNonBreakingSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsNonBreakingSpace;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsNonBreakingSpace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsNonBreakingSpace = value;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedWordWrapState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedWordWrapState;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedWordWrapState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedWordWrapState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SavedWordWrapState = value;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedLineState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedLineState;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedLineState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedLineState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SavedLineState = value;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedEllipsisState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedEllipsisState;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedEllipsisState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedEllipsisState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SavedEllipsisState(::UnityEngine::TextCore::Text::WordWrapState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SavedEllipsisState = value;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedLastValidState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedLastValidState;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedLastValidState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedLastValidState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SavedLastValidState(::UnityEngine::TextCore::Text::WordWrapState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SavedLastValidState = value;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedSoftLineBreakState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedSoftLineBreakState;
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SavedSoftLineBreakState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SavedSoftLineBreakState;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SavedSoftLineBreakState(::UnityEngine::TextCore::Text::WordWrapState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SavedSoftLineBreakState = value;
}
constexpr ::UnityEngine::TextCore::Text::TextElementType& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElementType;
}
constexpr ::UnityEngine::TextCore::Text::TextElementType const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TextElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElementType;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElementType = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_isTextLayoutPhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isTextLayoutPhase;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_isTextLayoutPhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isTextLayoutPhase;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_isTextLayoutPhase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isTextLayoutPhase = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteIndex;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SpriteIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteIndex = value;
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteColor;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteColor;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SpriteColor(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteColor = value;
}
constexpr ::UnityEngine::TextCore::Text::TextElement*& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CachedTextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedTextElement;
}
constexpr ::UnityEngine::TextCore::Text::TextElement* const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CachedTextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedTextElement;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedTextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color32& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightColor;
}
constexpr ::UnityEngine::Color32 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_HighlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HighlightColor;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_HighlightColor(::UnityEngine::Color32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HighlightColor = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CharWidthAdjDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharWidthAdjDelta;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_CharWidthAdjDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharWidthAdjDelta;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_CharWidthAdjDelta(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CharWidthAdjDelta = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxFontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxFontSize;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaxFontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxFontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaxFontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxFontSize = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MinFontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinFontSize;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MinFontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinFontSize;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MinFontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinFontSize = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AutoSizeIterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizeIterationCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AutoSizeIterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizeIterationCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_AutoSizeIterationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoSizeIterationCount = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AutoSizeMaxIterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizeMaxIterationCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AutoSizeMaxIterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AutoSizeMaxIterationCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_AutoSizeMaxIterationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AutoSizeMaxIterationCount = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsAutoSizePointSizeSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAutoSizePointSizeSet;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsAutoSizePointSizeSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAutoSizePointSizeSet;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsAutoSizePointSizeSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsAutoSizePointSizeSet = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StartOfLineAscender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartOfLineAscender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StartOfLineAscender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartOfLineAscender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_StartOfLineAscender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartOfLineAscender = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineSpacingDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineSpacingDelta;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LineSpacingDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineSpacingDelta;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LineSpacingDelta(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineSpacingDelta = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferences;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferences;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaterialReferences(
    ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaterialReferences)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCount;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteCount;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SpriteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteCount = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StyleStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_StyleStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleStack = value;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_EllipsisInsertionCandidateStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EllipsisInsertionCandidateStack;
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_EllipsisInsertionCandidateStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EllipsisInsertionCandidateStack;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_EllipsisInsertionCandidateStack(
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::WordWrapState> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EllipsisInsertionCandidateStack = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteAnimationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAnimationId;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_SpriteAnimationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SpriteAnimationId;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_SpriteAnimationId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SpriteAnimationId = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ItalicAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicAngle;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_ItalicAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItalicAngle;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_ItalicAngle(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItalicAngle = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FXScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FXScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FXScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FXScale;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FXScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FXScale = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FXRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FXRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_FXRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FXRotation;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_FXRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FXRotation = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastBaseGlyphIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastBaseGlyphIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_LastBaseGlyphIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastBaseGlyphIndex;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_LastBaseGlyphIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastBaseGlyphIndex = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PageAscender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageAscender;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_PageAscender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PageAscender;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_PageAscender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PageAscender = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_XmlAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XmlAttribute;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_XmlAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XmlAttribute;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_XmlAttribute(
    ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute, ::Array<::UnityEngine::TextCore::Text::RichTextTagAttribute>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XmlAttribute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AttributeParameterValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttributeParameterValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_AttributeParameterValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttributeParameterValues;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_AttributeParameterValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttributeParameterValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferenceIndexLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferenceIndexLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_MaterialReferenceIndexLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialReferenceIndexLookup;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaterialReferenceIndexLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsCalculatingPreferredValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCalculatingPreferredValues;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_IsCalculatingPreferredValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsCalculatingPreferredValues;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_IsCalculatingPreferredValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsCalculatingPreferredValues = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_DefaultSpriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_DefaultSpriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_DefaultSpriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultSpriteAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TintSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintSprite;
}
constexpr bool const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_TintSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintSprite;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_TintSprite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintSprite = value;
}
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Ellipsis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ellipsis;
}
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Ellipsis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ellipsis;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_Ellipsis(::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ellipsis = value;
}
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Underline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Underline;
}
constexpr ::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter const& UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_Underline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Underline;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_Underline(::UnityEngine::TextCore::Text::TextGenerator_SpecialCharacter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Underline = value;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_InternalTextElementInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalTextElementInfo;
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const&
UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_get_m_InternalTextElementInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalTextElementInfo;
}
constexpr void UnityEngine::TextCore::Text::TextGenerator::__cordl_internal_set_m_InternalTextElementInfo(
    ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalTextElementInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::TextCore::Text::TextGenerator::setStaticF_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextGenerator*, "s_TextGenerator",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>(
      std::forward<::UnityEngine::TextCore::Text::TextGenerator*>(value));
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::getStaticF_s_TextGenerator() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextGenerator*, "s_TextGenerator",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>();
}
inline void UnityEngine::TextCore::Text::TextGenerator::setStaticF_m_IsTextTruncated(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IsTextTruncated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::TextCore::Text::TextGenerator::getStaticF_m_IsTextTruncated() {
  return ::cordl_internals::getStaticField<bool, "m_IsTextTruncated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>();
}
inline void UnityEngine::TextCore::Text::TextGenerator::setStaticF_OnMissingCharacter(::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*, "OnMissingCharacter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>(
      std::forward<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*>(value));
}
inline ::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback* UnityEngine::TextCore::Text::TextGenerator::getStaticF_OnMissingCharacter() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextGenerator_MissingCharacterEventCallback*, "OnMissingCharacter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get>();
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                             "GetTextGenerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GenerateText", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, textInfo);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* settings,
                                                                                             ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetPreferredValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, settings, textInfo);
}
inline bool UnityEngine::TextCore::Text::TextGenerator::get_isTextTruncated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                             "get_isTextTruncated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GenerateTextMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState(::ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, int32_t index, int32_t count,
                                                                              ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveWordWrappingState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, index, count, textInfo);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState(::ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "RestoreWordWrappingState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, state, textInfo);
}
inline bool
UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag(::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> chars,
                                                            int32_t startIndex, ::ByRef<int32_t> endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                            ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ValidateHtmlTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, chars, startIndex, endIndex, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo(float_t padding, float_t stylePadding, ::UnityEngine::Color32 vertexColor,
                                                                            ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                            ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveGlyphVertexInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, padding, stylePadding, vertexColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                             ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SaveSpriteVertexInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertexColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t startScale, float_t endScale, float_t maxScale,
                                                                          float_t sdfScale, ::UnityEngine::Color32 underlineColor,
                                                                          ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                          ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DrawUnderlineMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, startScale, endScale, maxScale, sdfScale, underlineColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color32 highlightColor,
                                                                          ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                          ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DrawTextHighlight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, highlightColor, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::ClearMesh(bool updateMesh, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ClearMesh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateMesh, textInfo);
}
inline int32_t UnityEngine::TextCore::Text::TextGenerator::SetArraySizes(
    ::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*> textProcessingArray,
    ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings, ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "SetArraySizes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement, ::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, textProcessingArray, generationSettings, textInfo);
}
inline ::UnityEngine::TextCore::Text::TextElement* UnityEngine::TextCore::Text::TextGenerator::GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                                              uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                                                                                              ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                                              ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                                                                                              ::ByRef<bool> isUsingAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetTextElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextElement*, false>(this, ___internal_method, generationSettings, unicode, fontAsset, fontStyle, fontWeight,
                                                                                                 isUsingAlternativeTypeface);
}
inline void UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize(::UnityEngine::Rect rect, ::UnityEngine::Vector4 margins) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "ComputeMarginSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rect, margins);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetSpecialCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetEllipsisSpecialCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetUnderlineSpecialCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                                     ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "GetPreferredValuesInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, generationSettings, textInfo);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues(::ByRef<float_t> fontSize, ::UnityEngine::Vector2 marginSize, bool isTextAutoSizingEnabled,
                                                                                                   ::UnityEngine::TextCore::Text::TextWrappingMode textWrapMode,
                                                                                                   ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                                                   ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, fontSize, marginSize, isTextAutoSizingEnabled, textWrapMode, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::PopulateTextBackingArray(::StringW sourceText) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextBackingArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceText);
}
inline void UnityEngine::TextCore::Text::TextGenerator::PopulateTextBackingArray(::StringW sourceText, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextBackingArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceText, start, length);
}
inline void UnityEngine::TextCore::Text::TextGenerator::PopulateTextProcessingArray(::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "PopulateTextProcessingArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generationSettings);
}
inline void UnityEngine::TextCore::Text::TextGenerator::InsertNewLine(int32_t i, float_t baseScale, float_t currentElementScale, float_t currentEmScale, float_t boldSpacingAdjustment,
                                                                      float_t characterSpacingAdjustment, float_t width, float_t lineGap, ::ByRef<bool> isMaxVisibleDescenderSet,
                                                                      ::ByRef<float_t> maxVisibleDescender, ::UnityEngine::TextCore::Text::TextGenerationSettings* generationSettings,
                                                                      ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "InsertNewLine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, baseScale, currentElementScale, currentEmScale, boldSpacingAdjustment, characterSpacingAdjustment, width,
                                                          lineGap, isMaxVisibleDescenderSet, maxVisibleDescender, generationSettings, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::DoMissingGlyphCallback(uint32_t unicode, int32_t stringIndex, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                                                               ::UnityEngine::TextCore::Text::TextInfo* textInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), "DoMissingGlyphCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, stringIndex, fontAsset, textInfo);
}
inline void UnityEngine::TextCore::Text::TextGenerator::ClearMarkupTagAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(),
                                                                             "ClearMarkupTagAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextGenerator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextGenerator::TextGenerator() {}
