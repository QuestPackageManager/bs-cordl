#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\Allocator2D.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Area::*)(::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIR::Allocator2D_Area::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cd3f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Area*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
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
  this->___allocator = value;
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Area::_ctor(::UnityEngine::RectInt rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Area*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rect);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Area* UnityEngine::UIElements::UIR::Allocator2D_Area::New_ctor(::UnityEngine::RectInt rect) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::Allocator2D_Area*>(rect));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Area::Allocator2D_Area() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Allocator2D_Row* (*)()>(&::UnityEngine::UIElements::UIR::Allocator2D_Row::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cd3fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::Allocator2D_Row*)>(&::UnityEngine::UIElements::UIR::Allocator2D_Row::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6cd4064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(),
                                                                                           { "Reset", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Row._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Row::*)()>(&::UnityEngine::UIElements::UIR::Allocator2D_Row::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cd4028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), { ".ctor", {}, {} })));
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
  this->___area = value;
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
  this->___allocator = value;
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
  this->___next = value;
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*, "pool", ::UnityEngine::UIElements::UIR::Allocator2D_Row*>(
      std::forward<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*>(value));
}
inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>* UnityEngine::UIElements::UIR::Allocator2D_Row::getStaticF_pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D_Row*>*, "pool", ::UnityEngine::UIElements::UIR::Allocator2D_Row*>();
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* UnityEngine::UIElements::UIR::Allocator2D_Row::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::Reset(::UnityEngine::UIElements::UIR::Allocator2D_Row* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), { "Reset", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, row);
}
inline void UnityEngine::UIElements::UIR::Allocator2D_Row::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D_Row* UnityEngine::UIElements::UIR::Allocator2D_Row::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::Allocator2D_Row*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D_Row::Allocator2D_Row() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::*)(
    ::UnityEngine::UIElements::UIR::Allocator2D_Row*, ::UnityEngine::UIElements::UIR::Alloc, int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6cd3c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Allocator2D_Alloc2D::_ctor(::UnityEngine::UIElements::UIR::Allocator2D_Row* row, ::UnityEngine::UIElements::UIR::Alloc alloc, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Row*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, row, alloc, width, height);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D::*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, int32_t)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6cd311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.TryAllocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::Allocator2D::*)(int32_t, int32_t, ::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::TryAllocate)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6cd3734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                            { "TryAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::Allocator2D::*)(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::Free)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6cd3d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.BuildAreas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*, ::UnityEngine::Vector2Int,
                                                                ::UnityEngine::Vector2Int)>(&::UnityEngine::UIElements::UIR::Allocator2D::BuildAreas)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6cd332c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                                                             { "BuildAreas",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.ComputeMaxAllocSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*, int32_t)>(
    &::UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6cd3558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                         { "ComputeMaxAllocSize", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Allocator2D.BuildRowArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*> (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cd3694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(), { "BuildRowArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
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
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*>& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Rows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rows;
}
constexpr ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*> const& UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_get_m_Rows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rows;
}
constexpr void UnityEngine::UIElements::UIR::Allocator2D::__cordl_internal_set_m_Rows(::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rows = value;
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
  this->___m_Areas = value;
}
inline void UnityEngine::UIElements::UIR::Allocator2D::_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minSize, maxSize, rowHeightBias);
}
inline bool UnityEngine::UIElements::UIR::Allocator2D::TryAllocate(int32_t width, int32_t height, ::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D> alloc2D) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                          { "TryAllocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, alloc2D);
}
inline void UnityEngine::UIElements::UIR::Allocator2D::Free(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D alloc2D) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(), { "Free", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc2D);
}
inline void UnityEngine::UIElements::UIR::Allocator2D::BuildAreas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas, ::UnityEngine::Vector2Int minSize,
                                                                  ::UnityEngine::Vector2Int maxSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                                                           { "BuildAreas",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, areas, minSize, maxSize);
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>* areas,
                                                                                                int32_t rowHeightBias) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(),
                          { "ComputeMaxAllocSize", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D_Area*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, areas, rowHeightBias);
}
inline ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*> UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray(int32_t maxRowHeight, int32_t rowHeightBias) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Allocator2D*>(), { "BuildRowArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D_Row*>>(nullptr, ___internal_method, maxRowHeight, rowHeightBias);
}
inline ::UnityEngine::UIElements::UIR::Allocator2D* UnityEngine::UIElements::UIR::Allocator2D::New_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int32_t rowHeightBias) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::Allocator2D*>(minSize, maxSize, rowHeightBias));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Allocator2D::Allocator2D() {}
