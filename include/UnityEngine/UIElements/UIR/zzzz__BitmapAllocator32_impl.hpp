#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BitmapAllocator32.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Construct)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6abf85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.ForceFirstAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(uint16_t, uint16_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6abf970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "ForceFirstAlloc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(
    ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x6abfb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Free)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6ac004c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac019c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                               "get_entryWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac01a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                               "get_entryHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.GetAllocPageAtlasLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, ::ByRef<uint16_t>, ::ByRef<uint16_t>)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ac01ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "GetAllocPageAtlasLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.CountTrailingZeroes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6abffe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "CountTrailingZeroes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pageHeight, entryWidth, entryHeight);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "ForceFirstAlloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstPageX, firstPageY);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* storage) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc, false>(this, ___internal_method, storage);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Free(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                             "get_entryWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                             "get_entryHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation(int32_t page, ::ByRef<uint16_t> x, ::ByRef<uint16_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "GetAllocPageAtlasLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page, x, y);
}
inline uint8_t UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes(uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "CountTrailingZeroes",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, val);
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
