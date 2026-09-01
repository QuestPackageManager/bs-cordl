#pragma once
// IWYU pragma private; include "System\Activator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Activator)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Activator;
}
// Write type traits
MARK_REF_T(::System::Activator*);
DEFINE_IL2CPP_CLASS(::System::Activator*, "System", "Activator");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Activator
class CORDL_TYPE Activator : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateInstance, addr 0x5c72858, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type);

  /// @brief Method CreateInstance, addr 0x5c72828, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args);

  /// @brief Method CreateInstance, addr 0x5c72840, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args, ::ArrayW<::System::Object*> activationAttributes);

  /// @brief Method CreateInstance, addr 0x5c71c5c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args,
                                                 ::System::Globalization::CultureInfo* culture);

  /// @brief Method CreateInstance, addr 0x5c71c64, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args,
                                                 ::System::Globalization::CultureInfo* culture, ::ArrayW<::System::Object*> activationAttributes);

  /// @brief Method CreateInstance, addr 0x5c72864, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, bool nonPublic);

  /// @brief Method CreateInstance, addr 0x5c7286c, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, bool nonPublic, bool wrapExceptions);

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CreateInstance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Activator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Activator(Activator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Activator(Activator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Activator) == 0x10, "Size mismatch!");

} // namespace System
