#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\FontDefinition.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.get_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::FontDefinition::*)()>(&::UnityEngine::UIElements::FontDefinition::get_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ddd7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "get_font", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.set_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FontDefinition::*)(::UnityEngine::Font*)>(&::UnityEngine::UIElements::FontDefinition::set_font)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ddd7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.get_fontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::UIElements::FontDefinition::*)()>(
    &::UnityEngine::UIElements::FontDefinition::get_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ddd8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "get_fontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.set_fontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FontDefinition::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::UIElements::FontDefinition::set_fontAsset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ddd8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "set_fontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.FromFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::UnityEngine::Font*)>(&::UnityEngine::UIElements::FontDefinition::FromFont)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ddd9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.FromSDFFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::UIElements::FontDefinition::FromSDFFont)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ddd9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromSDFFont", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.FromObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FontDefinition (*)(::System::Object*)>(&::UnityEngine::UIElements::FontDefinition::FromObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6ddd9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FontDefinition::*)()>(&::UnityEngine::UIElements::FontDefinition::IsEmpty)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6dddad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::FontDefinition::*)()>(&::UnityEngine::UIElements::FontDefinition::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6dddb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FontDefinition::*)(::UnityEngine::UIElements::FontDefinition)>(
    &::UnityEngine::UIElements::FontDefinition::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6dddc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FontDefinition::*)(::System::Object*)>(&::UnityEngine::UIElements::FontDefinition::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dddcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::FontDefinition::*)()>(&::UnityEngine::UIElements::FontDefinition::GetHashCode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6dddd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FontDefinition, ::UnityEngine::UIElements::FontDefinition)>(
    &::UnityEngine::UIElements::FontDefinition::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ddde28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FontDefinition, ::UnityEngine::UIElements::FontDefinition)>(
    &::UnityEngine::UIElements::FontDefinition::op_Inequality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ddde54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::FontDefinition::get_font() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "get_font", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FontDefinition::set_font(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::UIElements::FontDefinition::get_fontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "get_fontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FontDefinition::set_fontAsset(::UnityEngine::TextCore::Text::FontAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "set_fontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::FontDefinition::FromFont(::UnityEngine::Font* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition>(nullptr, ___internal_method, f);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::FontDefinition::FromSDFFont(::UnityEngine::TextCore::Text::FontAsset* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromSDFFont", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition>(nullptr, ___internal_method, f);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::FontDefinition::FromObject(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "FromObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::FontDefinition::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::FontDefinition::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::FontDefinition::Equals(::UnityEngine::UIElements::FontDefinition other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::FontDefinition::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::FontDefinition::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::FontDefinition::op_Equality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::UIElements::FontDefinition::op_Inequality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
constexpr UnityEngine::UIElements::FontDefinition::operator ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>* UnityEngine::UIElements::FontDefinition::i___System__IEquatable_1___UnityEngine__UIElements__FontDefinition_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FontAsset", ty:
// "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::FontDefinition::FontDefinition(::UnityW<::UnityEngine::Font> m_Font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_FontAsset) noexcept {
  this->m_Font = m_Font;
  this->m_FontAsset = m_FontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FontDefinition::FontDefinition() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::*)(
    ::by_ref<::UnityEngine::UIElements::FontDefinition>)>(&::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::*)(
    ::by_ref<::UnityEngine::UIElements::FontDefinition>, ::UnityEngine::Font*)>(&::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dde078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dddf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::GetValue(::by_ref<::UnityEngine::UIElements::FontDefinition> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::SetValue(::by_ref<::UnityEngine::UIElements::FontDefinition> container, ::UnityEngine::Font* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty* UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty::PropertyBag_FontDefinition_FontProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::*)(
    ::by_ref<::UnityEngine::UIElements::FontDefinition>)>(&::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dde094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::*)(
    ::by_ref<::UnityEngine::UIElements::FontDefinition>, ::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dde09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dddffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset>
UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::GetValue(::by_ref<::UnityEngine::UIElements::FontDefinition> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::SetValue(::by_ref<::UnityEngine::UIElements::FontDefinition> container,
                                                                                            ::UnityEngine::TextCore::Text::FontAsset* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty* UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty::PropertyBag_FontDefinition_FontAssetProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::FontDefinition_PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FontDefinition_PropertyBag::*)()>(&::UnityEngine::UIElements::FontDefinition_PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6ddde84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition_PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::FontDefinition_PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FontDefinition_PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FontDefinition_PropertyBag* UnityEngine::UIElements::FontDefinition_PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FontDefinition_PropertyBag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FontDefinition_PropertyBag::FontDefinition_PropertyBag() {}
