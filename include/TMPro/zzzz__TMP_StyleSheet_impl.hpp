#pragma once
// IWYU pragma private; include "TMPro\TMP_StyleSheet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Style_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.get_styles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* (::TMPro::TMP_StyleSheet::*)()>(&::TMPro::TMP_StyleSheet::get_styles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a25c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "get_styles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_StyleSheet::*)()>(&::TMPro::TMP_StyleSheet::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69a25d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Style* (::TMPro::TMP_StyleSheet::*)(int32_t)>(&::TMPro::TMP_StyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69a2940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Style* (::TMPro::TMP_StyleSheet::*)(::StringW)>(&::TMPro::TMP_StyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69a29cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.RefreshStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_StyleSheet::*)()>(&::TMPro::TMP_StyleSheet::RefreshStyles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69a2a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "RefreshStyles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet.LoadStyleDictionaryInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_StyleSheet::*)()>(&::TMPro::TMP_StyleSheet::LoadStyleDictionaryInternal)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x69a25d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "LoadStyleDictionaryInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_StyleSheet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_StyleSheet::*)()>(&::TMPro::TMP_StyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69a2a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*& TMPro::TMP_StyleSheet::__cordl_internal_get_m_StyleList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleList;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* const& TMPro::TMP_StyleSheet::__cordl_internal_get_m_StyleList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleList;
}
constexpr void TMPro::TMP_StyleSheet::__cordl_internal_set_m_StyleList(::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>*& TMPro::TMP_StyleSheet::__cordl_internal_get_m_StyleLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* const& TMPro::TMP_StyleSheet::__cordl_internal_get_m_StyleLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr void TMPro::TMP_StyleSheet::__cordl_internal_set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_Style*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StyleLookupDictionary = value;
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* TMPro::TMP_StyleSheet::get_styles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "get_styles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*>(this, ___internal_method);
}
inline void TMPro::TMP_StyleSheet::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_Style* TMPro::TMP_StyleSheet::GetStyle(int32_t hashCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Style*>(this, ___internal_method, hashCode);
}
inline ::TMPro::TMP_Style* TMPro::TMP_StyleSheet::GetStyle(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Style*>(this, ___internal_method, name);
}
inline void TMPro::TMP_StyleSheet::RefreshStyles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "RefreshStyles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_StyleSheet::LoadStyleDictionaryInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { "LoadStyleDictionaryInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_StyleSheet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_StyleSheet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_StyleSheet* TMPro::TMP_StyleSheet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_StyleSheet*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_StyleSheet::TMP_StyleSheet() {}
