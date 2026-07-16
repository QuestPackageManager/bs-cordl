#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlas.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_isVariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::U2D::SpriteAtlas::*)()>(&::UnityEngine::U2D::SpriteAtlas::get_isVariant)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b2eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_isVariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::U2D::SpriteAtlas::*)()>(&::UnityEngine::U2D::SpriteAtlas::get_tag)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b2ec40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_tag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_spriteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::U2D::SpriteAtlas::*)()>(&::UnityEngine::U2D::SpriteAtlas::get_spriteCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b2edb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_spriteCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::U2D::SpriteAtlas::*)(::UnityEngine::Sprite*)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6b2ee74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "CanBindTo", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::U2D::SpriteAtlas::*)(::StringW)>(&::UnityEngine::U2D::SpriteAtlas::GetSprite)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6b2ef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSprite", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSprites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::U2D::SpriteAtlas::*)(::ArrayW<::UnityEngine::Sprite*>)>(&::UnityEngine::U2D::SpriteAtlas::GetSprites)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2f278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSprites", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSprites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::U2D::SpriteAtlas::*)(::ArrayW<::UnityEngine::Sprite*>, ::StringW)>(&::UnityEngine::U2D::SpriteAtlas::GetSprites)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b2f30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                                                           { "GetSprites", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSpritesScripting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::U2D::SpriteAtlas::*)(::ArrayW<::UnityEngine::Sprite*>)>(&::UnityEngine::U2D::SpriteAtlas::GetSpritesScripting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b2f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSpritesScripting", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSpritesWithNameScripting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::U2D::SpriteAtlas::*)(::ArrayW<::UnityEngine::Sprite*>, ::StringW)>(
    &::UnityEngine::U2D::SpriteAtlas::GetSpritesWithNameScripting)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6b2f310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                             { "GetSpritesWithNameScripting", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::U2D::SpriteAtlas::*)()>(&::UnityEngine::U2D::SpriteAtlas::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b2f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_isVariant_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::U2D::SpriteAtlas::get_isVariant_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_isVariant_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_tag_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::U2D::SpriteAtlas::get_tag_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2ed74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                { "get_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.get_spriteCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::U2D::SpriteAtlas::get_spriteCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_spriteCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2ef58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                                                           { "CanBindTo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSprite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::U2D::SpriteAtlas::GetSprite_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                { "GetSprite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSpritesScripting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Sprite*>)>(&::UnityEngine::U2D::SpriteAtlas::GetSpritesScripting_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2f48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                             { "GetSpritesScripting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.GetSpritesWithNameScripting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Sprite*>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::U2D::SpriteAtlas::GetSpritesWithNameScripting_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2f4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSpritesWithNameScripting_Injected",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(),
                                                                                                         ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::U2D::SpriteAtlas::get_isVariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_isVariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::U2D::SpriteAtlas::get_tag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_tag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::get_spriteCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_spriteCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::U2D::SpriteAtlas::CanBindTo(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "CanBindTo", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sprite);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::U2D::SpriteAtlas::GetSprite(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSprite", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, name);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSprites(::ArrayW<::UnityEngine::Sprite*> sprites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSprites", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sprites);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSprites(::ArrayW<::UnityEngine::Sprite*> sprites, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                                                         { "GetSprites", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sprites, name);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSpritesScripting(::ArrayW<::UnityEngine::Sprite*> sprites) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSpritesScripting", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sprites);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSpritesWithNameScripting(::ArrayW<::UnityEngine::Sprite*> sprites, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                           { "GetSpritesWithNameScripting", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sprites, name);
}
inline void UnityEngine::U2D::SpriteAtlas::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::U2D::SpriteAtlas::get_isVariant_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_isVariant_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::U2D::SpriteAtlas::get_tag_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                              { "get_tag_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::get_spriteCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "get_spriteCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::U2D::SpriteAtlas::CanBindTo_Injected(::System::IntPtr _unity_self, ::System::IntPtr sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "CanBindTo_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, sprite);
}
inline ::System::IntPtr UnityEngine::U2D::SpriteAtlas::GetSprite_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                              { "GetSprite_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSpritesScripting_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Sprite*> sprites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(),
                                                           { "GetSpritesScripting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, sprites);
}
inline int32_t UnityEngine::U2D::SpriteAtlas::GetSpritesWithNameScripting_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Sprite*> sprites,
                                                                                   ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::U2D::SpriteAtlas*>(), { "GetSpritesWithNameScripting_Injected",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Sprite*>>(),
                                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, sprites, name);
}
inline ::UnityEngine::U2D::SpriteAtlas* UnityEngine::U2D::SpriteAtlas::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::U2D::SpriteAtlas*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteAtlas::SpriteAtlas() {}
