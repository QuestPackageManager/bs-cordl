#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetColor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetColor.TryGetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetColor::TryGetColor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6d10f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>(),
                                                                                           { "TryGetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetColor.HexToColor32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(uint32_t)>(&::UnityEngine::UIElements::StyleSheets::StyleSheetColor::HexToColor32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d14894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>(), { "HexToColor32", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::StyleSheetColor::setStaticF_s_NameToColor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>*, "s_NameToColor", ::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>* UnityEngine::UIElements::StyleSheets::StyleSheetColor::getStaticF_s_NameToColor() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Color32>*, "s_NameToColor",
                                           ::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>();
}
inline bool UnityEngine::UIElements::StyleSheets::StyleSheetColor::TryGetColor(::StringW name, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>(),
                                                                                         { "TryGetColor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, color);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::StyleSheets::StyleSheetColor::HexToColor32(uint32_t color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::StyleSheetColor*>(), { "HexToColor32", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, color);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetColor::StyleSheetColor() {}
