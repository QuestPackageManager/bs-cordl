#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheetUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheetUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__AngleUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.CreateInstanceWithHideFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (*)()>(&::UnityEngine::UIElements::StyleSheetUtility::CreateInstanceWithHideFlags)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7118714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "CreateInstanceWithHideFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x7118778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension_Unit (*)(::UnityEngine::UIElements::LengthUnit)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7118864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::Angle)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x71188f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension_Unit (*)(::UnityEngine::UIElements::AngleUnit)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x7118a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension (*)(::UnityEngine::UIElements::TimeValue)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimension)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7118aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimeValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ToDimensionUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleSheets::Dimension_Unit (*)(::UnityEngine::UIElements::TimeUnit)>(
    &::UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7118b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimeUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.TransferStylePropertyHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleProperty*, ::UnityEngine::UIElements::StyleSheet*,
                                                                ::UnityEngine::UIElements::StyleProperty*)>(&::UnityEngine::UIElements::StyleSheetUtility::TransferStylePropertyHandles)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x7118b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                             { "TransferStylePropertyHandles",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.GetEnumExportString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Enum*)>(&::UnityEngine::UIElements::StyleSheetUtility::GetEnumExportString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x7119268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "GetEnumExportString", {}, { ::i2c::type_of<::System::Enum*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertCamelToDash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertCamelToDash)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x71192e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ConvertCamelToDash", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertDashToHungarian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertDashToHungarian)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7119410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ConvertDashToHungarian", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.ConvertDashToUpperNoSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool, bool)>(&::UnityEngine::UIElements::StyleSheetUtility::ConvertDashToUpperNoSpace)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x7119470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                             { "ConvertDashToUpperNoSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheetUtility.GetDimensionUnitExportString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleSheets::Dimension_Unit)>(
    &::UnityEngine::UIElements::StyleSheetUtility::GetDimensionUnitExportString)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x7119798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                             { "GetDimensionUnitExportString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheetUtility::setStaticF_SpecialEnumToStringCases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "SpecialEnumToStringCases", ::UnityEngine::UIElements::StyleSheetUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheetUtility::getStaticF_SpecialEnumToStringCases() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "SpecialEnumToStringCases", ::UnityEngine::UIElements::StyleSheetUtility*>();
}
inline void UnityEngine::UIElements::StyleSheetUtility::setStaticF_SpecialStringToEnumCases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "SpecialStringToEnumCases", ::UnityEngine::UIElements::StyleSheetUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* UnityEngine::UIElements::StyleSheetUtility::getStaticF_SpecialStringToEnumCases() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "SpecialStringToEnumCases", ::UnityEngine::UIElements::StyleSheetUtility*>();
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> UnityEngine::UIElements::StyleSheetUtility::CreateInstanceWithHideFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "CreateInstanceWithHideFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::Length length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, length);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::LengthUnit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::Angle angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, angle);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::AngleUnit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension UnityEngine::UIElements::StyleSheetUtility::ToDimension(::UnityEngine::UIElements::TimeValue timeValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimension", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimeValue>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension>(nullptr, ___internal_method, timeValue);
}
inline ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheetUtility::ToDimensionUnit(::UnityEngine::UIElements::TimeUnit unit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ToDimensionUnit", {}, { ::i2c::type_of<::UnityEngine::UIElements::TimeUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>(nullptr, ___internal_method, unit);
}
inline void UnityEngine::UIElements::StyleSheetUtility::TransferStylePropertyHandles(::UnityEngine::UIElements::StyleSheet* fromStyleSheet, ::UnityEngine::UIElements::StyleProperty* fromStyleProperty,
                                                                                     ::UnityEngine::UIElements::StyleSheet* toStyleSheet, ::UnityEngine::UIElements::StyleProperty* toStyleProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                           { "TransferStylePropertyHandles",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromStyleSheet, fromStyleProperty, toStyleSheet, toStyleProperty);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::GetEnumExportString(::System::Enum* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "GetEnumExportString", {}, { ::i2c::type_of<::System::Enum*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertCamelToDash(::StringW camel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ConvertCamelToDash", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, camel);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertDashToHungarian(::StringW dash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(), { "ConvertDashToHungarian", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dash);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::ConvertDashToUpperNoSpace(::StringW dash, bool firstCase, bool addSpace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                           { "ConvertDashToUpperNoSpace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dash, firstCase, addSpace);
}
inline ::StringW UnityEngine::UIElements::StyleSheetUtility::GetDimensionUnitExportString(::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheetUtility*>(),
                                                           { "GetDimensionUnitExportString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unit);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheetUtility::StyleSheetUtility() {}
