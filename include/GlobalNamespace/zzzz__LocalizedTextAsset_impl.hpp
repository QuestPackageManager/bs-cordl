#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedTextAsset.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset_TextInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedTextAsset_TextInfo::*)()>(&::GlobalNamespace::LocalizedTextAsset_TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e33b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::LocalizationLanguage& GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_set_language(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___language = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_get_localizedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedText;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_get_localizedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedText;
}
constexpr void GlobalNamespace::LocalizedTextAsset_TextInfo::__cordl_internal_set_localizedText(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizedText = value;
}
inline void GlobalNamespace::LocalizedTextAsset_TextInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizedTextAsset_TextInfo* GlobalNamespace::LocalizedTextAsset_TextInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedTextAsset_TextInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedTextAsset_TextInfo::LocalizedTextAsset_TextInfo() {}
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedTextAsset___c::*)()>(&::GlobalNamespace::LocalizedTextAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e3408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset___c._get_localizedText_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizedTextAsset___c::*)(::GlobalNamespace::LocalizedTextAsset_TextInfo*)>(
    &::GlobalNamespace::LocalizedTextAsset___c::_get_localizedText_b__6_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58e340c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c*>(),
                                                             { "<get_localizedText>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizedTextAsset___c::setStaticF___9(::GlobalNamespace::LocalizedTextAsset___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LocalizedTextAsset___c*, "<>9", ::GlobalNamespace::LocalizedTextAsset___c*>(std::forward<::GlobalNamespace::LocalizedTextAsset___c*>(value));
}
inline ::GlobalNamespace::LocalizedTextAsset___c* GlobalNamespace::LocalizedTextAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LocalizedTextAsset___c*, "<>9", ::GlobalNamespace::LocalizedTextAsset___c*>();
}
inline void GlobalNamespace::LocalizedTextAsset___c::setStaticF___9__6_0(::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>*, "<>9__6_0", ::GlobalNamespace::LocalizedTextAsset___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>* GlobalNamespace::LocalizedTextAsset___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LocalizedTextAsset_TextInfo*, bool>*, "<>9__6_0", ::GlobalNamespace::LocalizedTextAsset___c*>();
}
inline void GlobalNamespace::LocalizedTextAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalizedTextAsset___c::_get_localizedText_b__6_0(::GlobalNamespace::LocalizedTextAsset_TextInfo* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c*>(),
                                                                                         { "<get_localizedText>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::GlobalNamespace::LocalizedTextAsset___c* GlobalNamespace::LocalizedTextAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedTextAsset___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedTextAsset___c::LocalizedTextAsset___c() {}
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::*)()>(&::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e3358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0._get_localizedText_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::*)(::GlobalNamespace::LocalizedTextAsset_TextInfo*)>(
    &::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::_get_localizedText_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58e3428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*>(),
                                                                                           { "<get_localizedText>b__1", {}, { ::i2c::type_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::LocalizationLanguage& GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::__cordl_internal_set_language(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___language = value;
}
inline void GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::_get_localizedText_b__1(::GlobalNamespace::LocalizedTextAsset_TextInfo* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*>(),
                                                                                         { "<get_localizedText>b__1", {}, { ::i2c::type_of<::GlobalNamespace::LocalizedTextAsset_TextInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0* GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedTextAsset___c__DisplayClass6_0::LocalizedTextAsset___c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset.get_textInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*> (::GlobalNamespace::LocalizedTextAsset::*)()>(
    &::GlobalNamespace::LocalizedTextAsset::get_textInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e3004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { "get_textInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset.get_localizedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalizedTextAsset::*)()>(&::GlobalNamespace::LocalizedTextAsset::get_localizedText)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x58e300c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { "get_localizedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedTextAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedTextAsset::*)()>(&::GlobalNamespace::LocalizedTextAsset::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58e335c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*>& GlobalNamespace::LocalizedTextAsset::__cordl_internal_get__textInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textInfos;
}
constexpr ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*> const& GlobalNamespace::LocalizedTextAsset::__cordl_internal_get__textInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textInfos;
}
constexpr void GlobalNamespace::LocalizedTextAsset::__cordl_internal_set__textInfos(::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textInfos = value;
}
constexpr ::StringW& GlobalNamespace::LocalizedTextAsset::__cordl_internal_get__substituteLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substituteLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::LocalizedTextAsset::__cordl_internal_get__substituteLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____substituteLocalizationKey;
}
constexpr void GlobalNamespace::LocalizedTextAsset::__cordl_internal_set__substituteLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____substituteLocalizationKey = value;
}
inline ::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*> GlobalNamespace::LocalizedTextAsset::get_textInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { "get_textInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LocalizedTextAsset_TextInfo*>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalizedTextAsset::get_localizedText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { "get_localizedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizedTextAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedTextAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizedTextAsset* GlobalNamespace::LocalizedTextAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedTextAsset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedTextAsset::LocalizedTextAsset() {}
