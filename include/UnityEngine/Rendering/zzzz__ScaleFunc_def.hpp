#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScaleFunc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ScaleFunc)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ScaleFunc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ScaleFunc);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ScaleFunc
class CORDL_TYPE ScaleFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x65f78a4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2Int size, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x65f792c, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2Int EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x65f7890, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2Int Invoke(::UnityEngine::Vector2Int size);

  static inline ::UnityEngine::Rendering::ScaleFunc* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x65f7824, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleFunc(ScaleFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleFunc(ScaleFunc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScaleFunc, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ScaleFunc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScaleFunc*, "UnityEngine.Rendering", "ScaleFunc");
