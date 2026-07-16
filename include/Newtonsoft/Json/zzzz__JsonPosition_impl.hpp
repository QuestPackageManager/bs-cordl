#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonPosition.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonPosition::*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonPosition::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cd5498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition.CalculateLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::JsonPosition::*)()>(&::Newtonsoft::Json::JsonPosition::CalculateLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cd5528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "CalculateLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonPosition::*)(::System::Text::StringBuilder*, ::by_ref<::System::IO::StringWriter*>, ::by_ref<::ArrayW<char16_t>>)>(
    &::Newtonsoft::Json::JsonPosition::WriteTo)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5cd55bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::JsonPosition>(),
            { "WriteTo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::System::IO::StringWriter*>>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition.TypeHasIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::JsonContainerType)>(&::Newtonsoft::Json::JsonPosition::TypeHasIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd5518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "TypeHasIndex", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition.BuildPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*,
                                                                     ::System::Nullable_1<::Newtonsoft::Json::JsonPosition>)>(&::Newtonsoft::Json::JsonPosition::BuildPath)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5cd57ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "BuildPath",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*>(),
                                                                                                         ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::JsonPosition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonPosition.FormatMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::StringW)>(&::Newtonsoft::Json::JsonPosition::FormatMessage)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5cd4f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(),
                                                { "FormatMessage", {}, { ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonPosition::setStaticF_SpecialCharacters(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "SpecialCharacters", ::Newtonsoft::Json::JsonPosition>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Newtonsoft::Json::JsonPosition::getStaticF_SpecialCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "SpecialCharacters", ::Newtonsoft::Json::JsonPosition>();
}
inline void Newtonsoft::Json::JsonPosition::_ctor(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline int32_t Newtonsoft::Json::JsonPosition::CalculateLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "CalculateLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Newtonsoft::Json::JsonPosition::WriteTo(::System::Text::StringBuilder* sb, ::by_ref<::System::IO::StringWriter*> writer, ::by_ref<::ArrayW<char16_t>> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::JsonPosition>(),
          { "WriteTo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::System::IO::StringWriter*>>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sb, writer, buffer);
}
inline bool Newtonsoft::Json::JsonPosition::TypeHasIndex(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "TypeHasIndex", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::JsonPosition::BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* positions,
                                                           ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> currentPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(), { "BuildPath",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*>(),
                                                                                                       ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::JsonPosition>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, positions, currentPosition);
}
inline ::StringW Newtonsoft::Json::JsonPosition::FormatMessage(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonPosition>(),
                                              { "FormatMessage", {}, { ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, lineInfo, path, message);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "PropertyName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasIndex", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonPosition::JsonPosition(::Newtonsoft::Json::JsonContainerType Type, int32_t Position, ::StringW PropertyName, bool HasIndex) noexcept {
  this->Type = Type;
  this->Position = Position;
  this->PropertyName = PropertyName;
  this->HasIndex = HasIndex;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonPosition::JsonPosition() {}
