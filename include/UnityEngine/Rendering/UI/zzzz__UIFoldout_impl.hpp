#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/UIFoldout.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__UIFoldout_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6652a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::OnValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6652adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)(bool)>(&::UnityEngine::Rendering::UI::UIFoldout::SetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6652ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "SetState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)(bool, bool)>(&::UnityEngine::Rendering::UI::UIFoldout::SetState)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6652ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::UIFoldout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::UIFoldout::*)()>(&::UnityEngine::Rendering::UI::UIFoldout::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6652ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_content(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowOpened() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowOpened;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowOpened() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowOpened;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_arrowOpened(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arrowOpened)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowClosed;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_get_arrowClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrowClosed;
}
constexpr void UnityEngine::Rendering::UI::UIFoldout::__cordl_internal_set_arrowClosed(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arrowClosed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::UIFoldout::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::UIFoldout::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UI::UIFoldout::SetState(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "SetState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void UnityEngine::Rendering::UI::UIFoldout::SetState(bool state, bool rebuildLayout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, rebuildLayout);
}
inline void UnityEngine::Rendering::UI::UIFoldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::UIFoldout*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::UIFoldout* UnityEngine::Rendering::UI::UIFoldout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::UIFoldout*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::UIFoldout::UIFoldout() {}
