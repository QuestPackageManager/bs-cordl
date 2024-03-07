#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(RenderPipeline)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipeline);
// Type: UnityEngine.Rendering::RenderPipeline
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RenderPipeline*
class CORDL_TYPE RenderPipeline : public ::System::Object {
public:
  // Declarations
  /// @brief Field <disposed>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Method Dispose, addr 0x2e3b1d0, size 0x78, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2e3bfe8, size 0x1004, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method InternalRender, addr 0x2e3b5e8, size 0x88, virtual false, abstract: false, final false
  inline void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method InternalRenderWithRequests, addr 0x2e3b670, size 0x100, virtual false, abstract: false, final false
  inline void InternalRenderWithRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras,
                                         ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests);

  /// @brief Method ProcessRenderRequests, addr 0x2e3bf58, size 0x4, virtual true, abstract: false, final false
  inline void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                    ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests);

  /// @brief Method Render, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> cameras);

  /// @brief Method Render, addr 0x2e3bf5c, size 0x78, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  /// @brief Method get_disposed, addr 0x2e3bfd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x2e3bfdc, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipeline(RenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipeline(RenderPipeline const&) = delete;

  /// @brief Field <disposed>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipeline, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderPipeline, ____disposed_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
