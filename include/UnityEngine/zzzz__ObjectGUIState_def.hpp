#pragma once
// IWYU pragma private; include "UnityEngine/ObjectGUIState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectGUIState)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class ObjectGUIState_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
class ObjectGUIState_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::ObjectGUIState*);
MARK_REF_T(::UnityEngine::ObjectGUIState_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ObjectGUIState*, "UnityEngine", "ObjectGUIState");
DEFINE_IL2CPP_CLASS(::UnityEngine::ObjectGUIState_BindingsMarshaller*, "UnityEngine", "ObjectGUIState/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectGUIState/BindingsMarshaller
class CORDL_TYPE ObjectGUIState_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6b4e47c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::ObjectGUIState* objectGUIState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectGUIState_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectGUIState_BindingsMarshaller(ObjectGUIState_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectGUIState_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectGUIState_BindingsMarshaller(ObjectGUIState_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ObjectGUIState_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectGUIState
class CORDL_TYPE ObjectGUIState : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::ObjectGUIState_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Destroy, addr 0x6b4e374, size 0x4c, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x6b4e2e4, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6b4e3c0, size 0x80, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x6b4e2bc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create();

  /// @brief Method Internal_Destroy, addr 0x6b4e440, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  static inline ::UnityEngine::ObjectGUIState* New_ctor();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6b4e27c, size 0x40, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19868 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectGUIState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ObjectGUIState) == 0x18, "Size mismatch!");

} // namespace UnityEngine
