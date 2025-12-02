#pragma once
// IWYU pragma private; include "Zenject/ZenInjectMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ZenInjectMethod)
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
namespace Zenject {
class ZenInjectMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenInjectMethod);
// Dependencies System.MulticastDelegate
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenInjectMethod
class CORDL_TYPE ZenInjectMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c08d60, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c08d88, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c08d4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Zenject::ZenInjectMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c08c04, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenInjectMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenInjectMethod(ZenInjectMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenInjectMethod(ZenInjectMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenInjectMethod, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenInjectMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
