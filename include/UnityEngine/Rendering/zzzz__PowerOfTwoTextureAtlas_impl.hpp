#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PowerOfTwoTextureAtlas.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PowerOfTwoTextureAtlas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__PowerOfTwoTextureAtlas_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::PowerOfTwoTextureAtlas_BlitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::PowerOfTwoTextureAtlas_BlitType() {}
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::Padding{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::PaddingMultiply{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::OctahedralPadding{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType::OctahedralPaddingMultiply{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::*)()>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a55f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c._RelayoutEntries_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::*)(::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>,
                                                                                                                         ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::_RelayoutEntries_b__23_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67a55fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(),
                            { "<RelayoutEntries>b__23_0",
                              {},
                              { ::i2c::type_of<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>(), ::i2c::type_of<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::setStaticF___9(::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*, "<>9", ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(
      std::forward<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(value));
}
inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*, "<>9", ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>();
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::setStaticF___9__23_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*, "<>9__23_0", ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>* UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>*, "<>9__23_0", ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>();
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::_RelayoutEntries_b__23_0(::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c1,
                                                                                            ::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int> c2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>(),
                          { "<RelayoutEntries>b__23_0",
                            {},
                            { ::i2c::type_of<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>(), ::i2c::type_of<::System::ValueTuple_2<int32_t, ::UnityEngine::Vector2Int>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c1, c2);
}
inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c* UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas___c::PowerOfTwoTextureAtlas___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::StringW, bool)>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x67a4010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.get_mipPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::get_mipPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a4134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "get_mipPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetTexturePadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetTexturePadding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67a413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "GetTexturePadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPayloadScaleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x67a416c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                             { "GetPayloadScaleOffset", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPayloadScaleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67a42c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                            { "GetPayloadScaleOffset",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.Blit2DTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::Blit2DTexture)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x67a4300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                         { "Blit2DTexture",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                             ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4,
                                                                                                                  ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTexture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67a4688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitTextureMultiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4,
                                                                                                                  ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTextureMultiply)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67a4794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                { "BlitTextureMultiply",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitOctahedralTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4,
                                                                                                                  ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTexture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67a48a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.BlitOctahedralTextureMultiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4,
                                                                                                                  ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTextureMultiply)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x67a49ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                { "BlitOctahedralTextureMultiply",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.TextureSizeToPowerOfTwo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::TextureSizeToPowerOfTwo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67a4ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                         { "TextureSizeToPowerOfTwo", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetPowerOfTwoTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPowerOfTwoTextureSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67a423c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "GetPowerOfTwoTextureSize", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.AllocateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Vector4>,
                                                                                                                  ::UnityEngine::Texture*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::AllocateTexture)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x67a4b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ResetRequestedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ResetRequestedTexture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67a4cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "ResetRequestedTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67a4db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                             { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67a4f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                            { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.ReserveSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x67a4df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                             { "ReserveSpace", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.RelayoutEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PowerOfTwoTextureAtlas::*)()>(&::UnityEngine::Rendering::PowerOfTwoTextureAtlas::RelayoutEntries)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x67a4f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "RelayoutEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetApproxCacheSizeInByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, bool, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetApproxCacheSizeInByte)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67a5398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                            { "GetApproxCacheSizeInByte",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PowerOfTwoTextureAtlas.GetMaxCacheSizeForWeightInByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetMaxCacheSizeForWeightInByte)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x67a5480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                         { "GetMaxCacheSizeForWeightInByte", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_MipPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MipPadding;
}
constexpr int32_t const& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_MipPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MipPadding;
}
constexpr void UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_set_m_MipPadding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MipPadding = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>*& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_RequestedTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextures;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* const& UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_get_m_RequestedTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestedTextures;
}
constexpr void UnityEngine::Rendering::PowerOfTwoTextureAtlas::__cordl_internal_set_m_RequestedTextures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Vector2Int>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestedTextures = value;
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::_ctor(int32_t size, int32_t mipPadding, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode,
                                                                  ::StringW name, bool useMipMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, mipPadding, format, filterMode, name, useMipMap);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::get_mipPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "get_mipPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetTexturePadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "GetTexturePadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset(::UnityEngine::Texture* texture, ::by_ref<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                           { "GetPayloadScaleOffset", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, texture, scaleOffset);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPayloadScaleOffset(::by_ref<::UnityEngine::Vector2> textureSize, ::by_ref<::UnityEngine::Vector2> paddingSize,
                                                                                                    ::by_ref<::UnityEngine::Vector4> scaleOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                          { "GetPayloadScaleOffset",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, textureSize, paddingSize, scaleOffset);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                          ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, ::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType blitType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                              { "Blit2DTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas_BlitType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, blitType);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                        ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                                ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                              { "BlitTextureMultiply",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture,
                                                                                  ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int32_t overrideInstanceID) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::BlitOctahedralTextureMultiply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset,
                                                                                          ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips,
                                                                                          int32_t overrideInstanceID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                              { "BlitOctahedralTextureMultiply",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::TextureSizeToPowerOfTwo(::UnityEngine::Texture* texture, ::by_ref<int32_t> width, ::by_ref<int32_t> height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                       { "TextureSizeToPowerOfTwo", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture, width, height);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetPowerOfTwoTextureSize(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "GetPowerOfTwoTextureSize", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture,
                                                                            int32_t width, int32_t height, int32_t overrideInstanceID) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, scaleOffset, texture, width, height, overrideInstanceID);
}
inline void UnityEngine::Rendering::PowerOfTwoTextureAtlas::ResetRequestedTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "ResetRequestedTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* texture, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                           { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(::UnityEngine::Texture* textureA, ::UnityEngine::Texture* textureB, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                          { "ReserveSpace", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, textureA, textureB, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::ReserveSpace(int32_t id, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                                                                                         { "ReserveSpace", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, width, height);
}
inline bool UnityEngine::Rendering::PowerOfTwoTextureAtlas::RelayoutEntries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "RelayoutEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetApproxCacheSizeInByte(int32_t nbElement, int32_t resolution, bool hasMipmap,
                                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(), { "GetApproxCacheSizeInByte",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                                                        ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, nbElement, resolution, hasMipmap, format);
}
inline int32_t UnityEngine::Rendering::PowerOfTwoTextureAtlas::GetMaxCacheSizeForWeightInByte(int32_t weight, bool hasMipmap, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(),
                          { "GetMaxCacheSizeForWeightInByte", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, weight, hasMipmap, format);
}
inline ::UnityEngine::Rendering::PowerOfTwoTextureAtlas* UnityEngine::Rendering::PowerOfTwoTextureAtlas::New_ctor(int32_t size, int32_t mipPadding,
                                                                                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                                  ::UnityEngine::FilterMode filterMode, ::StringW name, bool useMipMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PowerOfTwoTextureAtlas*>(size, mipPadding, format, filterMode, name, useMipMap));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PowerOfTwoTextureAtlas::PowerOfTwoTextureAtlas() {}
