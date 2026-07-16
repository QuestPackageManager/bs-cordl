#pragma once
// IWYU pragma private; include "TMPro/TMPro_ExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMPro_ExtensionMethods_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.TagToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::TMPro::TMPro_ExtensionMethods::TagToInt)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6943400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "TagToInt", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.ToIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::StringW)>(&::TMPro::TMPro_ExtensionMethods::ToIntArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6943468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "ToIntArray", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.ArrayToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<char16_t>)>(&::TMPro::TMPro_ExtensionMethods::ArrayToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6943518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "ArrayToString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.IntToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<int32_t>)>(&::TMPro::TMPro_ExtensionMethods::IntToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69435d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "IntToString", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.UintToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<uint32_t>*)>(&::TMPro::TMPro_ExtensionMethods::UintToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6943664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "UintToString", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.IntToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::TMPro::TMPro_ExtensionMethods::IntToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6943744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                             { "IntToString", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::TMPro::TMPro_ExtensionMethods::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6943838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.CompareRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::TMPro::TMPro_ExtensionMethods::CompareRGB)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6943848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "CompareRGB", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::TMPro::TMPro_ExtensionMethods::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6943858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Compare", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.CompareRGB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::TMPro::TMPro_ExtensionMethods::CompareRGB)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6943880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                                                           { "CompareRGB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::TMPro::TMPro_ExtensionMethods::Multiply)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x69438a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Multiply", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Tint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::TMPro::TMPro_ExtensionMethods::Tint)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6943988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Tint", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Tint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, float_t)>(&::TMPro::TMPro_ExtensionMethods::Tint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6943a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Tint", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.GammaToLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32)>(&::TMPro::TMPro_ExtensionMethods::GammaToLinear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6943b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "GammaToLinear", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.GammaToLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t)>(&::TMPro::TMPro_ExtensionMethods::GammaToLinear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6943ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "GammaToLinear", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.MinAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::TMPro::TMPro_ExtensionMethods::MinAlpha)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6943c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "MinAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::TMPro::TMPro_ExtensionMethods::Compare)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6943c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                             { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMPro_ExtensionMethods.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, int32_t)>(&::TMPro::TMPro_ExtensionMethods::Compare)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6943cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                { "Compare", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t TMPro::TMPro_ExtensionMethods::TagToInt(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "TagToInt", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline ::ArrayW<int32_t> TMPro::TMPro_ExtensionMethods::ToIntArray(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "ToIntArray", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, text);
}
inline ::StringW TMPro::TMPro_ExtensionMethods::ArrayToString(::ArrayW<char16_t> chars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "ArrayToString", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, chars);
}
inline ::StringW TMPro::TMPro_ExtensionMethods::IntToString(::ArrayW<int32_t> unicodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "IntToString", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unicodes);
}
inline ::StringW TMPro::TMPro_ExtensionMethods::UintToString(::System::Collections::Generic::List_1<uint32_t>* unicodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "UintToString", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unicodes);
}
inline ::StringW TMPro::TMPro_ExtensionMethods::IntToString(::ArrayW<int32_t> unicodes, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "IntToString", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unicodes, start, length);
}
template <typename T> inline int32_t TMPro::TMPro_ExtensionMethods::FindInstanceID(::System::Collections::Generic::List_1<T>* list, T target) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                           { "FindInstanceID", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, target);
}
inline bool TMPro::TMPro_ExtensionMethods::Compare(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                                                         { "Compare", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool TMPro::TMPro_ExtensionMethods::CompareRGB(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "CompareRGB", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool TMPro::TMPro_ExtensionMethods::Compare(::UnityEngine::Color a, ::UnityEngine::Color b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Compare", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool TMPro::TMPro_ExtensionMethods::CompareRGB(::UnityEngine::Color a, ::UnityEngine::Color b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "CompareRGB", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color32 TMPro::TMPro_ExtensionMethods::Multiply(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                                                         { "Multiply", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c1, c2);
}
inline ::UnityEngine::Color32 TMPro::TMPro_ExtensionMethods::Tint(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Tint", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c1, c2);
}
inline ::UnityEngine::Color32 TMPro::TMPro_ExtensionMethods::Tint(::UnityEngine::Color32 c1, float_t tint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "Tint", {}, { ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c1, tint);
}
inline ::UnityEngine::Color32 TMPro::TMPro_ExtensionMethods::GammaToLinear(::UnityEngine::Color32 c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "GammaToLinear", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c);
}
inline uint8_t TMPro::TMPro_ExtensionMethods::GammaToLinear(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "GammaToLinear", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::TMPro_ExtensionMethods::MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(), { "MinAlpha", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c1, c2);
}
inline bool TMPro::TMPro_ExtensionMethods::Compare(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, int32_t accuracy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                                           { "Compare", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v1, v2, accuracy);
}
inline bool TMPro::TMPro_ExtensionMethods::Compare(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2, int32_t accuracy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMPro_ExtensionMethods*>(),
                                              { "Compare", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, q1, q2, accuracy);
}
// Ctor Parameters []
constexpr ::TMPro::TMPro_ExtensionMethods::TMPro_ExtensionMethods() {}
