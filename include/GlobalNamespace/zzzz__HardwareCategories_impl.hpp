#pragma once
// IWYU pragma private; include "GlobalNamespace/HardwareCategories.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HardwareCategories_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetPlatformOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::HardwareCategory>)>(&::GlobalNamespace::HardwareCategories::GetPlatformOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x328cde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(),
                                                                                           { "GetPlatformOverride", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::HardwareCategory>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.SetPlatformOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HardwareCategory)>(&::GlobalNamespace::HardwareCategories::SetPlatformOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x328ce3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "SetPlatformOverride", {}, { ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.ClearPlatformOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::HardwareCategories::ClearPlatformOverride)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x328ce94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "ClearPlatformOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategoryWithEditorOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(&::GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328cee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategoryWithEditorOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HardwareCategories.GetHardwareCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HardwareCategory (*)()>(&::GlobalNamespace::HardwareCategories::GetHardwareCategory)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x328cee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategory", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HardwareCategories::setStaticF__isPlatformOverriden(bool value) {
  ::cordl_internals::setStaticField<bool, "_isPlatformOverriden", ::GlobalNamespace::HardwareCategories*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::HardwareCategories::getStaticF__isPlatformOverriden() {
  return ::cordl_internals::getStaticField<bool, "_isPlatformOverriden", ::GlobalNamespace::HardwareCategories*>();
}
inline void GlobalNamespace::HardwareCategories::setStaticF__platformOverride(::GlobalNamespace::HardwareCategory value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::HardwareCategory, "_platformOverride", ::GlobalNamespace::HardwareCategories*>(std::forward<::GlobalNamespace::HardwareCategory>(value));
}
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::getStaticF__platformOverride() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::HardwareCategory, "_platformOverride", ::GlobalNamespace::HardwareCategories*>();
}
inline bool GlobalNamespace::HardwareCategories::GetPlatformOverride(::by_ref<::GlobalNamespace::HardwareCategory> hardwareCategory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetPlatformOverride", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::HardwareCategory>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hardwareCategory);
}
inline void GlobalNamespace::HardwareCategories::SetPlatformOverride(::GlobalNamespace::HardwareCategory hardwareCategory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "SetPlatformOverride", {}, { ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hardwareCategory);
}
inline void GlobalNamespace::HardwareCategories::ClearPlatformOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "ClearPlatformOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategoryWithEditorOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategoryWithEditorOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::HardwareCategory GlobalNamespace::HardwareCategories::GetHardwareCategory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HardwareCategories*>(), { "GetHardwareCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HardwareCategory>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HardwareCategories::HardwareCategories() {}
