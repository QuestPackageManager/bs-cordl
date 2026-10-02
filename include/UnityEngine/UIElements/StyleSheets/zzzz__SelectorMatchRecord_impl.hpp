#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/SelectorMatchRecord.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__SelectorMatchRecord_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x71c8128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x71c813c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
            { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x71c81e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)(::System::Object*)>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x71c8280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::*)()>(
    &::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x71c8314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::_ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t styleSheetIndexInStack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sheet, styleSheetIndexInStack);
}
inline int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a,
                                                                                  ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
          { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Equals(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>"
constexpr UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*
UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::i___System__IEquatable_1___UnityEngine__UIElements__StyleSheets__SelectorMatchRecord_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "styleSheetIndexInStack",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, int32_t styleSheetIndexInStack,
                                                                                           ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept {
  this->sheet = sheet;
  this->styleSheetIndexInStack = styleSheetIndexInStack;
  this->complexSelector = complexSelector;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord::SelectorMatchRecord() {}
