#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RepaintData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RepaintData_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_currentOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::UIElements::RepaintData::*)()>(
    &::UnityEngine::UIElements::RepaintData::get_currentOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4a429cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(),
                                                                               "get_currentOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_currentWorldClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::RepaintData::*)()>(
    &::UnityEngine::UIElements::RepaintData::get_currentWorldClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4a429e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(),
                                                                               "get_currentWorldClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_repaintEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Event* (::UnityEngine::UIElements::RepaintData::*)()>(
    &::UnityEngine::UIElements::RepaintData::get_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a429ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(),
                                                                               "get_repaintEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.set_repaintEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RepaintData::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::RepaintData::set_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a429f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(), "set_repaintEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RepaintData::*)()>(&::UnityEngine::UIElements::RepaintData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4a429fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOffset_k__BackingField;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOffset_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__currentOffset_k__BackingField(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentOffset_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::RepaintData::__cordl_internal_get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mousePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentWorldClip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWorldClip_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentWorldClip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWorldClip_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__currentWorldClip_k__BackingField(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentWorldClip_k__BackingField = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::RepaintData::__cordl_internal_get__repaintEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintEvent_k__BackingField;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__repaintEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintEvent_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__repaintEvent_k__BackingField(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____repaintEvent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::RepaintData::get_currentOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(),
                                                                             "get_currentOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::RepaintData::get_currentWorldClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(),
                                                                             "get_currentWorldClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline ::UnityEngine::Event* UnityEngine::UIElements::RepaintData::get_repaintEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(), "get_repaintEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Event*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RepaintData::set_repaintEvent(::UnityEngine::Event* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(), "set_repaintEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RepaintData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RepaintData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepaintData* UnityEngine::UIElements::RepaintData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RepaintData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RepaintData::RepaintData() {}
