#pragma once
// IWYU pragma private; include "System\Dynamic\CreateInstanceBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CreateInstanceBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class CreateInstanceBinder;
}
// Write type traits
MARK_REF_T(::System::Dynamic::CreateInstanceBinder*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::CreateInstanceBinder*, "System.Dynamic", "CreateInstanceBinder");
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.CreateInstanceBinder
class CORDL_TYPE CreateInstanceBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x5fc2c18, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);

  /// @brief Method FallbackCreateInstance, addr 0x5fc2c08, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackCreateInstance(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);

  /// @brief Method FallbackCreateInstance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackCreateInstance(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args,
                                                                      ::System::Dynamic::DynamicMetaObject* errorSuggestion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateInstanceBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateInstanceBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateInstanceBinder(CreateInstanceBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateInstanceBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateInstanceBinder(CreateInstanceBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::CreateInstanceBinder) == 0x18, "Size mismatch!");

} // namespace System::Dynamic
