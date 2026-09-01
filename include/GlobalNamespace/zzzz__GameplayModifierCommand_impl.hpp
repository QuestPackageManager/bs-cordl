#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayModifierCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierCommand_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameplayModifierCommand::*)()>(&::GlobalNamespace::GameplayModifierCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameplayModifierCommand::*)()>(&::GlobalNamespace::GameplayModifierCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32d1698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::GameplayModifierCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::GameplayModifierCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x32d16dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.SetModifierState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayModifierCommand::*)(
    ::StringW, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(&::GlobalNamespace::GameplayModifierCommand::SetModifierState)> {
  constexpr static std::size_t size = 0xa48;
  constexpr static std::size_t addrs = 0x32d18ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(),
            { "SetModifierState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.PrintModifierState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierCommand::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
    &::GlobalNamespace::GameplayModifierCommand::PrintModifierState)> {
  constexpr static std::size_t size = 0xb74;
  constexpr static std::size_t addrs = 0x32d22f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(),
                                         { "PrintModifierState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand.GetGameplayModifierString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameplayModifierCommand::*)()>(&::GlobalNamespace::GameplayModifierCommand::GetGameplayModifierString)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x32d2e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { "GetGameplayModifierString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifierCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifierCommand::*)()>(&::GlobalNamespace::GameplayModifierCommand::_ctor)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x32d3590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::GameplayModifierCommand::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__modifierName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierName;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__modifierName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifierName;
}
constexpr void GlobalNamespace::GameplayModifierCommand::__cordl_internal_set__modifierName(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifierName = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::GameplayModifierCommand::__cordl_internal_get__set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
constexpr void GlobalNamespace::GameplayModifierCommand::__cordl_internal_set__set(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____set = value;
}
inline ::StringW GlobalNamespace::GameplayModifierCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameplayModifierCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::GameplayModifierCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline bool GlobalNamespace::GameplayModifierCommand::SetModifierState(::StringW modifierName, bool state, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(),
          { "SetModifierState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modifierName, state, messages);
}
inline void GlobalNamespace::GameplayModifierCommand::PrintModifierState(::StringW modifierName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(),
                                       { "PrintModifierState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifierName, messages);
}
inline ::StringW GlobalNamespace::GameplayModifierCommand::GetGameplayModifierString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { "GetGameplayModifierString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifierCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifierCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierCommand* GlobalNamespace::GameplayModifierCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifierCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifierCommand::GameplayModifierCommand() {}
