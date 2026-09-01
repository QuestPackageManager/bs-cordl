#pragma once
// IWYU pragma private; include "System\Globalization\CharUnicodeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CharUnicodeInfo_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.InternalConvertToUtf32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Globalization::CharUnicodeInfo::InternalConvertToUtf32)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b940ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "InternalConvertToUtf32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.InternalConvertToUtf32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::by_ref<int32_t>)>(&::System::Globalization::CharUnicodeInfo::InternalConvertToUtf32)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b94180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                             { "InternalConvertToUtf32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.GetUnicodeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::UnicodeCategory (*)(char16_t)>(&::System::Globalization::CharUnicodeInfo::GetUnicodeCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b94224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.GetUnicodeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::UnicodeCategory (*)(::StringW, int32_t)>(&::System::Globalization::CharUnicodeInfo::GetUnicodeCategory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b94258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.GetUnicodeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::UnicodeCategory (*)(int32_t)>(&::System::Globalization::CharUnicodeInfo::GetUnicodeCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b94240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.InternalGetCategoryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t, int32_t)>(&::System::Globalization::CharUnicodeInfo::InternalGetCategoryValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b9431c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "InternalGetCategoryValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.InternalGetUnicodeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::UnicodeCategory (*)(::StringW, int32_t)>(&::System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b94300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                                                           { "InternalGetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.InternalGetUnicodeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::UnicodeCategory (*)(::StringW, int32_t, ::by_ref<int32_t>)>(
    &::System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b94538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                             { "InternalGetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.IsCombiningCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::UnicodeCategory)>(&::System::Globalization::CharUnicodeInfo::IsCombiningCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b94554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsCombiningCategory", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::System::Globalization::CharUnicodeInfo::IsWhiteSpace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b94564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::CharUnicodeInfo::IsWhiteSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b94580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.get_CategoryLevel1Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Globalization::CharUnicodeInfo::get_CategoryLevel1Index)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b943c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel1Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.get_CategoryLevel2Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Globalization::CharUnicodeInfo::get_CategoryLevel2Index)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b94424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel2Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.get_CategoryLevel3Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Globalization::CharUnicodeInfo::get_CategoryLevel3Index)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b94480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel3Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CharUnicodeInfo.get_CategoriesValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Globalization::CharUnicodeInfo::get_CategoriesValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b944dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoriesValue", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Globalization::CharUnicodeInfo::InternalConvertToUtf32(::StringW s, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "InternalConvertToUtf32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, index);
}
inline int32_t System::Globalization::CharUnicodeInfo::InternalConvertToUtf32(::StringW s, int32_t index, ::by_ref<int32_t> charLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                           { "InternalConvertToUtf32", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, index, charLength);
}
inline ::System::Globalization::UnicodeCategory System::Globalization::CharUnicodeInfo::GetUnicodeCategory(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::UnicodeCategory>(nullptr, ___internal_method, ch);
}
inline ::System::Globalization::UnicodeCategory System::Globalization::CharUnicodeInfo::GetUnicodeCategory(::StringW s, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::UnicodeCategory>(nullptr, ___internal_method, s, index);
}
inline ::System::Globalization::UnicodeCategory System::Globalization::CharUnicodeInfo::GetUnicodeCategory(int32_t codePoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "GetUnicodeCategory", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::UnicodeCategory>(nullptr, ___internal_method, codePoint);
}
inline uint8_t System::Globalization::CharUnicodeInfo::InternalGetCategoryValue(int32_t ch, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "InternalGetCategoryValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, ch, offset);
}
inline ::System::Globalization::UnicodeCategory System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory(::StringW value, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                                                         { "InternalGetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::UnicodeCategory>(nullptr, ___internal_method, value, index);
}
inline ::System::Globalization::UnicodeCategory System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory(::StringW str, int32_t index, ::by_ref<int32_t> charLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(),
                                                           { "InternalGetUnicodeCategory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::UnicodeCategory>(nullptr, ___internal_method, str, index, charLength);
}
inline bool System::Globalization::CharUnicodeInfo::IsCombiningCategory(::System::Globalization::UnicodeCategory uc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsCombiningCategory", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uc);
}
inline bool System::Globalization::CharUnicodeInfo::IsWhiteSpace(::StringW s, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, index);
}
inline bool System::Globalization::CharUnicodeInfo::IsWhiteSpace(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Globalization::CharUnicodeInfo::get_CategoryLevel1Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel1Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Globalization::CharUnicodeInfo::get_CategoryLevel2Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel2Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Globalization::CharUnicodeInfo::get_CategoryLevel3Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoryLevel3Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Globalization::CharUnicodeInfo::get_CategoriesValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CharUnicodeInfo*>(), { "get_CategoriesValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::CharUnicodeInfo::CharUnicodeInfo() {}
