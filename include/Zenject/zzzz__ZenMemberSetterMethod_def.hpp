#pragma once
// IWYU pragma private; include "Zenject/ZenMemberSetterMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ZenMemberSetterMethod)
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
class ZenMemberSetterMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenMemberSetterMethod);
// Dependencies System.MulticastDelegate
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenMemberSetterMethod
class CORDL_TYPE ZenMemberSetterMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4af2c50, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4af2c78, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4af2c3c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* obj, ::System::Object* value);

  static inline ::Zenject::ZenMemberSetterMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4af2b38, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenMemberSetterMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenMemberSetterMethod(ZenMemberSetterMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenMemberSetterMethod(ZenMemberSetterMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenMemberSetterMethod, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenMemberSetterMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenMemberSetterMethod*, "Zenject", "ZenMemberSetterMethod");
