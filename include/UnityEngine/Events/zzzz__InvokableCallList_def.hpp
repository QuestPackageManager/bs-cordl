#pragma once
// IWYU pragma private; include "UnityEngine/Events/InvokableCallList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InvokableCallList)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCallList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::InvokableCallList);
// Dependencies System.Object
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.InvokableCallList
class CORDL_TYPE InvokableCallList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ExecutingCalls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExecutingCalls,
                      put = __cordl_internal_set_m_ExecutingCalls)) ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;

  /// @brief Field m_NeedsUpdate, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsUpdate, put = __cordl_internal_set_m_NeedsUpdate)) bool m_NeedsUpdate;

  /// @brief Field m_PersistentCalls, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PersistentCalls,
                      put = __cordl_internal_set_m_PersistentCalls)) ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;

  /// @brief Field m_RuntimeCalls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeCalls,
                      put = __cordl_internal_set_m_RuntimeCalls)) ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;

  /// @brief Method AddListener, addr 0x48cb758, size 0xa8, virtual false, abstract: false, final false
  inline void AddListener(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method AddPersistentInvokableCall, addr 0x48cb6b0, size 0xa8, virtual false, abstract: false, final false
  inline void AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* call);

  /// @brief Method Clear, addr 0x48cba70, size 0xbc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearPersistent, addr 0x48cbb2c, size 0xbc, virtual false, abstract: false, final false
  inline void ClearPersistent();

  static inline ::UnityEngine::Events::InvokableCallList* New_ctor();

  /// @brief Method PrepareInvoke, addr 0x48cbbe8, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();

  /// @brief Method RemoveListener, addr 0x48cb800, size 0x270, virtual false, abstract: false, final false
  inline void RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& __cordl_internal_get_m_ExecutingCalls() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __cordl_internal_get_m_ExecutingCalls();

  constexpr bool const& __cordl_internal_get_m_NeedsUpdate() const;

  constexpr bool& __cordl_internal_get_m_NeedsUpdate();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& __cordl_internal_get_m_PersistentCalls() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __cordl_internal_get_m_PersistentCalls();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* const& __cordl_internal_get_m_RuntimeCalls() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& __cordl_internal_get_m_RuntimeCalls();

  constexpr void __cordl_internal_set_m_ExecutingCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  constexpr void __cordl_internal_set_m_NeedsUpdate(bool value);

  constexpr void __cordl_internal_set_m_PersistentCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  constexpr void __cordl_internal_set_m_RuntimeCalls(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* value);

  /// @brief Method .ctor, addr 0x48cbc9c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokableCallList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokableCallList(InvokableCallList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokableCallList(InvokableCallList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10988 };

  /// @brief Field m_PersistentCalls, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_PersistentCalls;

  /// @brief Field m_RuntimeCalls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_RuntimeCalls;

  /// @brief Field m_ExecutingCalls, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* ___m_ExecutingCalls;

  /// @brief Field m_NeedsUpdate, offset: 0x28, size: 0x1, def value: None
  bool ___m_NeedsUpdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Events::InvokableCallList, ___m_PersistentCalls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::InvokableCallList, ___m_RuntimeCalls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::InvokableCallList, ___m_ExecutingCalls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::InvokableCallList, ___m_NeedsUpdate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::InvokableCallList, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::InvokableCallList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
