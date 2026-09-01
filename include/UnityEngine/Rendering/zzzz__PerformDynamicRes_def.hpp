#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\PerformDynamicRes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerformDynamicRes)
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
// Forward declare root types
namespace UnityEngine::Rendering {
class PerformDynamicRes;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PerformDynamicRes*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PerformDynamicRes*, "UnityEngine.Rendering", "PerformDynamicRes");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.PerformDynamicRes
class CORDL_TYPE PerformDynamicRes : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6757544, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6757560, size 0x24, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6757530, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::UnityEngine::Rendering::PerformDynamicRes* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x67574c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformDynamicRes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformDynamicRes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformDynamicRes(PerformDynamicRes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformDynamicRes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformDynamicRes(PerformDynamicRes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PerformDynamicRes) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
