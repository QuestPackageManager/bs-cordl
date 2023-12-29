#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenMemberSetterMethod)
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
class ZenMemberSetterMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenMemberSetterMethod);
// Type: Zenject::ZenMemberSetterMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15665))
// CS Name: ::Zenject::ZenMemberSetterMethod*
class CORDL_TYPE ZenMemberSetterMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Zenject::ZenMemberSetterMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d51d98 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d51ec8 size 0x14 virtual true final false
  inline void Invoke(::System::Object* obj, ::System::Object* value);

  /// @brief Method BeginInvoke addr 0x2d51edc size 0x28 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2d51f04 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenMemberSetterMethod(ZenMemberSetterMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenMemberSetterMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenMemberSetterMethod(ZenMemberSetterMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenMemberSetterMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenMemberSetterMethod, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenMemberSetterMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenMemberSetterMethod*, "Zenject", "ZenMemberSetterMethod");
