#pragma once
// IWYU pragma private; include "UnityEngine/ObjectGUIState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectGUIState)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class ObjectGUIState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ObjectGUIState);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectGUIState
class CORDL_TYPE ObjectGUIState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Destroy, addr 0x48e583c, size 0x5c, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x48e57dc, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x48e5898, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x48e57b4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x48e592c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  static inline ::UnityEngine::ObjectGUIState* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48e576c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectGUIState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectGUIState(ObjectGUIState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectGUIState(ObjectGUIState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16665 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectGUIState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectGUIState, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ObjectGUIState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectGUIState*, "UnityEngine", "ObjectGUIState");
