#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenFactoryMethod)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ZenFactoryMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenFactoryMethod);
// Type: Zenject::ZenFactoryMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ZenFactoryMethod*
class CORDL_TYPE ZenFactoryMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x360e758, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x360e778, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x360e744, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Zenject::ZenFactoryMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x360e618, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenFactoryMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenFactoryMethod(ZenFactoryMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenFactoryMethod(ZenFactoryMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenFactoryMethod, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenFactoryMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenFactoryMethod*, "Zenject", "ZenFactoryMethod");
