#pragma once
// IWYU pragma private; include "Mono/Interop/MonoPInvokeCallbackAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Mono::Interop::MonoPInvokeCallbackAttribute*);
DEFINE_IL2CPP_CLASS(::Mono::Interop::MonoPInvokeCallbackAttribute*, "Mono.Interop", "MonoPInvokeCallbackAttribute");
// Dependencies System.Attribute
namespace Mono::Interop {
// Is value type: false
// CS Name: Mono.Interop.MonoPInvokeCallbackAttribute
class CORDL_TYPE MonoPInvokeCallbackAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Mono::Interop::MonoPInvokeCallbackAttribute* New_ctor(::System::Type* t);

  /// @brief Method .ctor, addr 0x5aae2bc, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Interop::MonoPInvokeCallbackAttribute) == 0x10, "Size mismatch!");

} // namespace Mono::Interop
