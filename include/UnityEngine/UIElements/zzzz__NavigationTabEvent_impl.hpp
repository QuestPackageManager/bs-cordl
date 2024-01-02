#pragma once
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationTabEvent_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationTabEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationTabEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction::__NavigationTabEvent__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction::__NavigationTabEvent__Direction() {}
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction UnityEngine::UIElements::__NavigationTabEvent__Direction::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction UnityEngine::UIElements::__NavigationTabEvent__Direction::Next{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction UnityEngine::UIElements::__NavigationTabEvent__Direction::Previous{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.set_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)(::UnityEngine::UIElements::__NavigationTabEvent__Direction)>(
    &::UnityEngine::UIElements::NavigationTabEvent::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e530e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigationTabEvent__Direction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.DetermineMoveDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__NavigationTabEvent__Direction (*)(int32_t)>(
    &::UnityEngine::UIElements::NavigationTabEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e530e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "DetermineMoveDirection",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::NavigationTabEvent* (*)(int32_t)>(
    &::UnityEngine::UIElements::NavigationTabEvent::GetPooled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e53104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "GetPooled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)()>(&::UnityEngine::UIElements::NavigationTabEvent::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e53190;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationTabEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationTabEvent::*)()>(&::UnityEngine::UIElements::NavigationTabEvent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2e531e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction& UnityEngine::UIElements::NavigationTabEvent::__get__direction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction const& UnityEngine::UIElements::NavigationTabEvent::__get__direction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
constexpr void UnityEngine::UIElements::NavigationTabEvent::__set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationTabEvent__Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction_k__BackingField = value;
}
inline void UnityEngine::UIElements::NavigationTabEvent::set_direction(::UnityEngine::UIElements::__NavigationTabEvent__Direction value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "set_direction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigationTabEvent__Direction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::__NavigationTabEvent__Direction UnityEngine::UIElements::NavigationTabEvent::DetermineMoveDirection(int32_t moveValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "DetermineMoveDirection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__NavigationTabEvent__Direction, false>(nullptr, ___internal_method, moveValue);
}
inline ::UnityEngine::UIElements::NavigationTabEvent* UnityEngine::UIElements::NavigationTabEvent::GetPooled(int32_t moveValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), "GetPooled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationTabEvent*, false>(nullptr, ___internal_method, moveValue);
}
inline void UnityEngine::UIElements::NavigationTabEvent::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigationTabEvent* UnityEngine::UIElements::NavigationTabEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::NavigationTabEvent*>());
}
inline void UnityEngine::UIElements::NavigationTabEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationTabEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationTabEvent::NavigationTabEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
