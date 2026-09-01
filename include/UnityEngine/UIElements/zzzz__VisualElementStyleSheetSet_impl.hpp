#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\VisualElementStyleSheetSet.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementStyleSheetSet_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementStyleSheetSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cccae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)(::UnityEngine::UIElements::StyleSheet*)>(
    &::UnityEngine::UIElements::VisualElementStyleSheetSet::Add)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6cccaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)(::UnityEngine::UIElements::StyleSheet*)>(
    &::UnityEngine::UIElements::VisualElementStyleSheetSet::Remove)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6ccccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)(::UnityEngine::UIElements::VisualElementStyleSheetSet)>(
    &::UnityEngine::UIElements::VisualElementStyleSheetSet::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ccce28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)(::System::Object*)>(
    &::UnityEngine::UIElements::VisualElementStyleSheetSet::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6ccce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementStyleSheetSet.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualElementStyleSheetSet::*)()>(&::UnityEngine::UIElements::VisualElementStyleSheetSet::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6cccf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementStyleSheetSet::_ctor(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualElementStyleSheetSet::Add(::UnityEngine::UIElements::StyleSheet* styleSheet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { "Add", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, styleSheet);
}
inline bool UnityEngine::UIElements::VisualElementStyleSheetSet::Remove(::UnityEngine::UIElements::StyleSheet* styleSheet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, styleSheet);
}
inline bool UnityEngine::UIElements::VisualElementStyleSheetSet::Equals(::UnityEngine::UIElements::VisualElementStyleSheetSet other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::VisualElementStyleSheetSet::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::VisualElementStyleSheetSet::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualElementStyleSheetSet>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
constexpr UnityEngine::UIElements::VisualElementStyleSheetSet::operator ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*
UnityEngine::UIElements::VisualElementStyleSheetSet::i___System__IEquatable_1___UnityEngine__UIElements__VisualElementStyleSheetSet_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::VisualElementStyleSheetSet>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualElementStyleSheetSet::VisualElementStyleSheetSet(::UnityEngine::UIElements::VisualElement* m_Element) noexcept {
  this->m_Element = m_Element;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementStyleSheetSet::VisualElementStyleSheetSet() {}
