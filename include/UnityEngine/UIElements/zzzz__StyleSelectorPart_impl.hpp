#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSelectorPart.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorPart_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelectorPart::*)()>(&::UnityEngine::UIElements::StyleSelectorPart::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c97c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSelectorType (::UnityEngine::UIElements::StyleSelectorPart::*)()>(
    &::UnityEngine::UIElements::StyleSelectorPart::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c97c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSelectorPart::*)(::UnityEngine::UIElements::StyleSelectorType)>(
    &::UnityEngine::UIElements::StyleSelectorPart::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c98790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSelectorPart::*)()>(&::UnityEngine::UIElements::StyleSelectorPart::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c98678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.CreateClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSelectorPart (*)(::StringW)>(&::UnityEngine::UIElements::StyleSelectorPart::CreateClass)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c98798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreateClass", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.CreateId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSelectorPart (*)(::StringW)>(&::UnityEngine::UIElements::StyleSelectorPart::CreateId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c987b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreateId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSelectorPart.CreatePredicate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSelectorPart (*)(::System::Object*)>(&::UnityEngine::UIElements::StyleSelectorPart::CreatePredicate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c987c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreatePredicate", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleSelectorPart::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSelectorType UnityEngine::UIElements::StyleSelectorPart::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorType>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleSelectorPart::set_type(::UnityEngine::UIElements::StyleSelectorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSelectorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::StyleSelectorPart::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSelectorPart UnityEngine::UIElements::StyleSelectorPart::CreateClass(::StringW className) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreateClass", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorPart>(nullptr, ___internal_method, className);
}
inline ::UnityEngine::UIElements::StyleSelectorPart UnityEngine::UIElements::StyleSelectorPart::CreateId(::StringW Id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreateId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorPart>(nullptr, ___internal_method, Id);
}
inline ::UnityEngine::UIElements::StyleSelectorPart UnityEngine::UIElements::StyleSelectorPart::CreatePredicate(::System::Object* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSelectorPart>(), { "CreatePredicate", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSelectorPart>(nullptr, ___internal_method, predicate);
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::StyleSelectorType", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "tempData", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSelectorPart::StyleSelectorPart(::StringW m_Value, ::UnityEngine::UIElements::StyleSelectorType m_Type, ::System::Object* tempData) noexcept {
  this->m_Value = m_Value;
  this->m_Type = m_Type;
  this->tempData = tempData;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSelectorPart::StyleSelectorPart() {}
