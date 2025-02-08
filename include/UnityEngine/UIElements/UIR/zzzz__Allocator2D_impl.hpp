#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Allocator2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Area._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Area::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::UIR::Allocator2D_Area::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x49ab780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Area*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_get_rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_get_rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_set_rect(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rect = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_get_allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_get_allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Area::__cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Area::_ctor(::UnityEngine::RectInt rect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Area*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rect);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Area* UnityEngine::UIElements::UIR::Allocator2D_Area::New_ctor(::UnityEngine::RectInt rect) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Allocator2D_Area*>(rect));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area::Allocator2D_Area() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Allocator2D_Row* (*)()>(&::UnityEngine::UIElements::UIR::Allocator2D_Row::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x49ab800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(),
                                                                               "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::Allocator2D_Row*)>(
    &::UnityEngine::UIElements::UIR::Allocator2D_Row::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x49ab898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Row::*)()>(
    &::UnityEngine::UIElements::UIR::Allocator2D_Row::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x49ab850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rect;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_set_rect(::UnityEngine::RectInt value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rect = value;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area*& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_area() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___area;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area* const& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_area() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___area;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_set_area(::UnityEngine::UIElements::UIR::Allocator2D_Area* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___area)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocator;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_set_allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::Alloc& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_alloc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alloc;
}
constexpr ::UnityEngine::UIElements::UIR::Alloc const& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_alloc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alloc;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_set_alloc(::UnityEngine::UIElements::UIR::Alloc value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alloc = value;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row*& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row* const& UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D_Row::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::Allocator2D_Row* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*, "pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get>(
      std::forward<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>(value));
}
inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* UnityEngine::UIElements::UIR::Allocator2D_Row::getStaticF_pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*, "pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get>();
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* UnityEngine::UIElements::UIR::Allocator2D_Row::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Allocator2D_Row*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::Reset(::UnityEngine::UIElements::UIR::Allocator2D_Row* row) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, row);
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* UnityEngine::UIElements::UIR::Allocator2D_Row::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Allocator2D_Row*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row::Allocator2D_Row() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::*)(
    ::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::UnityEngine::UIElements::UIR::Alloc, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x49ab47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::_ctor(::UnityEngine::UIElements::UIR::Allocator2D_Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Row*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, alloc, width, height);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}") }, CppParam { name: "row", ty: "::UnityEngine::UIElements::UIR::Allocator2D_Row*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::Allocator2D_Alloc2D(::UnityEngine::RectInt rect, ::UnityEngine::UIElements::UIR::Allocator2D_Row* row,
                                                                                   ::UnityEngine::UIElements::UIR::Alloc alloc) noexcept {
  this->rect = rect;
  this->row = row;
  this->alloc = alloc;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::Allocator2D_Alloc2D() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D::*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, int32_t)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x49aa9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.TryAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::Allocator2D::*)(
    int32_t, int32_t, ::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>)>(&::UnityEngine::UIElements::UIR::Allocator2D::TryAllocate)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x49aafc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "TryAllocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D::*)(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::Free)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x49ab584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.BuildAreas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(
        &::UnityEngine::UIElements::UIR::Allocator2D::BuildAreas)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x49aac10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "BuildAreas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.ComputeMaxAllocSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*, int32_t)>(&::UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x49aae3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "ComputeMaxAllocSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.BuildRowArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> (*)(int32_t, int32_t)>(
        &::UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x49aaf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "BuildRowArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MinSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MinSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinSize;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_MinSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinSize = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_MaxSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MaxAllocSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAllocSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_MaxAllocSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxAllocSize;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_MaxAllocSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxAllocSize = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_RowHeightBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RowHeightBias;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_RowHeightBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RowHeightBias;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_RowHeightBias(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RowHeightBias = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>&
UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Rows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rows;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> const&
UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Rows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rows;
}
constexpr void
UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_Rows(::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Areas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Areas;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Areas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Areas;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_Areas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Areas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIR::Allocator2D::_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minSize, maxSize, rowHeightBias);
}
inline bool UnityEngine::UIElements::UIR::Allocator2D::TryAllocate(int32_t width, int32_t height, ::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D> alloc2D) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "TryAllocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, alloc2D);
}
inline void UnityEngine::UIElements::UIR::Allocator2D::Free(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D alloc2D) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc2D);
}
inline void UnityEngine::UIElements::UIR::Allocator2D::BuildAreas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas, ::UnityEngine::Vector2Int minSize,
                                                                  ::UnityEngine::Vector2Int maxSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "BuildAreas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, areas, minSize, maxSize);
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas,
                                                                                                int32_t rowHeightBias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "ComputeMaxAllocSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(nullptr, ___internal_method, areas, rowHeightBias);
}
inline ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>
UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray(int32_t maxRowHeight, int32_t rowHeightBias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Allocator2D*>::get(), "BuildRowArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::Array<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>, false>(
      nullptr, ___internal_method, maxRowHeight, rowHeightBias);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D* UnityEngine::UIElements::UIR::Allocator2D::New_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::Allocator2D*>(minSize, maxSize, rowHeightBias));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D::Allocator2D() {}
