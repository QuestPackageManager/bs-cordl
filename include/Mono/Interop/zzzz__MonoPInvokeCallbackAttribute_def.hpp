#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MonoPInvokeCallbackAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Mono::Interop {
class MonoPInvokeCallbackAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Interop::MonoPInvokeCallbackAttribute);
// Type: Mono.Interop::MonoPInvokeCallbackAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Interop {
// Is value type: false
// CS Name: ::Mono.Interop::MonoPInvokeCallbackAttribute*
class CORDL_TYPE MonoPInvokeCallbackAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Mono::Interop::MonoPInvokeCallbackAttribute* New_ctor(::System::Type* t);

  /// @brief Method .ctor, addr 0x2696180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoPInvokeCallbackAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Interop::MonoPInvokeCallbackAttribute, 0x10>, "Size mismatch!");

} // namespace Mono::Interop
NEED_NO_BOX(::Mono::Interop::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Interop::MonoPInvokeCallbackAttribute*, "Mono.Interop", "MonoPInvokeCallbackAttribute");
