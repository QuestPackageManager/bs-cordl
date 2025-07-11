#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleComplexSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Hashes_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_impl.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData::*)(
    ::UnityEngine::UIElements::PseudoStates, bool)>(&::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a8cdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleComplexSelector_PseudoStateData::_ctor(::UnityEngine::UIElements::PseudoStates state, bool negate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PseudoStates>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, negate);
}
// Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: Some("{}") }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData::StyleComplexSelector_PseudoStateData(::UnityEngine::UIElements::PseudoStates state, bool negate) noexcept {
  this->state = state;
  this->negate = negate;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData::StyleComplexSelector_PseudoStateData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector___c::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector___c._ToString_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleComplexSelector___c::*)(::UnityEngine::UIElements::StyleSelector*)>(
    &::UnityEngine::UIElements::StyleComplexSelector___c::_ToString_b__24_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a8d584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(), "<ToString>b__24_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector___c._CalculateHashes_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleComplexSelector___c::*)(::UnityEngine::UIElements::StyleSelectorPart)>(
    &::UnityEngine::UIElements::StyleComplexSelector___c::_CalculateHashes_b__27_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a8d5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(), "<CalculateHashes>b__27_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleComplexSelector___c::setStaticF___9(::UnityEngine::UIElements::StyleComplexSelector___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleComplexSelector___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>(
      std::forward<::UnityEngine::UIElements::StyleComplexSelector___c*>(value));
}
inline ::UnityEngine::UIElements::StyleComplexSelector___c* UnityEngine::UIElements::StyleComplexSelector___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleComplexSelector___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>();
}
inline void UnityEngine::UIElements::StyleComplexSelector___c::setStaticF___9__24_0(::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>* UnityEngine::UIElements::StyleComplexSelector___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelector*, ::StringW>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>();
}
inline void UnityEngine::UIElements::StyleComplexSelector___c::setStaticF___9__27_0(::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>*, "<>9__27_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>* UnityEngine::UIElements::StyleComplexSelector___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::StyleSelectorPart>*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get>();
}
inline void UnityEngine::UIElements::StyleComplexSelector___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleComplexSelector___c::_ToString_b__24_0(::UnityEngine::UIElements::StyleSelector* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(), "<ToString>b__24_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline bool UnityEngine::UIElements::StyleComplexSelector___c::_CalculateHashes_b__27_0(::UnityEngine::UIElements::StyleSelectorPart p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector___c*>::get(), "<CalculateHashes>b__27_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
inline ::UnityEngine::UIElements::StyleComplexSelector___c* UnityEngine::UIElements::StyleComplexSelector___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleComplexSelector___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleComplexSelector___c::StyleComplexSelector___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.get_specificity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::get_specificity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8c8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "get_specificity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.get_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleRule* (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::get_rule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8c8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "get_rule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.set_rule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)(::UnityEngine::UIElements::StyleRule*)>(
    &::UnityEngine::UIElements::StyleComplexSelector::set_rule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8c8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "set_rule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.get_isSimple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::get_isSimple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8c8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "get_isSimple", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.get_selectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> (
    ::UnityEngine::UIElements::StyleComplexSelector::*)()>(&::UnityEngine::UIElements::StyleComplexSelector::get_selectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8c8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "get_selectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.set_selectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)(
    ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>)>(&::UnityEngine::UIElements::StyleComplexSelector::set_selectors)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a8c8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "set_selectors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a8c908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a8c90c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.CachePseudoStateMasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::CachePseudoStateMasks)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x4a8c934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "CachePseudoStateMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::ToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4a8ce14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.StyleSelectorPartCompare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::StyleSelectorPart, ::UnityEngine::UIElements::StyleSelectorPart)>(
    &::UnityEngine::UIElements::StyleComplexSelector::StyleSelectorPartCompare)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4a8cf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "StyleSelectorPartCompare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector.CalculateHashes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::CalculateHashes)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x4a8cfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                               "CalculateHashes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleComplexSelector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleComplexSelector::*)()>(
    &::UnityEngine::UIElements::StyleComplexSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a8d48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Hashes& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_ancestorHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ancestorHashes;
}
constexpr ::UnityEngine::UIElements::Hashes const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_ancestorHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ancestorHashes;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_ancestorHashes(::UnityEngine::UIElements::Hashes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ancestorHashes = value;
}
constexpr int32_t& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_Specificity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Specificity;
}
constexpr int32_t const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_Specificity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Specificity;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_m_Specificity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Specificity = value;
}
constexpr ::UnityEngine::UIElements::StyleRule*& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get__rule_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule_k__BackingField;
}
constexpr ::UnityEngine::UIElements::StyleRule* const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get__rule_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set__rule_k__BackingField(::UnityEngine::UIElements::StyleRule* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rule_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_isSimple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSimple;
}
constexpr bool const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_isSimple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isSimple;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_m_isSimple(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isSimple = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_Selectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Selectors;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> const&
UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_m_Selectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Selectors;
}
constexpr void
UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_m_Selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Selectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_ruleIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ruleIndex;
}
constexpr int32_t const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_ruleIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ruleIndex;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_ruleIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ruleIndex = value;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector*& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_nextInTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextInTable;
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector* const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_nextInTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextInTable;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_nextInTable(::UnityEngine::UIElements::StyleComplexSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextInTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_orderInStyleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orderInStyleSheet;
}
constexpr int32_t const& UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_get_orderInStyleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orderInStyleSheet;
}
constexpr void UnityEngine::UIElements::StyleComplexSelector::__cordl_internal_set_orderInStyleSheet(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___orderInStyleSheet = value;
}
inline void UnityEngine::UIElements::StyleComplexSelector::setStaticF_s_PseudoStates(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>*, "s_PseudoStates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>*
UnityEngine::UIElements::StyleComplexSelector::getStaticF_s_PseudoStates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>*, "s_PseudoStates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get>();
}
inline void UnityEngine::UIElements::StyleComplexSelector::setStaticF_m_HashList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*, "m_HashList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>* UnityEngine::UIElements::StyleComplexSelector::getStaticF_m_HashList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSelectorPart>*, "m_HashList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get>();
}
inline int32_t UnityEngine::UIElements::StyleComplexSelector::get_specificity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "get_specificity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleRule* UnityEngine::UIElements::StyleComplexSelector::get_rule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "get_rule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRule*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleComplexSelector::set_rule(::UnityEngine::UIElements::StyleRule* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "set_rule", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::StyleComplexSelector::get_isSimple() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "get_isSimple", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> UnityEngine::UIElements::StyleComplexSelector::get_selectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "get_selectors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleComplexSelector::set_selectors(::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "set_selectors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleSelector*, ::Array<::UnityEngine::UIElements::StyleSelector*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleComplexSelector::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleComplexSelector::OnAfterDeserialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleComplexSelector::CachePseudoStateMasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "CachePseudoStateMasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleComplexSelector::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::StyleComplexSelector::StyleSelectorPartCompare(::UnityEngine::UIElements::StyleSelectorPart x, ::UnityEngine::UIElements::StyleSelectorPart y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), "StyleSelectorPartCompare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSelectorPart>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::UIElements::StyleComplexSelector::CalculateHashes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(),
                                                                             "CalculateHashes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleComplexSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleComplexSelector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleComplexSelector* UnityEngine::UIElements::StyleComplexSelector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::StyleComplexSelector*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::UIElements::StyleComplexSelector::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UIElements::StyleComplexSelector::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleComplexSelector::StyleComplexSelector() {}
