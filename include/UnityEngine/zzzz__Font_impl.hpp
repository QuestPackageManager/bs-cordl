#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__CharacterInfo_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Font_FontTextureRebuildCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font_FontTextureRebuildCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Font_FontTextureRebuildCallback::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c15268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font_FontTextureRebuildCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font_FontTextureRebuildCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font_FontTextureRebuildCallback::*)()>(&::UnityEngine::Font_FontTextureRebuildCallback::Invoke)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6c152d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Font_FontTextureRebuildCallback*>(), { ::i2c::class_of<::UnityEngine::Font_FontTextureRebuildCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Font_FontTextureRebuildCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font_FontTextureRebuildCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Font_FontTextureRebuildCallback::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Font_FontTextureRebuildCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Font_FontTextureRebuildCallback* UnityEngine::Font_FontTextureRebuildCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Font_FontTextureRebuildCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Font_FontTextureRebuildCallback::Font_FontTextureRebuildCallback() {}
//  Writing Method size for method: ::UnityEngine::Font.add_textureRebuilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Font>>*)>(&::UnityEngine::Font::add_textureRebuilt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c13950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "add_textureRebuilt", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Font>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.remove_textureRebuilt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Font>>*)>(&::UnityEngine::Font::remove_textureRebuilt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c13a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "remove_textureRebuilt", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Font>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.add_m_FontTextureRebuildCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::UnityEngine::Font_FontTextureRebuildCallback*)>(&::UnityEngine::Font::add_m_FontTextureRebuildCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c13b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "add_m_FontTextureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.remove_m_FontTextureRebuildCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::UnityEngine::Font_FontTextureRebuildCallback*)>(&::UnityEngine::Font::remove_m_FontTextureRebuildCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c13bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "remove_m_FontTextureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_material)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c13c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_material", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_material
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::UnityEngine::Material*)>(&::UnityEngine::Font::set_material)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6c13df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_fontNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_fontNames)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c13ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_fontNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::ArrayW<::StringW>)>(&::UnityEngine::Font::set_fontNames)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c13fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_fontNames", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_dynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_dynamic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c12644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_dynamic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_ascent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_ascent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c140c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_ascent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_fontSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_characterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::CharacterInfo> (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_characterInfo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6c1423c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_characterInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_characterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::ArrayW<::UnityEngine::CharacterInfo>)>(&::UnityEngine::Font::set_characterInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c143e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_characterInfo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CharacterInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_lineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_lineHeight)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_lineHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_textureRebuildCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Font_FontTextureRebuildCallback* (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_textureRebuildCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c145e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_textureRebuildCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_textureRebuildCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::UnityEngine::Font_FontTextureRebuildCallback*)>(&::UnityEngine::Font::set_textureRebuildCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c145ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_textureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)()>(&::UnityEngine::Font::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c145f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::StringW)>(&::UnityEngine::Font::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6c14784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::ArrayW<::StringW>, int32_t)>(&::UnityEngine::Font::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c14984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.CreateDynamicFontFromOSFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (*)(::StringW, int32_t)>(&::UnityEngine::Font::CreateDynamicFontFromOSFont)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c14a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "CreateDynamicFontFromOSFont", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.CreateDynamicFontFromOSFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (*)(::ArrayW<::StringW>, int32_t)>(&::UnityEngine::Font::CreateDynamicFontFromOSFont)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c14b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "CreateDynamicFontFromOSFont", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.InvokeTextureRebuilt_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*)>(&::UnityEngine::Font::InvokeTextureRebuilt_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c14b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "InvokeTextureRebuilt_Internal", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetMaxVertsForString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::Font::GetMaxVertsForString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c14c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetMaxVertsForString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (*)()>(&::UnityEngine::Font::GetDefault)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6c14c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)(char16_t)>(&::UnityEngine::Font::HasCharacter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c14d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.HasCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)(int32_t)>(&::UnityEngine::Font::HasCharacter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c14d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetOSInstalledFontNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::Font::GetOSInstalledFontNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c14e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetOSInstalledFontNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetPathsToOSFonts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::Font::GetPathsToOSFonts)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c14e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetPathsToOSFonts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetOSFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::Font::GetOSFallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c14e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetOSFallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.Internal_CreateFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*, ::StringW)>(&::UnityEngine::Font::Internal_CreateFont)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c14650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "Internal_CreateFont", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.Internal_CreateFontFromPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*, ::StringW)>(&::UnityEngine::Font::Internal_CreateFontFromPath)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6c14850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "Internal_CreateFontFromPath", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.Internal_CreateDynamicFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*, ::ArrayW<::StringW>, int32_t)>(&::UnityEngine::Font::Internal_CreateDynamicFont)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c14a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                                { "Internal_CreateDynamicFont", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetCharacterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)(char16_t, ::by_ref<::UnityEngine::CharacterInfo>, int32_t, ::UnityEngine::FontStyle)>(
    &::UnityEngine::Font::GetCharacterInfo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c14f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetCharacterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)(char16_t, ::by_ref<::UnityEngine::CharacterInfo>, int32_t)>(&::UnityEngine::Font::GetCharacterInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c15060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                                { "GetCharacterInfo", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetCharacterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Font::*)(char16_t, ::by_ref<::UnityEngine::CharacterInfo>)>(&::UnityEngine::Font::GetCharacterInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c15068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.RequestCharactersInTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::StringW, int32_t, ::UnityEngine::FontStyle)>(&::UnityEngine::Font::RequestCharactersInTexture)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6c15074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                                { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.RequestCharactersInTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::StringW, int32_t)>(&::UnityEngine::Font::RequestCharactersInTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c15254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.RequestCharactersInTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Font::*)(::StringW)>(&::UnityEngine::Font::RequestCharactersInTexture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c1525c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_material_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Font::get_material_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c13db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_material_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_material_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Font::set_material_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c13eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_material_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_fontNames_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IntPtr)>(&::UnityEngine::Font::get_fontNames_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c13f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_fontNames_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::StringW>)>(&::UnityEngine::Font::set_fontNames_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c14044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_fontNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_dynamic_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Font::get_dynamic_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c14088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_dynamic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_ascent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Font::get_ascent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c14144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_ascent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_fontSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Font::get_fontSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c14200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_characterInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Font::get_characterInfo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c1439c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                         { "get_characterInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.set_characterInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Font::set_characterInfo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c144e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                         { "set_characterInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_lineHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Font::get_lineHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c145a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_lineHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetDefault_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Font::GetDefault_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c14d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetDefault_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.HasCharacter_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Font::HasCharacter_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c14e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.Internal_CreateFont_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Font::Internal_CreateFont_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c14ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                         { "Internal_CreateFont_Injected", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.Internal_CreateFontFromPath_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Font::Internal_CreateFontFromPath_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c14f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                            { "Internal_CreateFontFromPath_Injected", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.GetCharacterInfo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, char16_t, ::by_ref<::UnityEngine::CharacterInfo>, int32_t, ::UnityEngine::FontStyle)>(
    &::UnityEngine::Font::GetCharacterInfo_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c14ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo_Injected",
                                                                       {},
                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(),
                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.RequestCharactersInTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::UnityEngine::FontStyle)>(
    &::UnityEngine::Font::RequestCharactersInTexture_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c151f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& UnityEngine::Font::__cordl_internal_get_m_FontTextureRebuildCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontTextureRebuildCallback;
}
constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& UnityEngine::Font::__cordl_internal_get_m_FontTextureRebuildCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontTextureRebuildCallback;
}
constexpr void UnityEngine::Font::__cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontTextureRebuildCallback = value;
}
inline void UnityEngine::Font::setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Font>>*, "textureRebuilt", ::UnityEngine::Font*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::Font>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* UnityEngine::Font::getStaticF_textureRebuilt() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Font>>*, "textureRebuilt", ::UnityEngine::Font*>();
}
inline void UnityEngine::Font::add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "add_textureRebuilt", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Font>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Font::remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "remove_textureRebuilt", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Font>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Font::add_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "add_m_FontTextureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Font::remove_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "remove_m_FontTextureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Font::get_material() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_material", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Font::set_material(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_material", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> UnityEngine::Font::get_fontNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Font::set_fontNames(::ArrayW<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_fontNames", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Font::get_dynamic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_dynamic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Font::get_ascent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_ascent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Font::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::CharacterInfo> UnityEngine::Font::get_characterInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_characterInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::CharacterInfo>>(this, ___internal_method);
}
inline void UnityEngine::Font::set_characterInfo(::ArrayW<::UnityEngine::CharacterInfo> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_characterInfo", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::CharacterInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Font::get_lineHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_lineHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Font_FontTextureRebuildCallback* UnityEngine::Font::get_textureRebuildCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_textureRebuildCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Font_FontTextureRebuildCallback*>(this, ___internal_method);
}
inline void UnityEngine::Font::set_textureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_textureRebuildCallback", {}, { ::i2c::type_of<::UnityEngine::Font_FontTextureRebuildCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Font::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Font::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Font::_ctor(::ArrayW<::StringW> names, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, names, size);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::Font::CreateDynamicFontFromOSFont(::StringW fontname, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "CreateDynamicFontFromOSFont", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(nullptr, ___internal_method, fontname, size);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::Font::CreateDynamicFontFromOSFont(::ArrayW<::StringW> fontnames, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "CreateDynamicFontFromOSFont", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(nullptr, ___internal_method, fontnames, size);
}
inline void UnityEngine::Font::InvokeTextureRebuilt_Internal(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "InvokeTextureRebuilt_Internal", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, font);
}
inline int32_t UnityEngine::Font::GetMaxVertsForString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetMaxVertsForString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::Font::GetDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Font::HasCharacter(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool UnityEngine::Font::HasCharacter(int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::ArrayW<::StringW> UnityEngine::Font::GetOSInstalledFontNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetOSInstalledFontNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Font::GetPathsToOSFonts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetPathsToOSFonts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Font::GetOSFallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetOSFallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void UnityEngine::Font::Internal_CreateFont(::UnityEngine::Font* self, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "Internal_CreateFont", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, name);
}
inline void UnityEngine::Font::Internal_CreateFontFromPath(::UnityEngine::Font* self, ::StringW fontPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "Internal_CreateFontFromPath", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, fontPath);
}
inline void UnityEngine::Font::Internal_CreateDynamicFont(::UnityEngine::Font* self, ::ArrayW<::StringW> _names, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                              { "Internal_CreateDynamicFont", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, _names, size);
}
inline bool UnityEngine::Font::GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, int32_t size, ::UnityEngine::FontStyle style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch, info, size, style);
}
inline bool UnityEngine::Font::GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                              { "GetCharacterInfo", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch, info, size);
}
inline bool UnityEngine::Font::GetCharacterInfo(char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch, info);
}
inline void UnityEngine::Font::RequestCharactersInTexture(::StringW characters, int32_t size, ::UnityEngine::FontStyle style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                              { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characters, size, style);
}
inline void UnityEngine::Font::RequestCharactersInTexture(::StringW characters, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characters, size);
}
inline void UnityEngine::Font::RequestCharactersInTexture(::StringW characters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characters);
}
inline ::System::IntPtr UnityEngine::Font::get_material_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_material_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Font::set_material_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_material_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::ArrayW<::StringW> UnityEngine::Font::get_fontNames_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Font::set_fontNames_Injected(::System::IntPtr _unity_self, ::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "set_fontNames_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Font::get_dynamic_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_dynamic_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Font::get_ascent_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_ascent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Font::get_fontSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_fontSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Font::get_characterInfo_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                       { "get_characterInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Font::set_characterInfo_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                              { "set_characterInfo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Font::get_lineHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "get_lineHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Font::GetDefault_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetDefault_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::Font::HasCharacter_Injected(::System::IntPtr _unity_self, int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "HasCharacter_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, c);
}
inline void UnityEngine::Font::Internal_CreateFont_Injected(::UnityEngine::Font* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                                       { "Internal_CreateFont_Injected", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, name);
}
inline void UnityEngine::Font::Internal_CreateFontFromPath_Injected(::UnityEngine::Font* self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fontPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(),
                          { "Internal_CreateFontFromPath_Injected", {}, { ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, fontPath);
}
inline bool UnityEngine::Font::GetCharacterInfo_Injected(::System::IntPtr _unity_self, char16_t ch, ::by_ref<::UnityEngine::CharacterInfo> info, int32_t size, ::UnityEngine::FontStyle style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "GetCharacterInfo_Injected",
                                                                     {},
                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::UnityEngine::CharacterInfo>>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, ch, info, size, style);
}
inline void UnityEngine::Font::RequestCharactersInTexture_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> characters, int32_t size,
                                                                   ::UnityEngine::FontStyle style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Font*>(), { "RequestCharactersInTexture_Injected",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, characters, size, style);
}
inline ::UnityEngine::Font* UnityEngine::Font::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Font*>());
}
inline ::UnityEngine::Font* UnityEngine::Font::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Font*>(name));
}
inline ::UnityEngine::Font* UnityEngine::Font::New_ctor(::ArrayW<::StringW> names, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Font*>(names, size));
}
// Ctor Parameters []
constexpr ::UnityEngine::Font::Font() {}
