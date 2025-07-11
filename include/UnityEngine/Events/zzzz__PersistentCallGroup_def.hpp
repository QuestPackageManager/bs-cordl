#pragma once
// IWYU pragma private; include "UnityEngine/Events/PersistentCallGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentCallGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class InvokableCallList;
}
namespace UnityEngine::Events {
class PersistentCall;
}
namespace UnityEngine::Events {
class UnityEventBase;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCallGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::PersistentCallGroup);
// Dependencies System.Object
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.PersistentCallGroup
class CORDL_TYPE PersistentCallGroup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field m_Calls, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Calls, put = __cordl_internal_set_m_Calls)) ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* m_Calls;

  /// @brief Method Initialize, addr 0x48bed80, size 0x190, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Events::InvokableCallList* invokableList, ::UnityEngine::Events::UnityEventBase* unityEventBase);

  static inline ::UnityEngine::Events::PersistentCallGroup* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* const& __cordl_internal_get_m_Calls() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*& __cordl_internal_get_m_Calls();

  constexpr void __cordl_internal_set_m_Calls(::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* value);

  /// @brief Method .ctor, addr 0x48becb8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x48bed38, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentCallGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentCallGroup(PersistentCallGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentCallGroup(PersistentCallGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10987 };

  /// @brief Field m_Calls, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* ___m_Calls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::PersistentCallGroup, ___m_Calls) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentCallGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::PersistentCallGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCallGroup*, "UnityEngine.Events", "PersistentCallGroup");
