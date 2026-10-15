#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeCatalogue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeCatalogue_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeCatalogue_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeCatalogue___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeCatalogue___c::*)()>(&::GlobalNamespace::ColorSchemeCatalogue___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39f8478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeCatalogue___c.__ctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemeCatalogue___c::*)(::GlobalNamespace::ColorSchemeSO*)>(
    &::GlobalNamespace::ColorSchemeCatalogue___c::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39f847c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue___c*>(), { "<.ctor>b__2_0", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorSchemeCatalogue___c::setStaticF___9(::GlobalNamespace::ColorSchemeCatalogue___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ColorSchemeCatalogue___c*, "<>9", ::GlobalNamespace::ColorSchemeCatalogue___c*>(
      std::forward<::GlobalNamespace::ColorSchemeCatalogue___c*>(value));
}
inline ::GlobalNamespace::ColorSchemeCatalogue___c* GlobalNamespace::ColorSchemeCatalogue___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ColorSchemeCatalogue___c*, "<>9", ::GlobalNamespace::ColorSchemeCatalogue___c*>();
}
inline void GlobalNamespace::ColorSchemeCatalogue___c::setStaticF___9__2_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*, "<>9__2_0", ::GlobalNamespace::ColorSchemeCatalogue___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* GlobalNamespace::ColorSchemeCatalogue___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*, "<>9__2_0", ::GlobalNamespace::ColorSchemeCatalogue___c*>();
}
inline void GlobalNamespace::ColorSchemeCatalogue___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeCatalogue___c::__ctor_b__2_0(::GlobalNamespace::ColorSchemeSO* colorSchemeSO) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue___c*>(), { "<.ctor>b__2_0", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method, colorSchemeSO);
}
inline ::GlobalNamespace::ColorSchemeCatalogue___c* GlobalNamespace::ColorSchemeCatalogue___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeCatalogue___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeCatalogue___c::ColorSchemeCatalogue___c() {}
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeCatalogue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeCatalogue::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*)>(
    &::GlobalNamespace::ColorSchemeCatalogue::_ctor)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x39f7f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeCatalogue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeCatalogue::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*)>(
    &::GlobalNamespace::ColorSchemeCatalogue::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x39f8284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeCatalogue.TryGetColorSchemeForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorSchemeCatalogue::*)(::StringW, ::by_ref<::GlobalNamespace::ColorScheme*>)>(
    &::GlobalNamespace::ColorSchemeCatalogue::TryGetColorSchemeForId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x39f8394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                             { "TryGetColorSchemeForId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColorScheme*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& GlobalNamespace::ColorSchemeCatalogue::__cordl_internal_get__colorSchemesById() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesById;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* const& GlobalNamespace::ColorSchemeCatalogue::__cordl_internal_get__colorSchemesById() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesById;
}
constexpr void GlobalNamespace::ColorSchemeCatalogue::__cordl_internal_set__colorSchemesById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemesById = value;
}
inline void GlobalNamespace::ColorSchemeCatalogue::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemes);
}
inline void GlobalNamespace::ColorSchemeCatalogue::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemeSOs);
}
inline bool GlobalNamespace::ColorSchemeCatalogue::TryGetColorSchemeForId(::StringW colorSchemeId, ::by_ref<::GlobalNamespace::ColorScheme*> colorScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeCatalogue*>(),
                                                           { "TryGetColorSchemeForId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColorScheme*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colorSchemeId, colorScheme);
}
inline ::GlobalNamespace::ColorSchemeCatalogue* GlobalNamespace::ColorSchemeCatalogue::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeCatalogue*>(colorSchemes));
}
inline ::GlobalNamespace::ColorSchemeCatalogue*
GlobalNamespace::ColorSchemeCatalogue::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeCatalogue*>(colorSchemeSOs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeCatalogue::ColorSchemeCatalogue() {}
