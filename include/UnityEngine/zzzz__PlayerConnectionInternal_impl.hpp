#pragma once
// IWYU pragma private; include "UnityEngine/PlayerConnectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PlayerConnectionInternal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__IPlayerEditorConnectionNative_def.hpp"
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t>, int32_t)>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ad365c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                            { "UnityEngine.IPlayerEditorConnectionNative.SendMessage", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_TrySendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t>, int32_t)>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ad390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                            { "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_Poll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.Poll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_RegisterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad3c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ad3d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                             { "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_IsConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PlayerConnectionInternal::*)()>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.IsConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnityEngine_IPlayerEditorConnectionNative_DisconnectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(
    &::UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.IsConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::PlayerConnectionInternal::IsConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "IsConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.RegisterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::PlayerConnectionInternal::RegisterInternal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6ad3c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "RegisterInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnregisterInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::PlayerConnectionInternal::UnregisterInternal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6ad3dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnregisterInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.SendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::SendMessage)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6ad3760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                             { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.TrySendMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::UnityEngine::PlayerConnectionInternal::TrySendMessage)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6ad3a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                             { "TrySendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.PollInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::PollInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "PollInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.DisconnectAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::PlayerConnectionInternal::DisconnectAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "DisconnectAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PlayerConnectionInternal::*)()>(&::UnityEngine::PlayerConnectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ad4120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.RegisterInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PlayerConnectionInternal::RegisterInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ad4000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                             { "RegisterInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.UnregisterInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::PlayerConnectionInternal::UnregisterInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ad403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                             { "UnregisterInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.SendMessage_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::PlayerConnectionInternal::SendMessage_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad4078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "SendMessage_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PlayerConnectionInternal.TrySendMessage_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::PlayerConnectionInternal::TrySendMessage_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ad40cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "TrySendMessage_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                          { "UnityEngine.IPlayerEditorConnectionNative.SendMessage", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId, data, playerId);
}
inline bool UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                          { "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, messageId, data, playerId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.Poll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                                                         { "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.IsConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::PlayerConnectionInternal::IsConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "IsConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::RegisterInternal(::StringW messageId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "RegisterInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnregisterInternal(::StringW messageId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "UnregisterInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::SendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                           { "SendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId, data, playerId);
}
inline bool UnityEngine::PlayerConnectionInternal::TrySendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                           { "TrySendMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, messageId, data, playerId);
}
inline void UnityEngine::PlayerConnectionInternal::PollInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "PollInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::DisconnectAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { "DisconnectAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::PlayerConnectionInternal::RegisterInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                           { "RegisterInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::UnregisterInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                           { "UnregisterInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId);
}
inline void UnityEngine::PlayerConnectionInternal::SendMessage_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data,
                                                                        int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                                                         { "SendMessage_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageId, data, playerId);
}
inline bool UnityEngine::PlayerConnectionInternal::TrySendMessage_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> messageId, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data,
                                                                           int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::PlayerConnectionInternal*>(),
                                                                                         { "TrySendMessage_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, messageId, data, playerId);
}
inline ::UnityEngine::PlayerConnectionInternal* UnityEngine::PlayerConnectionInternal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::PlayerConnectionInternal*>());
}
/// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
constexpr UnityEngine::PlayerConnectionInternal::operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept {
  return static_cast<::UnityEngine::IPlayerEditorConnectionNative*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IPlayerEditorConnectionNative"
constexpr ::UnityEngine::IPlayerEditorConnectionNative* UnityEngine::PlayerConnectionInternal::i___UnityEngine__IPlayerEditorConnectionNative() noexcept {
  return static_cast<::UnityEngine::IPlayerEditorConnectionNative*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::PlayerConnectionInternal::PlayerConnectionInternal() {}
