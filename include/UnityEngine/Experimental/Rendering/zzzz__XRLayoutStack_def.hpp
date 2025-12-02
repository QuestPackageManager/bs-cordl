#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRLayoutStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRLayoutStack)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
class XRLayout;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRLayoutStack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRLayoutStack);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRLayoutStack
class CORDL_TYPE XRLayoutStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stack, put = __cordl_internal_set_m_Stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* m_Stack;

  __declspec(property(get = get_top)) ::UnityEngine::Experimental::Rendering::XRLayout* top;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6528a50, size 0x9c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method New, addr 0x6528838, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::XRLayout* New();

  static inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* New_ctor();

  /// @brief Method Release, addr 0x6528944, size 0x10c, virtual false, abstract: false, final false
  inline void Release();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* const& __cordl_internal_get_m_Stack() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>*& __cordl_internal_get_m_Stack();

  constexpr void __cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* value);

  /// @brief Method .ctor, addr 0x6528aec, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_top, addr 0x65288f0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::XRLayout* get_top();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLayoutStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLayoutStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLayoutStack(XRLayoutStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLayoutStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLayoutStack(XRLayoutStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11825 };

  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* ___m_Stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRLayoutStack, ___m_Stack) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRLayoutStack, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRLayoutStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRLayoutStack*, "UnityEngine.Experimental.Rendering", "XRLayoutStack");
