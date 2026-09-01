#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\PredictiveParser.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PredictiveParser_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.ExpectSingleChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(::System::ReadOnlySpan_1<char16_t>, char16_t)>(
    &::UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectSingleChar)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x65071a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                             { "ExpectSingleChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.ExpectInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectInt)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x65072a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(), { "ExpectInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.ExpectString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x65073bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                                                           { "ExpectString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.AcceptSingleChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(::System::ReadOnlySpan_1<char16_t>, char16_t)>(
    &::UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptSingleChar)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65075bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                             { "AcceptSingleChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.AcceptString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(
    ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::ReadOnlySpan_1<char16_t>>)>(&::UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x65075f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                { "AcceptString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::PredictiveParser.AcceptInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::PredictiveParser::*)(::System::ReadOnlySpan_1<char16_t>)>(
    &::UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6507720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(), { "AcceptInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                           { "ExpectSingleChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str, c);
}
inline int32_t UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectInt(::System::ReadOnlySpan_1<char16_t> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(), { "ExpectInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str);
}
inline ::System::ReadOnlySpan_1<char16_t> UnityEngine::InputSystem::Utilities::PredictiveParser::ExpectString(::System::ReadOnlySpan_1<char16_t> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(), { "ExpectString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method, str);
}
inline bool UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptSingleChar(::System::ReadOnlySpan_1<char16_t> str, char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                                           { "AcceptSingleChar", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str, c);
}
inline bool UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptString(::System::ReadOnlySpan_1<char16_t> input, ::by_ref<::System::ReadOnlySpan_1<char16_t>> output) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(),
                                              { "AcceptString", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<char16_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, input, output);
}
inline void UnityEngine::InputSystem::Utilities::PredictiveParser::AcceptInt(::System::ReadOnlySpan_1<char16_t> str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::PredictiveParser>(), { "AcceptInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, str);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::PredictiveParser::PredictiveParser(int32_t m_Position) noexcept {
  this->m_Position = m_Position;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::PredictiveParser::PredictiveParser() {}
