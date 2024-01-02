#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "freeSlots", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page::__BitmapAllocator32__Page(uint16_t x, uint16_t y, int32_t freeSlots) noexcept {
  this->x = x;
  this->y = y;
  this->freeSlots = freeSlots;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page::__BitmapAllocator32__Page() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Construct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Construct)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2e8800c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Construct", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.ForceFirstAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(uint16_t, uint16_t)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2e8811c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "ForceFirstAlloc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(
    ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2e882e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Allocate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::Free)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2e88768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Free", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e888ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                               "get_entryWidth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e888b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                               "get_entryHeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.GetAllocPageAtlasLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, ByRef<uint16_t>, ByRef<uint16_t>)>(
    &::UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e888bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "GetAllocPageAtlasLocation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BitmapAllocator32.CountTrailingZeroes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint32_t)>(&::UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e88704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "CountTrailingZeroes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
/// @param entryWidth: int32_t (default: static_cast<int32_t>(0x1))
/// @param entryHeight: int32_t (default: static_cast<int32_t>(0x1))
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Construct", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pageHeight, entryWidth, entryHeight);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "ForceFirstAlloc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstPageX, firstPageY);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* storage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Allocate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc, false>(this, ___internal_method, storage);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::Free(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "Free", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                             "get_entryWidth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                                                                             "get_entryHeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation(int32_t page, ByRef<uint16_t> x, ByRef<uint16_t> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "GetAllocPageAtlasLocation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, page, x, y);
}
inline uint8_t UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes(uint32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BitmapAllocator32>::get(), "CountTrailingZeroes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, val);
}
// Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Pages", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_AllocMap", ty:
// "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32::BitmapAllocator32(int32_t m_PageHeight,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>* m_Pages,
                                                                               ::System::Collections::Generic::List_1<uint32_t>* m_AllocMap, int32_t m_EntryWidth, int32_t m_EntryHeight) noexcept {
  this->m_PageHeight = m_PageHeight;
  this->m_Pages = m_Pages;
  this->m_AllocMap = m_AllocMap;
  this->m_EntryWidth = m_EntryWidth;
  this->m_EntryHeight = m_EntryHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32::BitmapAllocator32() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
