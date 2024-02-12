#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenTypeInfoGetter)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Type: Zenject::ZenTypeInfoGetter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10495))
// CS Name: ::Zenject::ZenTypeInfoGetter*
class CORDL_TYPE ZenTypeInfoGetter : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Zenject::ZenTypeInfoGetter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2f3a7b8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2f3a874, size 0x14, virtual true, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* Invoke();

  /// @brief Method BeginInvoke, addr 0x2f3a888, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2f3a8a8, size 0xc, virtual true, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenTypeInfoGetter(ZenTypeInfoGetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenTypeInfoGetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenTypeInfoGetter(ZenTypeInfoGetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenTypeInfoGetter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenTypeInfoGetter, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenTypeInfoGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenTypeInfoGetter*, "Zenject", "ZenTypeInfoGetter");
