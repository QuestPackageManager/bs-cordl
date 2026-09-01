#pragma once
// IWYU pragma private; include "GlobalNamespace\XRSystemStateEventsDebugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRSystemStateEventsDebugger)
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class IXRSystemState;
}
namespace GlobalNamespace {
struct XRSystemEventType;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class XRSystemStateEventsDebugger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XRSystemStateEventsDebugger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRSystemStateEventsDebugger*, "", "XRSystemStateEventsDebugger");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: XRSystemStateEventsDebugger
class CORDL_TYPE XRSystemStateEventsDebugger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _xrSystemState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__xrSystemState, put = __cordl_internal_set__xrSystemState)) ::GlobalNamespace::IXRSystemState* _xrSystemState;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x585d814, size 0xf8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleSystemStateChange, addr 0x585d90c, size 0x4, virtual false, abstract: false, final false
  inline void HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType);

  /// @brief Method Initialize, addr 0x585d6ac, size 0x168, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::XRSystemStateEventsDebugger* New_ctor();

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__xrSystemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__xrSystemState();

  constexpr void __cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value);

  /// @brief Method .ctor, addr 0x585d910, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_loggerPrefix, addr 0x585d668, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystemStateEventsDebugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystemStateEventsDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystemStateEventsDebugger(XRSystemStateEventsDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystemStateEventsDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystemStateEventsDebugger(XRSystemStateEventsDebugger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21458 };

  /// @brief Field _xrSystemState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____xrSystemState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRSystemStateEventsDebugger, ____xrSystemState) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRSystemStateEventsDebugger) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
