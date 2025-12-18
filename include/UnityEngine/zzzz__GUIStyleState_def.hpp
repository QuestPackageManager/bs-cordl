#pragma once
// IWYU pragma private; include "UnityEngine/GUIStyleState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GUIStyleState)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyleState_BindingsMarshaller;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyleState;
}
namespace UnityEngine {
class GUIStyleState_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIStyleState);
MARK_REF_PTR_T(::UnityEngine::GUIStyleState_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyleState/BindingsMarshaller
class CORDL_TYPE GUIStyleState_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x697e128, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::GUIStyleState* guiStyleState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIStyleState_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIStyleState_BindingsMarshaller(GUIStyleState_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIStyleState_BindingsMarshaller(GUIStyleState_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyleState_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyleState
class CORDL_TYPE GUIStyleState : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::GUIStyleState_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_SourceStyle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceStyle, put = __cordl_internal_set_m_SourceStyle)) ::UnityEngine::GUIStyle* m_SourceStyle;

  __declspec(property(put = set_textColor)) ::UnityEngine::Color textColor;

  /// @brief Method Cleanup, addr 0x697dfa4, size 0x50, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Cleanup_Injected, addr 0x697dff4, size 0x3c, virtual false, abstract: false, final false
  static inline void Cleanup_Injected(::System::IntPtr _unity_self);

  /// @brief Method Finalize, addr 0x697e0d4, size 0x54, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetGUIStyleState, addr 0x697e078, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyleState* GetGUIStyleState(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source);

  /// @brief Method Init, addr 0x697df7c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Init();

  static inline ::UnityEngine::GUIStyleState* New_ctor();

  static inline ::UnityEngine::GUIStyleState* New_ctor(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_m_SourceStyle() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_SourceStyle();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_SourceStyle(::UnityEngine::GUIStyle* value);

  /// @brief Method .ctor, addr 0x697e030, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x697e070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUIStyle* sourceStyle, ::System::IntPtr source);

  /// @brief Method set_textColor, addr 0x697daf4, size 0x68, virtual false, abstract: false, final false
  inline void set_textColor(::UnityEngine::Color value);

  /// @brief Method set_textColor_Injected, addr 0x697df38, size 0x44, virtual false, abstract: false, final false
  static inline void set_textColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIStyleState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIStyleState(GUIStyleState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIStyleState(GUIStyleState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19604 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_SourceStyle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_SourceStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIStyleState, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyleState, ___m_SourceStyle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyleState, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIStyleState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyleState*, "UnityEngine", "GUIStyleState");
NEED_NO_BOX(::UnityEngine::GUIStyleState_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyleState_BindingsMarshaller*, "UnityEngine", "GUIStyleState/BindingsMarshaller");
