#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSelector___c::*)()>(&::UnityEngine::UIElements::StyleSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector___c._ToString_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelector___c::*)(::UnityEngine::UIElements::StyleSelectorPart)>(
    &::UnityEngine::UIElements::StyleSelector___c::_ToString_b__10_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get(), "<ToString>b__10_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSelector___c::setStaticF___9(::UnityEngine::UIElements::StyleSelector___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSelector___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get>(
      std::forward<::UnityEngine::UIElements::StyleSelector___c*>(value));
}
inline ::UnityEngine::UIElements::StyleSelector___c* UnityEngine::UIElements::StyleSelector___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSelector___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get>();
}
inline void UnityEngine::UIElements::StyleSelector___c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* UnityEngine::UIElements::StyleSelector___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get>();
}
inline void UnityEngine::UIElements::StyleSelector___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleSelector___c::_ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector___c*>::get(), "<ToString>b__10_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, p);
}
inline ::UnityEngine::UIElements::StyleSelector___c* UnityEngine::UIElements::StyleSelector___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSelector___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelector___c::StyleSelector___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.get_parts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> (
    ::UnityEngine::UIElements::StyleSelector::*)()>(&::UnityEngine::UIElements::StyleSelector::get_parts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8cdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "get_parts",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.set_parts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)(
    ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>)>(&::UnityEngine::UIElements::StyleSelector::set_parts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "set_parts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.get_previousRelationship
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSelectorRelationship (::UnityEngine::UIElements::StyleSelector::*)()>(
    &::UnityEngine::UIElements::StyleSelector::get_previousRelationship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(),
                                                                               "get_previousRelationship", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.set_previousRelationship
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)(::UnityEngine::UIElements::StyleSelectorRelationship)>(
    &::UnityEngine::UIElements::StyleSelector::set_previousRelationship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "set_previousRelationship", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorRelationship>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelector::*)()>(&::UnityEngine::UIElements::StyleSelector::ToString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4a8d60c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)()>(&::UnityEngine::UIElements::StyleSelector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a8d74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_Parts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parts;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> const&
UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_Parts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parts;
}
constexpr void
UnityEngine::UIElements::StyleSelector::__cordl_internal_set_m_Parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Parts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_PreviousRelationship() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousRelationship;
}
constexpr ::UnityEngine::UIElements::StyleSelectorRelationship const& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_PreviousRelationship() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousRelationship;
}
constexpr void UnityEngine::UIElements::StyleSelector::__cordl_internal_set_m_PreviousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousRelationship = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_pseudoStateMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pseudoStateMask;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_pseudoStateMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pseudoStateMask;
}
constexpr void UnityEngine::UIElements::StyleSelector::__cordl_internal_set_pseudoStateMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pseudoStateMask = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_negatedPseudoStateMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negatedPseudoStateMask;
}
constexpr int32_t const& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_negatedPseudoStateMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negatedPseudoStateMask;
}
constexpr void UnityEngine::UIElements::StyleSelector::__cordl_internal_set_negatedPseudoStateMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___negatedPseudoStateMask = value;
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> UnityEngine::UIElements::StyleSelector::get_parts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "get_parts",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::set_parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "set_parts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart, ::Array<::UnityEngine::UIElements::StyleSelectorPart>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleSelectorRelationship UnityEngine::UIElements::StyleSelector::get_previousRelationship() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(),
                                                                             "get_previousRelationship", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorRelationship, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::set_previousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), "set_previousRelationship", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorRelationship>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::StyleSelector::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSelector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSelector* UnityEngine::UIElements::StyleSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleSelector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelector::StyleSelector() {}
