#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
class Camera;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
// Type: UnityEngine.Rendering::ScriptableRenderContext
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(10356))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10360))
// CS Name: ::UnityEngine.Rendering::ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext {
public:
  // Declarations
  /// @brief Field kRenderTypeTag, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kRenderTypeTag, put = setStaticF_kRenderTypeTag))::UnityEngine::Rendering::ShaderTagId kRenderTypeTag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*();

  static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag();

  /// @brief Method .ctor, addr 0x2ced50c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* ptr);

  /// @brief Method GetCameras, addr 0x2ced514, size 0x8c, virtual false, abstract: false, final false
  inline void GetCameras(::System::Collections::Generic::List_1<::UnityEngine::Camera*>* results);

  /// @brief Method Equals, addr 0x2cee308, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);

  /// @brief Method Equals, addr 0x2cee378, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2cee3f0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetCameras_Internal, addr 0x2cee27c, size 0x8c, virtual false, abstract: false, final false
  inline void GetCameras_Internal(::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetCameras_Internal_Injected, addr 0x2cee3f8, size 0x54, virtual false, abstract: false, final false
  static inline void GetCameras_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::Type* listType, ::System::Object* resultList);

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr ScriptableRenderContext(void* m_Ptr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext();

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
