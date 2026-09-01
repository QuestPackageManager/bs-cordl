#pragma once
// IWYU pragma private; include "Tayx\Graphy\Utils\G_ExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_ExtensionMethods_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Utils::G_ExtensionMethods.SetAllActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool)>(
        &::Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x643de24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                                { "SetAllActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::G_ExtensionMethods.SetOneActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, int32_t)>(
        &::Tayx::Graphy::Utils::G_ExtensionMethods::SetOneActive)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x643df3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                                { "SetOneActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Utils::G_ExtensionMethods.SetAllActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, bool)>(
        &::Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x643dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                                { "SetAllActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*
Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjects, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                              { "SetAllActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(nullptr, ___internal_method, gameObjects, active);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*
Tayx::Graphy::Utils::G_ExtensionMethods::SetOneActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* images, int32_t active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                              { "SetOneActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(nullptr, ___internal_method, images, active);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*
Tayx::Graphy::Utils::G_ExtensionMethods::SetAllActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* images, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_ExtensionMethods*>(),
                                              { "SetAllActive", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(nullptr, ___internal_method, images, active);
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Utils::G_ExtensionMethods::G_ExtensionMethods() {}
