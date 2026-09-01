#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelector_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSelector___c::*)()>(&::UnityEngine::UIElements::StyleSelector___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c9bbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector___c._ToString_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelector___c::*)(::UnityEngine::UIElements::StyleSelectorPart)>(
    &::UnityEngine::UIElements::StyleSelector___c::_ToString_b__10_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9bbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector___c*>(),
                                                                                           { "<ToString>b__10_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorPart>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSelector___c::setStaticF___9(::UnityEngine::UIElements::StyleSelector___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSelector___c*, "<>9", ::UnityEngine::UIElements::StyleSelector___c*>(
      std::forward<::UnityEngine::UIElements::StyleSelector___c*>(value));
}
inline ::UnityEngine::UIElements::StyleSelector___c* UnityEngine::UIElements::StyleSelector___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSelector___c*, "<>9", ::UnityEngine::UIElements::StyleSelector___c*>();
}
inline void UnityEngine::UIElements::StyleSelector___c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*, "<>9__10_0", ::UnityEngine::UIElements::StyleSelector___c*>(
      std::forward<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>* UnityEngine::UIElements::StyleSelector___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart, ::StringW>*, "<>9__10_0", ::UnityEngine::UIElements::StyleSelector___c*>();
}
inline void UnityEngine::UIElements::StyleSelector___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleSelector___c::_ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector___c*>(),
                                                                                         { "<ToString>b__10_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorPart>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::UnityEngine::UIElements::StyleSelector___c* UnityEngine::UIElements::StyleSelector___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSelector___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelector___c::StyleSelector___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.get_parts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> (::UnityEngine::UIElements::StyleSelector::*)()>(
    &::UnityEngine::UIElements::StyleSelector::get_parts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { "get_parts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.set_parts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>)>(
    &::UnityEngine::UIElements::StyleSelector::set_parts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(),
                                                                                           { "set_parts", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.get_previousRelationship
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSelectorRelationship (::UnityEngine::UIElements::StyleSelector::*)()>(
    &::UnityEngine::UIElements::StyleSelector::get_previousRelationship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { "get_previousRelationship", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.set_previousRelationship
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)(::UnityEngine::UIElements::StyleSelectorRelationship)>(
    &::UnityEngine::UIElements::StyleSelector::set_previousRelationship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9ba3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(),
                                                             { "set_previousRelationship", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorRelationship>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelector::*)()>(&::UnityEngine::UIElements::StyleSelector::ToString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c9ba44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSelector::*)()>(&::UnityEngine::UIElements::StyleSelector::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c9bb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_Parts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parts;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> const& UnityEngine::UIElements::StyleSelector::__cordl_internal_get_m_Parts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parts;
}
constexpr void UnityEngine::UIElements::StyleSelector::__cordl_internal_set_m_Parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parts = value;
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
inline ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> UnityEngine::UIElements::StyleSelector::get_parts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { "get_parts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::set_parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(),
                                                                                         { "set_parts", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::StyleSelectorPart>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleSelectorRelationship UnityEngine::UIElements::StyleSelector::get_previousRelationship() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { "get_previousRelationship", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorRelationship>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::set_previousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(),
                                                           { "set_previousRelationship", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorRelationship>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::StyleSelector::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSelector* UnityEngine::UIElements::StyleSelector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StyleSelector*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelector::StyleSelector() {}
