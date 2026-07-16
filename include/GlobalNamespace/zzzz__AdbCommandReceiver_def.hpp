#pragma once
// IWYU pragma private; include "GlobalNamespace/AdbCommandReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AdbCommandReceiver)
namespace GlobalNamespace {
class AdbCommandReceiver_CallbackProxy;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class AdbCommandReceiver;
}
namespace GlobalNamespace {
class AdbCommandReceiver_CallbackProxy;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AdbCommandReceiver*);
MARK_REF_T(::GlobalNamespace::AdbCommandReceiver_CallbackProxy*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdbCommandReceiver*, "", "AdbCommandReceiver");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdbCommandReceiver_CallbackProxy*, "", "AdbCommandReceiver/CallbackProxy");
// Dependencies UnityEngine.AndroidJavaProxy
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdbCommandReceiver/CallbackProxy
class CORDL_TYPE AdbCommandReceiver_CallbackProxy : public ::UnityEngine::AndroidJavaProxy {
public:
  // Declarations
  /// @brief Field _onCommandReceived, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onCommandReceived, put = __cordl_internal_set__onCommandReceived)) ::System::Action_1<::StringW>* _onCommandReceived;

  static inline ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* New_ctor(::System::Action_1<::StringW>* onCommandReceived);

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__onCommandReceived() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onCommandReceived();

  constexpr void __cordl_internal_set__onCommandReceived(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x32c9d58, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::StringW>* onCommandReceived);

  /// @brief Method onCommandReceived, addr 0x32c9fa8, size 0x20, virtual false, abstract: false, final false
  inline void onCommandReceived(::StringW cmd);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdbCommandReceiver_CallbackProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdbCommandReceiver_CallbackProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdbCommandReceiver_CallbackProxy(AdbCommandReceiver_CallbackProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdbCommandReceiver_CallbackProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdbCommandReceiver_CallbackProxy(AdbCommandReceiver_CallbackProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19331 };

  /// @brief Field _onCommandReceived, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____onCommandReceived;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver_CallbackProxy, ____onCommandReceived) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdbCommandReceiver_CallbackProxy) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AdbCommandReceiver
class CORDL_TYPE AdbCommandReceiver : public ::System::Object {
public:
  // Declarations
  using CallbackProxy = ::GlobalNamespace::AdbCommandReceiver_CallbackProxy;

  /// @brief Field _callbackProxy, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__callbackProxy, put = __cordl_internal_set__callbackProxy)) ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* _callbackProxy;

  /// @brief Field _context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::UnityEngine::AndroidJavaObject* _context;

  /// @brief Field _intentFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__intentFilter, put = __cordl_internal_set__intentFilter)) ::UnityEngine::AndroidJavaObject* _intentFilter;

  /// @brief Field _receiver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__receiver, put = __cordl_internal_set__receiver)) ::UnityEngine::AndroidJavaObject* _receiver;

  /// @brief Field _terminalController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__terminalController, put = __cordl_internal_set__terminalController)) ::GlobalNamespace::TerminalController* _terminalController;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x32c9de4, size 0x110, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x32c97dc, size 0x57c, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::AdbCommandReceiver* New_ctor();

  /// @brief Method OnCommandReceived, addr 0x32c9ef4, size 0xb0, virtual false, abstract: false, final false
  inline void OnCommandReceived(::StringW cmd);

  constexpr ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* const& __cordl_internal_get__callbackProxy() const;

  constexpr ::GlobalNamespace::AdbCommandReceiver_CallbackProxy*& __cordl_internal_get__callbackProxy();

  constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__context() const;

  constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__context();

  constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__intentFilter() const;

  constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__intentFilter();

  constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get__receiver() const;

  constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get__receiver();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__terminalController() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__terminalController();

  constexpr void __cordl_internal_set__callbackProxy(::GlobalNamespace::AdbCommandReceiver_CallbackProxy* value);

  constexpr void __cordl_internal_set__context(::UnityEngine::AndroidJavaObject* value);

  constexpr void __cordl_internal_set__intentFilter(::UnityEngine::AndroidJavaObject* value);

  constexpr void __cordl_internal_set__receiver(::UnityEngine::AndroidJavaObject* value);

  constexpr void __cordl_internal_set__terminalController(::GlobalNamespace::TerminalController* value);

  /// @brief Method .ctor, addr 0x32c9fa4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdbCommandReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdbCommandReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdbCommandReceiver(AdbCommandReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdbCommandReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdbCommandReceiver(AdbCommandReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19332 };

  /// @brief Field kCallbackInterface offset 0xffffffff size 0x8
  static constexpr ::ConstString kCallbackInterface{ u"com.beatgames.beatsaber.terminal.TerminalBroadcastReceiver$Callback" };

  /// @brief Field kIntentAction offset 0xffffffff size 0x8
  static constexpr ::ConstString kIntentAction{ u"com.beatgames.beatsaber.ACTION_CMD" };

  /// @brief Field kReceiverClass offset 0xffffffff size 0x8
  static constexpr ::ConstString kReceiverClass{ u"com.beatgames.beatsaber.terminal.TerminalBroadcastReceiver" };

  /// @brief Field _terminalController, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____terminalController;

  /// @brief Field _receiver, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaObject* ____receiver;

  /// @brief Field _intentFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaObject* ____intentFilter;

  /// @brief Field _context, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaObject* ____context;

  /// @brief Field _callbackProxy, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* ____callbackProxy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver, ____terminalController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver, ____receiver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver, ____intentFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver, ____context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdbCommandReceiver, ____callbackProxy) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdbCommandReceiver) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
