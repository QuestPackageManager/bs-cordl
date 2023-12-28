#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenInjectMethod)
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Zenject {
class ZenInjectMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenInjectMethod);
// Type: Zenject::ZenInjectMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15713))
// CS Name: ::Zenject::ZenInjectMethod*
class CORDL_TYPE ZenInjectMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Zenject::ZenInjectMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2eb9834 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2eb9964 size 0x14 virtual true final false
  inline void Invoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method BeginInvoke addr 0x2eb9978 size 0x28 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2eb99a0 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenInjectMethod(ZenInjectMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenInjectMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenInjectMethod(ZenInjectMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenInjectMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenInjectMethod, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenInjectMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
