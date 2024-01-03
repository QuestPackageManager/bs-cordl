#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandEventBase_1)
namespace UnityEngine::UIElements {
class ICommandEvent;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class CommandEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::CommandEventBase_1);
// Type: UnityEngine.UIElements::CommandEventBase`1
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1027 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7229))
// CS Name: ::UnityEngine.UIElements::CommandEventBase`1<T>*
class CORDL_TYPE CommandEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field m_CommandName, offset 0x80, size 0x8
  __declspec(property(get = __get_m_CommandName, put = __set_m_CommandName))::StringW m_CommandName;

  __declspec(property(get = get_commandName, put = set_commandName))::StringW commandName;

  /// @brief Convert operator to "::UnityEngine::UIElements::ICommandEvent"
  constexpr operator ::UnityEngine::UIElements::ICommandEvent*() noexcept;

  constexpr ::StringW& __get_m_CommandName();

  constexpr ::StringW const& __get_m_CommandName() const;

  constexpr void __set_m_CommandName(::StringW value);

  /// @brief Method get_commandName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_commandName();

  /// @brief Method set_commandName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_commandName(::StringW value);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::StringW commandName);

  static inline ::UnityEngine::UIElements::CommandEventBase_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandEventBase_1(CommandEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandEventBase_1(CommandEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandEventBase_1();

public:
  /// @brief Field m_CommandName, offset: 0x80, size: 0x8, def value: None
  ::StringW ___m_CommandName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::CommandEventBase_1, "UnityEngine.UIElements", "CommandEventBase`1");
