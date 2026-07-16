#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ColorPalette.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ColorPalette_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__IHasDefault_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ProBuilder::ColorPalette::*)()>(&::UnityEngine::ProBuilder::ColorPalette::get_current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66b3348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColorPalette::*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ColorPalette::set_current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66b3354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.get_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* (::UnityEngine::ProBuilder::ColorPalette::*)()>(
    &::UnityEngine::ProBuilder::ColorPalette::get_colors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66b3360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_colors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.SetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColorPalette::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*)>(
    &::UnityEngine::ProBuilder::ColorPalette::SetColors)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66b33d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(),
                                                             { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.SetDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColorPalette::*)()>(&::UnityEngine::ProBuilder::ColorPalette::SetDefaultValues)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x66b3484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "SetDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ProBuilder::ColorPalette::*)(int32_t)>(&::UnityEngine::ProBuilder::ColorPalette::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66b3c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColorPalette::*)(int32_t, ::UnityEngine::Color)>(&::UnityEngine::ProBuilder::ColorPalette::set_Item)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66b3c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::ColorPalette::*)()>(&::UnityEngine::ProBuilder::ColorPalette::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x66b3d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ColorPalette._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ColorPalette::*)()>(&::UnityEngine::ProBuilder::ColorPalette::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b3d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& UnityEngine::ProBuilder::ColorPalette::__cordl_internal_get__current_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_k__BackingField;
}
constexpr ::UnityEngine::Color const& UnityEngine::ProBuilder::ColorPalette::__cordl_internal_get__current_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ColorPalette::__cordl_internal_set__current_k__BackingField(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& UnityEngine::ProBuilder::ColorPalette::__cordl_internal_get_m_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& UnityEngine::ProBuilder::ColorPalette::__cordl_internal_get_m_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colors;
}
constexpr void UnityEngine::ProBuilder::ColorPalette::__cordl_internal_set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Colors = value;
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::ColorPalette::get_current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ColorPalette::set_current(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "set_current", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* UnityEngine::ProBuilder::ColorPalette::get_colors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_colors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ColorPalette::SetColors(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>* colors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(),
                                                           { "SetColors", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void UnityEngine::ProBuilder::ColorPalette::SetDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "SetDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::ProBuilder::ColorPalette::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::ColorPalette::set_Item(int32_t i, ::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, value);
}
inline int32_t UnityEngine::ProBuilder::ColorPalette::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ColorPalette::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::ColorPalette*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ColorPalette* UnityEngine::ProBuilder::ColorPalette::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ColorPalette*>());
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
constexpr UnityEngine::ProBuilder::ColorPalette::operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::IHasDefault*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::IHasDefault"
constexpr ::UnityEngine::ProBuilder::IHasDefault* UnityEngine::ProBuilder::ColorPalette::i___UnityEngine__ProBuilder__IHasDefault() noexcept {
  return static_cast<::UnityEngine::ProBuilder::IHasDefault*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ColorPalette::ColorPalette() {}
