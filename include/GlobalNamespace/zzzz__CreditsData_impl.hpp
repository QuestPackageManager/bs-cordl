#pragma once
// IWYU pragma private; include "GlobalNamespace\CreditsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
#include "GlobalNamespace/zzzz__CreditsData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CreditsData_TextStyle::CreditsData_TextStyle(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData_TextStyle::CreditsData_TextStyle() {}
constexpr ::GlobalNamespace::CreditsData_TextStyle GlobalNamespace::CreditsData_TextStyle::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::CreditsData_TextStyle GlobalNamespace::CreditsData_TextStyle::Title{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::CreditsData_TextStyle GlobalNamespace::CreditsData_TextStyle::Header{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::CreditsData_Text.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_Text::*)()>(&::GlobalNamespace::CreditsData_Text::IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3280b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_Text.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreditsData_Text::*)()>(&::GlobalNamespace::CreditsData_Text::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3280ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), { ::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_Text._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsData_Text::*)()>(&::GlobalNamespace::CreditsData_Text::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3280c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CreditsData_Text::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::StringW const& GlobalNamespace::CreditsData_Text::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::CreditsData_Text::__cordl_internal_set_text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
constexpr bool& GlobalNamespace::CreditsData_Text::__cordl_internal_get_localized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr bool const& GlobalNamespace::CreditsData_Text::__cordl_internal_get_localized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr void GlobalNamespace::CreditsData_Text::__cordl_internal_set_localized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localized = value;
}
constexpr ::GlobalNamespace::CreditsData_TextStyle& GlobalNamespace::CreditsData_Text::__cordl_internal_get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr ::GlobalNamespace::CreditsData_TextStyle const& GlobalNamespace::CreditsData_Text::__cordl_internal_get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr void GlobalNamespace::CreditsData_Text::__cordl_internal_set_style(::GlobalNamespace::CreditsData_TextStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___style = value;
}
inline bool GlobalNamespace::CreditsData_Text::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CreditsData_Text::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsData_Text::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_Text*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsData_Text* GlobalNamespace::CreditsData_Text::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsData_Text*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData_Text::CreditsData_Text() {}
//  Writing Method size for method: ::GlobalNamespace::CreditsData_ChildCreditsItem.HasTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_ChildCreditsItem::*)()>(&::GlobalNamespace::CreditsData_ChildCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3280cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { "HasTitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_ChildCreditsItem.HasText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_ChildCreditsItem::*)()>(&::GlobalNamespace::CreditsData_ChildCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3280ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { "HasText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_ChildCreditsItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsData_ChildCreditsItem::*)()>(&::GlobalNamespace::CreditsData_ChildCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3280cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CreditsData_Text*& GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::GlobalNamespace::CreditsData_Text* const& GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_set_title(::GlobalNamespace::CreditsData_Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
constexpr ::GlobalNamespace::CreditsData_Text*& GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::GlobalNamespace::CreditsData_Text* const& GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::CreditsData_ChildCreditsItem::__cordl_internal_set_text(::GlobalNamespace::CreditsData_Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
inline bool GlobalNamespace::CreditsData_ChildCreditsItem::HasTitle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { "HasTitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CreditsData_ChildCreditsItem::HasText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { "HasText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsData_ChildCreditsItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_ChildCreditsItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsData_ChildCreditsItem* GlobalNamespace::CreditsData_ChildCreditsItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsData_ChildCreditsItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData_ChildCreditsItem::CreditsData_ChildCreditsItem() {}
//  Writing Method size for method: ::GlobalNamespace::CreditsData_RootCreditsItem.HasTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_RootCreditsItem::*)()>(&::GlobalNamespace::CreditsData_RootCreditsItem::HasTitle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3280c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasTitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_RootCreditsItem.HasText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_RootCreditsItem::*)()>(&::GlobalNamespace::CreditsData_RootCreditsItem::HasText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3280c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_RootCreditsItem.HasRowItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreditsData_RootCreditsItem::*)()>(&::GlobalNamespace::CreditsData_RootCreditsItem::HasRowItems)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3280c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasRowItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData_RootCreditsItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsData_RootCreditsItem::*)()>(&::GlobalNamespace::CreditsData_RootCreditsItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3280cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CreditsData_Text*& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::GlobalNamespace::CreditsData_Text* const& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_set_title(::GlobalNamespace::CreditsData_Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
constexpr ::GlobalNamespace::CreditsData_Text*& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr ::GlobalNamespace::CreditsData_Text* const& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___text;
}
constexpr void GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_set_text(::GlobalNamespace::CreditsData_Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___text = value;
}
constexpr int32_t& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_rowCountOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowCountOverride;
}
constexpr int32_t const& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_rowCountOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rowCountOverride;
}
constexpr void GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_set_rowCountOverride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rowCountOverride = value;
}
constexpr ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*>& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_creditsItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr ::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*> const& GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_get_creditsItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr void GlobalNamespace::CreditsData_RootCreditsItem::__cordl_internal_set_creditsItems(::ArrayW<::GlobalNamespace::CreditsData_ChildCreditsItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creditsItems = value;
}
inline bool GlobalNamespace::CreditsData_RootCreditsItem::HasTitle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasTitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CreditsData_RootCreditsItem::HasText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CreditsData_RootCreditsItem::HasRowItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { "HasRowItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsData_RootCreditsItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData_RootCreditsItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsData_RootCreditsItem* GlobalNamespace::CreditsData_RootCreditsItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsData_RootCreditsItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData_RootCreditsItem::CreditsData_RootCreditsItem() {}
//  Writing Method size for method: ::GlobalNamespace::CreditsData.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreditsData* (*)(::StringW)>(&::GlobalNamespace::CreditsData::Deserialize)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3280a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData*>(), { "Deserialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsData::*)()>(&::GlobalNamespace::CreditsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3280b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*>& GlobalNamespace::CreditsData::__cordl_internal_get_creditsItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr ::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*> const& GlobalNamespace::CreditsData::__cordl_internal_get_creditsItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsItems;
}
constexpr void GlobalNamespace::CreditsData::__cordl_internal_set_creditsItems(::ArrayW<::GlobalNamespace::CreditsData_RootCreditsItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creditsItems = value;
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::Deserialize(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData*>(), { "Deserialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreditsData*>(nullptr, ___internal_method, text);
}
inline void GlobalNamespace::CreditsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CreditsData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsData* GlobalNamespace::CreditsData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsData::CreditsData() {}
