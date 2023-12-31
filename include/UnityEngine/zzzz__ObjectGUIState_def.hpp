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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14610))
// CS Name: ::UnityEngine::ObjectGUIState*
class CORDL_TYPE ObjectGUIState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  static inline ::UnityEngine::ObjectGUIState* New_ctor();

  /// @brief Method .ctor, addr 0x2d04550, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Dispose, addr 0x2d045c0, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x2d046c0, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Destroy, addr 0x2d04620, size 0xa0, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Internal_Create, addr 0x2d04598, size 0x28, virtual false, abstract: false, final false
  static inline void* Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x2d04754, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(void* ptr);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectGUIState(ObjectGUIState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectGUIState(ObjectGUIState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectGUIState();

public:
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
