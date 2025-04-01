#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
// Dependencies System.IEquatable`1<T>, System.IntPtr, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext {
public:
  // Declarations
  /// @brief Field kRenderTypeTag, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kRenderTypeTag, put = setStaticF_kRenderTypeTag)) ::UnityEngine::Rendering::ShaderTagId kRenderTypeTag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*();

  /// @brief Method Equals, addr 0x48c3e80, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48c3e10, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);

  /// @brief Method GetCameras, addr 0x48c3a88, size 0xb8, virtual false, abstract: false, final false
  inline void GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* results);

  /// @brief Method GetCameras_Internal, addr 0x48c3d30, size 0x8c, virtual false, abstract: false, final false
  inline void GetCameras_Internal(::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetCameras_Internal_Injected, addr 0x48c3dbc, size 0x54, virtual false, abstract: false, final false
  static inline void GetCameras_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetHashCode, addr 0x48c3f28, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x48c3a80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_();

  static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ScriptableRenderContext(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11235 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
