#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseTerminalViewController.hpp"
#include "GlobalNamespace/zzzz__AutocompleteResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTerminalViewController_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::Initialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32e9fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32ea0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.PrintMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)(::GlobalNamespace::ConsoleMessage)>(
    &::GlobalNamespace::BaseTerminalViewController::PrintMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.PrintMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)(::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::BaseTerminalViewController::PrintMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ea184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                                                           { "PrintMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.HandleOnNewMessageToOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)(::StringW, ::UnityEngine::LogType)>(
    &::GlobalNamespace::BaseTerminalViewController::HandleOnNewMessageToOutput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ea194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                             { "HandleOnNewMessageToOutput", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.ExecuteCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)(::StringW)>(&::GlobalNamespace::BaseTerminalViewController::ExecuteCommand)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x32ea1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "ExecuteCommand", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.TryAutocomplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::GlobalNamespace::BaseTerminalViewController::TryAutocomplete)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x32ea2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                { "TryAutocomplete", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.ResetAutocompleteResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::ResetAutocompleteResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32ea2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "ResetAutocompleteResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.GetPrevHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::GetPrevHistory)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x32ea42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "GetPrevHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController.GetNextHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::GetNextHistory)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32ea4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "GetNextHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTerminalViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTerminalViewController::*)()>(&::GlobalNamespace::BaseTerminalViewController::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32ea58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TerminalController*& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__console() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr ::GlobalNamespace::TerminalController* const& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__console() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____console;
}
constexpr void GlobalNamespace::BaseTerminalViewController::__cordl_internal_set__console(::GlobalNamespace::TerminalController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____console = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__commandHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandHistory;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__commandHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandHistory;
}
constexpr void GlobalNamespace::BaseTerminalViewController::__cordl_internal_set__commandHistory(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandHistory = value;
}
constexpr int32_t& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__commandHistoryIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandHistoryIndex;
}
constexpr int32_t const& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__commandHistoryIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandHistoryIndex;
}
constexpr void GlobalNamespace::BaseTerminalViewController::__cordl_internal_set__commandHistoryIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandHistoryIndex = value;
}
constexpr ::GlobalNamespace::AutocompleteResult& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__autocompleteResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteResult;
}
constexpr ::GlobalNamespace::AutocompleteResult const& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__autocompleteResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteResult;
}
constexpr void GlobalNamespace::BaseTerminalViewController::__cordl_internal_set__autocompleteResult(::GlobalNamespace::AutocompleteResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocompleteResult = value;
}
constexpr int32_t& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__autocompleteIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteIndex;
}
constexpr int32_t const& GlobalNamespace::BaseTerminalViewController::__cordl_internal_get__autocompleteIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autocompleteIndex;
}
constexpr void GlobalNamespace::BaseTerminalViewController::__cordl_internal_set__autocompleteIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autocompleteIndex = value;
}
inline void GlobalNamespace::BaseTerminalViewController::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseTerminalViewController::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseTerminalViewController::PrintMessage(::GlobalNamespace::ConsoleMessage message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::BaseTerminalViewController::PrintMessage(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                                                         { "PrintMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type);
}
inline void GlobalNamespace::BaseTerminalViewController::HandleOnNewMessageToOutput(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                           { "HandleOnNewMessageToOutput", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type);
}
inline void GlobalNamespace::BaseTerminalViewController::ExecuteCommand(::StringW command) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "ExecuteCommand", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void GlobalNamespace::BaseTerminalViewController::TryAutocomplete(::StringW input, ::by_ref<::StringW> newInput, ::by_ref<::StringW> newAutocompleteInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(),
                                                           { "TryAutocomplete", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, newInput, newAutocompleteInput);
}
inline void GlobalNamespace::BaseTerminalViewController::ResetAutocompleteResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "ResetAutocompleteResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BaseTerminalViewController::GetPrevHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "GetPrevHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BaseTerminalViewController::GetNextHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { "GetNextHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BaseTerminalViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTerminalViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseTerminalViewController* GlobalNamespace::BaseTerminalViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseTerminalViewController*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::BaseTerminalViewController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::BaseTerminalViewController::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BaseTerminalViewController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BaseTerminalViewController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseTerminalViewController::BaseTerminalViewController() {}
