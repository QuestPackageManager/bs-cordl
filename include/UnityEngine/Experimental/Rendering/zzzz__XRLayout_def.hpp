#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRLayout)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRLayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRLayout);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRLayout
class CORDL_TYPE XRLayout : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ActivePasses, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActivePasses, put = __cordl_internal_set_m_ActivePasses)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* m_ActivePasses;

  /// @brief Method AddCamera, addr 0x658f058, size 0x1b8, virtual false, abstract: false, final false
  inline void AddCamera(::UnityEngine::Camera* camera, bool enableXR);

  /// @brief Method AddPass, addr 0x658f840, size 0xe0, virtual false, abstract: false, final false
  inline void AddPass(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  /// @brief Method Clear, addr 0x658fc7c, size 0x144, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetActivePasses, addr 0x658fc74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* GetActivePasses();

  /// @brief Method LogDebugInfo, addr 0x658fdc0, size 0x44c, virtual false, abstract: false, final false
  inline void LogDebugInfo();

  static inline ::UnityEngine::Experimental::Rendering::XRLayout* New_ctor();

  /// @brief Method ReconfigurePass, addr 0x658f920, size 0x9c, virtual false, abstract: false, final false
  inline void ReconfigurePass(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Camera* camera);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* const&
  __cordl_internal_get_m_ActivePasses() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>*& __cordl_internal_get_m_ActivePasses();

  constexpr void
  __cordl_internal_set_m_ActivePasses(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* value);

  /// @brief Method .ctor, addr 0x6590350, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLayout(XRLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLayout(XRLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11828 };

  /// @brief Field m_ActivePasses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Experimental::Rendering::XRPass*>>* ___m_ActivePasses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRLayout, ___m_ActivePasses) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRLayout, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRLayout*, "UnityEngine.Experimental.Rendering", "XRLayout");
