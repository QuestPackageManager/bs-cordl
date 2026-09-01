#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\BitmapAllocator32.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "freeSlots", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32_Page::BitmapAllocator32_Page(uint16_t x, uint16_t y, int32_t freeSlots) noexcept {
  this->x = x;
  this->y = y;
  this->freeSlots = freeSlots;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32_Page::BitmapAllocator32_Page() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Construct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Construct)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6cf3fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                                                                           { "Construct", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.ForceFirstAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(uint16_t, uint16_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6cf40b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "ForceFirstAlloc", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(
    ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x6cf427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                                                                           { "Allocate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Free)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cf4790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf48e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "get_entryWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf48e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "get_entryHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.GetAllocPageAtlasLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, ::by_ref<uint16_t>, ::by_ref<uint16_t>)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cf48f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                                { "GetAllocPageAtlasLocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.CountTrailingZeroes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6cf472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "CountTrailingZeroes", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                                                                         { "Construct", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pageHeight, entryWidth, entryHeight);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "ForceFirstAlloc", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, firstPageX, firstPageY);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* storage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                                                                         { "Allocate", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(*this, ___internal_method, storage);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Free(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alloc);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "get_entryWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "get_entryHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation(int32_t page, ::by_ref<uint16_t> x, ::by_ref<uint16_t> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(),
                                              { "GetAllocPageAtlasLocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, page, x, y);
}
inline uint8_t UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes(uint32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BitmapAllocator32>(), { "CountTrailingZeroes", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, val);
}
// Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Pages", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocMap", ty:
// "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32::BitmapAllocator32(int32_t m_PageHeight,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page>* m_Pages,
                                                                               ::System::Collections::Generic::List_1<uint32_t>* m_AllocMap, int32_t m_EntryWidth, int32_t m_EntryHeight) noexcept {
  this->m_PageHeight = m_PageHeight;
  this->m_Pages = m_Pages;
  this->m_AllocMap = m_AllocMap;
  this->m_EntryWidth = m_EntryWidth;
  this->m_EntryHeight = m_EntryHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32::BitmapAllocator32() {}
