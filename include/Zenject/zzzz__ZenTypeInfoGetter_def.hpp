#pragma once
// IWYU pragma private; include "Zenject/ZenTypeInfoGetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ZenTypeInfoGetter)
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
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenTypeInfoGetter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenTypeInfoGetter);
// Dependencies System.MulticastDelegate
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenTypeInfoGetter
class CORDL_TYPE ZenTypeInfoGetter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4b60a00, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4b60a20, size 0xc, virtual true, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4b609ec, size 0x14, virtual true, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* Invoke();

  static inline ::Zenject::ZenTypeInfoGetter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4b60964, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenTypeInfoGetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenTypeInfoGetter(ZenTypeInfoGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenTypeInfoGetter(ZenTypeInfoGetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12695 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenTypeInfoGetter, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenTypeInfoGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenTypeInfoGetter*, "Zenject", "ZenTypeInfoGetter");
