#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextEventManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextEventManager_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FastAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextEventManager.ON_FONT_PROPERTY_CHANGED
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::UnityEngine::Object*)>(&::UnityEngine::TextCore::Text::TextEventManager::ON_FONT_PROPERTY_CHANGED)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6c04254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextEventManager*>(),
                                                                                           { "ON_FONT_PROPERTY_CHANGED", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_MATERIAL_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>*, "MATERIAL_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_MATERIAL_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>*, "MATERIAL_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_FONT_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "FONT_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_FONT_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "FONT_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_SPRITE_ASSET_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "SPRITE_ASSET_PROPERTY_EVENT",
                                    ::UnityEngine::TextCore::Text::TextEventManager*>(std::forward<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_SPRITE_ASSET_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "SPRITE_ASSET_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_TEXTMESHPRO_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "TEXTMESHPRO_PROPERTY_EVENT",
                                    ::UnityEngine::TextCore::Text::TextEventManager*>(std::forward<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_TEXTMESHPRO_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "TEXTMESHPRO_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_DRAG_AND_DROP_MATERIAL_EVENT(
    ::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*,
                                    "DRAG_AND_DROP_MATERIAL_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*
UnityEngine::TextCore::Text::TextEventManager::getStaticF_DRAG_AND_DROP_MATERIAL_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*,
                                           "DRAG_AND_DROP_MATERIAL_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_TEXT_STYLE_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_1<bool>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_1<bool>*, "TEXT_STYLE_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_1<bool>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_1<bool>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_TEXT_STYLE_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_1<bool>*, "TEXT_STYLE_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_COLOR_GRADIENT_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*, "COLOR_GRADIENT_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_COLOR_GRADIENT_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*, "COLOR_GRADIENT_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_TMP_SETTINGS_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction*, "TMP_SETTINGS_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction* UnityEngine::TextCore::Text::TextEventManager::getStaticF_TMP_SETTINGS_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction*, "TMP_SETTINGS_PROPERTY_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_RESOURCE_LOAD_EVENT(::UnityEngine::TextCore::Text::FastAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction*, "RESOURCE_LOAD_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction* UnityEngine::TextCore::Text::TextEventManager::getStaticF_RESOURCE_LOAD_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction*, "RESOURCE_LOAD_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "TEXTMESHPRO_UGUI_PROPERTY_EVENT",
                                    ::UnityEngine::TextCore::Text::TextEventManager*>(std::forward<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>*, "TEXTMESHPRO_UGUI_PROPERTY_EVENT",
                                           ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_OnPreRenderObject_Event(::UnityEngine::TextCore::Text::FastAction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction*, "OnPreRenderObject_Event", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction* UnityEngine::TextCore::Text::TextEventManager::getStaticF_OnPreRenderObject_Event() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction*, "OnPreRenderObject_Event", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::setStaticF_TEXT_CHANGED_EVENT(::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*, "TEXT_CHANGED_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>(
      std::forward<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* UnityEngine::TextCore::Text::TextEventManager::getStaticF_TEXT_CHANGED_EVENT() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>*, "TEXT_CHANGED_EVENT", ::UnityEngine::TextCore::Text::TextEventManager*>();
}
inline void UnityEngine::TextCore::Text::TextEventManager::ON_FONT_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* font) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextEventManager*>(),
                                                                                         { "ON_FONT_PROPERTY_CHANGED", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isChanged, font);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextEventManager::TextEventManager() {}
