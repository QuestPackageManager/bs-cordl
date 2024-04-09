#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectGUIState)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class ObjectGUIState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ObjectGUIState);
// Type: UnityEngine::ObjectGUIState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ObjectGUIState*
class CORDL_TYPE ObjectGUIState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Destroy, addr 0x323c104, size 0xa0, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x323c0a4, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x323c1a4, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x323c07c, size 0x28, virtual false, abstract: false, final false
  static inline void* Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x323c238, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  static inline ::UnityEngine::ObjectGUIState* New_ctor();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x323c034, size 0x48, virtual false, abstract: false, final false
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

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectGUIState, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ObjectGUIState, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ObjectGUIState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectGUIState*, "UnityEngine", "ObjectGUIState");
