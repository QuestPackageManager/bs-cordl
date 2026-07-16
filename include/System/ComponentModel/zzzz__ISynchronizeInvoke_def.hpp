#pragma once
// IWYU pragma private; include "System/ComponentModel/ISynchronizeInvoke.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ISynchronizeInvoke)
namespace System {
class Delegate;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ISynchronizeInvoke*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ISynchronizeInvoke*, "System.ComponentModel", "ISynchronizeInvoke");
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ISynchronizeInvoke
class CORDL_TYPE ISynchronizeInvoke {
public:
  // Declarations
  __declspec(property(get = get_InvokeRequired)) bool InvokeRequired;

  /// @brief Method BeginInvoke, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Delegate* method, ::ArrayW<::System::Object*> args);

  /// @brief Method get_InvokeRequired, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_InvokeRequired();

  // Ctor Parameters [CppParam { name: "", ty: "ISynchronizeInvoke", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISynchronizeInvoke(ISynchronizeInvoke const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
