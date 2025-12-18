#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ConsoleLogsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConsoleLogsCache)
namespace Meta::XR::ImmersiveDebugger::Utils {
class ConsoleLogsCache___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class ConsoleLogsCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class ConsoleLogsCache___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0);
// Dependencies System.Object, UnityEngine.LogType
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache/<>c__DisplayClass7_0
class CORDL_TYPE ConsoleLogsCache___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field logString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logString, put = __cordl_internal_set_logString)) ::StringW logString;

  /// @brief Field stackTrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stackTrace, put = __cordl_internal_set_stackTrace)) ::StringW stackTrace;

  /// @brief Field type, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::LogType type;

  static inline ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0* New_ctor();

  /// @brief Method <EnqueueLogEntry>b__0, addr 0x5897004, size 0x16c, virtual false, abstract: false, final false
  inline void _EnqueueLogEntry_b__0(::System::Object* _);

  constexpr ::StringW const& __cordl_internal_get_logString() const;

  constexpr ::StringW& __cordl_internal_get_logString();

  constexpr ::StringW const& __cordl_internal_get_stackTrace() const;

  constexpr ::StringW& __cordl_internal_get_stackTrace();

  constexpr ::UnityEngine::LogType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::LogType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_logString(::StringW value);

  constexpr void __cordl_internal_set_stackTrace(::StringW value);

  constexpr void __cordl_internal_set_type(::UnityEngine::LogType value);

  /// @brief Method .ctor, addr 0x5896f70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleLogsCache___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogsCache___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleLogsCache___c__DisplayClass7_0(ConsoleLogsCache___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogsCache___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleLogsCache___c__DisplayClass7_0(ConsoleLogsCache___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18313 };

  /// @brief Field logString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___logString;

  /// @brief Field stackTrace, offset: 0x18, size: 0x8, def value: None
  ::StringW ___stackTrace;

  /// @brief Field type, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LogType ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0, ___logString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0, ___stackTrace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0, ___type) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache
class CORDL_TYPE ConsoleLogsCache : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0;

  /// @brief Field OnLogReceived, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnLogReceived, put = setStaticF_OnLogReceived)) ::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* OnLogReceived;

  /// @brief Field StartupLogs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StartupLogs,
                      put = setStaticF_StartupLogs)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* StartupLogs;

  /// @brief Field _mainThreadContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__mainThreadContext, put = setStaticF__mainThreadContext)) ::System::Threading::SynchronizationContext* _mainThreadContext;

  /// @brief Method ConsumeStartupLogs, addr 0x5896cbc, size 0x1ac, virtual false, abstract: false, final false
  static inline void ConsumeStartupLogs(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* logProcessor);

  /// @brief Method EnqueueLogEntry, addr 0x5896e68, size 0x108, virtual false, abstract: false, final false
  static inline void EnqueueLogEntry(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type);

  /// @brief Method OnApplicationQuitting, addr 0x5896904, size 0xa4, virtual false, abstract: false, final false
  static inline void OnApplicationQuitting();

  /// @brief Method OnLoad, addr 0x58969a8, size 0x18c, virtual false, abstract: false, final false
  static inline void OnLoad();

  /// @brief Method StartCachingLogs, addr 0x5896b34, size 0x188, virtual false, abstract: false, final false
  static inline void StartCachingLogs();

  static inline ::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* getStaticF_OnLogReceived();

  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* getStaticF_StartupLogs();

  static inline ::System::Threading::SynchronizationContext* getStaticF__mainThreadContext();

  static inline void setStaticF_OnLogReceived(::System::Action_3<::StringW, ::StringW, ::UnityEngine::LogType>* value);

  static inline void setStaticF_StartupLogs(::System::Collections::Generic::List_1<::System::ValueTuple_3<::StringW, ::StringW, ::UnityEngine::LogType>>* value);

  static inline void setStaticF__mainThreadContext(::System::Threading::SynchronizationContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleLogsCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleLogsCache(ConsoleLogsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleLogsCache(ConsoleLogsCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache*, "Meta.XR.ImmersiveDebugger.Utils", "ConsoleLogsCache");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::ConsoleLogsCache___c__DisplayClass7_0*, "Meta.XR.ImmersiveDebugger.Utils", "ConsoleLogsCache/<>c__DisplayClass7_0");
