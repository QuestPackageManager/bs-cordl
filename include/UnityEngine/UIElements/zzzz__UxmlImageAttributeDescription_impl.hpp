#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlImageAttributeDescription.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlImageAttributeDescription_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)()>(&::UnityEngine::UIElements::UxmlImageAttributeDescription::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cbfd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription.set_defaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::UxmlImageAttributeDescription::set_defaultValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cbfe14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(),
                                                                                           { "set_defaultValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlImageAttributeDescription.GetValueFromBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::UxmlImageAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::UxmlImageAttributeDescription::GetValueFromBag)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cbfe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(),
                                         { "GetValueFromBag", {}, { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get_m_AssetType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetType;
}
constexpr ::System::Type* const& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get_m_AssetType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetType;
}
constexpr void UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_set_m_AssetType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetType = value;
}
constexpr ::UnityEngine::UIElements::Background& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get__defaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
constexpr ::UnityEngine::UIElements::Background const& UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_get__defaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlImageAttributeDescription::__cordl_internal_set__defaultValue_k__BackingField(::UnityEngine::UIElements::Background value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue_k__BackingField = value;
}
inline void UnityEngine::UIElements::UxmlImageAttributeDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlImageAttributeDescription::set_defaultValue(::UnityEngine::UIElements::Background value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(),
                                                                                         { "set_defaultValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::UxmlImageAttributeDescription::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                     ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlImageAttributeDescription*>(),
                                       { "GetValueFromBag", {}, { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background>(this, ___internal_method, bag, cc);
}
inline ::UnityEngine::UIElements::UxmlImageAttributeDescription* UnityEngine::UIElements::UxmlImageAttributeDescription::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlImageAttributeDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription::UxmlImageAttributeDescription() {}
