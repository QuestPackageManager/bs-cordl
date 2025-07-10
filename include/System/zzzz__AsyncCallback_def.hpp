#pragma once
// IWYU pragma private; include "System/AsyncCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(AsyncCallback)
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
namespace System {
class AsyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::AsyncCallback);
// Dependencies System.MulticastDelegate
namespace System {
// Is value type: false
// CS Name: System.AsyncCallback
class CORDL_TYPE AsyncCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3d566f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IAsyncResult* ar, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3d56710, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3d566dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IAsyncResult* ar);

  static inline ::System::AsyncCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3d565dc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncCallback(AsyncCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncCallback(AsyncCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AsyncCallback, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::AsyncCallback*, "System", "AsyncCallback");
