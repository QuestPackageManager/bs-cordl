#pragma once
// IWYU pragma private; include "Zenject\ZenInjectMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::Zenject::ZenInjectMethod*);
DEFINE_IL2CPP_CLASS(::Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
// Dependencies System.MulticastDelegate
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenInjectMethod
class CORDL_TYPE ZenInjectMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e3d8ec, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::ArrayW<::System::Object*> args, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e3d914, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e3d8d8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* obj, ::ArrayW<::System::Object*> args);

  static inline ::Zenject::ZenInjectMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e3d790, size 0x148, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::ZenInjectMethod) == 0x80, "Size mismatch!");

} // namespace Zenject
