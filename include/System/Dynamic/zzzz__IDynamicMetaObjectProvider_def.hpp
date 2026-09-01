#pragma once
// IWYU pragma private; include "System\Dynamic\IDynamicMetaObjectProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDynamicMetaObjectProvider)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
// Write type traits
MARK_REF_T(::System::Dynamic::IDynamicMetaObjectProvider*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::IDynamicMetaObjectProvider*, "System.Dynamic", "IDynamicMetaObjectProvider");
// Dependencies
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.IDynamicMetaObjectProvider
class CORDL_TYPE IDynamicMetaObjectProvider {
public:
  // Declarations
  /// @brief Method GetMetaObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  // Ctor Parameters [CppParam { name: "", ty: "IDynamicMetaObjectProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamicMetaObjectProvider(IDynamicMetaObjectProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Dynamic
