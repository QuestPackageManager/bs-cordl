#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextStyleSheet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.get_styles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::get_styles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c024f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "get_styles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c024f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (::UnityEngine::TextCore::Text::TextStyleSheet::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6c02838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (::UnityEngine::TextCore::Text::TextStyleSheet::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c02968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.RefreshStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::RefreshStyles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c02a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "RefreshStyles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.LoadStyleDictionaryInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::LoadStyleDictionaryInternal)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6c024fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "LoadStyleDictionaryInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c02a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*& UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_m_StyleList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* const& UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_m_StyleList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleList;
}
constexpr void UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*&
UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_m_StyleLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* const&
UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_m_StyleLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr void
UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleLookupDictionary = value;
}
constexpr ::System::Object*& UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_styleLookupLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleLookupLock;
}
constexpr ::System::Object* const& UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_get_styleLookupLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleLookupLock;
}
constexpr void UnityEngine::TextCore::Text::TextStyleSheet::__cordl_internal_set_styleLookupLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___styleLookupLock = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* UnityEngine::TextCore::Text::TextStyleSheet::get_styles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "get_styles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyleSheet::GetStyle(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*>(this, ___internal_method, hashCode);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyleSheet::GetStyle(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*>(this, ___internal_method, name);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::RefreshStyles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "RefreshStyles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::LoadStyleDictionaryInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { "LoadStyleDictionaryInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextStyleSheet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextStyleSheet* UnityEngine::TextCore::Text::TextStyleSheet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextStyleSheet*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextStyleSheet::TextStyleSheet() {}
