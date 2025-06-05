#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeUpdateCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(NativeUpdateCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::Input::NativeUpdateCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngineInternal::Input {
// Is value type: false
// CS Name: UnityEngineInternal.Input.NativeUpdateCallback
class CORDL_TYPE NativeUpdateCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48ecdb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> buffer);

  static inline ::UnityEngineInternal::Input::NativeUpdateCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48ecd2c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeUpdateCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeUpdateCallback(NativeUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeUpdateCallback(NativeUpdateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18991 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeUpdateCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
NEED_NO_BOX(::UnityEngineInternal::Input::NativeUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
