#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpawnerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VFXSpawnerState)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VFXSpawnerState);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXSpawnerState
class CORDL_TYPE VFXSpawnerState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Owner, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner)) bool m_Owner;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_WrapEventAttribute, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WrapEventAttribute, put = __cordl_internal_set_m_WrapEventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* m_WrapEventAttribute;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateSpawnerStateWrapper, addr 0x6c60a64, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper();

  /// @brief Method Dispose, addr 0x6c60cbc, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6c60c78, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Destroy, addr 0x6c60c3c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  static inline ::UnityEngine::VFX::VFXSpawnerState* New_ctor(::System::IntPtr ptr, bool owner);

  /// @brief Method PrepareWrapper, addr 0x6c60ac0, size 0x90, virtual false, abstract: false, final false
  inline void PrepareWrapper();

  /// @brief Method Release, addr 0x6c60be4, size 0x58, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetWrapValue, addr 0x6c60b50, size 0x94, virtual false, abstract: false, final false
  inline void SetWrapValue(::System::IntPtr ptrToSpawnerState, ::System::IntPtr ptrToEventAttribute);

  constexpr bool const& __cordl_internal_get_m_Owner() const;

  constexpr bool& __cordl_internal_get_m_Owner();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_m_WrapEventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_m_WrapEventAttribute();

  constexpr void __cordl_internal_set_m_Owner(bool value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_WrapEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  /// @brief Method .ctor, addr 0x6c60a58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr, bool owner);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpawnerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSpawnerState(VFXSpawnerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSpawnerState(VFXSpawnerState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22614 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Owner, offset: 0x18, size: 0x1, def value: None
  bool ___m_Owner;

  /// @brief Field m_WrapEventAttribute, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* ___m_WrapEventAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_Owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXSpawnerState, ___m_WrapEventAttribute) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXSpawnerState, 0x28>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VFXSpawnerState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXSpawnerState*, "UnityEngine.VFX", "VFXSpawnerState");
