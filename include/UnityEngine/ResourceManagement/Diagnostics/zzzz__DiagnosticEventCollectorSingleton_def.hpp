#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEventCollectorSingleton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticEventCollectorSingleton)
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton___c;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
class CORDL_TYPE DiagnosticEventCollectorSingleton___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __9__11_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* __9__8_0;

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c* New_ctor();

  /// @brief Method <Awake>b__11_0, addr 0x47a39c4, size 0x5c, virtual false, abstract: false, final false
  inline void _Awake_b__11_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  /// @brief Method <RegisterEventHandler>b__8_0, addr 0x47a39bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterEventHandler_b__8_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent evt);

  /// @brief Method .ctor, addr 0x47a39b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c* getStaticF___9();

  static inline ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* getStaticF___9__11_0();

  static inline ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c* value);

  static inline void setStaticF___9__11_0(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEventCollectorSingleton___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticEventCollectorSingleton___c(DiagnosticEventCollectorSingleton___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticEventCollectorSingleton___c(DiagnosticEventCollectorSingleton___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
// Dependencies System.Guid, UnityEngine.ResourceManagement.Util.ComponentSingleton`1<T>
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
class CORDL_TYPE DiagnosticEventCollectorSingleton
    : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton>> {
public:
  // Declarations
  using __c = ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c;

  /// @brief Field fpsAvg, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_fpsAvg, put = __cordl_internal_set_fpsAvg)) float_t fpsAvg;

  /// @brief Field m_CreatedEvents, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CreatedEvents,
      put = __cordl_internal_set_m_CreatedEvents)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_CreatedEvents;

  /// @brief Field m_UnhandledEvents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnhandledEvents,
                      put = __cordl_internal_set_m_UnhandledEvents)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_UnhandledEvents;

  /// @brief Field m_lastFrame, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastFrame, put = __cordl_internal_set_m_lastFrame)) int32_t m_lastFrame;

  /// @brief Field m_lastTickSent, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_lastTickSent, put = __cordl_internal_set_m_lastTickSent)) float_t m_lastTickSent;

  /// @brief Field s_EventHandlers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_s_EventHandlers,
                      put = __cordl_internal_set_s_EventHandlers)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* s_EventHandlers;

  /// @brief Field s_editorConnectionGuid, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_editorConnectionGuid, put = setStaticF_s_editorConnectionGuid)) ::System::Guid s_editorConnectionGuid;

  /// @brief Method Awake, addr 0x47a35a8, size 0xe0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetGameObjectName, addr 0x47a2d0c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetGameObjectName();

  static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton* New_ctor();

  /// @brief Method PostEvent, addr 0x47a338c, size 0x21c, virtual false, abstract: false, final false
  inline void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);

  /// @brief Method RegisterEventHandler, addr 0x47a2d4c, size 0xcc, virtual false, abstract: false, final false
  static inline bool RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _cordl_register, bool create);

  /// @brief Method RegisterEventHandler, addr 0x47a2e18, size 0x4d0, virtual false, abstract: false, final false
  inline void RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method UnregisterEventHandler, addr 0x47a32e8, size 0xa4, virtual false, abstract: false, final false
  inline void UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);

  /// @brief Method Update, addr 0x47a3688, size 0x1c8, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_fpsAvg() const;

  constexpr float_t& __cordl_internal_get_fpsAvg();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* const& __cordl_internal_get_m_CreatedEvents() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __cordl_internal_get_m_CreatedEvents();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* const& __cordl_internal_get_m_UnhandledEvents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __cordl_internal_get_m_UnhandledEvents();

  constexpr int32_t const& __cordl_internal_get_m_lastFrame() const;

  constexpr int32_t& __cordl_internal_get_m_lastFrame();

  constexpr float_t const& __cordl_internal_get_m_lastTickSent() const;

  constexpr float_t& __cordl_internal_get_m_lastTickSent();

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* const& __cordl_internal_get_s_EventHandlers() const;

  constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*& __cordl_internal_get_s_EventHandlers();

  constexpr void __cordl_internal_set_fpsAvg(float_t value);

  constexpr void __cordl_internal_set_m_CreatedEvents(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  constexpr void __cordl_internal_set_m_UnhandledEvents(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  constexpr void __cordl_internal_set_m_lastFrame(int32_t value);

  constexpr void __cordl_internal_set_m_lastTickSent(float_t value);

  constexpr void __cordl_internal_set_s_EventHandlers(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* value);

  /// @brief Method .ctor, addr 0x47a3850, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Guid getStaticF_s_editorConnectionGuid();

  /// @brief Method get_PlayerConnectionGuid, addr 0x47a2c10, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Guid get_PlayerConnectionGuid();

  static inline void setStaticF_s_editorConnectionGuid(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticEventCollectorSingleton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15695 };

  /// @brief Field m_CreatedEvents, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___m_CreatedEvents;

  /// @brief Field m_UnhandledEvents, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___m_UnhandledEvents;

  /// @brief Field s_EventHandlers, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* ___s_EventHandlers;

  /// @brief Field m_lastTickSent, offset: 0x38, size: 0x4, def value: None
  float_t ___m_lastTickSent;

  /// @brief Field m_lastFrame, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_lastFrame;

  /// @brief Field fpsAvg, offset: 0x40, size: 0x4, def value: None
  float_t ___fpsAvg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___m_CreatedEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___m_UnhandledEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___s_EventHandlers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___m_lastTickSent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___m_lastFrame) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, ___fpsAvg) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, 0x48>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton___c*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton/<>c");
