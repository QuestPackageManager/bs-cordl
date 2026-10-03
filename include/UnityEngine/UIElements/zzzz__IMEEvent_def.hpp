#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMEEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMEEvent)
namespace UnityEngine::UIElements {
class IMEEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMEEvent;
}
namespace UnityEngine::UIElements {
class IMEEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IMEEvent*);
MARK_REF_T(::UnityEngine::UIElements::IMEEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IMEEvent*, "UnityEngine.UIElements", "IMEEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IMEEvent___c*, "UnityEngine.UIElements", "IMEEvent/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMEEvent/<>c
class CORDL_TYPE IMEEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::IMEEvent___c* __9;

  static inline ::UnityEngine::UIElements::IMEEvent___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x722ae7c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IMEEvent* __cctor_b__4_0();

  /// @brief Method .ctor, addr 0x722ae78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::IMEEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::IMEEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMEEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMEEvent___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMEEvent___c(IMEEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMEEvent___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMEEvent___c(IMEEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::IMEEvent___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [EventCategory((UnityEngine.UIElements.EventCategory)6)]
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMEEvent
class CORDL_TYPE IMEEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMEEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::IMEEvent___c;

  /// @brief Field <compositionString>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__compositionString_k__BackingField, put = __cordl_internal_set__compositionString_k__BackingField)) ::StringW _compositionString_k__BackingField;

  __declspec(property(put = set_compositionString)) ::StringW compositionString;

  /// @brief Method GetPooled, addr 0x722acb4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IMEEvent* GetPooled(::StringW compositionString);

  /// @brief Method Init, addr 0x722ad34, size 0x5c, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x722ad90, size 0x10, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::IMEEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__compositionString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__compositionString_k__BackingField();

  constexpr void __cordl_internal_set__compositionString_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x722ada0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method set_compositionString, addr 0x722abbc, size 0x8, virtual false, abstract: false, final false
  inline void set_compositionString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMEEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMEEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMEEvent(IMEEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMEEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMEEvent(IMEEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4471 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <compositionString>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____compositionString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::IMEEvent, ____compositionString_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::IMEEvent) == 0x70, "Size mismatch!");

} // namespace UnityEngine::UIElements
