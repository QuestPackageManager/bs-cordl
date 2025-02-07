#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CommandEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICommandEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandEventBase_1)
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class CommandEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::CommandEventBase_1);
// Dependencies UnityEngine.UIElements.EventBase`1<T>, UnityEngine.UIElements.ICommandEvent
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.CommandEventBase`1<T>
class CORDL_TYPE CommandEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  __declspec(property(get = get_commandName, put = set_commandName)) ::StringW commandName;

  /// @brief Field m_CommandName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandName, put = __cordl_internal_set_m_CommandName)) ::StringW m_CommandName;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICommandEvent"
  constexpr operator ::UnityEngine::UIElements::ICommandEvent*() noexcept;

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::StringW commandName);

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::CommandEventBase_1<T>* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_CommandName() const;

  constexpr ::StringW& __cordl_internal_get_m_CommandName();

  constexpr void __cordl_internal_set_m_CommandName(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_commandName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_commandName();

  /// @brief Convert to "::UnityEngine::UIElements::ICommandEvent"
  constexpr ::UnityEngine::UIElements::ICommandEvent* i___UnityEngine__UIElements__ICommandEvent() noexcept;

  /// @brief Method set_commandName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_commandName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandEventBase_1(CommandEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandEventBase_1(CommandEventBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5797 };

  /// @brief Field m_CommandName, offset: 0x88, size: 0x8, def value: None
  ::StringW ___m_CommandName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::CommandEventBase_1, "UnityEngine.UIElements", "CommandEventBase`1");
